#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{

private:
  int projetos;

public:
  //Construtor default
  Engenheiro(){
    setNome(" ");
    setSalarioHora(0.0);
    setHorasTrabalhadas(0.0);
    this->projetos = 0;
  }
  //Construtor
  Engenheiro(string nome, double salarioHora, double horasTrabalhadas, int projetos){
    setNome(nome);
    setSalarioHora(salarioHora);
    setHorasTrabalhadas(horasTrabalhadas);
    this->projetos = projetos;
  }
  //Metodos
  void setProjetos(int projetos){
    this->projetos = projetos;
  }

  int getProjetos(){
    return projetos;
  }
};