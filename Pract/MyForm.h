#pragma once
#include <math.h>;
#include <string>;

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

	private:
		System::Windows::Forms::ComboBox^ comboBox1;

	private:
		System::Windows::Forms::Label^ label1;

	private:
		System::Windows::Forms::TextBox^ textBox1;

	private:
		System::Windows::Forms::TextBox^ textBox2;

	private:
		System::Windows::Forms::TextBox^ textBox3;

	private:
		System::Windows::Forms::Label^ label2;

	private:
		System::Windows::Forms::Label^ label3;

	private:
		System::Windows::Forms::Label^ label4;

	private:
		System::Windows::Forms::Button^ button1;

	private:
		System::Windows::Forms::Button^ button2;

	private:
		System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private:
		System::Windows::Forms::ToolStripMenuItem^ ÿToolStripMenuItem;

	private:
		System::Windows::Forms::TextBox^ textBox4;


	private:
		System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->ÿToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"m", L"b", L"h" });
			this->comboBox1->Location = System::Drawing::Point(324, 22);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(59, 32);
			this->comboBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(294, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Îáåðè â³äð³çîê äëÿ îá÷èñëåííÿ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(96, 71);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(96, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(96, 173);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 29);
			this->textBox3->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(34, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"a =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(33, 126);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"b =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(34, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 22);
			this->label4->TabIndex = 7;
			this->label4->Text = L"c =";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(77, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(119, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Îá÷èñëèòè";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(324, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 39);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Î÷èñòèòè";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ÿToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(81, 26);
			// 
			// ÿToolStripMenuItem
			// 
			this->ÿToolStripMenuItem->Name = L"ÿToolStripMenuItem";
			this->ÿToolStripMenuItem->Size = System::Drawing::Size(80, 22);
			this->ÿToolStripMenuItem->Text = L"ÿ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(261, 71);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(229, 160);
			this->textBox4->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 362);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Êàëüêóëÿòîð â³äð³çê³â";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object^ sender,
			System::EventArgs^ e) {
			double a, b, c, p, l;
			std::string method;


			//ïåðåâ³ðêà íà îáðàííÿ â³äð³çêà äëÿ îá÷èñëåííÿ
			if (comboBox1->Text == "") {
				MessageBox::Show("Îáåð³òü â³äð³çîê äëÿ îá÷èñëåííÿ!");
				return;
			}

			//ïåðåâ³ðêà íà ââåäåííÿ çíà÷åíü â³äð³çê³â
			if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "") {
				MessageBox::Show("Ââåä³òü çíà÷åííÿ â³äð³çê³â!");
				return;
			}

			//ïåðåâ³ðêà íà ââåäåííÿ ÷èñëîâèõ çíà÷åíü
			if (!Double::TryParse(textBox1->Text, a) || !Double::TryParse(textBox2->Text, b) || !Double::TryParse(textBox3->Text, c)) {
				MessageBox::Show("Ââåä³òü ÷èñëîâ³ çíà÷åííÿ!");
				return;
			}


			switch
				(comboBox1->SelectedIndex) {
			case 0:
				method = "1/2 * sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2))";
				l = (1.0 / 2) * sqrt(2 * (pow(b, 2) + pow(c, 2)) - pow(a, 2));
				break;
			case 1:
				method = "sqrt(b * c * (pow(b + c, 2)) - pow(a, 2)) / (b + c)";
				l = sqrt(b * c * (pow(b + c, 2)) - pow(a, 2)) / (b + c);
				break;
			case 2:
				p = (a + b + c) / 2;
				method = "2 / c * sqrt(p * (p - a) * (p - b) * (p - c))";
				l = (2.0 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
				break;
			default:
				return;
			}

			textBox4->Text = "Ìåòîä îá÷èñëåííÿ: " + comboBox1->Text + "\r\n" + "Ôîðìóëà: "
				+ gcnew String(method.c_str()) + "\r\n" + "Ðåçóëüòàò: " + l.ToString();

		}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		comboBox1->Text = "";
	}
	};
}
