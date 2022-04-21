#include "datospaciente.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <cstring>


datospaciente::datospaciente(int valorCodigo, string valorApellido, string valorNombre, string valorCorreo, double valorEdad )
{
    establecerCodigo( valorCodigo );
    establecerApellido( valorApellido );
    establecerNombre( valorNombre );
    establecerCorreo( valorCorreo );
    establecerEdad( valorEdad );

}
int datospaciente::obtenerCodigo() const
{
   return codigo;
}
void datospaciente::establecerCodigo( int valorCodigo )
{
   codigo = valorCodigo;
}
string datospaciente::obtenerApellido() const
{
   return apellido;

}
void datospaciente::establecerApellido( string apellidoString )
{
    const char *valorApellido = apellidoString.data();
    int longitud = strlen( valorApellido );
    longitud = ( longitud < 15 ? longitud : 14 );
    strncpy( apellido, valorApellido, longitud );

    apellido[ longitud ] = '\0';

}
string datospaciente::obtenerNombre() const
{
   return nombre;
}
void datospaciente::establecerNombre( string primerNombre )
{
    const char *valorNombre = primerNombre.data();
    int longitud = strlen( valorNombre );
    longitud = ( longitud < 10 ? longitud : 9 );
    strncpy( nombre, valorNombre, longitud );

    primerNombre[ longitud ] = '\0';

}
double datospaciente::obtenerEdad() const
{
   return edad;
}
void datospaciente::establecerEdad( double valorEdad )
{
   edad = valorEdad;
}
string datospaciente::obtenerCorreo() const
{
   return correo;
}
void datospaciente::establecerCorreo( string correostring )
{
    const char *valorCorreo = correostring.data();
    int longitud = strlen( valorCorreo );
    longitud = ( longitud < 15 ? longitud : 14 );
    strncpy( correo, valorCorreo, longitud );

    correostring[ longitud ] = '\0';

}

datospaciente::~datospaciente()
{
    //dtor
}
