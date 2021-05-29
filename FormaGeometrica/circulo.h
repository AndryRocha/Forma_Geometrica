#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

class Circulo {
public:
    Circulo(double raioAux);
    double getRaio();
    void setRaio(double raioAux);

private:
    double raio;
};

Circulo::Circulo(double raioAux) {
    raio = raioAux;
}

double Circulo::getRaio() {
    return raio;
}

void Circulo::setRaio(double raioAux) {
    raio = raioAux;
}

#endif // CIRCULO_H_INCLUDED
