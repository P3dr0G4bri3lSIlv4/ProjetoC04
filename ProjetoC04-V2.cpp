#include <iostream> 

using namespace std; 

  //Pedro Gabriel da Silva 739
  //João Pedro Ramos Garcia 820
  //Mariana Novais Portugal 746
  //Emily Horrana Lima Rodrigues Armando 787
  //Vinicius Oliveira Braga 743

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
  int opcao;
  
	cout << "=================================================" << endl;
	cout << "                    M E N U                      " << endl;
	cout << "=================================================" << endl;
	cout << "0. encerrar programa                            " <<endl;
	cout << "1. Inserir item                                 " <<endl;
	cout << "2. Cadastrar similaridade entre itens.          " <<endl; 
	cout << "3. Buscar itens similares.                      " << endl;
	cout << "4. Verificar a existência de um item.           " <<endl;
	cout << "5. Listar itens (ordem alfabética de nome).     " << endl;
	cout << "6. Listar itens (ordem decrescente de raridade)." <<endl;
	cout << "7. Contar itens com mesma propriedade mágica.   " << endl;
	cout << "8. Remover itens menos raros.                   " << endl;
	cout << "-------------------------------------------------" << endl;
 
  cin >> opcao;
  
  while(opcao!=0)
  {
  	if(opcao == 1)
	{
		insert(); 	
	}
	else if(opcao == 2)
	{
		cadastrar();	   	   	
	}
	else if(opcao == 3)
	{
		buscar();	   	   	
	}
	else if(opcao == 4)
	{
		verificar();	   	   	
	}
	else if(opcao == 5)
	{
		listarA();	   	   	
	}
	else if(opcao == 6)
	{
		listarR();	   	   	
	}
	else if(opcao == 7)
	{
		contar();	   	   	
	}
	else if(opcao == 8)
	{
		remover();	   	   	
	}
  	else 
	{
		cout << "entrada invalida!" << endl;	   	   	
	}
  	cin >> opcao; 
  }
  
  cout << "obrigado por usar o programa!" << endl; 
  
  return 0;  
}
 
