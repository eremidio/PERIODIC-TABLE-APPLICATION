//VAMOS CONSTRUIR UM APP PARA RODAR NO TERMINAL LINUX QUE CONTÉM A TABELA PERIÓDICA E OUTRAS INFORMAÇÕES DE REFERÊNCIA PARA A QUÍMICA E FÍSICA
//COMPILAR ESTE PROGRAMA COM O COMANDO: g++ -o periodic_table periodic_table.cpp -lncurses

//************************************************************************************************************************
//Cabeçalho
#include"periodic_table_methods.hpp"


//************************************************************************************************************************
//Função principal

int main(){
//Instanciando um objeto da classe do app
periodic_table my_periodic_table;

//Configurando a tela inicial da aplicação
my_periodic_table.menu_selection();

//Finalizando a aplicação
return 0;
          }
