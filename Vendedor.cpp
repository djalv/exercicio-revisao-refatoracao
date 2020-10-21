#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado{

private:
	double quotaMensalVendas;

public:
	//Construtor default
	Vendedor(){
		setNome(" ");
		setSalarioHora(0.0);
		setHorasTrabalhadas(0.0);
		this->quotaMensalVendas = 0.0;
	}
	//Construtor
	Vendedor(string nome, double salarioHora, double quotaMensalVendas, double horasTrabalhadas){
		setNome(nome);
		setSalarioHora(salarioHora);
		setHorasTrabalhadas(horasTrabalhadas);
		this->quotaMensalVendas = quotaMensalVendas;
	}
	//Metodos
	double quotaTotalAnual(){
		return quotaMensalVendas * 12;
	}
};