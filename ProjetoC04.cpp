#include <iostream> 

using namespace std; 

  //Pedro Gabriel da Silva 739
  //João Pedro Ramos Garcia 820
  //Mariana Novais Portugal 746
  //Emily Horrana Lima Rodrigues Armando 787
  //Vinicius Oliveira Braga 743

struct item
{
  string nome; 
  string tipo;
  int raridade;
  string magia;
};

int insert()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}  
int cadastrar()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int buscar()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int verificar()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int listarA()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int listarR()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int contar()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}
int remover()
{
  cout << "Funcionalidade em construção" << endl;
  return 0;
}

int main()
{  
  string item[100];
  int opcao;
  
	cout << "=================================================" << endl;
	cout << "                    M E N U                      " << endl;
	cout << "=================================================" << endl;
	cout << "1. Inserir item                                 " <<endl;
	cout << "2. Cadastrar similaridade entre itens.          " <<endl; 
	cout << "3. Buscar itens similares.                      " << endl;
	cout << "4. Verificar a existência de um item.           " <<endl;
	cout << "5. Listar itens (ordem alfabética de nome).     " << endl;
	cout << "6. Listar itens (ordem decrescente de raridade)." <<endl;
	cout << "7. Contar itens com mesma propriedade mágica.   " << endl;
	cout << "8. Remover itens menos raros.                   " << endl;
	cout << "------------------------------------------------" << endl;
 
  cin >> opcao;

  switch(opcao)
  {
    case 1:
      insert();
    break;
    case 2:
      cadastrar();
    break;
    case 3:
      buscar();
    break;  
    case 4:
      verificar();
    break;
    case 5:
      listarA();
    break;
    case 6:
      listarR();
    break;
    case 7:
      contar();
    break;
    case 8:
      remover();
    break;

  }

  return 0;  
}
 
