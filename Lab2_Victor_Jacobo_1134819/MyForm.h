#pragma once
#include "Poligono.h"

namespace Lab2VictorJacobo1134819 {

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
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnPerimetro;

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
	private: System::Windows::Forms::TextBox^ Ltxt1;
	private: System::Windows::Forms::TextBox^ Ltxt2;
	private: System::Windows::Forms::TextBox^ Ltxt3;
	private: System::Windows::Forms::TextBox^ Ltxt4;
	private: System::Windows::Forms::TextBox^ Ltxt5;
	private: System::Windows::Forms::TextBox^ Ltxt10;
	private: System::Windows::Forms::TextBox^ Ltxt9;
	private: System::Windows::Forms::TextBox^ Ltxt8;
	private: System::Windows::Forms::TextBox^ Ltxt7;
	private: System::Windows::Forms::TextBox^ Ltxt6;
	private: System::Windows::Forms::Label^ lblPerimetro;
	private: System::Windows::Forms::Button^ btnArea;

	private: System::Windows::Forms::Label^ lblArea;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ txtAltura;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ txtApotema;





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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnPerimetro = (gcnew System::Windows::Forms::Button());
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
			this->Ltxt1 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt2 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt3 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt4 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt5 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt10 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt9 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt8 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt7 = (gcnew System::Windows::Forms::TextBox());
			this->Ltxt6 = (gcnew System::Windows::Forms::TextBox());
			this->lblPerimetro = (gcnew System::Windows::Forms::Label());
			this->btnArea = (gcnew System::Windows::Forms::Button());
			this->lblArea = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->txtAltura = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->txtApotema = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Figura";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Triangulo", L"Cuadrilatero", L"Pentagono", L"Hexagono",
					L"Heptagono", L"Octagono", L"Eneagono", L"Decagono"
			});
			this->comboBox1->Location = System::Drawing::Point(102, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(191, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// btnPerimetro
			// 
			this->btnPerimetro->Location = System::Drawing::Point(77, 346);
			this->btnPerimetro->Name = L"btnPerimetro";
			this->btnPerimetro->Size = System::Drawing::Size(134, 24);
			this->btnPerimetro->TabIndex = 2;
			this->btnPerimetro->Text = L"Calcular Perimetro";
			this->btnPerimetro->UseVisualStyleBackColor = true;
			this->btnPerimetro->Click += gcnew System::EventHandler(this, &MyForm::btnPerimetro_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(50, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Lado 1";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Lado 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(50, 195);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Lado 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(50, 228);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 17);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Lado 4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(50, 260);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 17);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Lado 5";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(316, 260);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Lado 10";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(316, 228);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(52, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Lado 9";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(316, 195);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 17);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Lado 8";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(316, 160);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Lado 7";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(316, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 17);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Lado 6";
			// 
			// Ltxt1
			// 
			this->Ltxt1->Location = System::Drawing::Point(131, 118);
			this->Ltxt1->Name = L"Ltxt1";
			this->Ltxt1->Size = System::Drawing::Size(100, 22);
			this->Ltxt1->TabIndex = 13;
			// 
			// Ltxt2
			// 
			this->Ltxt2->Location = System::Drawing::Point(131, 157);
			this->Ltxt2->Name = L"Ltxt2";
			this->Ltxt2->Size = System::Drawing::Size(100, 22);
			this->Ltxt2->TabIndex = 14;
			// 
			// Ltxt3
			// 
			this->Ltxt3->Location = System::Drawing::Point(131, 192);
			this->Ltxt3->Name = L"Ltxt3";
			this->Ltxt3->Size = System::Drawing::Size(100, 22);
			this->Ltxt3->TabIndex = 15;
			// 
			// Ltxt4
			// 
			this->Ltxt4->Location = System::Drawing::Point(131, 225);
			this->Ltxt4->Name = L"Ltxt4";
			this->Ltxt4->Size = System::Drawing::Size(100, 22);
			this->Ltxt4->TabIndex = 16;
			// 
			// Ltxt5
			// 
			this->Ltxt5->Location = System::Drawing::Point(131, 255);
			this->Ltxt5->Name = L"Ltxt5";
			this->Ltxt5->Size = System::Drawing::Size(100, 22);
			this->Ltxt5->TabIndex = 17;
			// 
			// Ltxt10
			// 
			this->Ltxt10->Location = System::Drawing::Point(411, 255);
			this->Ltxt10->Name = L"Ltxt10";
			this->Ltxt10->Size = System::Drawing::Size(100, 22);
			this->Ltxt10->TabIndex = 22;
			// 
			// Ltxt9
			// 
			this->Ltxt9->Location = System::Drawing::Point(411, 225);
			this->Ltxt9->Name = L"Ltxt9";
			this->Ltxt9->Size = System::Drawing::Size(100, 22);
			this->Ltxt9->TabIndex = 21;
			// 
			// Ltxt8
			// 
			this->Ltxt8->Location = System::Drawing::Point(411, 192);
			this->Ltxt8->Name = L"Ltxt8";
			this->Ltxt8->Size = System::Drawing::Size(100, 22);
			this->Ltxt8->TabIndex = 20;
			// 
			// Ltxt7
			// 
			this->Ltxt7->Location = System::Drawing::Point(411, 157);
			this->Ltxt7->Name = L"Ltxt7";
			this->Ltxt7->Size = System::Drawing::Size(100, 22);
			this->Ltxt7->TabIndex = 19;
			// 
			// Ltxt6
			// 
			this->Ltxt6->Location = System::Drawing::Point(411, 118);
			this->Ltxt6->Name = L"Ltxt6";
			this->Ltxt6->Size = System::Drawing::Size(100, 22);
			this->Ltxt6->TabIndex = 18;
			// 
			// lblPerimetro
			// 
			this->lblPerimetro->AutoSize = true;
			this->lblPerimetro->Location = System::Drawing::Point(239, 350);
			this->lblPerimetro->Name = L"lblPerimetro";
			this->lblPerimetro->Size = System::Drawing::Size(77, 17);
			this->lblPerimetro->TabIndex = 23;
			this->lblPerimetro->Text = L"Perimetro: ";
			// 
			// btnArea
			// 
			this->btnArea->Location = System::Drawing::Point(375, 343);
			this->btnArea->Name = L"btnArea";
			this->btnArea->Size = System::Drawing::Size(134, 24);
			this->btnArea->TabIndex = 24;
			this->btnArea->Text = L"Calcular Area";
			this->btnArea->UseVisualStyleBackColor = true;
			this->btnArea->Click += gcnew System::EventHandler(this, &MyForm::btnArea_Click);
			// 
			// lblArea
			// 
			this->lblArea->AutoSize = true;
			this->lblArea->Location = System::Drawing::Point(541, 347);
			this->lblArea->Name = L"lblArea";
			this->lblArea->Size = System::Drawing::Size(46, 17);
			this->lblArea->TabIndex = 25;
			this->lblArea->Text = L"Area: ";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(554, 121);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(127, 17);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Altura del triangulo";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm::label12_Click);
			// 
			// txtAltura
			// 
			this->txtAltura->Location = System::Drawing::Point(731, 118);
			this->txtAltura->Name = L"txtAltura";
			this->txtAltura->Size = System::Drawing::Size(100, 22);
			this->txtAltura->TabIndex = 27;
			this->txtAltura->TextChanged += gcnew System::EventHandler(this, &MyForm::txtAltura_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(554, 177);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(171, 17);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Apotema de los poligonos";
			// 
			// txtApotema
			// 
			this->txtApotema->Location = System::Drawing::Point(731, 174);
			this->txtApotema->Name = L"txtApotema";
			this->txtApotema->Size = System::Drawing::Size(100, 22);
			this->txtApotema->TabIndex = 29;
			this->txtApotema->TextChanged += gcnew System::EventHandler(this, &MyForm::txtApotema_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1008, 408);
			this->Controls->Add(this->txtApotema);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->txtAltura);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->lblArea);
			this->Controls->Add(this->btnArea);
			this->Controls->Add(this->lblPerimetro);
			this->Controls->Add(this->Ltxt10);
			this->Controls->Add(this->Ltxt9);
			this->Controls->Add(this->Ltxt8);
			this->Controls->Add(this->Ltxt7);
			this->Controls->Add(this->Ltxt6);
			this->Controls->Add(this->Ltxt5);
			this->Controls->Add(this->Ltxt4);
			this->Controls->Add(this->Ltxt3);
			this->Controls->Add(this->Ltxt2);
			this->Controls->Add(this->Ltxt1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnPerimetro);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Lab 2 Figuras";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtAltura_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void txtApotema_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int SelectedIndex = comboBox1->SelectedIndex;
	this->HideElements();

	switch (SelectedIndex)
	{
	case 0:
		this->AskTriangulo();
		break;
	case 1:
		this->AskCuadrado();
		break;
	case 2:
		this->AskPentagono();
		break;
	case 3:
		this->AskHexagono();
		break;
	case 4:
		this->AskHeptagono();
		break;
	case 5:
		this->AskOctagono();
		break;
	case 6:
		this->AskEneagono();
		break;
	case 7:
		this->AskDecagono();
		break;
	}
}
	public: System::Void HideElements()
	{
		this->Ltxt1->Visible = false;
		this->Ltxt2->Visible = false;
		this->Ltxt3->Visible = false;
		this->Ltxt4->Visible = false;
		this->Ltxt5->Visible = false;
		this->Ltxt6->Visible = false;
		this->Ltxt7->Visible = false;
		this->Ltxt8->Visible = false;
		this->Ltxt9->Visible = false;
		this->Ltxt10->Visible = false;
		this->txtAltura->Visible = false;
		this->txtApotema->Visible = false;
		this->btnArea->Visible = false;

		this->label2->Visible = false;
		this->label3->Visible = false;
		this->label4->Visible = false;
		this->label5->Visible = false;
		this->label6->Visible = false;
		this->label10->Visible = false;
		this->label11->Visible = false;
		this->label7->Visible = false;
		this->label8->Visible = false;
		this->label9->Visible = false;
		this->label12->Visible = false;
		this->label13->Visible = false;
	}
	public:System::Void AskTriangulo()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
	}
	public:System::Void AskCuadrado()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
	}
	public:System::Void AskPentagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
	}
	public:System::Void AskHexagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label11->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
		this->Ltxt6->Visible = true;
	}
	public:System::Void AskHeptagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label11->Visible = true;
		this->label10->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
		this->Ltxt6->Visible = true;
		this->Ltxt7->Visible = true;
	}
	public:System::Void AskOctagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label11->Visible = true;
		this->label10->Visible = true;
		this->label9->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
		this->Ltxt6->Visible = true;
		this->Ltxt7->Visible = true;
		this->Ltxt8->Visible = true;
	}
	public:System::Void AskEneagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label11->Visible = true;
		this->label10->Visible = true;
		this->label9->Visible = true;
		this->label8->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
		this->Ltxt6->Visible = true;
		this->Ltxt7->Visible = true;
		this->Ltxt8->Visible = true;
		this->Ltxt9->Visible = true;
	}
	public:System::Void AskDecagono()
	{
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->label5->Visible = true;
		this->label6->Visible = true;
		this->label11->Visible = true;
		this->label10->Visible = true;
		this->label9->Visible = true;
		this->label8->Visible = true;
		this->label7->Visible = true;

		this->Ltxt1->Visible = true;
		this->Ltxt2->Visible = true;
		this->Ltxt3->Visible = true;
		this->Ltxt4->Visible = true;
		this->Ltxt5->Visible = true;
		this->Ltxt6->Visible = true;
		this->Ltxt7->Visible = true;
		this->Ltxt8->Visible = true;
		this->Ltxt9->Visible = true;
		this->Ltxt10->Visible = true;
	}
	public:System::Void PerimetroTriangulo()
	{
		Poligono triangulo = Poligono();
		triangulo.l1 = Convert::ToDouble(this->Ltxt1->Text);
		triangulo.l2 = Convert::ToDouble(this->Ltxt2->Text);
		triangulo.l3 = Convert::ToDouble(this->Ltxt3->Text);

		lblPerimetro->Text = "Perimetro: " + triangulo.PerimetroTriangulo().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroCuadrado()
	{
		Poligono cuadrado = Poligono();
		cuadrado.l1 = Convert::ToDouble(this->Ltxt1->Text);
		cuadrado.l2 = Convert::ToDouble(this->Ltxt2->Text);
		cuadrado.l3 = Convert::ToDouble(this->Ltxt3->Text);
		cuadrado.l4 = Convert::ToDouble(this->Ltxt4->Text);

		lblPerimetro->Text = "Perimetro: " + cuadrado.PerimetroCuadrado().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroPentagono()
	{
		Poligono pentagono = Poligono();
		pentagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		pentagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		pentagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		pentagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		pentagono.l5 = Convert::ToDouble(this->Ltxt5->Text);

		lblPerimetro->Text = "Perimetro: " + pentagono.PerimetroPentagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroHexagono()
	{
		Poligono hexagono = Poligono();
		hexagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		hexagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		hexagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		hexagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		hexagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		hexagono.l6 = Convert::ToDouble(this->Ltxt6->Text);

		lblPerimetro->Text = "Perimetro: " + hexagono.PerimetroHexagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroHeptagono()
	{
		Poligono heptagono = Poligono();
		heptagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		heptagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		heptagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		heptagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		heptagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		heptagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		heptagono.l7 = Convert::ToDouble(this->Ltxt7->Text);

		lblPerimetro->Text = "Perimetro: " + heptagono.PerimetroHeptagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroOctagono()
	{
		Poligono octagono = Poligono();
		octagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		octagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		octagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		octagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		octagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		octagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		octagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		octagono.l8 = Convert::ToDouble(this->Ltxt8->Text);

		lblPerimetro->Text = "Perimetro: " + octagono.PerimetroOctagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroEneagono()
	{
		Poligono eneagono = Poligono();
		eneagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		eneagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		eneagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		eneagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		eneagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		eneagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		eneagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		eneagono.l8 = Convert::ToDouble(this->Ltxt8->Text);
		eneagono.l9 = Convert::ToDouble(this->Ltxt9->Text);

		lblPerimetro->Text = "Perimetro: " + eneagono.PerimetroEneagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
	public:System::Void PerimetroDecagono()
	{
		Poligono decagono = Poligono();
		decagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		decagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		decagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		decagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		decagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		decagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		decagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		decagono.l8 = Convert::ToDouble(this->Ltxt8->Text);
		decagono.l9 = Convert::ToDouble(this->Ltxt9->Text);
		decagono.l10 = Convert::ToDouble(this->Ltxt10->Text);

		lblPerimetro->Text = "Perimetro: " + decagono.PerimetroDecagono().ToString();
		this->btnArea->Visible = true;
		this->txtAltura->Visible = true;
		this->txtApotema->Visible = true;
		this->label12->Visible = true;
		this->label13->Visible = true;
	}
private: System::Void btnPerimetro_Click(System::Object^ sender, System::EventArgs^ e) {
	int SelectedIndex = comboBox1->SelectedIndex;
	switch (SelectedIndex)
	{
	case 0:
		this->PerimetroTriangulo();
		break;
	case 1:
		this->PerimetroCuadrado();
		break;
	case 2:
		this->PerimetroPentagono();
		break;
	case 3:
		this->PerimetroHexagono();
		break;
	case 4:
		this->PerimetroHeptagono();
		break;
	case 5:
		this->PerimetroOctagono();
		break;
	case 6:
		this->PerimetroEneagono();
		break;
	case 7:
		this->PerimetroDecagono();
		break;
	}
}
	public:System::Void AreaTriangulo()
	{
		Poligono triangulo = Poligono();
		triangulo.H = Convert::ToDouble(this->txtAltura->Text);
		triangulo.l1 = Convert::ToDouble(this->Ltxt1->Text);
		triangulo.l2 = Convert::ToDouble(this->Ltxt2->Text);
		triangulo.l3 = Convert::ToDouble(this->Ltxt3->Text);
		lblArea->Text = "Area: " + triangulo.AreaTriangulo().ToString();
	}
	public:System::Void AreaCuadrado()
	{
		Poligono cuadrado = Poligono();
		cuadrado.l1 = Convert::ToDouble(this->Ltxt1->Text);
		cuadrado.l2 = Convert::ToDouble(this->Ltxt2->Text);
		cuadrado.l3 = Convert::ToDouble(this->Ltxt3->Text);
		cuadrado.l4 = Convert::ToDouble(this->Ltxt4->Text);
		lblArea->Text = "Area: " + cuadrado.AreaCuadrado().ToString();
	}
	public:System::Void AreaPentagono()
	{
		Poligono pentagono = Poligono();
		pentagono.A = Convert::ToDouble(this->txtApotema->Text);
		pentagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		pentagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		pentagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		pentagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		pentagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		lblArea->Text = "Area: " + pentagono.AreaPentagono().ToString();
	}
	public:System::Void AreaHexagono()
	{
		Poligono hexagono = Poligono();
		hexagono.A = Convert::ToDouble(this->txtApotema->Text);
		hexagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		hexagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		hexagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		hexagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		hexagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		hexagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		lblArea->Text = "Area: " + hexagono.AreaHexagono().ToString();
	}
	public:System::Void AreaHeptagono()
	{
		Poligono heptagono = Poligono();
		heptagono.A = Convert::ToDouble(this->txtApotema->Text);
		heptagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		heptagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		heptagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		heptagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		heptagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		heptagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		heptagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		lblArea->Text = "Area: " + heptagono.AreaHeptagono().ToString();
	}
	public:System::Void AreaOctagono()
	{
		Poligono octagono = Poligono();
		octagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		octagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		octagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		octagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		octagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		octagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		octagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		octagono.l8 = Convert::ToDouble(this->Ltxt8->Text);
		lblArea->Text = "Area: " + octagono.AreaOctagono().ToString();
	}
	public:System::Void AreaEneagono()
	{
		Poligono eneagono = Poligono();
		eneagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		eneagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		eneagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		eneagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		eneagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		eneagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		eneagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		eneagono.l8 = Convert::ToDouble(this->Ltxt8->Text);
		eneagono.l9 = Convert::ToDouble(this->Ltxt9->Text);
		lblArea->Text = "Area: " + eneagono.AreaEneagono().ToString();
	}
	public:System::Void AreaDecagono()
	{
		Poligono decagono = Poligono();
		decagono.l1 = Convert::ToDouble(this->Ltxt1->Text);
		decagono.l2 = Convert::ToDouble(this->Ltxt2->Text);
		decagono.l3 = Convert::ToDouble(this->Ltxt3->Text);
		decagono.l4 = Convert::ToDouble(this->Ltxt4->Text);
		decagono.l5 = Convert::ToDouble(this->Ltxt5->Text);
		decagono.l6 = Convert::ToDouble(this->Ltxt6->Text);
		decagono.l7 = Convert::ToDouble(this->Ltxt7->Text);
		decagono.l8 = Convert::ToDouble(this->Ltxt8->Text);
		decagono.l9 = Convert::ToDouble(this->Ltxt9->Text);
		decagono.l10 = Convert::ToDouble(this->Ltxt10->Text);
		lblArea->Text = "Area: " + decagono.AreaDecagono().ToString();
	}

private: System::Void btnArea_Click(System::Object^ sender, System::EventArgs^ e) {
	int SelectedIndex = comboBox1->SelectedIndex;
	switch (SelectedIndex)
	{
	case 0:
		this->AreaTriangulo();
		break;
	case 1:
		this->AreaCuadrado();
		break;
	case 2:
		this->AreaPentagono();
		break;
	case 3:
		this->AreaHexagono();
		break;
	case 4:
		this->AreaHeptagono();
		break;
	case 5:
		this->AreaOctagono();
		break;
	case 6:
		this->AreaEneagono();
		break;
	case 7:
		this->AreaDecagono();
		break;
	}
}
};
}
