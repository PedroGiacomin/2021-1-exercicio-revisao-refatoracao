#include "Apartamento.hpp"


Apartamento::Apartamento(string _corretor, double _area, int _quarto, int _banheiro, int _vaga, double _VALORm2, Cliente _vendedor){
    this->corretor = _corretor;
    this->area = _area;
    this->quarto = _quarto;
    this->banheiro = _banheiro;
    this->vaga = _vaga;
    this->VALORm2 = _VALORm2;
    this->C = this->comissao();
    this->Valor = this->valor() + this->comissao();
    this->vendedor = _vendedor;
}

double Apartamento::comissao() {
    return valor() * PCT/100;
}

void Apartamento::print() {

    std::cout << "[Apartamento]" << endl;
    Imovel::print();
        std::cout << "Area: " << area << endl
        << "  Quartos: " << quarto << endl
        << "  Banheiros: " << banheiro << endl
        << "  Vagas: " << vaga << endl
        << "Taxa de Comissão: " << PCT << "%" << endl
        << "Valor Comissão: R$ " << fixed << setprecision(2) << C << endl
        << "Valor de Venda: R$ " << fixed << setprecision(2) << Valor << endl;
}