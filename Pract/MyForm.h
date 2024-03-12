#pragma once

namespace Pract {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 12);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(224, 360);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(24, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 37);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(24, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 37);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Середнє арифметичне";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(24, 481);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 58);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Середнє арифметичне парних елементів";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(251, 567);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(Microsoft::VisualBasic::Interaction::InputBox("Введіть кількість елементів масиву", "Кількість елементів", "0", -1, -1));
		if (n > 0) {
			richTextBox1->Text = "";

			array<int>^ arr = gcnew array<int>(n);
			Random^ r = gcnew Random();
			for (int i = 0; i < n; i++) {
				arr[i] = r->Next(-50, 50);
			}

			for (int i = 0; i < n; i++) {
				richTextBox1->Text += arr[i] + "\n";
			}
		}
		else {
			MessageBox::Show("Введіть коректне значення");
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = richTextBox1->Text;
		array<String^>^ lines = text->Split('\n');
		array<int>^ arr = gcnew array<int>(lines->Length - 1);
		for (int i = 0; i < lines->Length - 1; i++) {
			arr[i] = Convert::ToInt32(lines[i]);
		}
		double sum = 0;
		for (int i = 0; i < arr->Length; i++) {
			sum += arr[i];
		}
		double mean = sum / arr->Length;
		MessageBox::Show("Середнє арифметичне: " + mean);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = richTextBox1->Text;
		array<String^>^ lines = text->Split('\n');
		array<int>^ arr = gcnew array<int>(lines->Length - 1);
		for (int i = 0; i < lines->Length - 1; i++) {
			arr[i] = Convert::ToInt32(lines[i]);
		}
		double sum = 0;
		int count = 0;
		for (int i = 0; i < arr->Length; i++) {
			if (arr[i] % 2 == 0) {
				sum += arr[i];
				count++;
			}
		}
		double mean = sum / count;
		MessageBox::Show("Середнє арифметичне парних елементів: " + mean);
	}
	};
}
