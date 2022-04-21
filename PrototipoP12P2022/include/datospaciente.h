#ifndef DATOSPACIENTE_H
#define DATOSPACIENTE_H
#include <iostream>

using std::string;

class datospaciente
{
    public:
        virtual ~datospaciente();

          datospaciente( int = 0, string = "", string = "", string = "", double = 0 );

        void establecerCodigo( int );
        int obtenerCodigo() const;

        void establecerApellido( string );
        string obtenerApellido() const;

        void establecerNombre( string );
        string obtenerNombre() const;

        void establecerEdad( double );
        double obtenerEdad() const;

        void establecerCorreo( string );
        string obtenerCorreo() const;

    protected:

    private:
        int codigo;
        char apellido[ 15 ];
        char nombre[ 10 ];
        char correo[ 15 ];
        double edad;
};

#endif // DATOSPACIENTE_H
