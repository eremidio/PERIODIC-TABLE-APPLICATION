//ESTE ARQUIVO CONTERÁ A CLASSE DE ELEMENTOS QUÍMICOS 

/*
A classe dos elementos químicos será instanciada dando nome ao objeto o símbolo que é usado para identificar um certo elemento químico de acordo a IUPAC, por exemplo: H se refere ao hidrôgenio, He hélio e assim por diante.

Os seguintes atributos serão especificados na classe dos elementos químicos: símbolo, nome, estabilidade, estado físico na CNTP, classificação quanto a distribuição eletrônica, massa atômica, massa atômica e a distribuição eletrônica.

Método para exibir uma ficha completa do elemento em questão será provido.

*/

//************************************************************************************************************************
//Cabeçalho
#pragma once
#include<string>
#include<cstdio>
#include<stdio.h>
#include<ncurses.h>
//************************************************************************************************************************
//Classe dos elementos (usaremos o construtor e o destruidor padrão de C++)

class chemical_element{
public:
//Membros da classe
std::string symbol, name, cntp_state, classification, stability;
std::string electronic_distribution, atomic_mass, atomic_number;
bool marked;
//Construtores e destruidores
chemical_element(){
marked = false;
                  };
~chemical_element(){};
//Definindo atributos dos elemento químico
    //Símbolo, nome, estado físico na cntp, classificação, estabilidade
    void set_properties1(std::string, std::string, std::string, std::string, std::string);
    //Distribuição eletrônica, massa atômica, número atômico 
    void set_properties2(std::string, std::string, std::string);
//Exibindo as propriedades do elemento químico em uma janela a parte no terminal
void show_element();
                       };
//************************************************************************************************************************
//Definição dos métodos da classe dos elementos químicos

//Definindo atributos dos elemento químico
//Símbolo, nome, estado físico na cntp, classificação, estabilidade
void chemical_element::set_properties1(std::string a, std::string b, std::string c, std::string d, std::string e){
name = a;
symbol = b;
cntp_state = c;
classification = d;
stability = e; 
                                                                                                                 };

//Distribuição eletrônica, massa atômica, número atômico, 1ª energia de ionização 
void chemical_element::set_properties2(std::string a, std::string b, std::string c){
electronic_distribution = a;
atomic_mass = b;
atomic_number = c;
                                                                                    };

//Exibindo um elemento químico em uma janela separada
void chemical_element::show_element(){
//Variáveis locais
std::string line1, line2, line3, line4, line5, line6, line7, line8;
//Procedimentos
//Ajuste de variável
marked = true;

//Definindo as propriedades dos elementos químicos
line1 = "Nome: "+name;
line2 = "Símbolo: "+symbol;//Usar sempre dois caractéres
line3 = "Estado físico na CNTP: "+cntp_state;
line4 = "Classificação: "+classification;
line5 = "Estabilidade (isótopo mais abundante): "+stability;
line6 = "Configuração eletrônica do estado fundamental: "+electronic_distribution;
line7 = "Massa atômica: "+atomic_mass+" (isotópo mais estável)";
line8 = "Número atômico: "+atomic_number;

//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(12, 100, 5, 5);
refresh();

//Printando as informações do elemento químico na tela
mvwprintw(win, 1, 1, "          Ficha do elemento químico.");
mvwprintw(win, 2, 1, "-----------------------------------------");
mvwprintw(win, 3, 1, "%s", line1.c_str());
mvwprintw(win, 4, 1, "%s", line2.c_str());
mvwprintw(win, 5, 1, "%s", line3.c_str());
mvwprintw(win, 6, 1, "%s", line4.c_str());
mvwprintw(win, 7, 1, "%s", line5.c_str());
mvwprintw(win, 8, 1, "%s", line6.c_str());
mvwprintw(win, 9, 1, "%s", line7.c_str());
mvwprintw(win, 10, 1, "%s", line8.c_str());


//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses
wrefresh(win);
getch();
clear();
endwin();
                   };

