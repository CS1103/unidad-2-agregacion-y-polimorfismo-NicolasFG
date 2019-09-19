#include <iostream>
#include "Volumen.cpp"
#include "Biblioteca.cpp"


using namespace std;

int main() {
    Biblioteca* biblio;
    biblio = new Biblioteca;

    Volumen* teoria_de_la_computacion = new Libro("Computacion", 1,2);
    Volumen* Peru_pais_industrial = new Libro("Historia", 4,20);
    Volumen* C_Primer = new Libro("Computacion", 1,100);
    Volumen* Android_studio = new Libro("Programacion", 20,5);

    Volumen* somos = new Revista("Somos", 1,500);
    Volumen* Condorito = new Revista("Condorito", 100,30);

    biblio->add(teoria_de_la_computacion);
    biblio->add(Peru_pais_industrial);
    biblio->add(Android_studio);
    biblio->add(C_Primer);
    biblio->add(somos);
    biblio->add(Condorito);

    biblio->mostrar();
    cout<<endl;
    biblio->cantidad();
    cout<<endl;








    return 0;
}