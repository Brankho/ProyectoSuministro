#pragma once

namespace ProyectoSuministroView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoSuministroController;
	using namespace ProyectoSuministroModel;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de frmNuevoRecibo
	/// </summary>
	public ref class frmNuevoRecibo : public System::Windows::Forms::Form
	{
	public:
		frmNuevoRecibo(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmNuevoRecibo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::TextBox^ textBox7;





	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(100, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(483, 420);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Detalles Recibo";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmNuevoRecibo::groupBox1_Enter);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mensual", L"Quincenal" });
			this->comboBox1->Location = System::Drawing::Point(295, 195);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmNuevoRecibo::comboBox1_SelectedIndexChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(295, 234);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(121, 22);
			this->textBox7->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(306, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancelar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmNuevoRecibo::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(139, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Grabar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmNuevoRecibo::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(295, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(121, 22);
			this->textBox3->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(295, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(121, 22);
			this->textBox2->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(295, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 22);
			this->textBox1->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(89, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Periodo Consumo:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(89, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Tarifa:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 161);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Fecha Vencimiento:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(89, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Fecha Emisi�n:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(89, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"C�digo:";
			// 
			// frmNuevoRecibo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(681, 460);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmNuevoRecibo";
			this->Text = L"Nuevo Recibo";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int codigo = Convert::ToInt32(this->textBox1->Text);
	String^ fechaEmision = this->textBox2->Text;
	String^ fechaVencimiento = this->textBox3->Text;
	String^ tarifa = this->comboBox1->Text;
	String^ periodoConsumo = this->textBox7->Text;
	void agregarNuevoUsuario(int codigo, String^fechaEmision, String ^ fechaVencimiento, String ^ tarifa, String ^ periodoConsumo);
	ReciboController^ objReciboController = gcnew ReciboController();
	objReciboController->agregarNuevoRecibo(codigo, fechaEmision, fechaVencimiento, tarifa, periodoConsumo);
	MessageBox::Show("El recibo ha sido a�adido con �xito al sistema");
	this->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
