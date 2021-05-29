#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED

class Triangulo {
public:
    Triangulo(double baseAux, double alturaAux);
    void setBase(double baseAux);
    double getBase();
    void setAltura(double alturaAux);
    double getAltura();

private:
    double base;
    double altura;
};

Triangulo::Triangulo(double baseAux, double alturaAux) {
    base = baseAux;
    altura = alturaAux;
}

void Triangulo::setBase(double baseAux) {
    base = baseAux;
}

double Triangulo::getBase() {
    return base;
}

void Triangulo::setAltura(double alturaAux) {
    altura = alturaAux;
}

double Triangulo::getAltura() {
    return altura;
}

#endif // TRIANGULO_H_INCLUDED
