#include "paciente.h"
#include "datospaciente.h"
#include <iostream>
using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::ios;
using std::left;
using std::right;
using std::fixed;
using std::showpoint;

#include <fstream>
using std::ofstream;
using std::ostream;
using std::fstream;

#include <iomanip>
using std::setw;
using std::setprecision;
#include <cstdlib>

int opcionPa();
void imprimirRegistroPa( fstream& );
void crearArchivoCreditoPa();
void mostrarLineaPa( ostream&, const datospaciente & );
void nuevoRegistroPa( fstream& );
int obtenernCodigoPa( const char * const );
void modificarRegistroPa( fstream& );
void eliminarRegistroPa( fstream& );
void consultarRegistroPa( fstream& );
void mostrarLineaPantallaPa( const datospaciente &);

using namespace std;

paciente::paciente()
{
    fstream creditoEntradaSalida( "Pa.dat", ios::in | ios::out | ios::binary);
    if ( !creditoEntradaSalida ) {
        cerr << "No se pudo abrir el archivo." << endl;
        crearArchivoCreditoPa();
        cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo\n";
        exit ( 1 );
    }
    enum Opciones { agregar = 1, nuevo, modificar, eliminar, mostrar, FIN };
    int opcion;
    while ( ( opcion = opcionPa() ) != FIN ) {
        switch ( opcion ) {
            case agregar:
                imprimirRegistroPa( creditoEntradaSalida );
            break;
            /*case nuevo:
                nuevoRegistroPa( creditoEntradaSalida );
            break;
            case modificar:
                modificarRegistroPa( creditoEntradaSalida );
            break;
            case eliminar:
                eliminarRegistroPa( creditoEntradaSalida );
            break;
            case mostrar:
                consultarRegistroPa( creditoEntradaSalida );
            break;
            default:
            cerr << "Opcion incorrecta" << endl;
            break;*/

      } //FIN SWITCH

       creditoEntradaSalida.clear();

   } //FIN WHILE
}
int opcionEmp(){
    //system("cls");
    cout<<"\n\t\t\t---------------------------------"<<endl;
    cout<<"\n\t\t\t\t------------------"<<endl;
	cout<<"\t\t\t\t |   PACIENTES/CLIENTES |"<<endl;
	cout<<"\t\t\t\t------------------"<<endl;

    cout<< "\n\n\t\t\t 1. Guardar archivo de texto para Imprimirlo" << endl
        << "\t\t\t 2. Agregar Paciente" << endl
        << "\t\t\t 3. Modificar Paciente" << endl
        << "\t\t\t 4. Eliminar Paciente" << endl
        << "\t\t\t 5. Mostrar Lista de Pacientes" << endl
        << "\t\t\t 6. Regresar al Menu Principal" << endl
        <<"\n\t\t\t---------------------------------"<<endl
        << "\n\t\t\tIngrese su opcion: ";
    int opcionMenu;
    cin >> opcionMenu;

   return opcionMenu;
}
void imprimirRegistroPa( fstream &leerDeArchivo )
{
    ofstream archivoImprimirSalida( "ImprimirPaciente.txt", ios::out );
    if ( !archivoImprimirSalida ) {
        cerr << "No se pudo crear el archivo." << endl;
        exit( 1 );

    } //FIN DE INSTRUCCION if

    archivoImprimirSalida << left << setw( 10 ) << "Codigo" << setw( 16 )<< "Apellido" << setw( 14 ) << "Nombre" << setw( 16 ) << "Correo"<< right
       << setw( 10 ) << "Edad" << endl;
    leerDeArchivo.seekg( 0 );

    datospaciente paciente;
    leerDeArchivo.read( reinterpret_cast< char * >( &paciente ), sizeof( datospaciente ) );

    while ( !leerDeArchivo.eof() ) {
        if ( paciente.obtenerCodigo() != 0 )
        mostrarLineaPa( archivoImprimirSalida, paciente );
        leerDeArchivo.read( reinterpret_cast< char * >( &paciente ), sizeof( datospaciente ) );
    } //FIN DE WHILE

} //FIN DE LA FUNCION -IMPRIMIR REGISTRO-
paciente::~paciente()
{
    //dtor
}
