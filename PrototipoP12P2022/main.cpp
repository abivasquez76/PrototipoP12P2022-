#include <iostream>
#include "usuario.h"
#include "paciente.h"


using namespace std;

int escribirOpcion();
enum Opciones { paciente =1, FIN };

int main()
{
    usuario claseusuarios;
    int opcion=0;
    while (( opcion = escribirOpcion() ) != FIN)
    {
        switch ( opcion ) {
            case paciente:
                {
                    paciente clasepaciente
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
    }

