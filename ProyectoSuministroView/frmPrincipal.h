#pragma once
#include "frmMantResidencial.h"
#include "frmMantUsuario.h"
#include "frmMantRecibo.h"
#include "frmMantProveedor.h"

namespace ProyectoSuministroView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmPrincipal
	/// </summary>
	public ref class frmPrincipal : public System::Windows::Forms::Form
	{
	public:
		frmPrincipal(void)
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
		~frmPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ residencialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoUsuarioToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ reciboToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoReciboToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ proveedorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoProveedorToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->residencialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reciboToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoReciboToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->proveedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoProveedorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->residencialToolStripMenuItem,
					this->usuarioToolStripMenuItem, this->reciboToolStripMenuItem, this->proveedorToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(709, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// residencialToolStripMenuItem
			// 
			this->residencialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoToolStripMenuItem });
			this->residencialToolStripMenuItem->Name = L"residencialToolStripMenuItem";
			this->residencialToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->residencialToolStripMenuItem->Text = L"Residencial";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(272, 26);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento Residencial";
			this->mantenimientoToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoToolStripMenuItem_Click);
			// 
			// usuarioToolStripMenuItem
			// 
			this->usuarioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoUsuarioToolStripMenuItem });
			this->usuarioToolStripMenuItem->Name = L"usuarioToolStripMenuItem";
			this->usuarioToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->usuarioToolStripMenuItem->Text = L"Usuario";
			// 
			// mantenimientoUsuarioToolStripMenuItem
			// 
			this->mantenimientoUsuarioToolStripMenuItem->Name = L"mantenimientoUsuarioToolStripMenuItem";
			this->mantenimientoUsuarioToolStripMenuItem->Size = System::Drawing::Size(247, 26);
			this->mantenimientoUsuarioToolStripMenuItem->Text = L"Mantenimiento Usuario";
			this->mantenimientoUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoUsuarioToolStripMenuItem_Click);
			// 
			// reciboToolStripMenuItem
			// 
			this->reciboToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoReciboToolStripMenuItem });
			this->reciboToolStripMenuItem->Name = L"reciboToolStripMenuItem";
			this->reciboToolStripMenuItem->Size = System::Drawing::Size(69, 24);
			this->reciboToolStripMenuItem->Text = L"Recibo";
			// 
			// mantenimientoReciboToolStripMenuItem
			// 
			this->mantenimientoReciboToolStripMenuItem->Name = L"mantenimientoReciboToolStripMenuItem";
			this->mantenimientoReciboToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->mantenimientoReciboToolStripMenuItem->Text = L"Mantenimiento Recibo";
			this->mantenimientoReciboToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoReciboToolStripMenuItem_Click);
			// 
			// proveedorToolStripMenuItem
			// 
			this->proveedorToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mantenimientoProveedorToolStripMenuItem });
			this->proveedorToolStripMenuItem->Name = L"proveedorToolStripMenuItem";
			this->proveedorToolStripMenuItem->Size = System::Drawing::Size(91, 24);
			this->proveedorToolStripMenuItem->Text = L"Proveedor";
			// 
			// mantenimientoProveedorToolStripMenuItem
			// 
			this->mantenimientoProveedorToolStripMenuItem->Name = L"mantenimientoProveedorToolStripMenuItem";
			this->mantenimientoProveedorToolStripMenuItem->Size = System::Drawing::Size(265, 26);
			this->mantenimientoProveedorToolStripMenuItem->Text = L"Mantenimiento Proveedor";
			this->mantenimientoProveedorToolStripMenuItem->Click += gcnew System::EventHandler(this, &frmPrincipal::mantenimientoProveedorToolStripMenuItem_Click);
			// 
			// frmPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 507);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"frmPrincipal";
			this->Text = L"SistemaSuministro";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mantenimientoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantResidencial^ ventanaMantResidencial = gcnew frmMantResidencial();
		ventanaMantResidencial->MdiParent = this;
		ventanaMantResidencial->Show();//Abrir ventana dentro de MDI
	}
	private: System::Void mantenimientoUsuarioToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		frmMantUsuario^ ventanaMantUsuario = gcnew frmMantUsuario();
		ventanaMantUsuario->MdiParent = this;
		ventanaMantUsuario->Show();
	}
    private: System::Void mantenimientoReciboToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	    frmMantRecibo^ ventanaMantRecibo = gcnew frmMantRecibo();
	    ventanaMantRecibo->MdiParent = this;
		ventanaMantRecibo->Show();
    }
    private: System::Void mantenimientoProveedorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	    frmMantProveedor^ ventanaMantProveedor = gcnew frmMantProveedor();
	    ventanaMantProveedor->MdiParent = this;
		ventanaMantProveedor->Show();
     }
};
}
