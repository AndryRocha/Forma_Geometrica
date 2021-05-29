#ifndef FORMA_GEOMETRICA_H_INCLUDED
#define FORMA_GEOMETRICA_H_INCLUDED

#include <circulo.h>
#include <retangulo.h>
#include <triangulo.h>

class FormaGeometrica {
public:
    void setCirculo(Circulo *circuloAux);
    void setRetangulo(Retangulo *retanguloAux)
    void setTriangulo(Triangulo *trianguloAux);
    double calculaAreaCirculo();
    double calculaAreaRetangulo();
    double calculaAreaTriangulo();

private:
    const double PI = 3.14;
    private Circulo *circulo;
    private Retangulo *retangulo;
    private Triangulo *triangulo;
};

double FormaGeometrica::calculaAreaCirculo() {
    return PI * (circulo->getRaio() * circulo->getRaio());
}

double FormaGeometrica::calculaAreaRetangulo() {
    return retangulo->getAltura() * retangulo->getBase();
}

double FormaGeometrica::calculaAreaTriangulo() {
    return (triangulo->getAltura() * triangulo->getBase()) / 2;
}

void FormaGeometrica::setCirculo(Circulo *circuloAux) {
    circulo = circuloAux;
}
void FormaGeometrica::setRetangulo(Retangulo *retanguloAux) {
    retangulo = retanguloAux;
}

void FormaGeometrica::setTriangulo(Triangulo *trianguloAux) {
    triangulo = trianguloAux;
}

#endif // FORMA_GEOMETRICA_H_INCLUDED
