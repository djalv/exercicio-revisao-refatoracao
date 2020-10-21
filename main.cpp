#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main(){
  Engenheiro engs[3];
  engs[0] = Engenheiro("Joao Snow", 35.0, 9.5, 3);
  engs[1] = Engenheiro("Daniela Targaryen", 30.0, 8.0, 1);
  engs[2] = Engenheiro("Bruno Stark", 30.0, 8.0, 2);

  for(int i = 0; i < 3; ++i){
    cout << "Nome: " << engs[i].getNome() << endl;
    cout << "Salario Mes: " << engs[i].pagamentoMes() << endl;
    cout << "Projetos: " << engs[i].getProjetos() << endl;
    cout << endl;
  }

  Vendedor vends[3];
  vends[0] = Vendedor("Tonho Lannister", 20, 5000, 6);
  vends[1] = Vendedor("Jose Mormont", 25, 3000, 8);
  vends[2] = Vendedor("Sonia Stark", 30, 4000, 8);
  
  for(int i = 0; i < 3; ++i){
    cout << "Nome: " << vends[i].getNome() << endl;
    cout << "Salario Mes: " << vends[i].pagamentoMes() << endl;
    cout << "Quota vendas: " << vends[i].quotaTotalAnual() << endl;
    cout << endl;
  }

  return 0;
}