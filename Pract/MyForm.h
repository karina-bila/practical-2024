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

               private:
                System::Windows::Forms::TabControl ^ tabControl1;

               protected:
               private:
                System::Windows::Forms::TabPage ^ tabPage1;

               private:
                System::Windows::Forms::TabPage ^ tabPage2;

               private:
                System::Windows::Forms::TabPage ^ tabPage3;

               private:
                System::Windows::Forms::TextBox ^ textBox1;

               private:
                System::Windows::Forms::PictureBox ^ pictureBox1;

               private:
                System::Windows::Forms::Panel ^ panel1;

               private:
                System::Windows::Forms::Label ^ label2;

               private:
                System::Windows::Forms::Label ^ label1;

               private:
                System::Windows::Forms::Button ^ button2;

               private:
                System::Windows::Forms::Button ^ button1;

               private:
                System::Windows::Forms::Label ^ label5;

               private:
                System::Windows::Forms::TextBox ^ textBox5;

               private:
                System::Windows::Forms::TextBox ^ textBox4;

               private:
                System::Windows::Forms::TextBox ^ textBox3;

               private:
                System::Windows::Forms::TextBox ^ textBox2;

               private:
                System::Windows::Forms::Label ^ label4;

               private:
                System::Windows::Forms::Label ^ label3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
                        System::ComponentModel::ComponentResourceManager ^
                            resources =
                            (gcnew System::ComponentModel::
                                 ComponentResourceManager(MyForm::typeid));
                        this->tabControl1 =
                            (gcnew System::Windows::Forms::TabControl());
                        this->tabPage1 =
                            (gcnew System::Windows::Forms::TabPage());
                        this->textBox1 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->tabPage2 =
                            (gcnew System::Windows::Forms::TabPage());
                        this->pictureBox1 =
                            (gcnew System::Windows::Forms::PictureBox());
                        this->tabPage3 =
                            (gcnew System::Windows::Forms::TabPage());
                        this->button2 =
                            (gcnew System::Windows::Forms::Button());
                        this->button1 =
                            (gcnew System::Windows::Forms::Button());
                        this->label5 = (gcnew System::Windows::Forms::Label());
                        this->textBox5 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->panel1 = (gcnew System::Windows::Forms::Panel());
                        this->textBox4 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->textBox3 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->textBox2 =
                            (gcnew System::Windows::Forms::TextBox());
                        this->label4 = (gcnew System::Windows::Forms::Label());
                        this->label3 = (gcnew System::Windows::Forms::Label());
                        this->label2 = (gcnew System::Windows::Forms::Label());
                        this->label1 = (gcnew System::Windows::Forms::Label());
                        this->tabControl1->SuspendLayout();
                        this->tabPage1->SuspendLayout();
                        this->tabPage2->SuspendLayout();
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->pictureBox1))
                            ->BeginInit();
                        this->tabPage3->SuspendLayout();
                        this->panel1->SuspendLayout();
                        this->SuspendLayout();
                        //
                        // tabControl1
                        //
                        this->tabControl1->Controls->Add(this->tabPage1);
                        this->tabControl1->Controls->Add(this->tabPage2);
                        this->tabControl1->Controls->Add(this->tabPage3);
                        this->tabControl1->Location =
                            System::Drawing::Point(13, 13);
                        this->tabControl1->Name = L"tabControl1";
                        this->tabControl1->SelectedIndex = 0;
                        this->tabControl1->Size =
                            System::Drawing::Size(471, 379);
                        this->tabControl1->TabIndex = 0;
                        //
                        // tabPage1
                        //
                        this->tabPage1->Controls->Add(this->textBox1);
                        this->tabPage1->Location =
                            System::Drawing::Point(4, 22);
                        this->tabPage1->Name = L"tabPage1";
                        this->tabPage1->Padding =
                            System::Windows::Forms::Padding(3);
                        this->tabPage1->Size = System::Drawing::Size(463, 353);
                        this->tabPage1->TabIndex = 0;
                        this->tabPage1->Text = L"Умова";
                        this->tabPage1->UseVisualStyleBackColor = true;
                        //
                        // textBox1
                        //
                        this->textBox1->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox1->Location = System::Drawing::Point(7, 7);
                        this->textBox1->Multiline = true;
                        this->textBox1->Name = L"textBox1";
                        this->textBox1->Size = System::Drawing::Size(439, 194);
                        this->textBox1->TabIndex = 0;
                        this->textBox1->Text =
                            L"Дано сторони трикутника – a, b, c.\r\nЗнайти "
                            L"значення площі трикутника.";
                        //
                        // tabPage2
                        //
                        this->tabPage2->Controls->Add(this->pictureBox1);
                        this->tabPage2->Location =
                            System::Drawing::Point(4, 22);
                        this->tabPage2->Name = L"tabPage2";
                        this->tabPage2->Padding =
                            System::Windows::Forms::Padding(3);
                        this->tabPage2->Size = System::Drawing::Size(463, 353);
                        this->tabPage2->TabIndex = 1;
                        this->tabPage2->Text = L"Алгоритм";
                        this->tabPage2->UseVisualStyleBackColor = true;
                        //
                        // pictureBox1
                        //
                        this->pictureBox1->Image =
                            (cli::safe_cast<System::Drawing::Image ^>(
                                resources->GetObject(L"pictureBox1.Image")));
                        this->pictureBox1->InitialImage =
                            (cli::safe_cast<System::Drawing::Image ^>(
                                resources->GetObject(
                                    L"pictureBox1.InitialImage")));
                        this->pictureBox1->Location =
                            System::Drawing::Point(99, 6);
                        this->pictureBox1->Name = L"pictureBox1";
                        this->pictureBox1->Size =
                            System::Drawing::Size(257, 341);
                        this->pictureBox1->SizeMode = System::Windows::Forms::
                            PictureBoxSizeMode::StretchImage;
                        this->pictureBox1->TabIndex = 0;
                        this->pictureBox1->TabStop = false;
                        this->pictureBox1->WaitOnLoad = true;
                        this->pictureBox1->Click += gcnew System::EventHandler(
                            this, &MyForm::pictureBox1_Click);
                        //
                        // tabPage3
                        //
                        this->tabPage3->Controls->Add(this->button2);
                        this->tabPage3->Controls->Add(this->button1);
                        this->tabPage3->Controls->Add(this->label5);
                        this->tabPage3->Controls->Add(this->textBox5);
                        this->tabPage3->Controls->Add(this->panel1);
                        this->tabPage3->Controls->Add(this->label1);
                        this->tabPage3->Location =
                            System::Drawing::Point(4, 22);
                        this->tabPage3->Name = L"tabPage3";
                        this->tabPage3->Size = System::Drawing::Size(463, 353);
                        this->tabPage3->TabIndex = 2;
                        this->tabPage3->Text = L"Розв\'язання";
                        this->tabPage3->UseVisualStyleBackColor = true;
                        //
                        // button2
                        //
                        this->button2->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->button2->Location =
                            System::Drawing::Point(305, 240);
                        this->button2->Name = L"button2";
                        this->button2->Size = System::Drawing::Size(127, 39);
                        this->button2->TabIndex = 10;
                        this->button2->Text = L"Очистити";
                        this->button2->UseVisualStyleBackColor = true;
                        this->button2->Click += gcnew System::EventHandler(
                            this, &MyForm::button2_Click);
                        //
                        // button1
                        //
                        this->button1->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->button1->Location =
                            System::Drawing::Point(52, 240);
                        this->button1->Name = L"button1";
                        this->button1->Size = System::Drawing::Size(127, 39);
                        this->button1->TabIndex = 9;
                        this->button1->Text = L"Обчислити";
                        this->button1->UseVisualStyleBackColor = true;
                        this->button1->Click += gcnew System::EventHandler(
                            this, &MyForm::button1_Click);
                        //
                        // label5
                        //
                        this->label5->AutoSize = true;
                        this->label5->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(0)));
                        this->label5->Location =
                            System::Drawing::Point(100, 306);
                        this->label5->Name = L"label5";
                        this->label5->Size = System::Drawing::Size(122, 22);
                        this->label5->TabIndex = 8;
                        this->label5->Text = L"Результат S =";
                        //
                        // textBox5
                        //
                        this->textBox5->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox5->Location =
                            System::Drawing::Point(234, 298);
                        this->textBox5->Name = L"textBox5";
                        this->textBox5->Size = System::Drawing::Size(100, 30);
                        this->textBox5->TabIndex = 8;
                        //
                        // panel1
                        //
                        this->panel1->BorderStyle =
                            System::Windows::Forms::BorderStyle::Fixed3D;
                        this->panel1->Controls->Add(this->textBox4);
                        this->panel1->Controls->Add(this->textBox3);
                        this->panel1->Controls->Add(this->textBox2);
                        this->panel1->Controls->Add(this->label4);
                        this->panel1->Controls->Add(this->label3);
                        this->panel1->Controls->Add(this->label2);
                        this->panel1->Location = System::Drawing::Point(28, 44);
                        this->panel1->Name = L"panel1";
                        this->panel1->Size = System::Drawing::Size(404, 171);
                        this->panel1->TabIndex = 1;
                        //
                        // textBox4
                        //
                        this->textBox4->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox4->Location =
                            System::Drawing::Point(92, 103);
                        this->textBox4->Name = L"textBox4";
                        this->textBox4->Size = System::Drawing::Size(100, 30);
                        this->textBox4->TabIndex = 7;
                        //
                        // textBox3
                        //
                        this->textBox3->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox3->Location =
                            System::Drawing::Point(92, 67);
                        this->textBox3->Name = L"textBox3";
                        this->textBox3->Size = System::Drawing::Size(100, 30);
                        this->textBox3->TabIndex = 6;
                        //
                        // textBox2
                        //
                        this->textBox2->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->textBox2->Location =
                            System::Drawing::Point(92, 31);
                        this->textBox2->Name = L"textBox2";
                        this->textBox2->Size = System::Drawing::Size(100, 30);
                        this->textBox2->TabIndex = 5;
                        //
                        // label4
                        //
                        this->label4->AutoSize = true;
                        this->label4->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(0)));
                        this->label4->Location =
                            System::Drawing::Point(37, 110);
                        this->label4->Name = L"label4";
                        this->label4->Size = System::Drawing::Size(35, 22);
                        this->label4->TabIndex = 4;
                        this->label4->Text = L"c =";
                        //
                        // label3
                        //
                        this->label3->AutoSize = true;
                        this->label3->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(0)));
                        this->label3->Location = System::Drawing::Point(37, 72);
                        this->label3->Name = L"label3";
                        this->label3->Size = System::Drawing::Size(36, 22);
                        this->label3->TabIndex = 3;
                        this->label3->Text = L"b =";
                        //
                        // label2
                        //
                        this->label2->AutoSize = true;
                        this->label2->Font = (gcnew System::Drawing::Font(
                            L"Times New Roman", 15,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(0)));
                        this->label2->Location = System::Drawing::Point(37, 34);
                        this->label2->Name = L"label2";
                        this->label2->Size = System::Drawing::Size(35, 22);
                        this->label2->TabIndex = 2;
                        this->label2->Text = L"a =";
                        //
                        // label1
                        //
                        this->label1->AutoSize = true;
                        this->label1->Font = (gcnew System::Drawing::Font(
                            L"Microsoft Sans Serif", 10,
                            System::Drawing::FontStyle::Regular,
                            System::Drawing::GraphicsUnit::Point,
                            static_cast<System::Byte>(204)));
                        this->label1->Location =
                            System::Drawing::Point(153, 13);
                        this->label1->Name = L"label1";
                        this->label1->Size = System::Drawing::Size(194, 17);
                        this->label1->TabIndex = 0;
                        this->label1->Text = L"Введіть сторони трикутника";
                        //
                        // MyForm
                        //
                        this->AutoScaleDimensions =
                            System::Drawing::SizeF(6, 13);
                        this->AutoScaleMode =
                            System::Windows::Forms::AutoScaleMode::Font;
                        this->ClientSize = System::Drawing::Size(496, 404);
                        this->Controls->Add(this->tabControl1);
                        this->Name = L"MyForm";
                        this->StartPosition = System::Windows::Forms::
                            FormStartPosition::CenterScreen;
                        this->Text = L"MyForm";
                        this->FormClosing += gcnew
                            System::Windows::Forms::FormClosingEventHandler(
                                this, &MyForm::MyForm_FormClosing);
                        this->tabControl1->ResumeLayout(false);
                        this->tabPage1->ResumeLayout(false);
                        this->tabPage1->PerformLayout();
                        this->tabPage2->ResumeLayout(false);
                        (cli::safe_cast<
                             System::ComponentModel::ISupportInitialize ^>(
                             this->pictureBox1))
                            ->EndInit();
                        this->tabPage3->ResumeLayout(false);
                        this->tabPage3->PerformLayout();
                        this->panel1->ResumeLayout(false);
                        this->panel1->PerformLayout();
                        this->ResumeLayout(false);
                }
#pragma endregion
               private:
                System::Void pictureBox1_Click(System::Object ^ sender,
                                               System::EventArgs ^ e) {}

               private:
                System::Void button1_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {
                    double a, b, c, p, S;
                    a = Convert::ToDouble(textBox2->Text);
                    b = Convert::ToDouble(textBox3->Text);
                    c = Convert::ToDouble(textBox4->Text);
                    p = (a + b + c) / 2;
                    S = Math::Sqrt(p * (p - a) * (p - b) * (p - c));
                    textBox5->Text = Convert::ToString(S);
                }

               private:
                System::Void button2_Click(System::Object ^ sender,
                                           System::EventArgs ^ e) {
                    textBox2->Clear();
                    textBox3->Clear();
                    textBox4->Clear();
                    textBox5->Clear();
                    textBox2->Focus();
                }


               private:
                System::Void MyForm_FormClosing(
                    System::Object ^ sender,
                    System::Windows::Forms::FormClosingEventArgs ^ e) {
                    System::Windows::Forms::DialogResult result =
                    MessageBox::Show("Закрити програму?", "Закрити програму",
                                     MessageBoxButtons::YesNoCancel,
                                     MessageBoxIcon::Information);
                    if (result != System::Windows::Forms::DialogResult::Cancel) {
                            if (MessageBox::Show(
                                        "Закрити вікно?", "Вікно буде закрито",
                                        MessageBoxButtons::YesNo,
                                        MessageBoxIcon::Question) ==
                                    System::Windows::Forms::DialogResult::Yes) {
                                  Application::ExitThread();
                            } else {
                                e->Cancel = true;
                            }
                    } else {
                        e->Cancel = true;
                    }
                }
         };
         }
