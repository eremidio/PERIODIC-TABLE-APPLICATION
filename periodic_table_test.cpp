//UM PROGRAMA PARA TESTAR FUNCIONALIDADES DO APP DE QUÍMICA
//COMPILAR ESTE PROGRAMA COM O COMANDO: g++ -o periodic_table_test periodic_table_test.cpp -lncurses
//Cabeçalho
#include<iostream>
#include"periodic_table_chemical_elements.hpp"
#include"periodic_table_chemical_elements_list_class.hpp"
#include"periodic_table_methods.hpp"
#include"periodic_table_text.hpp"
using namespace std;


int main(){
//Testando a classe de elementos químicos
chemical_element H;//Hidrogênio
H.set_properties1("hidrogênio", "H", "gasoso","elemento representativo", "estável");
H.set_properties2("1s(1)", "1.008", "1");
H.show_element();

//Testando a classe de lista de elementos químicos
int flag1 = std::cin.get();
chemical_elements_list my_list;
my_list.select_element();

//Testando a classe de tabela periódica
int flag2 = std::cin.get();

periodic_table my_table;
my_table.print_periodic_table();
my_table.get_element_properties();
my_table.print_density_table();
my_table.print_melting_point_table();
my_table.print_boiling_point_table();
my_table.print_atomic_radius_table();
my_table.print_oxidation_number_table();
my_table.print_electronegativity_electroaffinity_table();
my_table.print_first_ionization_energy_table();
my_table.print_periodic_properties_table();
my_table.get_further_info();
//Testando as funções de texto da aplicação
app_title();
app_explanation();
credits();
//Finalizando a aplicação
return 0;
          };
