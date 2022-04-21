#include "datosusuario.h"

#include <cstring>
#include <iostream>
using std::string;
datosusuario::datosusuario(int valorUsuario, int valorContra)
{
    establecerusuario( valorUsuario );
    establecerContra( valorContra );
}
int datosusuario::obtenerUsuario() const
{
   return usuario;
}
void datosusuario::establecerusuario( int valorUsuario )
{
   usuario = valorUsuario;
}
int datosusuario::obtenerContra() const
{
   return contra;
}
void datosusuario::establecerContra( int valorContra )
{
    contra=valorContra;
}


datosusuario::~datosusuario()
{
    //dtor
}
