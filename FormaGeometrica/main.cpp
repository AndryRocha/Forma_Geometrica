#include <iostream>

#include <circulo.h>
#include <retangulo.h>
#include <triangulo.h>
#include <formaGeometrica.h>

#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    FormaGeometrica *formaGeometrica;

    Circulo *circulo = new Circulo(12.0);
    Retangulo *retangulo = new Retangulo(10.0, 20.0);
    Triangulo *triangulo = new Triangulo(10.0, 20.0);

    formaGeometrica->setCirculo(circulo);
    formaGeometrica->setRetangulo(retangulo);
    formaGeometrica->setTriangulo(triangulo);

    cout << "------- Circulo -------" << endl;
    cout << "Raio: " << circulo->getRaio() << endl;
    cout << "Area: " << formaGeometrica->calculaAreaCirculo() << endl;

    cout << "------- Retângulo -------" << endl;
    cout << "Base: " << retangulo->getBase() << endl;
    cout << "Altura: " << retangulo->getAltura() << endl;
    cout << "Area: " << formaGeometrica->calculaAreaRetangulo() << endl;

    cout << "------- Triângulo -------" << endl;
    cout << "Base: " << triangulo->getBase() << endl;
    cout << "Altura: " << triangulo->getAltura() << endl;
    cout << "Area: " << formaGeometrica->calculaAreaTriangulo() << endl;

    return 0;
}
