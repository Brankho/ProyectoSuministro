#pragma once
#include "frmNuevaResidencial.h"
#include "frmEditarResidencial.h"

namespace ProyectoSuministroView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ProyectoSuministroController;
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;

	/// <summary>
	/// Resumen de frmMantResidencial
	/// </summary>
	public ref class frmMantResidencial : public System::Windows::Forms::Form
	{
	public:
		frmMantResidencial(void)
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
		~frmMantResidencial()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;




	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;



	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(73, 39);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(581, 147);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de B�squeda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantResidencial::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(428, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantResidencial::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"DIAMANTE", L"CASAMAS", L"VIVALEGRE" });
			this->comboBox1->Location = System::Drawing::Point(195, 61);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(144, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantResidencial::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Constructora";
			this->label1->Click += gcnew System::EventHandler(this, &frmMantResidencial::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->column4,
					this->Column1, this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(73, 192);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(988, 252);
			this->dataGridView1->TabIndex = 1;
			// 
			// column4
			// 
			this->column4->HeaderText = L"Constructora";
			this->column4->MinimumWidth = 6;
			this->column4->Name = L"column4";
			this->column4->Width = 125;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Cantidad Bloques";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Cantidad Departamentos";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Cantidad Tanques";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(337, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantResidencial::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(533, 462);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &frmMantResidencial::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(733, 462);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &frmMantResidencial::button4_Click);
			// 
			// frmMantResidencial
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 523);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantResidencial";
			this->Text = L"Mantenimiento Residencial";
			this->Load += gcnew System::EventHandler(this, &frmMantResidencial::frmMantResidencial_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^constructoraResidencial=this->comboBox1->Text;
		constructoraResidencial;
		ResidencialController^ objResidencialController = gcnew ResidencialController();
		List<Residencial^>^ listaResidenciales = objResidencialController->buscarResidencialxConstructora(constructoraResidencial);
		mostrarGrilla(listaResidenciales);
	}
	private:void mostrarGrilla(List<Residencial^>^ listaResidenciales) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaResidenciales->Count; i++) {
			Residencial^ objResidencial = listaResidenciales[i];
			array<String^>^ filaGrilla = gcnew array<String^>(4);
			filaGrilla[0] = objResidencial->getconstructora(); //Devuelve enteros
			filaGrilla[1] = Convert::ToString(objResidencial->getcantBloques());
			filaGrilla[2] = Convert::ToString(objResidencial->getcantDepartamentos());
			filaGrilla[3] = Convert::ToString(objResidencial->getcantTanques());
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

    }
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	frmNuevaResidencial^ ventanaNuevaResidencial = gcnew frmNuevaResidencial();
	ventanaNuevaResidencial->ShowDialog(); //Ventana como modal
}
private: System::Void frmMantResidencial_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
	String^constructoraEditar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	ResidencialController^ objResidencialController = gcnew ResidencialController();
	Residencial^ objResidencial = objResidencialController->buscarResidencialxCons(constructoraEditar);
	frmEditarResidencial^ ventanaEditarResidencial = gcnew frmEditarResidencial(objResidencial);
	ventanaEditarResidencial->ShowDialog();
	this->dataGridView1->Rows->Clear();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int filaSeleccionada = this->dataGridView1->SelectedRows[0]->Index; /*Le pongo [0] porque deseo el �ndice de la �nica fila que he seleccionado*/
	String^constructoraEliminar = this->dataGridView1->Rows[filaSeleccionada]->Cells[0]->Value->ToString();
	ResidencialController^ objResidencialController = gcnew ResidencialController();
	objResidencialController->eliminarResidencial(constructoraEliminar);
	MessageBox::Show("La residencial seleccionada ha sido eliminado correctamente");
	this->dataGridView1->Rows->Clear();
}
};
}
