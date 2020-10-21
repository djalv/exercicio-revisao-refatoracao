#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado{

private:
  double salarioHora;
  double horasTrabalhadas;
  string nome;

public:
  //Metodos
  double pagamentoMes(){
    double totalHoras = horasTrabalhadas;
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > 8){
      double horasExtras = horasTrabalhadas - 8;
      totalHoras += horasExtras / 2;
    }
    return totalHoras * salarioHora;
  }
  
  void setSalarioHora(double salarioHora){
    this->salarioHora = salarioHora;
  }
  
  void setNome(string nome){
    this->nome = nome;
  }
  
  string getNome(){
    return nome;
  }

  void setHorasTrabalhadas(double horasTrabalhadas){
    this->horasTrabalhadas = horasTrabalhadas;
  }
};

#endif