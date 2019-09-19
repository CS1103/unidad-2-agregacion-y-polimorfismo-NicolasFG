#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H
#include <string>

using namespace std;

class Volumen {
protected:
    string nombre;
    int numvol;

public:
    Volumen( const string&, int);
    virtual void mostrar();
    ~Volumen() = default;
};

class Revista : public Volumen{
private:
    int numLibros;
public:
    Revista(const string&, int, int);
    void mostrar() override;
    ~Revista() = default;
};

class Libro : public Volumen {
private:
    int numRevistas;
public:
    Libro(const string&, int, int);
    void mostrar() override;
    ~Libro()= default;
};
#endif //BIBLIOTECA_VOLUMEN_H
