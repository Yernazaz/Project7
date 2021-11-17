#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <msclr/marshal_cppstd.h>

namespace Project7 {

  using namespace std;
  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;
  using namespace System::Text::RegularExpressions;
  using namespace System::Net;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 462);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 49);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Узнать курс";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Январь";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"USD", L"EUR", L"GBP" });
			this->comboBox1->Location = System::Drawing::Point(12, 24);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"USD";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Февраль";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Март";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Апрель";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(18, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Май";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 169);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Июнь";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(17, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Июль";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(17, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(50, 17);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Август";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(17, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(71, 17);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Сентябрь";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(18, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Октябрь";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(17, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 17);
			this->label11->TabIndex = 13;
			this->label11->Text = L"Ноябрь";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(17, 271);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 17);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Декабрь";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(17, 307);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 17);
			this->label13->TabIndex = 15;
			this->label13->Text = L"MAX";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(18, 324);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 17);
			this->label14->TabIndex = 16;
			this->label14->Text = L"MIN";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(18, 341);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 17);
			this->label15->TabIndex = 17;
			this->label15->Text = L"AVG";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(18, 358);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 17);
			this->label16->TabIndex = 18;
			this->label16->Text = L"MEDIAN";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(18, 394);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 17);
			this->label17->TabIndex = 20;
			this->label17->Text = L"a =";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(18, 411);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 17);
			this->label18->TabIndex = 21;
			this->label18->Text = L"b =";
			// 
			// chart2
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(335, -3);
			this->chart2->Name = L"chart2";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series1->Legend = L"Legend1";
			series1->Name = L"Курс по дням";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"Лин.рег.";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StepLine;
			series3->Legend = L"Legend1";
			series3->Name = L"Курс по мес.";
			this->chart2->Series->Add(series1);
			this->chart2->Series->Add(series2);
			this->chart2->Series->Add(series3);
			this->chart2->Size = System::Drawing::Size(1092, 774);
			this->chart2->TabIndex = 22;
			this->chart2->Text = L"chart2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1422, 774);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		String^ str;
		String^ str1;
		float cur,MAX=0.000,MIN=1000.000,AVG=0.000,MEDIAN=0.000;
		float temp[12],day[366];
		WebClient^ wb = gcnew WebClient;
		
		float avgm[12];
		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0"+i+"/01/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				
				day[i - 1] = ::atof(conv.c_str());
				AVG += day[i - 1];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req="+i+"/01/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				
				day[i - 1] = ::atof(conv.c_str());
				AVG += day[i - 1];
			}
		}
		avgm[0] = AVG/31;
		label1->Text = "Январь : 1"  + comboBox1->Text + " = " + avgm[0] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 29; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/02/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +30] = ::atof(conv.c_str());
				AVG += day[i +30];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/02/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +30] = ::atof(conv.c_str());
				AVG += day[i +30];
			}
		}
		avgm[1] = AVG / 29;
		label2->Text = "Февраль : 1" + comboBox1->Text + " = " + avgm[1] + " RUB";
		AVG = 0;


		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/03/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +59] = ::atof(conv.c_str());
				AVG += day[i+59];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/03/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +59] = ::atof(conv.c_str());
				AVG += day[i +59];
			}
		}
		avgm[2] = AVG / 31;
		label3->Text = "Март : 1" + comboBox1->Text + " = " + avgm[2] + " RUB";
		AVG = 0;


		for (int i = 1; i <= 30; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/04/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +90] = ::atof(conv.c_str());
				AVG += day[i +90];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/04/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i +90] = ::atof(conv.c_str());
				AVG += day[i +90];
			}
		}
		avgm[3] = AVG / 30;
		label4->Text = "Апрель : 1" + comboBox1->Text + " = " + avgm[3] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/05/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 120] = ::atof(conv.c_str());
				AVG += day[i + 120];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/05/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 120] = ::atof(conv.c_str());
				AVG += day[i + 120];
			}
		}
		avgm[4] = AVG / 31;
		label5->Text = "Май : 1" + comboBox1->Text + " = " + avgm[4] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 30; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/06/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 151] = ::atof(conv.c_str());
				AVG += day[i + 151];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/06/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 151] = ::atof(conv.c_str());
				AVG += day[i + 151];
			}
		}
		avgm[5] = AVG / 30;
		label6->Text = "Июнь : 1" + comboBox1->Text + " = " + avgm[5] + " RUB";
		AVG = 0;


		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/07/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 181] = ::atof(conv.c_str());
				AVG += day[i + 181];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/07/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 181] = ::atof(conv.c_str());
				AVG += day[i + 181];
			}
		}
		avgm[6] = AVG / 31;
		label7->Text = "Июль : 1" + comboBox1->Text + " = " + avgm[6] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/08/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 212] = ::atof(conv.c_str());
				AVG += day[i + 212];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/08/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 212] = ::atof(conv.c_str());
				AVG += day[i + 212];
			}
		}
		avgm[7] = AVG / 31;
		label8->Text = "Август : 1" + comboBox1->Text + " = " + avgm[7] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 30; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/09/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 243] = ::atof(conv.c_str());
				AVG += day[i + 243];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/09/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 243] = ::atof(conv.c_str());
				AVG += day[i + 243];
			}
		}
		avgm[8] = AVG / 30;
		label9->Text = "Сентябрь : 1" + comboBox1->Text + " = " + avgm[8] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/10/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 273] = ::atof(conv.c_str());
				AVG += day[i + 273];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/10/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 273] = ::atof(conv.c_str());
				AVG += day[i + 273];
			}
		}
		avgm[9] = AVG / 31;
		label10->Text = "Октябрь : 1" + comboBox1->Text + " = " + avgm[9] + " RUB";
		AVG = 0;

		for (int i = 1; i <= 30; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/11/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 304] = ::atof(conv.c_str());
				AVG += day[i + 304];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/11/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 304] = ::atof(conv.c_str());
				AVG += day[i + 304];
			}
		}
		avgm[10] = AVG / 30;
		label11->Text = "Ноябрь : 1" + comboBox1->Text + " = " + avgm[10] + " RUB";
		AVG = 0;


		for (int i = 1; i <= 31; i++) {
			if (i < 10) {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=0" + i + "/12/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 334] = ::atof(conv.c_str());
				AVG += day[i + 334];
			}
			else {
				String^ line = wb->DownloadString("http://www.cbr.ru/scripts/XML_daily.asp?date_req=" + i + "/12/2020");
				Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
				Match^ match = regex->Match(line);
				str = match->Groups[3]->Value;
				string conv = msclr::interop::marshal_as< string >(str);
				day[i + 334] = ::atof(conv.c_str());
				AVG += day[i + 334];
			}
		}
		avgm[11] = AVG / 30;
		label12->Text = "Декабрь : 1" + comboBox1->Text + " = " + avgm[11] + " RUB";
		AVG = 0;

		
		sort(avgm, avgm + 12);
		MEDIAN = (avgm[6] + avgm[7]) / 2.00;

		for (int i = 0; i < 12; i++) {
			if (MAX < avgm[i]) { MAX = avgm[i]; }
			if (MIN > avgm[i]) { MIN = avgm[i]; }
			AVG += avgm[i];
		}
		AVG = AVG / 12;

		label13->Text = "MAX :" + MAX;
		label14->Text = "MIN :" + MIN;
		label15->Text = "AVG :" + AVG;
		label16->Text = "MEDIAN :" + MEDIAN;

		int k[366], S_k, S_k2;
		double S_yk = 0, S_y;
		for (int i = 1; i <= 366; i++)
		{
			k[i] = i;
			S_yk += (day[i - 1] * k[i]);
			S_y += day[i - 1];
			S_k += k[i];
			S_k2 += pow(k[i], 2);
		}
		double M_yk = (S_yk / 366);
		double M_y = (S_y / 366);
		double M_k = (S_k / 366);
		double M_k2 = (S_k2 / 366);
		double a = (M_yk - (M_y * M_k)) / (M_k2 - pow(M_k, 2));
		double b = M_y - a * M_k;
		label17->Text = "a = " + a;
		label18->Text = "b = " + b;
		double Y = 0;
		
		this->chart2->Series[0]->Points->Clear();
		this->chart2->Series[1]->Points->Clear();

		
		int m = 0;
		for (int i = 0; i < 12; i++) {
			this->chart2->Series[2]->Points->AddXY(i +m+1 , avgm[i]);
			m += 30;
		}
		for (int i = 0; i < 366; i++) {
			this->chart2->Series[0]->Points->AddXY(i+1, day[i]);
			Y = (a * i) + b;
			this->chart2->Series[1]->Points->AddXY(i + 1, Y);

		}
		
		
			
	}

private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
