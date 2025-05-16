Esta aplicación es un sistema de gestión de biblioteca desarrollado en C++/CLI utilizando Windows Forms. Permite registrar libros (con o sin archivo PDF), gestionar reservas y entregas, y visualizar o eliminar registros. Toda la información se almacena en una base de datos Microsoft Access (Biblioteca.accdb). La interfaz es intuitiva y permite búsquedas, carga de archivos PDF y manejo de datos mediante tablas.
Funcionalidades principales
•	Registro de libros: Guarda nombre, autor, género y opcionalmente un archivo PDF.
•	Gestión de reservas: Permite a los lectores reservar libros existentes.
•	Visualización y búsqueda: Muestra libros, reservas y entregas en tablas con filtros.
•	Eliminación de registros: Borra libros, reservas o entregas, eliminando también el archivo PDF si corresponde.
•	Entregas: Mueve reservas a la tabla de entregas y registra la fecha de entrega.
•	Barra de progreso: Indica el avance en la carga de datos.
•	Apertura de archivos PDF: Permite abrir el PDF asociado a un libro desde la interfaz.
---
Requisitos y dependencias
1. Sistema operativo
•	Windows 7 o superior (recomendado Windows 10/11).
2. Visual Studio 2022
•	Instala la carga de trabajo "Desarrollo de escritorio con C++".
•	Asegúrate de agregar el componente C++/CLI (Common Language Runtime Support).
3. Configuración del proyecto
Para que [STAThread] y Windows Forms funcionen correctamente:
•	El proyecto debe estar configurado como C++/CLI (/clr).
•	Propiedades del proyecto:
•	C/C++ > General > Common Language Runtime Support: Selecciona /clr.
•	Vinculador > Sistema > SubSystem: Selecciona Windows (/SUBSYSTEM:WINDOWS).
•	El archivo Source.cpp debe tener el atributo [STAThread] en la función main (ya está presente).
4. Base de datos
•	El archivo Biblioteca.accdb debe estar en la misma carpeta que el ejecutable.
•	Se requiere el Microsoft Access Database Engine para el proveedor Microsoft.ACE.OLEDB.12.0.
•	Descarga: Microsoft Access Database Engine 2010 Redistributable
5. .NET Framework
•	.NET Framework 4.7.2 o superior (incluido en Visual Studio 2022).
6. Visor de PDF
•	Debe haber un visor de PDF instalado en el sistema para abrir los archivos desde la aplicación.
---
Instalación y ejecución
1.	Instala Visual Studio 2022 con soporte para C++/CLI.
2.	Instala Microsoft Access Database Engine si no está presente.
3.	Abre la solución en Visual Studio.
4.	Verifica la configuración del proyecto para que use /clr y el subsistema Windows.
5.	Compila el proyecto.
6.	Copia Biblioteca.accdb a la carpeta de salida del ejecutable.
7.	Ejecuta la aplicación desde Visual Studio o el ejecutable generado.
