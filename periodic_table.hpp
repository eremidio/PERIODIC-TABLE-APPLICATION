//ESTE ARQUIVO CONTÉM A CLASSE SO APP DE TABELA PERIÓDICA 
/*
Esta aplicação conterá uma função que exibe a tebala períodica e uma classe de lista de elementos com propriedades básicas dos elementos químicos.
*/

//************************************************************************************************************************
//Cabeçalho
#include"periodic_table_chemical_elements_list_class.hpp"
#include"periodic_table_text.hpp"
 

//************************************************************************************************************************
//Classe da tabela períodica de elementos químicos (usaremos os construtores e destruidores padrões em C++)
class periodic_table{
public:
//Membros da classe
bool main_menu, properties_menu, reference_tables;
chemical_elements_list periodic_table_list;
//Construtores e destruídores da classe
periodic_table(){
main_menu=true;
properties_menu=false;
reference_tables = false;
                };

~periodic_table(){ };
//Métodos da classe
//Função que limpa os conteúdos da tela e renicializa o menu principal da aplicação
void clear_screen();

//Funções de acesso geral
void print_periodic_table();
void get_element_properties();

//Funções que especificam propriedades periódicas de elementos químicos
void print_density_table();
void print_melting_point_table();
void print_boiling_point_table();
void print_atomic_radius_table();
void print_oxidation_number_table();
void print_electronegativity_electroaffinity_table();
void print_first_ionization_energy_table();
void print_periodic_properties_table();

//Funções que pritam tabelas de referência para uso geral
void get_further_info();

//Funções que permitem navegar pela aplicação usando menus
void set_main_menu();
void set_properties_menu();
void set_reference_tables();
void menu_selection();
                    };


