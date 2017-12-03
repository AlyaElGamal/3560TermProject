#pragma once

namespace Project1 {

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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TabControl^  Switch;


	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->Switch = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Switch->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(192, 510);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(309, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SOLVE!";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 157);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(6, 228);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(6, 189);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 26);
			this->textBox4->TabIndex = 4;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(111, 61);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 26);
			this->textBox5->TabIndex = 5;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(111, 93);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 26);
			this->textBox6->TabIndex = 6;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(6, 61);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 26);
			this->textBox7->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(6, 125);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 26);
			this->textBox9->TabIndex = 9;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(111, 157);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 26);
			this->textBox10->TabIndex = 10;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(111, 190);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 26);
			this->textBox11->TabIndex = 11;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(111, 125);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(100, 26);
			this->textBox14->TabIndex = 14;
			// 
			// Switch
			// 
			this->Switch->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->Switch->Controls->Add(this->tabPage1);
			this->Switch->Controls->Add(this->tabPage2);
			this->Switch->Location = System::Drawing::Point(432, 12);
			this->Switch->Name = L"Switch";
			this->Switch->SelectedIndex = 0;
			this->Switch->Size = System::Drawing::Size(227, 304);
			this->Switch->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox11);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox10);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 32);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(219, 268);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Coordinate";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(115, 26);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(96, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Y-componet";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"X-componet";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::LightGray;
			this->tabPage2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tabPage2->Location = System::Drawing::Point(4, 32);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(219, 268);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Polar";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(111, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 23);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Angle";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 23);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Magnitude";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(111, 62);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(101, 30);
			this->textBox8->TabIndex = 19;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(6, 61);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 30);
			this->textBox12->TabIndex = 21;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(111, 125);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 30);
			this->textBox13->TabIndex = 25;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(5, 93);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 30);
			this->textBox15->TabIndex = 16;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(112, 190);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(100, 30);
			this->textBox16->TabIndex = 24;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(6, 228);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 30);
			this->textBox17->TabIndex = 17;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(111, 93);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 30);
			this->textBox18->TabIndex = 20;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(111, 157);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 30);
			this->textBox19->TabIndex = 23;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(6, 189);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 30);
			this->textBox20->TabIndex = 18;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(6, 125);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 30);
			this->textBox21->TabIndex = 22;
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(6, 157);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 30);
			this->textBox22->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Initial Position";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label2->Location = System::Drawing::Point(12, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 39);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Final Position";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14));
			this->label3->Location = System::Drawing::Point(12, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 39);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Initial Velocity";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(191, 39);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Final Velocity";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(182, 39);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Acceleration";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 257);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(80, 39);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Time";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(721, 594);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Switch);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Name = L"MyForm";
			this->Text = L"Projectile Motion";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Switch->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
