#ifndef DATOSUSUARIO_H
#define DATOSUSUARIO_H


class datosusuario
{
    public:
        virtual ~datosusuario();
              datosusuario( int = 0, int = 0 );

        void establecerusuario( int );
        int obtenerUsuario() const;

        void establecerContra( int );
        int obtenerContra() const;

    protected:

    private:
        int usuario;
        int contra;


};

#endif // DATOSUSUARIO_H
