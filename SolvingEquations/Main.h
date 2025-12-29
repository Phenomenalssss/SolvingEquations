#pragma once
#include <iostream>
#include <limits>
#include <string>
#include <cmath>
#include <complex>
#include "BisectionForm.h"
#include <vector>

namespace MainForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			originalFormSize = this->Size;
			controlsInfo = gcnew System::Collections::Generic::Dictionary<System::Windows::Forms::Control^, ControlInfo^>();
			SaveControlsInfo(this);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	public:	ref struct ControlInfo
	{
		System::Drawing::Rectangle Bounds;
		System::Drawing::Font^ Font;
	};

	private:
		System::Drawing::Size originalFormSize;
		System::Collections::Generic::Dictionary<System::Windows::Forms::Control^, ControlInfo^>^ controlsInfo;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ Degree;
	private: System::Windows::Forms::Label^ TextSolution;


	private: System::Windows::Forms::Label^ TextX;

	private: System::Windows::Forms::Label^ TextX5;
	private: System::Windows::Forms::Label^ TextX2;




	private: System::Windows::Forms::Label^ TextX4;
	private: System::Windows::Forms::Label^ TextX3;
	private: System::Windows::Forms::TextBox^ ValueX5;
	private: System::Windows::Forms::TextBox^ ValueX4;
	private: System::Windows::Forms::TextBox^ ValueX2;







	private: System::Windows::Forms::TextBox^ ValueX3;
	private: System::Windows::Forms::TextBox^ ValueX;
	private: System::Windows::Forms::TextBox^ ValueC;
	private: System::Windows::Forms::Label^ EqualZero;




	private: System::Windows::Forms::Label^ plusbeforeX4;

	private: System::Windows::Forms::Label^ plusbeforeX3;


	private: System::Windows::Forms::Label^ plusbeforeX2;


	private: System::Windows::Forms::Label^ plusbeforeX1;


	private: System::Windows::Forms::Label^ plusbeforeC;
	private: System::Windows::Forms::Label^ minusbeforeX5;
	private: System::Windows::Forms::Button^ FindRezult;

	private: System::Windows::Forms::TextBox^ textBoxRezult;
	private: System::Windows::Forms::Button^ ClearAllValues;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ MainChart;
	private: System::Windows::Forms::TextBox^ ToChart;


	private: System::Windows::Forms::Button^ PaintChart;
	private: System::Windows::Forms::TextBox^ FromChart;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;









	protected:

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Degree = (gcnew System::Windows::Forms::NumericUpDown());
			this->TextSolution = (gcnew System::Windows::Forms::Label());
			this->TextX = (gcnew System::Windows::Forms::Label());
			this->TextX5 = (gcnew System::Windows::Forms::Label());
			this->TextX2 = (gcnew System::Windows::Forms::Label());
			this->TextX4 = (gcnew System::Windows::Forms::Label());
			this->TextX3 = (gcnew System::Windows::Forms::Label());
			this->ValueX5 = (gcnew System::Windows::Forms::TextBox());
			this->ValueX4 = (gcnew System::Windows::Forms::TextBox());
			this->ValueX2 = (gcnew System::Windows::Forms::TextBox());
			this->ValueX3 = (gcnew System::Windows::Forms::TextBox());
			this->ValueX = (gcnew System::Windows::Forms::TextBox());
			this->ValueC = (gcnew System::Windows::Forms::TextBox());
			this->EqualZero = (gcnew System::Windows::Forms::Label());
			this->plusbeforeX4 = (gcnew System::Windows::Forms::Label());
			this->plusbeforeX3 = (gcnew System::Windows::Forms::Label());
			this->plusbeforeX2 = (gcnew System::Windows::Forms::Label());
			this->plusbeforeX1 = (gcnew System::Windows::Forms::Label());
			this->plusbeforeC = (gcnew System::Windows::Forms::Label());
			this->minusbeforeX5 = (gcnew System::Windows::Forms::Label());
			this->FindRezult = (gcnew System::Windows::Forms::Button());
			this->textBoxRezult = (gcnew System::Windows::Forms::TextBox());
			this->ClearAllValues = (gcnew System::Windows::Forms::Button());
			this->MainChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->ToChart = (gcnew System::Windows::Forms::TextBox());
			this->PaintChart = (gcnew System::Windows::Forms::Button());
			this->FromChart = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Degree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainChart))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(274, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите степень уравнения";
			// 
			// Degree
			// 
			this->Degree->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Degree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Degree->Location = System::Drawing::Point(678, 12);
			this->Degree->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->Degree->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Degree->Name = L"Degree";
			this->Degree->Size = System::Drawing::Size(120, 39);
			this->Degree->TabIndex = 1;
			this->Degree->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Degree->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			// 
			// TextSolution
			// 
			this->TextSolution->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextSolution->AutoSize = true;
			this->TextSolution->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextSolution->Location = System::Drawing::Point(399, 65);
			this->TextSolution->Name = L"TextSolution";
			this->TextSolution->Size = System::Drawing::Size(325, 32);
			this->TextSolution->TabIndex = 2;
			this->TextSolution->Text = L"Решим уравнение вида";
			// 
			// TextX
			// 
			this->TextX->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextX->AutoSize = true;
			this->TextX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextX->Location = System::Drawing::Point(816, 125);
			this->TextX->Name = L"TextX";
			this->TextX->Size = System::Drawing::Size(28, 32);
			this->TextX->TabIndex = 3;
			this->TextX->Text = L"x";
			// 
			// TextX5
			// 
			this->TextX5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextX5->AutoSize = true;
			this->TextX5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextX5->Location = System::Drawing::Point(156, 125);
			this->TextX5->Name = L"TextX5";
			this->TextX5->Size = System::Drawing::Size(37, 32);
			this->TextX5->TabIndex = 4;
			this->TextX5->Text = L"x⁵";
			this->TextX5->Visible = false;
			// 
			// TextX2
			// 
			this->TextX2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextX2->AutoSize = true;
			this->TextX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextX2->Location = System::Drawing::Point(651, 125);
			this->TextX2->Name = L"TextX2";
			this->TextX2->Size = System::Drawing::Size(37, 32);
			this->TextX2->TabIndex = 5;
			this->TextX2->Text = L"x²";
			this->TextX2->Visible = false;
			// 
			// TextX4
			// 
			this->TextX4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextX4->AutoSize = true;
			this->TextX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextX4->Location = System::Drawing::Point(321, 125);
			this->TextX4->Name = L"TextX4";
			this->TextX4->Size = System::Drawing::Size(37, 32);
			this->TextX4->TabIndex = 6;
			this->TextX4->Text = L"x⁴";
			this->TextX4->Visible = false;
			// 
			// TextX3
			// 
			this->TextX3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->TextX3->AutoSize = true;
			this->TextX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TextX3->Location = System::Drawing::Point(486, 125);
			this->TextX3->Name = L"TextX3";
			this->TextX3->Size = System::Drawing::Size(37, 32);
			this->TextX3->TabIndex = 7;
			this->TextX3->Text = L"x³";
			this->TextX3->Visible = false;
			// 
			// ValueX5
			// 
			this->ValueX5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueX5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueX5->Location = System::Drawing::Point(70, 125);
			this->ValueX5->Name = L"ValueX5";
			this->ValueX5->Size = System::Drawing::Size(80, 39);
			this->ValueX5->TabIndex = 8;
			this->ValueX5->Visible = false;
			this->ValueX5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// ValueX4
			// 
			this->ValueX4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueX4->Location = System::Drawing::Point(235, 125);
			this->ValueX4->Name = L"ValueX4";
			this->ValueX4->Size = System::Drawing::Size(80, 39);
			this->ValueX4->TabIndex = 9;
			this->ValueX4->Visible = false;
			this->ValueX4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// ValueX2
			// 
			this->ValueX2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueX2->Location = System::Drawing::Point(565, 125);
			this->ValueX2->Name = L"ValueX2";
			this->ValueX2->Size = System::Drawing::Size(80, 39);
			this->ValueX2->TabIndex = 11;
			this->ValueX2->Visible = false;
			this->ValueX2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// ValueX3
			// 
			this->ValueX3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueX3->Location = System::Drawing::Point(400, 125);
			this->ValueX3->Name = L"ValueX3";
			this->ValueX3->Size = System::Drawing::Size(80, 39);
			this->ValueX3->TabIndex = 10;
			this->ValueX3->Visible = false;
			this->ValueX3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// ValueX
			// 
			this->ValueX->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueX->Location = System::Drawing::Point(730, 125);
			this->ValueX->Name = L"ValueX";
			this->ValueX->Size = System::Drawing::Size(80, 39);
			this->ValueX->TabIndex = 12;
			this->ValueX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// ValueC
			// 
			this->ValueC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ValueC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ValueC->Location = System::Drawing::Point(892, 125);
			this->ValueC->Name = L"ValueC";
			this->ValueC->Size = System::Drawing::Size(80, 39);
			this->ValueC->TabIndex = 13;
			this->ValueC->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// EqualZero
			// 
			this->EqualZero->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->EqualZero->AutoSize = true;
			this->EqualZero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EqualZero->Location = System::Drawing::Point(978, 125);
			this->EqualZero->Name = L"EqualZero";
			this->EqualZero->Size = System::Drawing::Size(53, 32);
			this->EqualZero->TabIndex = 14;
			this->EqualZero->Text = L"= 0";
			// 
			// plusbeforeX4
			// 
			this->plusbeforeX4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plusbeforeX4->AutoSize = true;
			this->plusbeforeX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbeforeX4->Location = System::Drawing::Point(199, 125);
			this->plusbeforeX4->Name = L"plusbeforeX4";
			this->plusbeforeX4->Size = System::Drawing::Size(30, 32);
			this->plusbeforeX4->TabIndex = 15;
			this->plusbeforeX4->Text = L"+";
			this->plusbeforeX4->Visible = false;
			// 
			// plusbeforeX3
			// 
			this->plusbeforeX3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plusbeforeX3->AutoSize = true;
			this->plusbeforeX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbeforeX3->Location = System::Drawing::Point(364, 125);
			this->plusbeforeX3->Name = L"plusbeforeX3";
			this->plusbeforeX3->Size = System::Drawing::Size(30, 32);
			this->plusbeforeX3->TabIndex = 16;
			this->plusbeforeX3->Text = L"+";
			this->plusbeforeX3->Visible = false;
			// 
			// plusbeforeX2
			// 
			this->plusbeforeX2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plusbeforeX2->AutoSize = true;
			this->plusbeforeX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbeforeX2->Location = System::Drawing::Point(529, 125);
			this->plusbeforeX2->Name = L"plusbeforeX2";
			this->plusbeforeX2->Size = System::Drawing::Size(30, 32);
			this->plusbeforeX2->TabIndex = 17;
			this->plusbeforeX2->Text = L"+";
			this->plusbeforeX2->Visible = false;
			// 
			// plusbeforeX1
			// 
			this->plusbeforeX1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plusbeforeX1->AutoSize = true;
			this->plusbeforeX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbeforeX1->Location = System::Drawing::Point(694, 125);
			this->plusbeforeX1->Name = L"plusbeforeX1";
			this->plusbeforeX1->Size = System::Drawing::Size(30, 32);
			this->plusbeforeX1->TabIndex = 18;
			this->plusbeforeX1->Text = L"+";
			this->plusbeforeX1->Visible = false;
			// 
			// plusbeforeC
			// 
			this->plusbeforeC->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plusbeforeC->AutoSize = true;
			this->plusbeforeC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->plusbeforeC->Location = System::Drawing::Point(850, 125);
			this->plusbeforeC->Name = L"plusbeforeC";
			this->plusbeforeC->Size = System::Drawing::Size(30, 32);
			this->plusbeforeC->TabIndex = 19;
			this->plusbeforeC->Text = L"+";
			// 
			// minusbeforeX5
			// 
			this->minusbeforeX5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->minusbeforeX5->AutoSize = true;
			this->minusbeforeX5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->minusbeforeX5->Location = System::Drawing::Point(47, 125);
			this->minusbeforeX5->Name = L"minusbeforeX5";
			this->minusbeforeX5->Size = System::Drawing::Size(23, 32);
			this->minusbeforeX5->TabIndex = 20;
			this->minusbeforeX5->Text = L"-";
			this->minusbeforeX5->Visible = false;
			// 
			// FindRezult
			// 
			this->FindRezult->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FindRezult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindRezult->Location = System::Drawing::Point(670, 179);
			this->FindRezult->Name = L"FindRezult";
			this->FindRezult->Size = System::Drawing::Size(349, 44);
			this->FindRezult->TabIndex = 21;
			this->FindRezult->Text = L"Найти корни и подставить";
			this->FindRezult->UseVisualStyleBackColor = true;
			this->FindRezult->Click += gcnew System::EventHandler(this, &Form1::FindRezult_Click);
			// 
			// textBoxRezult
			// 
			this->textBoxRezult->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBoxRezult->Location = System::Drawing::Point(670, 229);
			this->textBoxRezult->Multiline = true;
			this->textBoxRezult->Name = L"textBoxRezult";
			this->textBoxRezult->ReadOnly = true;
			this->textBoxRezult->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxRezult->Size = System::Drawing::Size(349, 431);
			this->textBoxRezult->TabIndex = 22;
			this->textBoxRezult->TabStop = false;
			// 
			// ClearAllValues
			// 
			this->ClearAllValues->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ClearAllValues->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearAllValues->Location = System::Drawing::Point(814, 14);
			this->ClearAllValues->Name = L"ClearAllValues";
			this->ClearAllValues->Size = System::Drawing::Size(205, 72);
			this->ClearAllValues->TabIndex = 23;
			this->ClearAllValues->TabStop = false;
			this->ClearAllValues->Text = L"Очистить все значения";
			this->ClearAllValues->UseVisualStyleBackColor = true;
			this->ClearAllValues->Visible = false;
			this->ClearAllValues->Click += gcnew System::EventHandler(this, &Form1::ClearAllValues_Click);
			// 
			// MainChart
			// 
			this->MainChart->Anchor = System::Windows::Forms::AnchorStyles::None;
			chartArea1->Name = L"ChartArea1";
			this->MainChart->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->MainChart->Legends->Add(legend1);
			this->MainChart->Location = System::Drawing::Point(23, 306);
			this->MainChart->Name = L"MainChart";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->MainChart->Series->Add(series1);
			this->MainChart->Size = System::Drawing::Size(636, 354);
			this->MainChart->TabIndex = 0;
			this->MainChart->TabStop = false;
			this->MainChart->Text = L"chart1";
			this->MainChart->Visible = false;
			// 
			// ToChart
			// 
			this->ToChart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ToChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ToChart->Location = System::Drawing::Point(459, 243);
			this->ToChart->Name = L"ToChart";
			this->ToChart->Size = System::Drawing::Size(100, 39);
			this->ToChart->TabIndex = 15;
			this->ToChart->Visible = false;
			this->ToChart->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// PaintChart
			// 
			this->PaintChart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->PaintChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PaintChart->Location = System::Drawing::Point(131, 179);
			this->PaintChart->Name = L"PaintChart";
			this->PaintChart->Size = System::Drawing::Size(349, 44);
			this->PaintChart->TabIndex = 16;
			this->PaintChart->Text = L"Построить график";
			this->PaintChart->UseVisualStyleBackColor = true;
			this->PaintChart->Visible = false;
			this->PaintChart->Click += gcnew System::EventHandler(this, &Form1::PaintChart_Click);
			// 
			// FromChart
			// 
			this->FromChart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->FromChart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FromChart->Location = System::Drawing::Point(280, 243);
			this->FromChart->Name = L"FromChart";
			this->FromChart->Size = System::Drawing::Size(100, 39);
			this->FromChart->TabIndex = 14;
			this->FromChart->Visible = false;
			this->FromChart->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Value_KeyPress);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(35, 243);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(187, 25);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Пределы графика:";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(239, 243);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 25);
			this->label3->TabIndex = 29;
			this->label3->Text = L"от";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(418, 243);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 25);
			this->label4->TabIndex = 30;
			this->label4->Text = L"до";
			this->label4->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1048, 670);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FromChart);
			this->Controls->Add(this->PaintChart);
			this->Controls->Add(this->ToChart);
			this->Controls->Add(this->MainChart);
			this->Controls->Add(this->ClearAllValues);
			this->Controls->Add(this->textBoxRezult);
			this->Controls->Add(this->FindRezult);
			this->Controls->Add(this->minusbeforeX5);
			this->Controls->Add(this->plusbeforeC);
			this->Controls->Add(this->plusbeforeX1);
			this->Controls->Add(this->plusbeforeX2);
			this->Controls->Add(this->plusbeforeX3);
			this->Controls->Add(this->plusbeforeX4);
			this->Controls->Add(this->EqualZero);
			this->Controls->Add(this->ValueC);
			this->Controls->Add(this->ValueX);
			this->Controls->Add(this->ValueX3);
			this->Controls->Add(this->ValueX2);
			this->Controls->Add(this->ValueX4);
			this->Controls->Add(this->ValueX5);
			this->Controls->Add(this->TextX3);
			this->Controls->Add(this->TextX4);
			this->Controls->Add(this->TextX2);
			this->Controls->Add(this->TextX5);
			this->Controls->Add(this->TextX);
			this->Controls->Add(this->TextSolution);
			this->Controls->Add(this->Degree);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(1070, 726);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение алгебраических уравнений";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Degree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MainChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{
		ValueC->Clear();
		ValueX->Clear();
		ValueX2->Clear();
		ValueX3->Clear();
		ValueX4->Clear();
		ValueX5->Clear();
		if (Degree->Value == 1)
		{
			ValueX2->Visible = false;
			TextX2->Visible = false;
			plusbeforeX1->Visible = false;

			ValueX3->Visible = false;
			TextX3->Visible = false;
			plusbeforeX2->Visible = false;

			ValueX4->Visible = false;
			TextX4->Visible = false;
			plusbeforeX3->Visible = false;

			ValueX5->Visible = false;
			TextX5->Visible = false;
			plusbeforeX4->Visible = false;
		}
		if (Degree->Value == 2)
		{
			ValueX2->Visible = true;
			TextX2->Visible = true;
			plusbeforeX1->Visible = true;

			ValueX3->Visible = false;
			TextX3->Visible = false;
			plusbeforeX2->Visible = false;

			ValueX4->Visible = false;
			TextX4->Visible = false;
			plusbeforeX3->Visible = false;

			ValueX5->Visible = false;
			TextX5->Visible = false;
			plusbeforeX4->Visible = false;
		}
		if (Degree->Value == 3)
		{
			ValueX2->Visible = true;
			TextX2->Visible = true;
			plusbeforeX1->Visible = true;

			ValueX3->Visible = true;
			TextX3->Visible = true;
			plusbeforeX2->Visible = true;

			ValueX4->Visible = false;
			TextX4->Visible = false;
			plusbeforeX3->Visible = false;

			ValueX5->Visible = false;
			TextX5->Visible = false;
			plusbeforeX4->Visible = false;
		}
		if (Degree->Value == 4)
		{
			ValueX2->Visible = true;
			TextX2->Visible = true;
			plusbeforeX1->Visible = true;

			ValueX3->Visible = true;
			TextX3->Visible = true;
			plusbeforeX2->Visible = true;

			ValueX4->Visible = true;
			TextX4->Visible = true;
			plusbeforeX3->Visible = true;

			ValueX5->Visible = false;
			TextX5->Visible = false;
			plusbeforeX4->Visible = false;
		}
		if (Degree->Value == 5)
		{
			ValueX2->Visible = true;
			TextX2->Visible = true;
			plusbeforeX1->Visible = true;

			ValueX3->Visible = true;
			TextX3->Visible = true;
			plusbeforeX2->Visible = true;

			ValueX4->Visible = true;
			TextX4->Visible = true;
			plusbeforeX3->Visible = true;

			ValueX5->Visible = true;
			TextX5->Visible = true;
			plusbeforeX4->Visible = true;
		}
	}

	private: System::Boolean CannotKeyPress()
	{
		if (ValueC->Text == "-" || ValueX->Text == "-" || ValueX2->Text == "-" || ValueX3->Text == "-" || ValueX4->Text == "-" || ValueX5->Text == "-")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	private: System::Boolean IsNumber()
	{
		if (std::isfinite(A) || std::isfinite(B) || std::isfinite(C) || std::isfinite(D) || std::isfinite(E) || std::isfinite(F))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	private: System::Void Value_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != ',' && e->KeyChar != '-' && e->KeyChar != '\b')
		{
			e->Handled = true;
		}

		System::String^ t = safe_cast<System::Windows::Forms::TextBox^>(sender)->Text;
		if (e->KeyChar == ',' && (t->Length == 0 || t->Contains(",")))
		{
			e->Handled = true;
		}
		if (e->KeyChar == '-' && (t->Length > 0 || t->Contains("-")))
		{
			e->Handled = true;
		}
		if (e->KeyChar == ',' && t->Length == 1 && t->IndexOf('-') == 0)
		{
			e->Handled = true;
		}
	}
	private: System::Void VisibleEnabled()
	{
		ClearAllValues->Visible = true;
		textBoxRezult->Clear();
		ValueC->ReadOnly = true;
		ValueX->ReadOnly = true;
		ValueX2->ReadOnly = true;
		ValueX3->ReadOnly = true;
		ValueX4->ReadOnly = true;
		ValueX5->ReadOnly = true;
		Degree->ReadOnly = true;
	};

	private: System::Void CanPaintChart()
	{
		FromChart->Visible = true;
		ToChart->Visible = true;
		PaintChart->Visible = true;
		label2->Visible = true;
		label3->Visible = true;
		label4->Visible = true;
	}

	private: double A, B, C, D, E, F;

	private: bool chartIsPaint;

	private: System::String^ ComplexToString(std::complex<double> num)
	{
		double realPart = num.real();
		double imagPart = num.imag();

		if (imagPart >= 0)
		{
			return realPart.ToString() + " + " + imagPart.ToString() + "i";
		}
		else
		{
			return realPart.ToString() + " - " + (-imagPart).ToString() + "i";
		}
	}

	private: System::Double Arsh(double x)
	{
		return log(x + sqrt(x * x + 1));
	}

	private: System::Double Arch(double x)
	{
		return log(x + sqrt(x * x - 1));
	}

	private: System::Double Sign(double x)
	{
		if (x > 0) return 1;
		if (x < 0) return -1;
		return 0;
	}

	private: System::Double Sh(double x)
	{
		return (exp(x) - exp(-x)) / 2;
	}

	private: System::Double Ch(double x)
	{
		return (exp(x) + exp(-x)) / 2;
	}

	private: System::Double FourEquation(double x)
	{
		return A * pow(x, 4) + B * pow(x, 3) + C * pow(x, 2) + D * x + E;
	}

	private: System::Double FiveEquation(double x)
	{
		return A * pow(x, 5) + B * pow(x, 4) + C * pow(x, 3) + D * pow(x, 2) + E * x + F;
	}

	private: System::Double Bisection(std::string type, double left, double right, double eps)
	{
		if (type == "four")
		{
			double a = left;
			double b = right;

			while ((b - a) >= eps)
			{
				double center = (a + b) / 2.0;

				if (FourEquation(a) * FourEquation(center) <= 0)
				{
					b = center;
				}
				else
				{
					a = center;
				}
			}

			return (a + b) / 2.0;
		}
		if (type == "five")
		{
			double a = left;
			double b = right;

			while ((b - a) >= eps)
			{
				double center = (a + b) / 2.0;

				if (FiveEquation(a) * FiveEquation(center) <= 0)
				{
					b = center;
				}
				else
				{
					a = center;
				}
			}

			return (a + b) / 2.0;
		}
	}

	private: std::vector<double> FindAllRoots(std::string type, double left, double right, double eps, double step)
	{
		std::vector<double> roots;

		double x1 = left;
		double x2 = x1 + step;

		while (x2 <= right + 0.1)
		{
			double y1, y2;
			if (type == "four")
			{
				y1 = FourEquation(x1);
				y2 = FourEquation(x2);
			}
			else if (type == "five")
			{
				y1 = FiveEquation(x1);
				y2 = FiveEquation(x2);
			}

			if (fabs(y1) < eps)
			{
				roots.push_back(x1);
			}

			else if (y1 * y2 < 0)
			{
				double root;
				if (type == "four")
				{
					root = Bisection("four", x1, x2, eps);
				}
				else if (type == "five")
				{
					root = Bisection("five", x1, x2, eps);
				}

				if (roots.empty() || std::fabs(root - roots.back()) > eps * 5)
				{
					roots.push_back(root);
				}
			}

			x1 = x2;
			x2 = x1 + step;
		}

		return roots;
	}

	private: System::Void SaveControlsInfo(System::Windows::Forms::Control^ parent)
	{
		for each (System::Windows::Forms::Control ^ ctrl in parent->Controls)
		{
			ControlInfo^ info = gcnew ControlInfo();
			info->Bounds = ctrl->Bounds;
			info->Font = ctrl->Font;

			if (!controlsInfo->ContainsKey(ctrl))
			{
				controlsInfo->Add(ctrl, info);
			}

			if (ctrl->Controls->Count > 0)
				SaveControlsInfo(ctrl);
		}
	}

	private: System::Void ScaleControls()
	{
		float scaleX = (float)this->Width / originalFormSize.Width;
		float scaleY = (float)this->Height / originalFormSize.Height;

		for each (auto pair in controlsInfo)
		{
			System::Windows::Forms::Control^ ctrl = pair.Key;
			ControlInfo^ info = pair.Value;

			ctrl->Left = (int)(info->Bounds.Left * scaleX);
			ctrl->Top = (int)(info->Bounds.Top * scaleY);
			ctrl->Width = (int)(info->Bounds.Width * scaleX);
			ctrl->Height = (int)(info->Bounds.Height * scaleY);

			float newFontSize = info->Font->Size * Math::Min(scaleX, scaleY);
			ctrl->Font = gcnew System::Drawing::Font(
				info->Font->FontFamily,
				newFontSize,
				info->Font->Style
			);
		}
	}

	private: System::Void FindRezult_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (Degree->Value == 1)
			{
				if (System::String::IsNullOrEmpty(ValueC->Text) || System::String::IsNullOrEmpty(ValueX->Text) || CannotKeyPress())
				{
					MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					C = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					B = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					if (B == 0)
					{
						MessageBox::Show("Коэффициент старшей степени не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						ValueX->Clear();
						ValueX->Focus();
					}
					else
					{
						VisibleEnabled();
						CanPaintChart();
						double rezult = -C / B;
						double checkRezult = B * rezult + C;

						textBoxRezult->Text += "x = " + rezult;
						textBoxRezult->Text += System::Environment::NewLine;
						textBoxRezult->Text += "f(" + rezult + ") = " + checkRezult;
					}
				}
			}
			if (Degree->Value == 2)
			{
				if (System::String::IsNullOrEmpty(ValueC->Text) || System::String::IsNullOrEmpty(ValueX->Text) ||
					System::String::IsNullOrEmpty(ValueX2->Text) || CannotKeyPress())
				{
					MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					C = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					B = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					A = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

					if (!(IsNumber()))
					{
						MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						double a = A;
						double b = B;
						double c = C;

						if (A == 0)
						{
							MessageBox::Show("Коэффициент старшей степени не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
							ValueX2->Clear();
							ValueX2->Focus();
						}
						else
						{
							VisibleEnabled();
							CanPaintChart();
							std::complex<double> D = pow(B, 2) - 4 * A * C;
							std::complex<double> X1, X2;

							if (D.real() < 0)
							{
								X1 = (-B + sqrt(D)) / (2 * A);
								X2 = (-B - sqrt(D)) / (2 * A);

								std::complex<double> checkX1 = a * pow(X1, 2) + b * X1 + c;
								std::complex<double> checkX2 = a * pow(X2, 2) + b * X2 + c;

								textBoxRezult->Text += "D = " + ComplexToString(D);
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x1 = " + ComplexToString(X1);
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x2 = " + ComplexToString(X2);
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + ComplexToString(X1) + ") = " + checkX1.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + ComplexToString(X2) + ") = " + checkX2.real();
							}
							else if (D.real() == 0)
							{
								X1 = -B / (2 * A);

								std::complex<double> checkX1 = a * pow(X1, 2) + b * X1 + c;

								textBoxRezult->Text += "D = " + D.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x1 = " + X1.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X1.real() + ") = " + checkX1.real();
							}
							else if (D.real() > 0)
							{
								X1 = (-B + sqrt(D)) / (2 * A);
								X2 = (-B - sqrt(D)) / (2 * A);

								std::complex<double> checkX1 = a * pow(X1, 2) + b * X1 + c;
								std::complex<double> checkX2 = a * pow(X2, 2) + b * X2 + c;

								textBoxRezult->Text += "D = " + D.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x1 = " + X1.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x2 = " + X2.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X1.real() + ") = " + checkX1.real();
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X2.real() + ") = " + checkX2.real();
							}
						}
					}
				}
			}
			if (Degree->Value == 3)
			{
				if (System::String::IsNullOrEmpty(ValueC->Text) || System::String::IsNullOrEmpty(ValueX->Text) ||
					System::String::IsNullOrEmpty(ValueX2->Text) || System::String::IsNullOrEmpty(ValueX3->Text) || CannotKeyPress())
				{
					MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					double D = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					double C = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					double B = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					double A = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

					if (!(IsNumber()))
					{
						MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					else
					{
						if (A == 0)
						{
							MessageBox::Show("Коэффициент старшей степени не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
							ValueX3->Clear();
							ValueX3->Focus();
						}
						else
						{
							VisibleEnabled();
							CanPaintChart();
							double a = B / A;
							double b = C / A;
							double c = D / A;

							double Q = (pow(a, 2) - (3 * b)) / 9;
							double R = (2 * pow(a, 3) - 9 * a * b + 27 * c) / 54;
							double S = pow(Q, 3) - pow(R, 2);

							if (S > 0)
							{
								double X1, X2, X3;
								double phi = (acos(R / sqrt(pow(Q, 3)))) / 3;
								double Y1 = -2 * sqrt(Q) * cos(phi);
								double Y2 = -2 * sqrt(Q) * cos(phi + (2 * Math::PI / 3));
								double Y3 = -2 * sqrt(Q) * cos(phi - (2 * Math::PI / 3));

								X1 = Y1 - a / 3;
								X2 = Y2 - a / 3;
								X3 = Y3 - a / 3;

								double checkX1 = A * pow(X1, 3) + B * pow(X1, 2) + C * X1 + D;
								double checkX2 = A * pow(X2, 3) + B * pow(X2, 2) + C * X2 + D;
								double checkX3 = A * pow(X3, 3) + B * pow(X3, 2) + C * X3 + D;

								textBoxRezult->Text += "x1 = " + X1;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x2 = " + X2;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x3 = " + X3;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X1 + ") = " + checkX1;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X2 + ") = " + checkX2;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X3 + ") = " + checkX3;
							}

							else if (S < 0)
							{
								if (Q > 0)
								{
									double X1; std::complex<double> X2, X3;
									double phi = (Arch(abs(R) / sqrt(pow(Q, 3)))) / 3;
									double Y1 = -2 * Sign(R) * sqrt(Q) * Ch(phi);
									std::complex<double> Y2 = Sign(R) * sqrt(Q) * Ch(phi) + std::complex<double>(0, sqrt(3) * sqrt(Q) * Sh(phi));
									std::complex<double> Y3 = Sign(R) * sqrt(Q) * Ch(phi) - std::complex<double>(0, sqrt(3) * sqrt(Q) * Sh(phi));

									X1 = Y1 - a / 3;
									X2 = Y2 - a / 3;
									X3 = Y3 - a / 3;

									double checkX1 = A * pow(X1, 3) + B * pow(X1, 2) + C * X1 + D;
									std::complex<double> checkX2 = A * pow(X2, 3) + B * pow(X2, 2) + C * X2 + D;
									std::complex<double> checkX3 = A * pow(X3, 3) + B * pow(X3, 2) + C * X3 + D;

									textBoxRezult->Text += "x1 = " + X1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x2 = " + ComplexToString(X2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x3 = " + ComplexToString(X3);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + X1 + ") = " + checkX1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X2) + ") = " + ComplexToString(checkX2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X3) + ") = " + ComplexToString(checkX3);
								}
								else if (Q < 0)
								{
									double X1; std::complex<double> X2, X3;
									double phi = (Arsh(abs(R) / sqrt(abs(pow(Q, 3))))) / 3;
									double Y1 = -2 * Sign(R) * sqrt(abs(Q)) * Sh(phi);
									std::complex<double> Y2 = Sign(R) * sqrt(abs(Q)) * Sh(phi) + std::complex<double>(0, sqrt(3) * sqrt(abs(Q)) * Ch(phi));
									std::complex<double> Y3 = Sign(R) * sqrt(abs(Q)) * Sh(phi) - std::complex<double>(0, sqrt(3) * sqrt(abs(Q)) * Ch(phi));

									X1 = Y1 - a / 3;
									X2 = Y2 - a / 3;
									X3 = Y3 - a / 3;

									double checkX1 = A * pow(X1, 3) + B * pow(X1, 2) + C * X1 + D;
									std::complex<double> checkX2 = A * pow(X2, 3) + B * pow(X2, 2) + C * X2 + D;
									std::complex<double> checkX3 = A * pow(X3, 3) + B * pow(X3, 2) + C * X3 + D;

									textBoxRezult->Text += "x1 = " + X1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x2 = " + ComplexToString(X2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x3 = " + ComplexToString(X3);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + X1 + ") = " + checkX1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X2) + ") = " + ComplexToString(checkX2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X3) + ") = " + ComplexToString(checkX3);
								}
								else if (Q == 0)
								{
									double X1; std::complex<double> X2, X3;
									double Y1 = -cbrt(c - pow(a, 3) / 27);
									std::complex<double> Y2 = -(a + Y1) / 2 + std::complex<double>(0, (sqrt(abs((a - 3 * Y1) * (a + Y1) - 4 * b))));
									std::complex<double> Y3 = -(a + Y1) / 2 - std::complex<double>(0, (sqrt(abs((a - 3 * Y1) * (a + Y1) - 4 * b))));

									X1 = Y1 - a / 3;
									X2 = Y2 - a / 3;
									X3 = Y3 - a / 3;

									double checkX1 = A * pow(X1, 3) + B * pow(X1, 2) + C * X1 + D;
									std::complex<double> checkX2 = A * pow(X2, 3) + B * pow(X2, 2) + C * X2 + D;
									std::complex<double> checkX3 = A * pow(X3, 3) + B * pow(X3, 2) + C * X3 + D;

									textBoxRezult->Text += "x1 = " + X1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x2 = " + ComplexToString(X2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "x3 = " + ComplexToString(X3);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + X1 + ") = " + checkX1;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X2) + ") = " + ComplexToString(checkX2);
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + ComplexToString(X3) + ") = " + ComplexToString(checkX3);
								}
							}
							else if (S == 0)
							{
								double X1, X2, X3;
								double Y1 = -2 * cbrt(R);
								double Y2 = cbrt(R);
								double Y3 = cbrt(R);

								X1 = Y1 - a / 3;
								X2 = Y2 - a / 3;
								X3 = Y3 - a / 3;

								double checkX1 = A * pow(X1, 3) + B * pow(X1, 2) + C * X1 + D;
								double checkX2 = A * pow(X2, 3) + B * pow(X2, 2) + C * X2 + D;
								double checkX3 = A * pow(X3, 3) + B * pow(X3, 2) + C * X3 + D;

								textBoxRezult->Text += "x1 = " + X1;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x2 = " + X2;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "x3 = " + X3;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X1 + ") = " + checkX1;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X2 + ") = " + checkX2;
								textBoxRezult->Text += System::Environment::NewLine;
								textBoxRezult->Text += "f(" + X3 + ") = " + checkX3;
							}
						}
					}
				}
			}
			if (Degree->Value == 4)
			{
				if (System::String::IsNullOrEmpty(ValueC->Text) || System::String::IsNullOrEmpty(ValueX->Text) ||
					System::String::IsNullOrEmpty(ValueX2->Text) || System::String::IsNullOrEmpty(ValueX3->Text) ||
					System::String::IsNullOrEmpty(ValueX4->Text) || CannotKeyPress())
				{
					MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					E = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					D = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					C = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					B = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					A = System::Convert::ToDouble(ValueX4->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);


					if (!(IsNumber()))
					{
						MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					else
					{
						if (A == 0)
						{
							MessageBox::Show("Коэффициент старшей степени не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
							ValueX4->Clear();
							ValueX4->Focus();
						}
						else
						{
							CanPaintChart();
							VisibleEnabled();
							if (!chartIsPaint)
							{
								MessageBox::Show("Сначала нарисуйте график функции", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
								FromChart->Focus();
							}
							else
							{
								SolvingEquations::BisectionForm^ bisectionForm = gcnew SolvingEquations::BisectionForm();
								double fromNumber, toNumber, epsilon;
								bool isFindAllRoots = false;
								if (bisectionForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
								{
									fromNumber = bisectionForm->FromNumber;
									toNumber = bisectionForm->ToNumber;
									epsilon = bisectionForm->Epsilon;
									isFindAllRoots = bisectionForm->isFindAllRoots;
								}

								if (isFindAllRoots)
								{
									std::vector<double> roots = FindAllRoots("four", fromNumber, toNumber, epsilon, 0.0011);

									if (roots.empty())
									{
										textBoxRezult->Text += "На отрезке (" + fromNumber + ", " + toNumber + ") корней нет";
									}
									else
									{
										int i = 1;
										for each (double root in roots)
										{
											textBoxRezult->Text += "x" + i + " = " + root;
											textBoxRezult->Text += System::Environment::NewLine;
											i++;
										}

										for each (double root in roots)
										{
											textBoxRezult->Text += "f(" + root + ") = " + FourEquation(root);
											textBoxRezult->Text += System::Environment::NewLine;
										}
									}
								}
								else
								{
									double root = Bisection("four", fromNumber, toNumber, epsilon);
									textBoxRezult->Text += "x1 = " + root;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + root + ") = " + FourEquation(root);
								}
							}
						}
					}
				}
			}
			if (Degree->Value == 5)
			{
				if (System::String::IsNullOrEmpty(ValueC->Text) || System::String::IsNullOrEmpty(ValueX->Text) ||
					System::String::IsNullOrEmpty(ValueX2->Text) || System::String::IsNullOrEmpty(ValueX3->Text) ||
					System::String::IsNullOrEmpty(ValueX4->Text) || System::String::IsNullOrEmpty(ValueX5->Text) ||
					CannotKeyPress())
				{
					MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					F = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					E = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					D = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					C = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					B = System::Convert::ToDouble(ValueX4->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
					A = System::Convert::ToDouble(ValueX5->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

					if (!(IsNumber()))
					{
						MessageBox::Show("Неверные значения коэффициентов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}

					else
					{
						if (A == 0)
						{
							MessageBox::Show("Коэффициент старшей степени не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
							ValueX5->Clear();
							ValueX5->Focus();
						}
						else
						{
							VisibleEnabled();
							CanPaintChart();
							if (chartIsPaint == true)
							{
								SolvingEquations::BisectionForm^ bisectionForm = gcnew SolvingEquations::BisectionForm();
								double fromNumber, toNumber, epsilon;
								bool isFindAllRoots = false;
								if (bisectionForm->ShowDialog() == System::Windows::Forms::DialogResult::OK)
								{
									fromNumber = bisectionForm->FromNumber;
									toNumber = bisectionForm->ToNumber;
									epsilon = bisectionForm->Epsilon;
									isFindAllRoots = bisectionForm->isFindAllRoots;
								}

								if (isFindAllRoots)
								{
									std::vector<double> roots = FindAllRoots("five", fromNumber, toNumber, epsilon, 0.0011);

									if (roots.empty())
									{
										textBoxRezult->Text += "На отрезке (" + fromNumber + ", " + toNumber + ") корней нет";
									}
									else
									{
										int i = 1;
										for each (double root in roots)
										{
											textBoxRezult->Text += "x" + i + " = " + root;
											textBoxRezult->Text += System::Environment::NewLine;
											i++;
										}

										for each (double root in roots)
										{
											textBoxRezult->Text += "f(" + root + ") = " + FiveEquation(root);
											textBoxRezult->Text += System::Environment::NewLine;
										}
									}
								}
								else
								{
									double root = Bisection("five", fromNumber, toNumber, epsilon);
									textBoxRezult->Text += "x1 = " + root;
									textBoxRezult->Text += System::Environment::NewLine;
									textBoxRezult->Text += "f(" + root + ") = " + FiveEquation(root);
								}
							}
							else if (chartIsPaint == false)
							{
								MessageBox::Show("Сначала нарисуйте график функции", "Уведомление", MessageBoxButtons::OK, MessageBoxIcon::Information);
								FromChart->Focus();
							}
						}
					}
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Произошла ошибка. Проверьте все данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: System::Void ClearAllValues_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MainChart->Visible = false;
		FromChart->Visible = false;
		ToChart->Visible = false;
		PaintChart->Visible = false;
		ClearAllValues->Visible = false;
		ValueC->Clear();
		ValueX->Clear();
		ValueX2->Clear();
		ValueX3->Clear();
		ValueX4->Clear();
		ValueX5->Clear();
		textBoxRezult->Clear();
		ValueC->ReadOnly = false;
		ValueX->ReadOnly = false;
		ValueX2->ReadOnly = false;
		ValueX3->ReadOnly = false;
		ValueX4->ReadOnly = false;
		ValueX5->ReadOnly = false;
		Degree->ReadOnly = false;
		label2->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		FromChart->Clear();
		ToChart->Clear();
		chartIsPaint = false;
	}

	private: System::Void PaintChart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (System::String::IsNullOrEmpty(FromChart->Text) || System::String::IsNullOrEmpty(ToChart->Text) || FromChart->Text == "-" || ToChart->Text == "-")
			{
				MessageBox::Show("Введите значения пределов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				MainChart->Series->Clear();
				MainChart->ChartAreas->Clear();
				MainChart->Controls->Clear();
				MainChart->Visible = true;

				double fromchart = System::Convert::ToDouble(FromChart->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
				double tochart = System::Convert::ToDouble(ToChart->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

				if (!std::isfinite(fromchart) || !std::isfinite(tochart))
				{
					MessageBox::Show("Неверное значение пределов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					if (fromchart > tochart)
					{
						MessageBox::Show("Неверные значения пределов", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
						FromChart->Clear();
						ToChart->Clear();
					}
					else
					{
						chartIsPaint = true;
						MainChart->Text = "График функции";
						Chart^ chart1 = gcnew Chart();
						chart1->Dock = DockStyle::Fill;

						ChartArea^ area = gcnew ChartArea("MainArea");
						chart1->ChartAreas->Add(area);

						Series^ series = gcnew Series("y");
						series->ChartType = SeriesChartType::Line;
						series->BorderWidth = 2;

						if (Degree->Value == 1)
						{
							for (double x = fromchart - 10; x <= tochart + 10; x += 0.1)
							{
								series->Points->AddXY(x, B * x + C);
							}
						}
						else if (Degree->Value == 2)
						{
							for (double x = fromchart - 10; x <= tochart + 10; x += 0.1)
							{
								series->Points->AddXY(x, A * pow(x, 2) + B * x + C);
							}
						}
						else if (Degree->Value == 3)
						{
							double D = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							double C = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							double B = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							double A = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

							for (double x = fromchart - 10; x <= tochart + 10; x += 0.1)
							{
								series->Points->AddXY(x, A * pow(x, 3) + B * pow(x, 2) + C * x + D);
							}
						}
						else if (Degree->Value == 4)
						{
							E = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							D = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							C = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							B = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							A = System::Convert::ToDouble(ValueX4->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

							for (double x = fromchart - 10; x <= tochart + 10; x += 0.1)
							{
								series->Points->AddXY(x, A * pow(x, 4) + B * pow(x, 3) + C * pow(x, 2) + D * x + E);
							}
						}
						else if (Degree->Value == 5)
						{
							F = System::Convert::ToDouble(ValueC->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							E = System::Convert::ToDouble(ValueX->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							D = System::Convert::ToDouble(ValueX2->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							C = System::Convert::ToDouble(ValueX3->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							B = System::Convert::ToDouble(ValueX4->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);
							A = System::Convert::ToDouble(ValueX5->Text->Replace(',', '.'), System::Globalization::CultureInfo::InvariantCulture);

							for (double x = fromchart - 10; x <= tochart + 10; x += 0.1)
							{
								series->Points->AddXY(x, A * pow(x, 5) + B * pow(x, 4) + C * pow(x, 3) + D * pow(x, 2) + E * x + F);
							}
						}

						chart1->Series->Add(series);
						MainChart->Controls->Add(chart1);

						area->AxisX->Minimum = fromchart;
						area->AxisX->Maximum = tochart;
						area->AxisX->Interval = 1;
						area->AxisX->LabelStyle->Format = "0";

						area->AxisY->Minimum = fromchart;
						area->AxisY->Maximum = tochart;
						area->AxisY->Interval = 1;
						area->AxisY->LabelStyle->Format = "0";

						area->AxisX->Crossing = 0;
						area->AxisY->Crossing = 0;
						area->AxisX->LineColor = System::Drawing::Color::Red;
						area->AxisY->LineColor = System::Drawing::Color::Red;
					}
				}
			}
		}
		catch (...)
		{
			MessageBox::Show("Произошла ошибка. Проверьте все данные", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e)
	{
		if (!scalingReady) return;

		ScaleControls();
	}

	private: bool scalingReady;

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		originalFormSize = this->ClientSize;

		SaveControlsInfo(this);

		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;

		scalingReady = true;
	}
	};
}