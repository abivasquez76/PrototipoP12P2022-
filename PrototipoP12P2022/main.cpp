#include <iostream>
#include "usuario.h"


using namespace std;

int escribirOpcion();
enum Opciones { pacientes =1, FIN };

int main()
{
    usuario claseusuarios;
    int opcion=0;
    while (( opcion = escribirOpcion() ) != FIN)
    {
        switch ( opcion ) {
            case empleados:
                {
                    Empleado claseempleado;
                }
            break;

    return 0;
}

int escribirOpcion(){
    system("cls");
    cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t |   Laboratorio Clinico  |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;

    cout<< "\n\n\t\t\t  1. Paciente" << endl
        << "\t\t\t  2. Finalizar el Programa" << endl
        <<"\n\t\t\t---------------------------------"<<endl
        << "\n\t\t\tIngrese su opcion: ";
   int opcionMenu;
   cin >> opcionMenu;

   return opcionMenu;

}


