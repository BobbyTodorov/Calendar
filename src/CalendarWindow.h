#pragma once
#include "CalendarGenerator.h"
#include <string>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

namespace Calendar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	public ref class CalendarWindow : public System::Windows::Forms::Form {
	public:
		CalendarWindow(void) {
			InitializeComponent();
		}
	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::Panel^ yearPanel;
		System::Windows::Forms::Label^ yearLabel;
		System::Windows::Forms::RichTextBox^ janTextBox;
		System::Windows::Forms::Panel^ panel1;
		System::Windows::Forms::Label^ label3;
		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Panel^ panel12;
		System::Windows::Forms::Label^ label24;
		System::Windows::Forms::Label^ label25;
		System::Windows::Forms::RichTextBox^ decTextBox;
		System::Windows::Forms::Panel^ panel11;
		System::Windows::Forms::Label^ label22;
		System::Windows::Forms::Label^ label23;
		System::Windows::Forms::RichTextBox^ novTextBox;
		System::Windows::Forms::Panel^ panel10;
		System::Windows::Forms::Label^ label20;
		System::Windows::Forms::Label^ label21;
		System::Windows::Forms::RichTextBox^ octTextBox;
		System::Windows::Forms::Panel^ panel9;
		System::Windows::Forms::Label^ label18;
		System::Windows::Forms::Label^ label19;
		System::Windows::Forms::RichTextBox^ septTextBox;
		System::Windows::Forms::Panel^ panel8;
		System::Windows::Forms::Label^ label16;
		System::Windows::Forms::Label^ label17;
		System::Windows::Forms::RichTextBox^ augTextBox;
		System::Windows::Forms::Panel^ panel7;
		System::Windows::Forms::Label^ label14;
		System::Windows::Forms::Label^ label15;
		System::Windows::Forms::RichTextBox^ julyTextBox;
		System::Windows::Forms::Panel^ panel6;
		System::Windows::Forms::Label^ label12;
		System::Windows::Forms::Label^ label13;
		System::Windows::Forms::RichTextBox^ juneTextBox;
		System::Windows::Forms::Panel^ panel5;
		System::Windows::Forms::Label^ label10;
		System::Windows::Forms::Label^ label11;
		System::Windows::Forms::RichTextBox^ mayTextBox;
		System::Windows::Forms::Panel^ panel4;
		System::Windows::Forms::Label^ label8;
		System::Windows::Forms::Label^ label9;
		System::Windows::Forms::RichTextBox^ aprilTextBox;
		System::Windows::Forms::Panel^ panel3;
		System::Windows::Forms::Label^ label6;
		System::Windows::Forms::Label^ label7;
		System::Windows::Forms::RichTextBox^ marchTextBox;
		System::Windows::Forms::Panel^ panel2;
		System::Windows::Forms::Label^ label4;
		System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label27;

		   System::Windows::Forms::RichTextBox^ febTextBox;

	protected:
		~CalendarWindow() {
			if (components) {
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
		System::ComponentModel::Container^ components;

		CalendarGenerator* cg;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->yearPanel = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->decTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->novTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->octTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->septTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->augTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->julyTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->juneTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->mayTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->aprilTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->marchTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->febTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->janTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->yearLabel = (gcnew System::Windows::Forms::Label());
			this->yearPanel->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(573, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter a year:";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(593, 465);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"GENERATE";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CalendarWindow::button1_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maskedTextBox1->Location = System::Drawing::Point(593, 432);
			this->maskedTextBox1->Mask = L"0000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PromptChar = ' ';
			this->maskedTextBox1->Size = System::Drawing::Size(100, 27);
			this->maskedTextBox1->TabIndex = 4;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			this->maskedTextBox1->TextChanged += gcnew System::EventHandler(this, &CalendarWindow::maskedTextBox1_TextChanged);
			// 
			// yearPanel
			// 
			this->yearPanel->BackColor = System::Drawing::SystemColors::Window;
			this->yearPanel->Controls->Add(this->label27);
			this->yearPanel->Controls->Add(this->panel12);
			this->yearPanel->Controls->Add(this->panel11);
			this->yearPanel->Controls->Add(this->panel10);
			this->yearPanel->Controls->Add(this->panel9);
			this->yearPanel->Controls->Add(this->panel8);
			this->yearPanel->Controls->Add(this->panel7);
			this->yearPanel->Controls->Add(this->panel6);
			this->yearPanel->Controls->Add(this->panel5);
			this->yearPanel->Controls->Add(this->panel4);
			this->yearPanel->Controls->Add(this->panel3);
			this->yearPanel->Controls->Add(this->panel2);
			this->yearPanel->Controls->Add(this->panel1);
			this->yearPanel->Controls->Add(this->yearLabel);
			this->yearPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->yearPanel->Location = System::Drawing::Point(0, 0);
			this->yearPanel->Name = L"yearPanel";
			this->yearPanel->Size = System::Drawing::Size(1276, 1054);
			this->yearPanel->TabIndex = 5;
			this->yearPanel->Visible = false;
			this->yearPanel->VisibleChanged += gcnew System::EventHandler(this, &CalendarWindow::yearPanel_VisibleChanged);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(604, 970);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 17);
			this->label27->TabIndex = 9;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->label24);
			this->panel12->Controls->Add(this->label25);
			this->panel12->Controls->Add(this->decTextBox);
			this->panel12->Location = System::Drawing::Point(935, 682);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(299, 261);
			this->panel12->TabIndex = 8;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(26, 38);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(228, 17);
			this->label24->TabIndex = 3;
			this->label24->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(88, 10);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(103, 19);
			this->label25->TabIndex = 2;
			this->label25->Text = L"DECEMBER";
			// 
			// decTextBox
			// 
			this->decTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->decTextBox->Location = System::Drawing::Point(12, 68);
			this->decTextBox->Name = L"decTextBox";
			this->decTextBox->Size = System::Drawing::Size(270, 172);
			this->decTextBox->TabIndex = 1;
			this->decTextBox->Text = L"";
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->label22);
			this->panel11->Controls->Add(this->label23);
			this->panel11->Controls->Add(this->novTextBox);
			this->panel11->Location = System::Drawing::Point(630, 682);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(299, 261);
			this->panel11->TabIndex = 7;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(26, 38);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(228, 17);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(88, 10);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(104, 19);
			this->label23->TabIndex = 2;
			this->label23->Text = L"NOVEMBER";
			// 
			// novTextBox
			// 
			this->novTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->novTextBox->Location = System::Drawing::Point(12, 68);
			this->novTextBox->Name = L"novTextBox";
			this->novTextBox->Size = System::Drawing::Size(270, 172);
			this->novTextBox->TabIndex = 1;
			this->novTextBox->Text = L"";
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->label20);
			this->panel10->Controls->Add(this->label21);
			this->panel10->Controls->Add(this->octTextBox);
			this->panel10->Location = System::Drawing::Point(325, 682);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(299, 261);
			this->panel10->TabIndex = 6;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(26, 38);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(228, 17);
			this->label20->TabIndex = 3;
			this->label20->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(98, 10);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(92, 19);
			this->label21->TabIndex = 2;
			this->label21->Text = L"OCTOBER";
			// 
			// octTextBox
			// 
			this->octTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->octTextBox->Location = System::Drawing::Point(12, 68);
			this->octTextBox->Name = L"octTextBox";
			this->octTextBox->Size = System::Drawing::Size(270, 172);
			this->octTextBox->TabIndex = 1;
			this->octTextBox->Text = L"";
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->label18);
			this->panel9->Controls->Add(this->label19);
			this->panel9->Controls->Add(this->septTextBox);
			this->panel9->Location = System::Drawing::Point(20, 682);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(299, 261);
			this->panel9->TabIndex = 5;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(26, 38);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(228, 17);
			this->label18->TabIndex = 3;
			this->label18->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(87, 10);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(111, 19);
			this->label19->TabIndex = 2;
			this->label19->Text = L"SEPTEMBER";
			// 
			// septTextBox
			// 
			this->septTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->septTextBox->Location = System::Drawing::Point(12, 68);
			this->septTextBox->Name = L"septTextBox";
			this->septTextBox->Size = System::Drawing::Size(270, 172);
			this->septTextBox->TabIndex = 1;
			this->septTextBox->Text = L"";
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->label16);
			this->panel8->Controls->Add(this->label17);
			this->panel8->Controls->Add(this->augTextBox);
			this->panel8->Location = System::Drawing::Point(935, 415);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(299, 261);
			this->panel8->TabIndex = 7;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(26, 38);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(228, 17);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(99, 10);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(78, 19);
			this->label17->TabIndex = 2;
			this->label17->Text = L"AUGUST";
			// 
			// augTextBox
			// 
			this->augTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->augTextBox->Location = System::Drawing::Point(12, 68);
			this->augTextBox->Name = L"augTextBox";
			this->augTextBox->Size = System::Drawing::Size(270, 172);
			this->augTextBox->TabIndex = 1;
			this->augTextBox->Text = L"";
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->julyTextBox);
			this->panel7->Location = System::Drawing::Point(630, 415);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(299, 261);
			this->panel7->TabIndex = 6;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(26, 38);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(228, 17);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(120, 10);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 19);
			this->label15->TabIndex = 2;
			this->label15->Text = L"JULY";
			// 
			// julyTextBox
			// 
			this->julyTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->julyTextBox->Location = System::Drawing::Point(12, 68);
			this->julyTextBox->Name = L"julyTextBox";
			this->julyTextBox->Size = System::Drawing::Size(270, 172);
			this->julyTextBox->TabIndex = 1;
			this->julyTextBox->Text = L"";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label13);
			this->panel6->Controls->Add(this->juneTextBox);
			this->panel6->Location = System::Drawing::Point(325, 415);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(299, 261);
			this->panel6->TabIndex = 5;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(26, 38);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(228, 17);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(120, 10);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 19);
			this->label13->TabIndex = 2;
			this->label13->Text = L"JUNE";
			// 
			// juneTextBox
			// 
			this->juneTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->juneTextBox->Location = System::Drawing::Point(12, 68);
			this->juneTextBox->Name = L"juneTextBox";
			this->juneTextBox->Size = System::Drawing::Size(270, 172);
			this->juneTextBox->TabIndex = 1;
			this->juneTextBox->Text = L"";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label10);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->mayTextBox);
			this->panel5->Location = System::Drawing::Point(20, 415);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(299, 261);
			this->panel5->TabIndex = 4;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(26, 38);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(228, 17);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(126, 10);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 19);
			this->label11->TabIndex = 2;
			this->label11->Text = L"MAY";
			// 
			// mayTextBox
			// 
			this->mayTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mayTextBox->Location = System::Drawing::Point(12, 68);
			this->mayTextBox->Name = L"mayTextBox";
			this->mayTextBox->Size = System::Drawing::Size(270, 172);
			this->mayTextBox->TabIndex = 1;
			this->mayTextBox->Text = L"";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Controls->Add(this->aprilTextBox);
			this->panel4->Location = System::Drawing::Point(935, 148);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(299, 261);
			this->panel4->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 38);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(228, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(120, 11);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 19);
			this->label9->TabIndex = 2;
			this->label9->Text = L"APRIL";
			// 
			// aprilTextBox
			// 
			this->aprilTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->aprilTextBox->Location = System::Drawing::Point(12, 68);
			this->aprilTextBox->Name = L"aprilTextBox";
			this->aprilTextBox->Size = System::Drawing::Size(270, 172);
			this->aprilTextBox->TabIndex = 1;
			this->aprilTextBox->Text = L"";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->marchTextBox);
			this->panel3->Location = System::Drawing::Point(630, 148);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(299, 261);
			this->panel3->TabIndex = 5;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 38);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(228, 17);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(114, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(69, 19);
			this->label7->TabIndex = 2;
			this->label7->Text = L"MARCH";
			// 
			// marchTextBox
			// 
			this->marchTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->marchTextBox->Location = System::Drawing::Point(12, 68);
			this->marchTextBox->Name = L"marchTextBox";
			this->marchTextBox->Size = System::Drawing::Size(270, 172);
			this->marchTextBox->TabIndex = 1;
			this->marchTextBox->Text = L"";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->febTextBox);
			this->panel2->Location = System::Drawing::Point(325, 148);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(299, 261);
			this->panel2->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(228, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(92, 11);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 19);
			this->label5->TabIndex = 2;
			this->label5->Text = L"FEBRUARY";
			// 
			// febTextBox
			// 
			this->febTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->febTextBox->Location = System::Drawing::Point(12, 68);
			this->febTextBox->Name = L"febTextBox";
			this->febTextBox->Size = System::Drawing::Size(270, 172);
			this->febTextBox->TabIndex = 1;
			this->febTextBox->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->janTextBox);
			this->panel1->Location = System::Drawing::Point(20, 148);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(299, 261);
			this->panel1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(228, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Sun  Mon  Tue  Wed  Thu  Fri  Sat";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(97, 11);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"JANUARY";
			// 
			// janTextBox
			// 
			this->janTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->janTextBox->Location = System::Drawing::Point(12, 68);
			this->janTextBox->Name = L"janTextBox";
			this->janTextBox->Size = System::Drawing::Size(270, 172);
			this->janTextBox->TabIndex = 1;
			this->janTextBox->Text = L"";
			// 
			// yearLabel
			// 
			this->yearLabel->AutoSize = true;
			this->yearLabel->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearLabel->Location = System::Drawing::Point(506, 19);
			this->yearLabel->Name = L"yearLabel";
			this->yearLabel->Size = System::Drawing::Size(252, 93);
			this->yearLabel->TabIndex = 0;
			this->yearLabel->Text = L"XXXX";
			this->yearLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CalendarWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1276, 1054);
			this->Controls->Add(this->yearPanel);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"CalendarWindow";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calendar";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CalendarWindow::CalendarWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CalendarWindow::CalendarWindow_Load);
			this->yearPanel->ResumeLayout(false);
			this->yearPanel->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalendarWindow_Load(System::Object^ sender, System::EventArgs^ e) {
		cg = new CalendarGenerator();
	}

	private: System::Void maskedTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (maskedTextBox1->Text != "") {
			button1->Enabled = true;
		}
		else {
			button1->Enabled = false;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		yearPanel->Visible = true;
	}
	private: System::Void yearPanel_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		yearLabel->Text = maskedTextBox1->Text;
		std::string yearString = marshal_as<std::string>(maskedTextBox1->Text); // System::String^ -> std::string
		int year = stoi(yearString);

		std::string* monthsArray = cg->generateCalendarString(year);

		janTextBox->Text = marshal_as<System::String^>(monthsArray[0]);
		febTextBox->Text = marshal_as<System::String^>(monthsArray[1]);
		marchTextBox->Text = marshal_as<System::String^>(monthsArray[2]);
		aprilTextBox->Text = marshal_as<System::String^>(monthsArray[3]);
		mayTextBox->Text = marshal_as<System::String^>(monthsArray[4]);
		juneTextBox->Text = marshal_as<System::String^>(monthsArray[5]);
		julyTextBox->Text = marshal_as<System::String^>(monthsArray[6]);
		augTextBox->Text = marshal_as<System::String^>(monthsArray[7]);
		septTextBox->Text = marshal_as<System::String^>(monthsArray[8]);
		octTextBox->Text = marshal_as<System::String^>(monthsArray[9]);
		novTextBox->Text = marshal_as<System::String^>(monthsArray[10]);
		decTextBox->Text = marshal_as<System::String^>(monthsArray[11]);
	}
	private: System::Void CalendarWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		delete cg;
	}
};
}
