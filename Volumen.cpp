#include "Volumen.h"
#include <string>

//Instancia de clase Volumen
Volumen::Volumen(const string& nombreVol, int numVol): nombre {nombreVol},  numvol{numVol}
{
}

void Volumen::mostrar() {
    cout << nombre << " " << numvol << " ";
}
//Instancia de clase Revista
Revista::Revista(const string& nombreVol, int numVol, int numlibros): Volumen(nombreVol,numVol), numLibros{numlibros} {
}

void Libro::mostrar() {
    Volumen::mostrar();
    cout<< " " <<numRevistas;
}
//Instancia de clase Libro
Libro::Libro(const string& nombreVol, int numVol, int numrevistas): Volumen(nombreVol,numVol) , numRevistas{numrevistas}{
}
void Revista::mostrar() {
    Volumen::mostrar();
    cout << " "<<numLibros;
}
