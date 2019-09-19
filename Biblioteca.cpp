#include "Biblioteca.h"
#include "Volumen.h"



Biblioteca::Biblioteca() {
    Biblioteca* biblioteca = nullptr;

}
void Biblioteca::mostrar() {
    for(Volumen* vol : *volumenes)
    {
        cout<<" ";
        vol->mostrar() , cout <<"|";
    }
}
int Biblioteca::cantidad() {
    for (auto vol: *volumenes)
    {
        if(typeid(*vol) == typeid(Libro))
            maxLibros++;
        else if (typeid(*vol) == typeid(Revista))
            maxRevistas++;
    }
    cout << maxRevistas <<endl;
    cout <<maxLibros;
    return 0;
}
Volumen *Biblioteca::add(Volumen *& volumen) {
    volumenes->push_back(volumen);
    return volumen;
}
