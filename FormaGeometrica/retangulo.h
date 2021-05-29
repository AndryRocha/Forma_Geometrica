#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

class Retangulo {
public:
    Retangulo(double baseAux, double alturaAux);
    void setBase(double baseAux);
    double getBase();
    void setAltura(double alturaAux);
    double getAltura();

private:
    double base;
    double altura;
};

Retangulo::Retangulo(double baseAux, double alturaAux) {
    base = baseAux;
    altura = alturaAux;
}

void Retangulo::setBase(double baseAux) {
    base = baseAux;
}

double Retangulo::getBase() {
    return base;
}

void Retangulo::setAltura(double alturaAux) {
    altura = alturaAux;
}

double Retangulo::getAltura() {
    return altura;
}

#endif // RETANGULO_H_INCLUDED
