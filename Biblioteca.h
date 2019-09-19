#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H
#include <vector>

using namespace std;


class Biblioteca {
private:
int maxLibros = 0;
int maxRevistas = 0;
vector <Volumen*> *volumenes = new vector<Volumen*>();

public:
    Biblioteca();
    void mostrar();
    int cantidad();
    Volumen* add(Volumen*&);
    ~Biblioteca()= default;
};


#endif //BIBLIOTECA_BIBLIOTECA_H
