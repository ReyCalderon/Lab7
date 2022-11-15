#pragma once
#include "AreaPer.h"
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Formas.h"

namespace Lab7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txt_Cuad;
	private: System::Windows::Forms::TextBox^ txt_BaseOtra;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ txt_LadosOtra;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txt_AltTri;

	private: System::Windows::Forms::TextBox^ txt_BasTri;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ txt_ApoOtra;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lbl_Per;
	private: System::Windows::Forms::Label^ lbl_Area;




	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ lbl_BusE;

	private: System::Windows::Forms::Label^ lbl_BusF;

	private: System::Windows::Forms::Label^ lbl_PorE;
	private: System::Windows::Forms::Label^ lbl_PorF;




	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ txt_Todo;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txt_Cuad = (gcnew System::Windows::Forms::TextBox());
			this->txt_BaseOtra = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_AltTri = (gcnew System::Windows::Forms::TextBox());
			this->txt_BasTri = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txt_LadosOtra = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->txt_ApoOtra = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->lbl_Per = (gcnew System::Windows::Forms::Label());
			this->lbl_Area = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->lbl_BusE = (gcnew System::Windows::Forms::Label());
			this->lbl_BusF = (gcnew System::Windows::Forms::Label());
			this->lbl_PorE = (gcnew System::Windows::Forms::Label());
			this->lbl_PorF = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->txt_Todo = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(153, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ejercicio 1 \r\nBusquedas Binarias";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(561, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ejercicio 2 \r\nFiguras Geometricas\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Cuadrado";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(52, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Triangulo";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(69, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Otras Figuras";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(534, 461);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(51, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Perimetro";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(543, 501);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Area";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 55);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Base";
			// 
			// txt_Cuad
			// 
			this->txt_Cuad->Location = System::Drawing::Point(54, 55);
			this->txt_Cuad->Name = L"txt_Cuad";
			this->txt_Cuad->Size = System::Drawing::Size(100, 20);
			this->txt_Cuad->TabIndex = 8;
			// 
			// txt_BaseOtra
			// 
			this->txt_BaseOtra->Location = System::Drawing::Point(53, 36);
			this->txt_BaseOtra->Name = L"txt_BaseOtra";
			this->txt_BaseOtra->Size = System::Drawing::Size(100, 20);
			this->txt_BaseOtra->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 13);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Base";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->txt_Cuad);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(413, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(168, 148);
			this->panel1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 113);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Calcular";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->txt_AltTri);
			this->panel2->Controls->Add(this->txt_BasTri);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Location = System::Drawing::Point(639, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(168, 148);
			this->panel2->TabIndex = 12;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// txt_AltTri
			// 
			this->txt_AltTri->Location = System::Drawing::Point(55, 74);
			this->txt_AltTri->Name = L"txt_AltTri";
			this->txt_AltTri->Size = System::Drawing::Size(100, 20);
			this->txt_AltTri->TabIndex = 19;
			// 
			// txt_BasTri
			// 
			this->txt_BasTri->Location = System::Drawing::Point(55, 48);
			this->txt_BasTri->Name = L"txt_BasTri";
			this->txt_BasTri->Size = System::Drawing::Size(100, 20);
			this->txt_BasTri->TabIndex = 17;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 52);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 13);
			this->label14->TabIndex = 16;
			this->label14->Text = L"Base";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 77);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(34, 13);
			this->label15->TabIndex = 18;
			this->label15->Text = L"Altura";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(42, 113);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Calcular";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(5, 65);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Lados";
			// 
			// txt_LadosOtra
			// 
			this->txt_LadosOtra->Location = System::Drawing::Point(53, 62);
			this->txt_LadosOtra->Name = L"txt_LadosOtra";
			this->txt_LadosOtra->Size = System::Drawing::Size(100, 20);
			this->txt_LadosOtra->TabIndex = 14;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->txt_ApoOtra);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->txt_LadosOtra);
			this->panel3->Controls->Add(this->txt_BaseOtra);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(520, 268);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(168, 148);
			this->panel3->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(44, 114);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Calcular";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// txt_ApoOtra
			// 
			this->txt_ApoOtra->Location = System::Drawing::Point(53, 88);
			this->txt_ApoOtra->Name = L"txt_ApoOtra";
			this->txt_ApoOtra->Size = System::Drawing::Size(100, 20);
			this->txt_ApoOtra->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 91);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 13);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Apotema";
			// 
			// lbl_Per
			// 
			this->lbl_Per->AutoSize = true;
			this->lbl_Per->Location = System::Drawing::Point(639, 461);
			this->lbl_Per->Name = L"lbl_Per";
			this->lbl_Per->Size = System::Drawing::Size(16, 13);
			this->lbl_Per->TabIndex = 14;
			this->lbl_Per->Text = L"...";
			// 
			// lbl_Area
			// 
			this->lbl_Area->AutoSize = true;
			this->lbl_Area->Location = System::Drawing::Point(639, 501);
			this->lbl_Area->Name = L"lbl_Area";
			this->lbl_Area->Size = System::Drawing::Size(16, 13);
			this->lbl_Area->TabIndex = 15;
			this->lbl_Area->Text = L"...";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(71, 418);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(108, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Busquedas Con Exito";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(68, 456);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Busquedas Fallidas";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(68, 494);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(99, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Porcentaje de Exito";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(68, 533);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(91, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Porcentaje Fallido";
			// 
			// lbl_BusE
			// 
			this->lbl_BusE->AutoSize = true;
			this->lbl_BusE->Location = System::Drawing::Point(222, 418);
			this->lbl_BusE->Name = L"lbl_BusE";
			this->lbl_BusE->Size = System::Drawing::Size(41, 13);
			this->lbl_BusE->TabIndex = 21;
			this->lbl_BusE->Text = L"label20";
			// 
			// lbl_BusF
			// 
			this->lbl_BusF->AutoSize = true;
			this->lbl_BusF->Location = System::Drawing::Point(222, 456);
			this->lbl_BusF->Name = L"lbl_BusF";
			this->lbl_BusF->Size = System::Drawing::Size(41, 13);
			this->lbl_BusF->TabIndex = 22;
			this->lbl_BusF->Text = L"label21";
			// 
			// lbl_PorE
			// 
			this->lbl_PorE->AutoSize = true;
			this->lbl_PorE->Location = System::Drawing::Point(222, 494);
			this->lbl_PorE->Name = L"lbl_PorE";
			this->lbl_PorE->Size = System::Drawing::Size(41, 13);
			this->lbl_PorE->TabIndex = 23;
			this->lbl_PorE->Text = L"label22";
			// 
			// lbl_PorF
			// 
			this->lbl_PorF->AutoSize = true;
			this->lbl_PorF->Location = System::Drawing::Point(222, 533);
			this->lbl_PorF->Name = L"lbl_PorF";
			this->lbl_PorF->Size = System::Drawing::Size(41, 13);
			this->lbl_PorF->TabIndex = 24;
			this->lbl_PorF->Text = L"label23";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(286, 559);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 25;
			this->button4->Text = L"Busqueda";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// txt_Todo
			// 
			this->txt_Todo->FormattingEnabled = true;
			this->txt_Todo->Location = System::Drawing::Point(74, 83);
			this->txt_Todo->Name = L"txt_Todo";
			this->txt_Todo->Size = System::Drawing::Size(287, 303);
			this->txt_Todo->TabIndex = 26;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 594);
			this->Controls->Add(this->txt_Todo);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->lbl_PorF);
			this->Controls->Add(this->lbl_PorE);
			this->Controls->Add(this->lbl_BusF);
			this->Controls->Add(this->lbl_BusE);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->lbl_Area);
			this->Controls->Add(this->lbl_Per);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Cuadrado^ cuadrado = gcnew Cuadrado();
	double prueba = System::Convert::ToDouble(txt_Cuad->Text);
	lbl_Area->Text = System::Convert::ToString(cuadrado->area(prueba));
	lbl_Per->Text = System::Convert::ToString(cuadrado->perimetro(prueba));
	txt_ApoOtra->Text = "";
	txt_BaseOtra->Text = "";
	txt_LadosOtra->Text = "";
	txt_BasTri->Text = "";
	txt_AltTri->Text = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Triangulo^ triangulo = gcnew Triangulo();
	double BaseT = System::Convert::ToDouble(txt_BasTri->Text);
	double Altura = System::Convert::ToDouble(txt_AltTri->Text);
	lbl_Area->Text = System::Convert::ToString(triangulo->area(BaseT, Altura));
	lbl_Per->Text = System::Convert::ToString(BaseT * 3);
	txt_Cuad->Text = "";
	txt_ApoOtra->Text = "";
	txt_BaseOtra->Text = "";
	txt_LadosOtra->Text = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Formas^ otra = gcnew Formas();
	double Base = System::Convert::ToDouble(txt_BaseOtra->Text);
	double Apotema = System::Convert::ToDouble(txt_ApoOtra->Text);
	int lados = System::Convert::ToInt32(txt_LadosOtra->Text);
	lbl_Area->Text = System::Convert::ToString(otra->area(Base, Apotema, lados));
	lbl_Per->Text = System::Convert::ToString(otra->perimetro(lados, Base));
	txt_Cuad->Text = "";
	txt_BasTri->Text = "";
	txt_AltTri->Text = "";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int vector[100];
	int auxiliar1, auxiliar2, contador1 = 0, contador2 = 0;
	Random^ rand = gcnew Random();
	for (int i = 0; i < 100; i++)
	{
		auxiliar1 = (rand->Next(0, 200));
		vector[i] = auxiliar1;
		txt_Todo->Items->Add("-> No. " + vector[i] + " esta en la posicion " + i);
	}

	for (int j = 0; j < 50; j++)
	{
		auxiliar2 = (rand->Next(0, 200));

		for (int p = 0; p < 100; p++)
		{
			if (auxiliar2 == vector[p])
			{
				contador1++;
			}
		}
	}
	double suma = Convert::ToDouble(contador1) / 50;
	int porcentaje = suma * 100;
	contador2 = 50 - contador1;
	int porcentaje2 = 100 - porcentaje;
	lbl_BusE->Text = Convert::ToString(contador1);
	lbl_BusF->Text = Convert::ToString(contador2);
	lbl_PorE->Text = Convert::ToString(porcentaje);
	lbl_PorF->Text = Convert::ToString(porcentaje2);
}
};
}
