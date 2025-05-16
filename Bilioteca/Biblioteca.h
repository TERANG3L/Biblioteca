#pragma once

namespace Bilioteca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	public ref class Biblioteca : public System::Windows::Forms::Form
	{
	public:
		Biblioteca(void)
		{
			InitializeComponent();
			CargarLibros();
			CargarReservas();
		}

	protected:
		~Biblioteca()
		{
			if (components)
			{
				delete components;
			}
		}
    //Declrador de controles
	private: System::Windows::Forms::Panel^ PANEL_REG;
	private: System::Windows::Forms::Label^ LBL_GEN;
	private: System::Windows::Forms::Label^ LBL_AUT;
	private: System::Windows::Forms::Label^ LBL_NOM;
	private: System::Windows::Forms::TextBox^ TXT_GEN;
	private: System::Windows::Forms::TextBox^ TXT_AUT;
	private: System::Windows::Forms::TextBox^ TXT_NOM;
	private: System::Windows::Forms::Button^ BTN_LIMPIAR;
	private: System::Windows::Forms::Button^ BTN_GUARDAR;
	private: System::Windows::Forms::Panel^ PANEL_RESERVA;
	private: System::Windows::Forms::TextBox^ TXT_LIBRO_RESERVA;
	private: System::Windows::Forms::TextBox^ TXT_NOM_LECTOR;
	private: System::Windows::Forms::Label^ LBL_NOM_LECTOR;
	private: System::Windows::Forms::Label^ LBL_NOM_LIB;
	private: System::Windows::Forms::Button^ BTN_LIMPIAR_RESERVA;
	private: System::Windows::Forms::Button^ BTN_SAVE_RESERVA;
	private: System::Windows::Forms::DateTimePicker^ DATE_TIME;
	private: System::Windows::Forms::Button^ BTN_REGISTROS;
	private: System::Windows::Forms::DataGridView^ DATE_WIEW;
	private: System::Windows::Forms::Button^ BTN_BORRAR;
	private: System::Windows::Forms::DataGridView^ DATA_WIEW_LIBROS;
	private: System::Windows::Forms::Button^ BTN_VER_RESERVA;
	private: System::Windows::Forms::Button^ BTN_SELECCIONAR_ARCHIVO;
	private: System::Windows::Forms::TextBox^ TXT_RUTA_ARCHIVO;
	private: System::Windows::Forms::Button^ BTN_ENTREGAS;
	private: System::Windows::Forms::Button^ BTN_CERRAR_RESERVA;
	private: System::Windows::Forms::DataGridView^ DATA_WIEW_ENTREGAS;
	private: System::Windows::Forms::PictureBox^ PIC_BIBLIOTECA;
	private: System::Windows::Forms::Label^ TXT_BIBLIOTECA;
	private: System::Windows::Forms::ProgressBar^ PROGRES;
	private: System::Windows::Forms::TextBox^ TXT_BUSQUEDA;
	private: System::Windows::Forms::Label^ LBL_BUSQUEDA;
	private: System::Windows::Forms::CheckBox^ CHK_CON_ARCHIVO;



    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		   //inicializador de componentes
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Biblioteca::typeid));
			   this->PANEL_REG = (gcnew System::Windows::Forms::Panel());
			   this->BTN_LIMPIAR = (gcnew System::Windows::Forms::Button());
			   this->BTN_GUARDAR = (gcnew System::Windows::Forms::Button());
			   this->LBL_GEN = (gcnew System::Windows::Forms::Label());
			   this->LBL_AUT = (gcnew System::Windows::Forms::Label());
			   this->LBL_NOM = (gcnew System::Windows::Forms::Label());
			   this->TXT_GEN = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_AUT = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_NOM = (gcnew System::Windows::Forms::TextBox());
			   this->BTN_SELECCIONAR_ARCHIVO = (gcnew System::Windows::Forms::Button());
			   this->TXT_RUTA_ARCHIVO = (gcnew System::Windows::Forms::TextBox());
			   this->CHK_CON_ARCHIVO = (gcnew System::Windows::Forms::CheckBox());
			   this->PANEL_RESERVA = (gcnew System::Windows::Forms::Panel());
			   this->DATE_TIME = (gcnew System::Windows::Forms::DateTimePicker());
			   this->BTN_LIMPIAR_RESERVA = (gcnew System::Windows::Forms::Button());
			   this->BTN_SAVE_RESERVA = (gcnew System::Windows::Forms::Button());
			   this->LBL_NOM_LECTOR = (gcnew System::Windows::Forms::Label());
			   this->LBL_NOM_LIB = (gcnew System::Windows::Forms::Label());
			   this->TXT_LIBRO_RESERVA = (gcnew System::Windows::Forms::TextBox());
			   this->TXT_NOM_LECTOR = (gcnew System::Windows::Forms::TextBox());
			   this->BTN_REGISTROS = (gcnew System::Windows::Forms::Button());
			   this->DATE_WIEW = (gcnew System::Windows::Forms::DataGridView());
			   this->BTN_BORRAR = (gcnew System::Windows::Forms::Button());
			   this->DATA_WIEW_LIBROS = (gcnew System::Windows::Forms::DataGridView());
			   this->BTN_VER_RESERVA = (gcnew System::Windows::Forms::Button());
			   this->BTN_ENTREGAS = (gcnew System::Windows::Forms::Button());
			   this->BTN_CERRAR_RESERVA = (gcnew System::Windows::Forms::Button());
			   this->DATA_WIEW_ENTREGAS = (gcnew System::Windows::Forms::DataGridView());
			   this->PIC_BIBLIOTECA = (gcnew System::Windows::Forms::PictureBox());
			   this->TXT_BIBLIOTECA = (gcnew System::Windows::Forms::Label());
			   this->PROGRES = (gcnew System::Windows::Forms::ProgressBar());
			   this->LBL_BUSQUEDA = (gcnew System::Windows::Forms::Label());
			   this->TXT_BUSQUEDA = (gcnew System::Windows::Forms::TextBox());
			   this->PANEL_REG->SuspendLayout();
			   this->PANEL_RESERVA->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATE_WIEW))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATA_WIEW_LIBROS))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATA_WIEW_ENTREGAS))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC_BIBLIOTECA))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // PANEL_REG
			   // 
			   this->PANEL_REG->Controls->Add(this->BTN_LIMPIAR);
			   this->PANEL_REG->Controls->Add(this->BTN_GUARDAR);
			   this->PANEL_REG->Controls->Add(this->LBL_GEN);
			   this->PANEL_REG->Controls->Add(this->LBL_AUT);
			   this->PANEL_REG->Controls->Add(this->LBL_NOM);
			   this->PANEL_REG->Controls->Add(this->TXT_GEN);
			   this->PANEL_REG->Controls->Add(this->TXT_AUT);
			   this->PANEL_REG->Controls->Add(this->TXT_NOM);
			   this->PANEL_REG->Controls->Add(this->BTN_SELECCIONAR_ARCHIVO);
			   this->PANEL_REG->Controls->Add(this->TXT_RUTA_ARCHIVO);
			   this->PANEL_REG->Controls->Add(this->CHK_CON_ARCHIVO);
			   this->PANEL_REG->Location = System::Drawing::Point(107, 12);
			   this->PANEL_REG->Name = L"PANEL_REG";
			   this->PANEL_REG->Size = System::Drawing::Size(159, 247);
			   this->PANEL_REG->TabIndex = 1;
			   // 
			   // BTN_LIMPIAR
			   // 
			   this->BTN_LIMPIAR->Location = System::Drawing::Point(87, 158);
			   this->BTN_LIMPIAR->Name = L"BTN_LIMPIAR";
			   this->BTN_LIMPIAR->Size = System::Drawing::Size(69, 26);
			   this->BTN_LIMPIAR->TabIndex = 6;
			   this->BTN_LIMPIAR->Text = L"Limpiar";
			   this->BTN_LIMPIAR->UseVisualStyleBackColor = true;
			   this->BTN_LIMPIAR->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_LIMPIAR_Click);
			   // 
			   // BTN_GUARDAR
			   // 
			   this->BTN_GUARDAR->Location = System::Drawing::Point(3, 158);
			   this->BTN_GUARDAR->Name = L"BTN_GUARDAR";
			   this->BTN_GUARDAR->Size = System::Drawing::Size(69, 26);
			   this->BTN_GUARDAR->TabIndex = 5;
			   this->BTN_GUARDAR->Text = L"Guardar";
			   this->BTN_GUARDAR->UseVisualStyleBackColor = true;
			   this->BTN_GUARDAR->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_GUARDAR_Click);
			   // 
			   // LBL_GEN
			   // 
			   this->LBL_GEN->AutoSize = true;
			   this->LBL_GEN->Location = System::Drawing::Point(3, 93);
			   this->LBL_GEN->Name = L"LBL_GEN";
			   this->LBL_GEN->Size = System::Drawing::Size(42, 13);
			   this->LBL_GEN->TabIndex = 4;
			   this->LBL_GEN->Text = L"Genero";
			   // 
			   // LBL_AUT
			   // 
			   this->LBL_AUT->AutoSize = true;
			   this->LBL_AUT->Location = System::Drawing::Point(3, 46);
			   this->LBL_AUT->Name = L"LBL_AUT";
			   this->LBL_AUT->Size = System::Drawing::Size(32, 13);
			   this->LBL_AUT->TabIndex = 3;
			   this->LBL_AUT->Text = L"Autor";
			   // 
			   // LBL_NOM
			   // 
			   this->LBL_NOM->AutoSize = true;
			   this->LBL_NOM->Location = System::Drawing::Point(3, 1);
			   this->LBL_NOM->Name = L"LBL_NOM";
			   this->LBL_NOM->Size = System::Drawing::Size(83, 13);
			   this->LBL_NOM->TabIndex = 2;
			   this->LBL_NOM->Text = L"Nombre del libro";
			   // 
			   // TXT_GEN
			   // 
			   this->TXT_GEN->Location = System::Drawing::Point(3, 109);
			   this->TXT_GEN->Name = L"TXT_GEN";
			   this->TXT_GEN->Size = System::Drawing::Size(153, 20);
			   this->TXT_GEN->TabIndex = 2;
			   // 
			   // TXT_AUT
			   // 
			   this->TXT_AUT->Location = System::Drawing::Point(3, 62);
			   this->TXT_AUT->Name = L"TXT_AUT";
			   this->TXT_AUT->Size = System::Drawing::Size(153, 20);
			   this->TXT_AUT->TabIndex = 1;
			   // 
			   // TXT_NOM
			   // 
			   this->TXT_NOM->Location = System::Drawing::Point(3, 17);
			   this->TXT_NOM->Name = L"TXT_NOM";
			   this->TXT_NOM->ReadOnly = true;
			   this->TXT_NOM->Size = System::Drawing::Size(153, 20);
			   this->TXT_NOM->TabIndex = 0;
			   // 
			   // BTN_SELECCIONAR_ARCHIVO
			   // 
			   this->BTN_SELECCIONAR_ARCHIVO->Location = System::Drawing::Point(3, 190);
			   this->BTN_SELECCIONAR_ARCHIVO->Name = L"BTN_SELECCIONAR_ARCHIVO";
			   this->BTN_SELECCIONAR_ARCHIVO->Size = System::Drawing::Size(153, 23);
			   this->BTN_SELECCIONAR_ARCHIVO->TabIndex = 7;
			   this->BTN_SELECCIONAR_ARCHIVO->Text = L"Seleccionar Archivo";
			   this->BTN_SELECCIONAR_ARCHIVO->UseVisualStyleBackColor = true;
			   this->BTN_SELECCIONAR_ARCHIVO->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_SELECCIONAR_ARCHIVO_Click);
			   // 
			   // TXT_RUTA_ARCHIVO
			   // 
			   this->TXT_RUTA_ARCHIVO->Location = System::Drawing::Point(3, 219);
			   this->TXT_RUTA_ARCHIVO->Name = L"TXT_RUTA_ARCHIVO";
			   this->TXT_RUTA_ARCHIVO->ReadOnly = true;
			   this->TXT_RUTA_ARCHIVO->Size = System::Drawing::Size(153, 20);
			   this->TXT_RUTA_ARCHIVO->TabIndex = 8;
			   // 
			   // CHK_CON_ARCHIVO
			   // 
			   this->CHK_CON_ARCHIVO->Checked = true;
			   this->CHK_CON_ARCHIVO->CheckState = System::Windows::Forms::CheckState::Checked;
			   this->CHK_CON_ARCHIVO->Location = System::Drawing::Point(3, 135);
			   this->CHK_CON_ARCHIVO->Name = L"CHK_CON_ARCHIVO";
			   this->CHK_CON_ARCHIVO->Size = System::Drawing::Size(153, 17);
			   this->CHK_CON_ARCHIVO->TabIndex = 9;
			   this->CHK_CON_ARCHIVO->Text = L"Registrar con archivo PDF";
			   this->CHK_CON_ARCHIVO->CheckedChanged += gcnew System::EventHandler(this, &Biblioteca::CHK_CON_ARCHIVO_CheckedChanged);
			   // 
			   // PANEL_RESERVA
			   // 
			   this->PANEL_RESERVA->Controls->Add(this->DATE_TIME);
			   this->PANEL_RESERVA->Controls->Add(this->BTN_LIMPIAR_RESERVA);
			   this->PANEL_RESERVA->Controls->Add(this->BTN_SAVE_RESERVA);
			   this->PANEL_RESERVA->Controls->Add(this->LBL_NOM_LECTOR);
			   this->PANEL_RESERVA->Controls->Add(this->LBL_NOM_LIB);
			   this->PANEL_RESERVA->Controls->Add(this->TXT_LIBRO_RESERVA);
			   this->PANEL_RESERVA->Controls->Add(this->TXT_NOM_LECTOR);
			   this->PANEL_RESERVA->Location = System::Drawing::Point(107, 265);
			   this->PANEL_RESERVA->Name = L"PANEL_RESERVA";
			   this->PANEL_RESERVA->Size = System::Drawing::Size(159, 168);
			   this->PANEL_RESERVA->TabIndex = 3;
			   // 
			   // DATE_TIME
			   // 
			   this->DATE_TIME->Location = System::Drawing::Point(3, 109);
			   this->DATE_TIME->Name = L"DATE_TIME";
			   this->DATE_TIME->Size = System::Drawing::Size(153, 20);
			   this->DATE_TIME->TabIndex = 10;
			   // 
			   // BTN_LIMPIAR_RESERVA
			   // 
			   this->BTN_LIMPIAR_RESERVA->Location = System::Drawing::Point(87, 135);
			   this->BTN_LIMPIAR_RESERVA->Name = L"BTN_LIMPIAR_RESERVA";
			   this->BTN_LIMPIAR_RESERVA->Size = System::Drawing::Size(69, 26);
			   this->BTN_LIMPIAR_RESERVA->TabIndex = 9;
			   this->BTN_LIMPIAR_RESERVA->Text = L"Limpiar";
			   this->BTN_LIMPIAR_RESERVA->UseVisualStyleBackColor = true;
			   this->BTN_LIMPIAR_RESERVA->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_LIMPIAR_RESERVA_Click);
			   // 
			   // BTN_SAVE_RESERVA
			   // 
			   this->BTN_SAVE_RESERVA->Location = System::Drawing::Point(3, 135);
			   this->BTN_SAVE_RESERVA->Name = L"BTN_SAVE_RESERVA";
			   this->BTN_SAVE_RESERVA->Size = System::Drawing::Size(69, 26);
			   this->BTN_SAVE_RESERVA->TabIndex = 7;
			   this->BTN_SAVE_RESERVA->Text = L"Guardar";
			   this->BTN_SAVE_RESERVA->UseVisualStyleBackColor = true;
			   this->BTN_SAVE_RESERVA->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_SAVE_RESERVA_Click);
			   // 
			   // LBL_NOM_LECTOR
			   // 
			   this->LBL_NOM_LECTOR->AutoSize = true;
			   this->LBL_NOM_LECTOR->Location = System::Drawing::Point(3, 1);
			   this->LBL_NOM_LECTOR->Name = L"LBL_NOM_LECTOR";
			   this->LBL_NOM_LECTOR->Size = System::Drawing::Size(90, 13);
			   this->LBL_NOM_LECTOR->TabIndex = 8;
			   this->LBL_NOM_LECTOR->Text = L"Nombre del lector";
			   // 
			   // LBL_NOM_LIB
			   // 
			   this->LBL_NOM_LIB->AutoSize = true;
			   this->LBL_NOM_LIB->Location = System::Drawing::Point(3, 46);
			   this->LBL_NOM_LIB->Name = L"LBL_NOM_LIB";
			   this->LBL_NOM_LIB->Size = System::Drawing::Size(83, 13);
			   this->LBL_NOM_LIB->TabIndex = 7;
			   this->LBL_NOM_LIB->Text = L"Nombre del libro";
			   // 
			   // TXT_LIBRO_RESERVA
			   // 
			   this->TXT_LIBRO_RESERVA->Location = System::Drawing::Point(3, 62);
			   this->TXT_LIBRO_RESERVA->Name = L"TXT_LIBRO_RESERVA";
			   this->TXT_LIBRO_RESERVA->Size = System::Drawing::Size(153, 20);
			   this->TXT_LIBRO_RESERVA->TabIndex = 1;
			   // 
			   // TXT_NOM_LECTOR
			   // 
			   this->TXT_NOM_LECTOR->Location = System::Drawing::Point(3, 17);
			   this->TXT_NOM_LECTOR->Name = L"TXT_NOM_LECTOR";
			   this->TXT_NOM_LECTOR->Size = System::Drawing::Size(153, 20);
			   this->TXT_NOM_LECTOR->TabIndex = 0;
			   // 
			   // BTN_REGISTROS
			   // 
			   this->BTN_REGISTROS->Location = System::Drawing::Point(10, 16);
			   this->BTN_REGISTROS->Name = L"BTN_REGISTROS";
			   this->BTN_REGISTROS->Size = System::Drawing::Size(89, 20);
			   this->BTN_REGISTROS->TabIndex = 5;
			   this->BTN_REGISTROS->Text = L"Ver Reserva";
			   this->BTN_REGISTROS->UseVisualStyleBackColor = true;
			   this->BTN_REGISTROS->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_REGISTROS_Click);
			   // 
			   // DATE_WIEW
			   // 
			   this->DATE_WIEW->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->DATE_WIEW->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->DATE_WIEW->Location = System::Drawing::Point(272, 29);
			   this->DATE_WIEW->Name = L"DATE_WIEW";
			   this->DATE_WIEW->Size = System::Drawing::Size(513, 404);
			   this->DATE_WIEW->TabIndex = 4;
			   this->DATE_WIEW->Visible = false;
			   // 
			   // BTN_BORRAR
			   // 
			   this->BTN_BORRAR->Location = System::Drawing::Point(10, 100);
			   this->BTN_BORRAR->Name = L"BTN_BORRAR";
			   this->BTN_BORRAR->Size = System::Drawing::Size(89, 19);
			   this->BTN_BORRAR->TabIndex = 6;
			   this->BTN_BORRAR->Text = L"Borrar Registro";
			   this->BTN_BORRAR->UseVisualStyleBackColor = true;
			   this->BTN_BORRAR->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_BORRAR_Click);
			   // 
			   // DATA_WIEW_LIBROS
			   // 
			   this->DATA_WIEW_LIBROS->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->DATA_WIEW_LIBROS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->DATA_WIEW_LIBROS->Location = System::Drawing::Point(272, 29);
			   this->DATA_WIEW_LIBROS->Name = L"DATA_WIEW_LIBROS";
			   this->DATA_WIEW_LIBROS->Size = System::Drawing::Size(513, 404);
			   this->DATA_WIEW_LIBROS->TabIndex = 7;
			   this->DATA_WIEW_LIBROS->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Biblioteca::DATA_WIEW_LIBROS_CellClick);
			   // 
			   // BTN_VER_RESERVA
			   // 
			   this->BTN_VER_RESERVA->Location = System::Drawing::Point(10, 45);
			   this->BTN_VER_RESERVA->Name = L"BTN_VER_RESERVA";
			   this->BTN_VER_RESERVA->Size = System::Drawing::Size(89, 20);
			   this->BTN_VER_RESERVA->TabIndex = 8;
			   this->BTN_VER_RESERVA->Text = L"Ver Registro";
			   this->BTN_VER_RESERVA->UseVisualStyleBackColor = true;
			   this->BTN_VER_RESERVA->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_VER_RESERVA_Click);
			   // 
			   // BTN_ENTREGAS
			   // 
			   this->BTN_ENTREGAS->Location = System::Drawing::Point(10, 74);
			   this->BTN_ENTREGAS->Name = L"BTN_ENTREGAS";
			   this->BTN_ENTREGAS->Size = System::Drawing::Size(89, 20);
			   this->BTN_ENTREGAS->TabIndex = 9;
			   this->BTN_ENTREGAS->Text = L"Ver Entregados";
			   this->BTN_ENTREGAS->UseVisualStyleBackColor = true;
			   this->BTN_ENTREGAS->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_ENTREGAS_Click);
			   // 
			   // BTN_CERRAR_RESERVA
			   // 
			   this->BTN_CERRAR_RESERVA->Location = System::Drawing::Point(10, 125);
			   this->BTN_CERRAR_RESERVA->Name = L"BTN_CERRAR_RESERVA";
			   this->BTN_CERRAR_RESERVA->Size = System::Drawing::Size(89, 19);
			   this->BTN_CERRAR_RESERVA->TabIndex = 10;
			   this->BTN_CERRAR_RESERVA->Text = L"Cerrar Reserva";
			   this->BTN_CERRAR_RESERVA->UseVisualStyleBackColor = true;
			   this->BTN_CERRAR_RESERVA->Visible = false;
			   this->BTN_CERRAR_RESERVA->Click += gcnew System::EventHandler(this, &Biblioteca::BTN_CERRAR_RESERVA_Click);
			   // 
			   // DATA_WIEW_ENTREGAS
			   // 
			   this->DATA_WIEW_ENTREGAS->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			   this->DATA_WIEW_ENTREGAS->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->DATA_WIEW_ENTREGAS->Location = System::Drawing::Point(272, 29);
			   this->DATA_WIEW_ENTREGAS->Name = L"DATA_WIEW_ENTREGAS";
			   this->DATA_WIEW_ENTREGAS->Size = System::Drawing::Size(513, 404);
			   this->DATA_WIEW_ENTREGAS->TabIndex = 11;
			   this->DATA_WIEW_ENTREGAS->Visible = false;
			   // 
			   // PIC_BIBLIOTECA
			   // 
			   this->PIC_BIBLIOTECA->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PIC_BIBLIOTECA.BackgroundImage")));
			   this->PIC_BIBLIOTECA->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			   this->PIC_BIBLIOTECA->Location = System::Drawing::Point(21, 374);
			   this->PIC_BIBLIOTECA->Name = L"PIC_BIBLIOTECA";
			   this->PIC_BIBLIOTECA->Size = System::Drawing::Size(69, 54);
			   this->PIC_BIBLIOTECA->TabIndex = 12;
			   this->PIC_BIBLIOTECA->TabStop = false;
			   // 
			   // TXT_BIBLIOTECA
			   // 
			   this->TXT_BIBLIOTECA->AutoSize = true;
			   this->TXT_BIBLIOTECA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TXT_BIBLIOTECA->Location = System::Drawing::Point(7, 353);
			   this->TXT_BIBLIOTECA->Name = L"TXT_BIBLIOTECA";
			   this->TXT_BIBLIOTECA->Size = System::Drawing::Size(103, 18);
			   this->TXT_BIBLIOTECA->TabIndex = 13;
			   this->TXT_BIBLIOTECA->Text = L"BIBLIOTECA";
			   // 
			   // PROGRES
			   // 
			   this->PROGRES->Location = System::Drawing::Point(633, 7);
			   this->PROGRES->Name = L"PROGRES";
			   this->PROGRES->Size = System::Drawing::Size(152, 19);
			   this->PROGRES->TabIndex = 14;
			   // 
			   // LBL_BUSQUEDA
			   // 
			   this->LBL_BUSQUEDA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->LBL_BUSQUEDA->Location = System::Drawing::Point(271, 7);
			   this->LBL_BUSQUEDA->Name = L"LBL_BUSQUEDA";
			   this->LBL_BUSQUEDA->Size = System::Drawing::Size(70, 18);
			   this->LBL_BUSQUEDA->TabIndex = 0;
			   this->LBL_BUSQUEDA->Text = L"Buscar:";
			   // 
			   // TXT_BUSQUEDA
			   // 
			   this->TXT_BUSQUEDA->Location = System::Drawing::Point(339, 6);
			   this->TXT_BUSQUEDA->Name = L"TXT_BUSQUEDA";
			   this->TXT_BUSQUEDA->Size = System::Drawing::Size(180, 20);
			   this->TXT_BUSQUEDA->TabIndex = 15;
			   this->TXT_BUSQUEDA->TextChanged += gcnew System::EventHandler(this, &Biblioteca::TXT_BUSQUEDA_TextChanged);
			   // 
			   // Biblioteca
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			   this->ClientSize = System::Drawing::Size(797, 445);
			   this->Controls->Add(this->LBL_BUSQUEDA);
			   this->Controls->Add(this->TXT_BUSQUEDA);
			   this->Controls->Add(this->PROGRES);
			   this->Controls->Add(this->TXT_BIBLIOTECA);
			   this->Controls->Add(this->PIC_BIBLIOTECA);
			   this->Controls->Add(this->DATA_WIEW_ENTREGAS);
			   this->Controls->Add(this->BTN_CERRAR_RESERVA);
			   this->Controls->Add(this->BTN_ENTREGAS);
			   this->Controls->Add(this->BTN_VER_RESERVA);
			   this->Controls->Add(this->DATA_WIEW_LIBROS);
			   this->Controls->Add(this->BTN_BORRAR);
			   this->Controls->Add(this->BTN_REGISTROS);
			   this->Controls->Add(this->DATE_WIEW);
			   this->Controls->Add(this->PANEL_RESERVA);
			   this->Controls->Add(this->PANEL_REG);
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->MaximizeBox = false;
			   this->Name = L"Biblioteca";
			   this->Text = L"Biblioteca";
			   this->Load += gcnew System::EventHandler(this, &Biblioteca::Biblioteca_Load);
			   this->PANEL_REG->ResumeLayout(false);
			   this->PANEL_REG->PerformLayout();
			   this->PANEL_RESERVA->ResumeLayout(false);
			   this->PANEL_RESERVA->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATE_WIEW))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATA_WIEW_LIBROS))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DATA_WIEW_ENTREGAS))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PIC_BIBLIOTECA))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
		   // Aqui van los metodos de la clase

	private:
		System::Void Biblioteca_Load(System::Object^ sender, System::EventArgs^ e) {
			// Asegurarse de cargar los datos al iniciar
			CargarLibros();
			CargarReservas();
		}

	private: System::Void BTN_GUARDAR_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// Verificar si ya existe un libro con el mismo nombre
			String^ checkQuery = "SELECT COUNT(*) FROM Libros WHERE Nombre_del_libro = @Nombre";
			OleDbCommand^ checkCommand = gcnew OleDbCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@Nombre", TXT_NOM->Text);

			int count = Convert::ToInt32(checkCommand->ExecuteScalar());
			if (count > 0) {
				MessageBox::Show("Ya existe un libro con el mismo nombre.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return; // Salir sin guardar
			}

			String^ query = "INSERT INTO Libros (Nombre_del_libro, Autor, Genero, Ruta_Archivo) VALUES (@Nombre, @Autor, @Genero, @RutaArchivo)";
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);

			if (CHK_CON_ARCHIVO->Checked) {
				// Registrar con archivo PDF
				String^ sourceFilePath = TXT_RUTA_ARCHIVO->Text;
				if (String::IsNullOrEmpty(sourceFilePath)) {
					MessageBox::Show("Debe seleccionar un archivo PDF.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
				String^ librosFolder = System::IO::Path::Combine(System::Windows::Forms::Application::StartupPath, "Libros");
				if (!System::IO::Directory::Exists(librosFolder)) {
					System::IO::Directory::CreateDirectory(librosFolder);
				}
				String^ fileName = System::IO::Path::GetFileName(sourceFilePath);
				String^ destinationFilePath = System::IO::Path::Combine(librosFolder, fileName);
				System::IO::File::Copy(sourceFilePath, destinationFilePath, true);

				command->Parameters->AddWithValue("@Nombre", System::IO::Path::GetFileNameWithoutExtension(fileName));
				command->Parameters->AddWithValue("@Autor", TXT_AUT->Text);
				command->Parameters->AddWithValue("@Genero", TXT_GEN->Text);
				command->Parameters->AddWithValue("@RutaArchivo", destinationFilePath);
			}
			else {
				// Registrar solo con nombre, sin archivo
				if (String::IsNullOrWhiteSpace(TXT_NOM->Text)) {
					MessageBox::Show("Debe escribir el nombre del libro.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					return;
				}
				command->Parameters->AddWithValue("@Nombre", TXT_NOM->Text);
				command->Parameters->AddWithValue("@Autor", TXT_AUT->Text);
				command->Parameters->AddWithValue("@Genero", TXT_GEN->Text);
				command->Parameters->AddWithValue("@RutaArchivo", "");
			}

			command->ExecuteNonQuery();
			MessageBox::Show("Libro guardado correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Limpiar los campos
			BTN_LIMPIAR_Click(sender, e);
			TXT_RUTA_ARCHIVO->Clear();
			CargarLibros();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al guardar: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void CHK_CON_ARCHIVO_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (CHK_CON_ARCHIVO->Checked) {
			// Solo se puede registrar con PDF
			TXT_NOM->ReadOnly = true;
			BTN_SELECCIONAR_ARCHIVO->Enabled = true;
			TXT_RUTA_ARCHIVO->Enabled = true;
			TXT_NOM->Clear();
			TXT_RUTA_ARCHIVO->Clear();
		}
		else {
			// Permitir escribir el nombre, no se requiere PDF
			TXT_NOM->ReadOnly = false;
			BTN_SELECCIONAR_ARCHIVO->Enabled = false;
			TXT_RUTA_ARCHIVO->Enabled = false;
			TXT_RUTA_ARCHIVO->Clear();
		}
	}

	private: System::Void BTN_SAVE_RESERVA_Click(System::Object^ sender, System::EventArgs^ e) {
		// Ruta de la base de datos Access
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";

		// Crear la conexión
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			// Abrir la conexión
			connection->Open();

			// Verificar si el libro existe
			String^ checkQuery = "SELECT COUNT(*) FROM Libros WHERE Nombre_del_libro = @Nombre_Libro";
			OleDbCommand^ checkCommand = gcnew OleDbCommand(checkQuery, connection);
			checkCommand->Parameters->AddWithValue("@Nombre_Libro", TXT_LIBRO_RESERVA->Text);

			int count = Convert::ToInt32(checkCommand->ExecuteScalar());

			if (count > 0) {
				// Crear el comando SQL para insertar datos de reserva
				String^ query = "INSERT INTO Reservas (Nombre_Lector, Nombre_Libro, Fecha_Reserva) VALUES (@Nombre_Lector, @Nombre_Libro, @Fecha_Reserva)";
				OleDbCommand^ command = gcnew OleDbCommand(query, connection);

				// Agregar parámetros
				command->Parameters->AddWithValue("@Nombre_Lector", TXT_NOM_LECTOR->Text);
				command->Parameters->AddWithValue("@Nombre_Libro", TXT_LIBRO_RESERVA->Text);
				command->Parameters->AddWithValue("@Fecha_Reserva", DATE_TIME->Value.ToString("yyyy-MM-dd"));

				// Ejecutar el comando
				command->ExecuteNonQuery();

				// Mostrar mensaje de éxito
				MessageBox::Show("Reserva guardada correctamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				// Avisar que el libro no existe
				MessageBox::Show("El libro no existe o está mal escrito.", "Advertencia", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			// Manejar errores
			MessageBox::Show("Error al guardar la reserva: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Cerrar la conexión
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
		CargarReservas();
	}

	private: System::Void CargarReservas() {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			PROGRES->Value = 0; // Reiniciar la barra de progreso
			connection->Open();
			String^ query = "SELECT * FROM Reservas";
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(query, connection);
			DataTable^ dt = gcnew DataTable();

			// Simular progreso mientras se llena el DataTable
			for (int i = 0; i <= 50; i += 10) {
				System::Threading::Thread::Sleep(50); // Simular tiempo de carga
				PROGRES->Value = i; // Actualizar progreso
			}

			adapter->Fill(dt);
			DATE_WIEW->DataSource = dt;

			if (DATE_WIEW->Columns->Contains("ID")) {
				DATE_WIEW->Columns["ID"]->Visible = false;
			}

			// Finalizar progreso
			PROGRES->Value = 100;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar reservas: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void BTN_SELECCIONAR_ARCHIVO_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Archivos PDF (*.pdf)|*.pdf";
		openFileDialog->Title = "Seleccionar un archivo PDF";

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ sourceFilePath = openFileDialog->FileName;

			// Validar si el archivo tiene extensión .pdf
			if (System::IO::Path::GetExtension(sourceFilePath)->ToLower() == ".pdf") {
				TXT_RUTA_ARCHIVO->Text = sourceFilePath;

				// Asignar el nombre del archivo (sin extensión) al campo TXT_NOM
				TXT_NOM->Text = System::IO::Path::GetFileNameWithoutExtension(sourceFilePath);
			}
			else {
				MessageBox::Show("Por favor, seleccione un archivo PDF válido.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			if (System::IO::Path::GetExtension(sourceFilePath)->ToLower() != ".pdf") {
				MessageBox::Show("Solo se permiten archivos PDF",
					"Formato Incorrecto",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
				TXT_RUTA_ARCHIVO->Clear();
				return;
			}
		}
	}

	private: System::Void DATA_WIEW_LIBROS_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e) {
		if (e->RowIndex < 0 || e->ColumnIndex != DATA_WIEW_LIBROS->Columns["AbrirArchivo"]->Index)
			return;

		auto fila = DATA_WIEW_LIBROS->Rows[e->RowIndex];
		if (!DATA_WIEW_LIBROS->Columns->Contains("Ruta_Archivo") ||
			fila->Cells["Ruta_Archivo"]->Value == nullptr ||
			String::IsNullOrWhiteSpace(fila->Cells["Ruta_Archivo"]->Value->ToString())) {
			MessageBox::Show("Este registro no tiene un archivo asociado.", "Sin archivo", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		String^ rutaArchivo = fila->Cells["Ruta_Archivo"]->Value->ToString();
		TXT_BUSQUEDA_TextChanged(nullptr, nullptr);

		if (System::IO::File::Exists(rutaArchivo)) {
			try {
				System::Diagnostics::Process::Start(rutaArchivo);
				String^ registro = String::Format("Archivo abierto: {0} - {1}",
					DateTime::Now.ToString("yyyy-MM-dd HH:mm:ss"),
					rutaArchivo);
				System::IO::File::AppendAllText("log_aperturas.txt", registro + Environment::NewLine);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error al abrir el archivo:\n" + ex->Message +
					"\n\nVerifique que tenga instalado un visor PDF.",
					"Error Crítico",
					MessageBoxButtons::OK,
					MessageBoxIcon::Error);
			}
		}
		else {
			MessageBox::Show("El archivo físico no fue encontrado en:\n" + rutaArchivo +
				"\n\nPosibles causas:\n• El archivo fue movido\n• Nombre modificado\n• Eliminado",
				"Archivo Perdido",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}

	private: System::Void BTN_LIMPIAR_Click(System::Object^ sender, System::EventArgs^ e) {
		// Limpiar los TextBox del panel de registro
		TXT_NOM->Clear();
		TXT_AUT->Clear();
		TXT_GEN->Clear();
		TXT_RUTA_ARCHIVO->Clear();
	}

	private: System::Void BTN_LIMPIAR_RESERVA_Click(System::Object^ sender, System::EventArgs^ e) {
		// Limpiar los TextBox del panel de reserva
		TXT_NOM_LECTOR->Clear();
		TXT_LIBRO_RESERVA->Clear();
		DATE_TIME->Value = DateTime::Now; // Restablecer la fecha al día actual
	}

	private: System::Void BTN_REGISTROS_Click(System::Object^ sender, System::EventArgs^ e) {
		DATE_WIEW->Visible = true;
		DATA_WIEW_LIBROS->Visible = false;
		BTN_CERRAR_RESERVA->Visible = true; // Mostrar el botón al ver reservas
		DATA_WIEW_ENTREGAS->Visible = false;
		CargarReservas();
	}

	private: System::Void BTN_CERRAR_RESERVA_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// Obtener los datos de reservas
			String^ queryReservas = "SELECT * FROM Reservas";
			OleDbDataAdapter^ adapterReservas = gcnew OleDbDataAdapter(queryReservas, connection);
			DataTable^ dtReservas = gcnew DataTable();
			adapterReservas->Fill(dtReservas);

			// Insertar en la tabla de entregas
			for each (DataRow ^ row in dtReservas->Rows) {
				String^ insertQuery = "INSERT INTO Entregas (Nombre_Lector, Nombre_Libro, Fecha_Reserva, Fecha_Entrega) VALUES (@Nombre_Lector, @Nombre_Libro, @Fecha_Reserva, @Fecha_Entrega)";
				OleDbCommand^ command = gcnew OleDbCommand(insertQuery, connection);
				command->Parameters->AddWithValue("@Nombre_Lector", row["Nombre_Lector"]);
				command->Parameters->AddWithValue("@Nombre_Libro", row["Nombre_Libro"]);
				command->Parameters->AddWithValue("@Fecha_Reserva", row["Fecha_Reserva"]);
				command->Parameters->AddWithValue("@Fecha_Entrega", DateTime::Now); // Fecha actual

				command->ExecuteNonQuery();
			}

			// Limpiar la tabla de reservas después de mover
			String^ deleteQuery = "DELETE FROM Reservas";
			OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
			deleteCommand->ExecuteNonQuery();

			MessageBox::Show("Reservas cerradas y movidas a entregas.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
			CargarEntregas(); // Recargar entregas
			CargarReservas(); // Actualizar reservas
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cerrar reservas: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void BTN_REGISTROS_LIBROS_Click(System::Object^ sender, System::EventArgs^ e) {
		// Alternar la visibilidad del DataGridView para libros
		this->DATA_WIEW_LIBROS->Visible = !this->DATA_WIEW_LIBROS->Visible;

		if (this->DATA_WIEW_LIBROS->Visible) {
			// Ruta de la base de datos Access
			String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";

			// Crear la conexión
			OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			try {
				// Abrir la conexión
				connection->Open();

				// Crear el comando SQL para obtener los datos de libros
				String^ query = "SELECT * FROM Libros";
				OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(query, connection);

				// Llenar un DataTable con los datos
				DataTable^ dataTable = gcnew DataTable();
				adapter->Fill(dataTable);

				// Asignar el DataTable al DataGridView
				this->DATA_WIEW_LIBROS->DataSource = dataTable;
			}

			catch (Exception^ ex) {
				// Manejar errores
				MessageBox::Show("Error al cargar los libros: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			finally {
				// Cerrar la conexión
				if (connection->State == ConnectionState::Open) {
					connection->Close();
				}
			}

			// Ocultar la columna ID
			if (this->DATA_WIEW_LIBROS->Columns->Contains("ID")) {
				this->DATA_WIEW_LIBROS->Columns["ID"]->Visible = false;
			}

			if (!DATA_WIEW_LIBROS->Columns->Contains("AbrirArchivo")) {
				DataGridViewButtonColumn^ btnAbrir = gcnew DataGridViewButtonColumn();
				btnAbrir->Name = "AbrirArchivo";
				btnAbrir->HeaderText = "Acción";
				btnAbrir->Text = "Abrir PDF";
				btnAbrir->UseColumnTextForButtonValue = true;
				DATA_WIEW_LIBROS->Columns->Insert(0, btnAbrir); // Colocar como primera columna
			}

			array<String^>^ columnasOcultas = { "ID", "Ruta_Archivo" };
			for each (String ^ col in columnasOcultas) {
				if (DATA_WIEW_LIBROS->Columns->Contains(col)) {
					DATA_WIEW_LIBROS->Columns[col]->Visible = false;
				}
			}
		}
	}

	private: System::Void CargarLibros() {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			PROGRES->Value = 0; // Reiniciar la barra de progreso
			connection->Open();
			String^ query = "SELECT * FROM Libros";
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(query, connection);
			DataTable^ dt = gcnew DataTable();

			// Simular progreso mientras se llena el DataTable
			for (int i = 0; i <= 50; i += 10) {
				System::Threading::Thread::Sleep(50); // Simular tiempo de carga
				PROGRES->Value = i; // Actualizar progreso
			}

			adapter->Fill(dt);
			DATA_WIEW_LIBROS->DataSource = dt;

			// Configurar columnas
			if (!DATA_WIEW_LIBROS->Columns->Contains("AbrirArchivo")) {
				DataGridViewButtonColumn^ btnAbrirArchivo = gcnew DataGridViewButtonColumn();
				btnAbrirArchivo->Name = "AbrirArchivo";
				btnAbrirArchivo->HeaderText = "Abrir Archivo";
				btnAbrirArchivo->Text = "Abrir";
				btnAbrirArchivo->UseColumnTextForButtonValue = true;
				DATA_WIEW_LIBROS->Columns->Add(btnAbrirArchivo);
			}

			if (DATA_WIEW_LIBROS->Columns->Contains("Ruta_Archivo")) {
				DATA_WIEW_LIBROS->Columns["Ruta_Archivo"]->Visible = false;
			}

			if (DATA_WIEW_LIBROS->Columns->Contains("ID")) {
				DATA_WIEW_LIBROS->Columns["ID"]->Visible = false;
			}

			// Finalizar progreso
			PROGRES->Value = 100;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar libros: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void TXT_BUSQUEDA_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ filtro = TXT_BUSQUEDA->Text->Trim();

		// Solo filtrar si hay datos cargados
		if (DATA_WIEW_LIBROS->DataSource != nullptr) {
			DataTable^ dt = dynamic_cast<DataTable^>(DATA_WIEW_LIBROS->DataSource);
			if (dt != nullptr) {
				// Filtrar por nombre, autor o género (ajusta los nombres de columna si es necesario)
				String^ rowFilter = "";
				if (!String::IsNullOrEmpty(filtro)) {
					rowFilter = String::Format(
						"Nombre_del_libro LIKE '%{0}%' OR Autor LIKE '%{0}%' OR Genero LIKE '%{0}%'",
						filtro->Replace("'", "''")
					);
				}
				(safe_cast<DataView^>(dt->DefaultView))->RowFilter = rowFilter;
			}
		}
	}

	private: System::Void BTN_BORRAR_Click(System::Object^ sender, System::EventArgs^ e) {
		DataGridView^ activeGridView = nullptr;
		String^ tableName = "";

		// Determinar qué DataGridView está visible
		if (DATE_WIEW->Visible) {
			activeGridView = DATE_WIEW;
			tableName = "Reservas";
		}
		else if (DATA_WIEW_LIBROS->Visible) {
			activeGridView = DATA_WIEW_LIBROS;
			tableName = "Libros";
		}
		else if (DATA_WIEW_ENTREGAS->Visible) {
			activeGridView = DATA_WIEW_ENTREGAS;
			tableName = "Entregas";
		}

		if (activeGridView == nullptr || activeGridView->SelectedRows->Count == 0) {
			MessageBox::Show("Seleccione un registro para eliminar.", "Advertencia",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int selectedRowIndex = activeGridView->SelectedRows[0]->Index;

		// Validar que la columna "ID" exista
		if (!activeGridView->Columns->Contains("ID")) {
			MessageBox::Show("No se encontró la columna ID en la tabla.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Validar que la celda "ID" tenga valor
		Object^ idValue = activeGridView->Rows[selectedRowIndex]->Cells["ID"]->Value;
		if (idValue == nullptr || String::IsNullOrWhiteSpace(idValue->ToString())) {
			MessageBox::Show("El registro seleccionado no es válido o está vacío.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int id = Convert::ToInt32(idValue);
		String^ filePath = nullptr;

		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			connection->Open();

			// Obtener ruta del archivo solo para libros
			if (tableName == "Libros") {
				String^ getFileQuery = "SELECT Ruta_Archivo FROM Libros WHERE ID = @ID";
				OleDbCommand^ cmdGetFile = gcnew OleDbCommand(getFileQuery, connection);
				cmdGetFile->Parameters->AddWithValue("@ID", id);
				filePath = safe_cast<String^>(cmdGetFile->ExecuteScalar());
			}

			// Eliminar registro de la base de datos
			String^ deleteQuery = "DELETE FROM " + tableName + " WHERE ID = @ID";
			OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
			deleteCommand->Parameters->AddWithValue("@ID", id);
			int rowsAffected = deleteCommand->ExecuteNonQuery();

			if (rowsAffected > 0) {
				// Eliminar archivo físico si es un libro
				if (tableName == "Libros" && !String::IsNullOrEmpty(filePath)) {
					try {
						if (System::IO::File::Exists(filePath)) {
							System::IO::File::Delete(filePath);
							MessageBox::Show("Libro y archivo eliminados correctamente", "Éxito",
								MessageBoxButtons::OK, MessageBoxIcon::Information);
						}
					}
					catch (Exception^ ex) {
						MessageBox::Show("Advertencia: El registro fue eliminado pero el archivo físico no pudo borrarse.\n" +
							ex->Message, "Error de archivo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
				else {
					MessageBox::Show("Registro eliminado correctamente", "Éxito",
						MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

				// Actualizar vistas
				if (tableName == "Reservas") {
					CargarReservas();
				}
				else if (tableName == "Libros") {
					CargarLibros();
				}
				else if (tableName == "Entregas") {
					CargarEntregas();
				}
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al eliminar: " + ex->Message, "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void BTN_VER_RESERVA_Click(System::Object^ sender, System::EventArgs^ e) {
		DATA_WIEW_LIBROS->Visible = true;
		DATE_WIEW->Visible = false;
		BTN_BORRAR->Visible = DATA_WIEW_LIBROS->Visible;
		BTN_CERRAR_RESERVA->Visible = false;
		DATA_WIEW_ENTREGAS->Visible = false;
		CargarLibros();
	}

	private: System::Void CargarEntregas() {
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Biblioteca.accdb";
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

		try {
			PROGRES->Value = 0; // Reiniciar la barra de progreso
			connection->Open();
			String^ query = "SELECT * FROM Entregas";
			OleDbDataAdapter^ adapter = gcnew OleDbDataAdapter(query, connection);
			DataTable^ dt = gcnew DataTable();

			// Simular progreso mientras se llena el DataTable
			for (int i = 0; i <= 50; i += 10) {
				System::Threading::Thread::Sleep(50); // Simular tiempo de carga
				PROGRES->Value = i; // Actualizar progreso
			}

			adapter->Fill(dt);
			DATA_WIEW_ENTREGAS->DataSource = dt;

			if (DATA_WIEW_ENTREGAS->Columns->Contains("ID")) {
				DATA_WIEW_ENTREGAS->Columns["ID"]->Visible = false;
			}

			// Finalizar progreso
			PROGRES->Value = 100;
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al cargar entregas: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			if (connection->State == ConnectionState::Open) {
				connection->Close();
			}
		}
	}

	private: System::Void BTN_ENTREGAS_Click(System::Object^ sender, System::EventArgs^ e) {
		// Asegurarse de que solo el DataGridView de entregas sea visible
		DATA_WIEW_ENTREGAS->Visible = true;
		BTN_BORRAR->Visible = true;
		DATE_WIEW->Visible = false;
		DATA_WIEW_LIBROS->Visible = false;
		BTN_CERRAR_RESERVA->Visible = false;

		// Llamar al método para cargar los datos de la tabla "Entregas"
		CargarEntregas();
	}
};
}