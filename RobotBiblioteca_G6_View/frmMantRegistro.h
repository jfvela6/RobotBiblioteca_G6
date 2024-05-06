#pragma once
#include "frmNuevoRegistro.h"

namespace RobotBiblioteca_G6_View {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RobotBiblioteca_G6_Controller;
	using namespace System::Collections::Generic;
	using namespace RobotBiblioteca_G6_Model;

	/// <summary>
	/// Resumen de frmMantRegistro
	/// </summary>
	public ref class frmMantRegistro : public System::Windows::Forms::Form
	{
	public:
		frmMantRegistro(void)
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
		~frmMantRegistro()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(772, 406);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Criterios de Búsqueda";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &frmMantRegistro::groupBox1_Enter);
			this->button1->Location = System::Drawing::Point(450, 54);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(74, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Buscar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &frmMantRegistro::button1_Click);
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Estudiante", L"Profesor", L"Administrador" });
			this->comboBox1->Location = System::Drawing::Point(290, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &frmMantRegistro::comboBox1_SelectedIndexChanged);
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(221, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Cuenta:";
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1, this->Column2,
					this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 95);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(740, 281);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmMantRegistro::dataGridView1_CellContentClick);
			this->Column1->HeaderText = L"Código";
			this->Column1->Name = L"Column1";
			this->Column2->HeaderText = L"Dirección";
			this->Column2->Name = L"Column2";
			this->Column3->HeaderText = L"Teléfono";
			this->Column3->Name = L"Column3";
			this->Column4->HeaderText = L"Cuenta";
			this->Column4->Name = L"Column4";
			this->Column5->HeaderText = L"DNI";
			this->Column5->Name = L"Column5";
			this->Column6->HeaderText = L"Correo";
			this->Column6->Name = L"Column6";
			this->Column7->HeaderText = L"Contraseña";
			this->Column7->Name = L"Column7";
			this->button2->Location = System::Drawing::Point(122, 424);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(74, 24);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Nuevo";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &frmMantRegistro::button2_Click);
			this->button3->Location = System::Drawing::Point(339, 424);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 24);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Editar";
			this->button3->UseVisualStyleBackColor = true;
			this->button4->Location = System::Drawing::Point(563, 424);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(74, 24);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Eliminar";
			this->button4->UseVisualStyleBackColor = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(796, 505);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"frmMantRegistro";
			this->Text = L"Mantenimiento de Registros";
			this->Load += gcnew System::EventHandler(this, &frmMantRegistro::frmMantRegistro_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ cuentaRegistro = this->comboBox1->Text;
		RegistroController^ objRegistroController = gcnew RegistroController();
		List<Registro^>^ listaRegistro = objRegistroController->buscarRegistrosxCuenta(cuentaRegistro);
		mostrarGrilla(listaRegistro);
	}

	private: void mostrarGrilla(List<Registro^>^ listaRegistro) {
		this->dataGridView1->Rows->Clear();
		for (int i = 0; i < listaRegistro->Count; i++) {
			Registro^ objRegistro = listaRegistro[i];
			array<String^>^ filaGrilla = gcnew array<String^>(7);
			filaGrilla[0] = Convert::ToString(objRegistro->getCodigo());
			filaGrilla[1] = objRegistro->getDireccion();
			filaGrilla[2] = objRegistro->getTelefono();
			filaGrilla[3] = objRegistro->getCuenta();
			filaGrilla[4] = objRegistro->getDNI();
			filaGrilla[5] = objRegistro->getCorreo();
			filaGrilla[6] = objRegistro->getContraseña();
			this->dataGridView1->Rows->Add(filaGrilla);
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		frmNuevoRegistro^ ventanaNuevoRegistro = gcnew frmNuevoRegistro();
		ventanaNuevoRegistro->ShowDialog(); /*Voy a mostrar la ventana como una ventana modal*/
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void frmMantRegistro_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
