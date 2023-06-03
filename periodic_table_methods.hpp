//ESSE ARQUIVO CONTÉM FUNÇÕES DE USO GERAL DE ACESSO AOS MÉTODOS DA CLASSE DO APP

//************************************************************************************************************************
//Cabeçalho
#pragma once
#include<string>
#include<cstdio>
#include<stdio.h>
#include<ncurses.h>
#include"getchar.h"
#include"periodic_table.hpp"
#include"periodic_table_text.hpp"
//************************************************************************************************************************
//MÉTODOS DA CLASSE

//Função que limpa o conteúdo da tela (testada no terminal GNOME linux, altera esta função para outras plataformas)
//A função será usada para limpar o terminal e inicializar os menus da aplicação no terminal
void periodic_table::clear_screen(){
printf("\033[2J\033[H");
                                   };

//Função que printa a tabela periódica na tela
void periodic_table::print_periodic_table(){
//Ajuste de variáveis
main_menu=true;
properties_menu=false;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(36, 110, 0, 0);
refresh();

//Printando a tabela periódica numa janela a parte
mvwprintw(win, 0, 1, "TABELA PERIÓDICA DOS ELEMENTOS QUÍMICOS");
mvwprintw(win, 1, 2, " ");
mvwprintw(win, 2, 2, "      1                                                                                    18");
mvwprintw(win, 3, 2, "    +----+                                                                               +----+");
mvwprintw(win, 4, 2, "    |  H | <---------------------Elementos representativos-----------------------------> | He |");
mvwprintw(win, 5, 2, " 1  | 1  | 2                                                      13   14   15   16   17 |2   |  ");
mvwprintw(win, 6, 2, "    +----+----+                                                 +----+----+----+----+----+----+");
mvwprintw(win, 7, 2, "    | Li | Be |                                                 |  B |  C |  N |  O |  F | Ne |");
mvwprintw(win, 8, 2, " 2  |3   |4   |                                                 | 5  | 6  | 7  | 8  | 9  |10  |");
mvwprintw(win, 9, 2, "    +----+----+ <--------Elementos de transição---------------> +----+----+----+----+----+----+");
mvwprintw(win, 10, 2, "    | Na | Mg |                                                 | Al | Si |  P |  S | Cl | Ar |");
mvwprintw(win, 11, 2, " 3  |11  |12  | 3    4    5    6    7    8    9    10   11   12 |13  |14  |15  |16  |17  |18  |");
mvwprintw(win, 12, 2, "    +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 13, 2, "    | K  | Ca | Sc | Ti |  V | Cr | Mn | Fe | Co | Ni | Cu | Zn | Ga | Ge | As | Se | Br | Kr |");
mvwprintw(win, 14, 2, " 4  |19  |20  |21  |22  |23  |24  |25  |26  |27  |28  |29  |30  |31  |32  |33  |34  |35  |36  |");
mvwprintw(win, 15, 2, "    +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 16, 2, "    | Rb | Sr |  Y | Zr | Nb | Mo | Tc | Ru | Rh | Pd | Ag | Cd | In | Sn | Sb | Te |  I | Xe |");
mvwprintw(win, 17, 2, " 5  |37  |38  |39  |40  |41  |42  |43  |44  |45  |46  |47  |48  |49  |50  |51  |52  |53  |54  |");
mvwprintw(win, 18, 2, "    +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 19, 2, "    | Cs | Ba | ** | Hf | Ta |  W | Re | Os | Ir | Pt | Au | Hg | Tl | Pb | Bi | Po | At | Rn |");
mvwprintw(win, 20, 2, " 6  |55  |56  |    |72  |73  |74  |75  |76  |77  |78  |79  |80  |81  |82  |83  |84  |85  |86  |");
mvwprintw(win, 21, 2, "    +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 22, 2, "    | Fr | Ra | ** | Rf | Db | Sg | Bh | Hs | Mt | Ds | Rg | Cn | Nh | Fl | Mc | Lv | Ts | Og |");
mvwprintw(win, 23, 2, " 7  |87  |88  |    |104 |105 |106 |107 |108 |109 |110 |111 |112 |113 |114 |115 |116 |117 |118 |");
mvwprintw(win, 24, 2, "    +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 25, 2, " ");
mvwprintw(win, 26, 2, " ");
mvwprintw(win, 27, 2, "                    Elementos de transição interna               ");
mvwprintw(win, 28, 2, "               +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 29, 2, "               | La | Ce | Pr | Nd | Pm | Sm | Eu | Gd | Tb | Dy | Ho | Er | Tm | Yb | Lu |");
mvwprintw(win, 30, 2, " Lantanídios   |57  |58  |59  |60  |61  |62  |63  |64  |65  |66  |67  |68  |69  |70  |71  |");
mvwprintw(win, 31, 2, "               +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 32, 2, "               | Ac | Th | Pa |  U | Np | Pu | Am | Cm | Bk | Cf | Es | Fm | Md | No | Lr |");
mvwprintw(win, 33, 2, " Actnídeos     |89  |90  |91  |92  |93  |94  |95  |96  |97  |98  |99  |100 |101 |102 |103 |");
mvwprintw(win, 34, 2, "               +----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+");
mvwprintw(win, 35, 2, " ");

//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses e limpando o cachê de memória
wrefresh(win);
getch();
clear();
endwin();
                                          };

//Função que permite selecionar elementos da tabela periódica
void periodic_table::get_element_properties(){
//Ajuste de variáveis
main_menu=true;
properties_menu=false;
reference_tables = false;
//Procedimentos
periodic_table_list.select_element();
                                             };

//Funções que de acesso as propriedades periódicas do elementos químicos

//Função que printa a tabela de densidade dos elementos químicos
void periodic_table::print_density_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 90, 0, 0);
refresh();

 //Printando uma tabela com as densidades dos elementos químicos (2 casas de precisão)
    mvwprintw(win, 1, 1, "Tabela de densidade dos elementos químicos(g/cm³) ou *(g/L).");
    mvwprintw(win, 2, 2, "------------------------------------------------------------ ");
    mvwprintw(win, 3, 2, "H*: 0.09     He*: 0.179    Li: 0.53      Be: 1.86");
    mvwprintw(win, 4, 2, "B: 2.46      C: 2.26       N*: 1.17      O*: 1.33");
    mvwprintw(win, 5, 2, "F*: 1.58     Ne*: 0.89     Na: 0.97      Mg: 1.74");
    mvwprintw(win, 6, 2, "Al: 2.71     Si: 2.33      P: 1.82       S: 2.07");
    mvwprintw(win, 7, 2, "Cl*: 3.17    K: 0.86       Ar*: 1.09     Ca: 1.55");
    mvwprintw(win, 8, 2, "Sc: 2.99     Ti: 4.51      V: 6.09       Cr: 7.15");
    mvwprintw(win, 9, 2, "Mn: 7.44     Fe: 7.87      Co: 8.90      Ni: 8.91");
    mvwprintw(win, 10, 2, "Cu: 8.96     Zn: 7.13      Ga: 5.91      Ge: 5.32");
    mvwprintw(win, 11, 2, "As: 5.72     Se: 4.81      Br: 3.12      Kr*: 3.81");
    mvwprintw(win, 12, 2, "Rb: 1.53     Sr: 2.63      Y: 4.47       Zr: 6.51");
    mvwprintw(win, 13, 2, "Nb: 8.57     Mo: 10.28     Tc: 11.49     Ru: 12.43");
    mvwprintw(win, 14, 2, "Rh: 12.41    Pd: 12.00     Ag: 10.49     Cd: 8.65");
    mvwprintw(win, 15, 2, "In: 7.31     Sn: 7.29      Sb: 6.69      Te: 6.24");
    mvwprintw(win, 16, 2, "I: 4.93      Xe*: 5.89     Cs: 1.87      Ba: 3.65");
    mvwprintw(win, 17, 2, "La: 6.15     Ce: 6.77      Pr: 6.48      Nd: 7.01");
    mvwprintw(win, 18, 2, "Pm: 7.26     Sm: 7.52      Eu: 5.24      Gd: 7.89");
    mvwprintw(win, 19, 2, "Tb: 8.25     Dy: 8.55      Ho: 8.80      Er: 9.07");
    mvwprintw(win, 20, 2, "Tm: 9.32     Yb: 6.97      Lu: 9.84      Hf: 13.31");
    mvwprintw(win, 21, 2, "Ta: 16.68    W: 19.30      Re: 21.00     Os: 22.59");
    mvwprintw(win, 22, 2, "Ir: 22.42    Pt: 21.45     Au: 19.32     Hg: 13.53");
    mvwprintw(win, 23, 2, "Tl: 11.85    Pb: 11.34     Bi: 9.75      Po: --");
    mvwprintw(win, 24, 2, "At: --       Rn*: 9.73     Fr: --        Ra: 5.50");
    mvwprintw(win, 25, 2, "Ac: 10.07    Th: 11.72     Pa: 15.37     U: 19.05");
    mvwprintw(win, 26, 2, "Np: 20.45    Pu: 19.80     Am: 13.6      Cm: 13.51");
    mvwprintw(win, 27, 2, "Bk: 14.78    Cf: --        Es: --        Fm: --");
    mvwprintw(win, 28, 2, "Md: --       No: --        Lr: --        Rf: --");
    mvwprintw(win, 29, 2, "Db: --       Sg: --        Bh: --        Hs: --");
    mvwprintw(win, 30, 2, "Mt: --       Ds: --        Rg: --        Cn: --");
    mvwprintw(win, 31, 2, "Nh: --       Fl: --        Mc: --        Lv: --");
    mvwprintw(win, 32, 2, "Ts: --       Og: --");


//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses e limpando o cachê de memória
wrefresh(win);
getch();
clear();
endwin();
                                          };


//Função que printa o ponto de fusão dos elementos químicos
void periodic_table::print_melting_point_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 80, 0, 0);
refresh();

//Printando uma tabela com os pontos de fusão dos elementos químicos 
mvwprintw(win, 1, 2, "Tabela dos pontos de fusão dos elementos químicos (ºC).");
mvwprintw(win, 2, 2, "-------------------------------------------------------");
mvwprintw(win, 3, 2, "H: -259        He: -272       Li: 181        Be: 1280");
mvwprintw(win, 4, 2, "B: 2180        C: 3800        N: -210        O: -218");
mvwprintw(win, 5, 2, "F: -219        Ne: -249       Na: 98         Mg: 650");
mvwprintw(win, 6, 2, "Al: 660        Si: 1414       P: 44          S: 113");
mvwprintw(win, 7, 2, "Cl: -101       Ar: -189       K: 64          Ca: 839");
mvwprintw(win, 8, 2, "Sc: 1541       Ti: 1668       V: 1910        Cr: 1907");
mvwprintw(win, 9, 2, "Mn: 1246       Fe: 1538       Ni: 1455       Co: 1495");
mvwprintw(win, 10, 2, "Cu: 1083       Zn: 420        Ga: 30         Ge: 937");
mvwprintw(win, 11, 2, "As: 81         Se: 217        Br: -7         Kr: -157");
mvwprintw(win, 12, 2, "Rb: 39         Sr: 777        Y: 1526        Zr: 1852");
mvwprintw(win, 13, 2, "Nb: 2468       Mo: 2617       Tc: 2200       Ru: 2334");
mvwprintw(win, 14, 2, "Rh: 1964       Pd: 1552       Ag: 962        Cd: 321");
mvwprintw(win, 15, 2, "In: 157        Sn: 232        Sb: 630        Te: 449");
mvwprintw(win, 16, 2, "I: 113         Xe: -111       Cs: 28         Ba: 727");
mvwprintw(win, 17, 2, "La: 920        Ce: 795        Pr: 931        Nd: 1021");
mvwprintw(win, 18, 2, "Pm: 1100       Sm: 1072       Eu: 822        Gd: 1313");
mvwprintw(win, 19, 2, "Tb: 1360       Dy: 1412       Ho: 1474       Er: 1529");
mvwprintw(win, 20, 2, "Tm: 1545       Yb: 824        Lu: 1663       Hf: 2233");
mvwprintw(win, 21, 2, "Ta: 3017       W: 3422        Re: 3186       Os: 3033");
mvwprintw(win, 22, 2, "Ir: 2446       Pt: 1772       Au: 1064       Hg: -39");
mvwprintw(win, 23, 2, "Tl: 303        Pb: 327        Bi: 271        Th: 1750");
mvwprintw(win, 24, 2, "Pa: 1572       U: 1132        Np: 640        Pu: 641");
mvwprintw(win, 25, 2, "Am: 1176       Cm: 1345       Bk: 986        Cf: 900");
mvwprintw(win, 26, 2, "Es: 860        Fm: 1522       Md: 827        No: 827");
mvwprintw(win, 27, 2, "Lr: 1627       Rf: --         Db: --         Sg: --");
mvwprintw(win, 28, 2, "Bh: --         Hs: --         Mt: --         Ds: --");
mvwprintw(win, 29, 2, "Rg: --         Cn: --         Nh: --         Fl: --");
mvwprintw(win, 30, 2, "Mc: --         Lv: --         Ts: --         Og: --");


//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses e limpando o cachê de memória
wrefresh(win);
getch();
clear();
endwin();
                                                };

//Função que printa o ponto de ebulição dos elementos químicos
void periodic_table::print_boiling_point_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 80, 0, 0);
refresh();

//Printando uma tabela com os pontos de ebulição dos elementos químicos
mvwprintw(win, 1, 2, "Tabela dos pontos de ebulição dos elementos químicos (ºC).");
mvwprintw(win, 2, 2, "----------------------------------------------------------");
mvwprintw(win, 3, 2, "H: -252        He: -268       Li: 1347        Be: 2970");
mvwprintw(win, 4, 2, "B: 3650        C: 4830        N: -196         O: -183");
mvwprintw(win, 5, 2, "F: -188        Ne: -246       Na: 883         Mg: 1090");
mvwprintw(win, 6, 2, "Al: 251        Si: 3265       P: 280         S: 444.6");
mvwprintw(win, 7, 2, "Cl: -34.6      K: 774         Ar: -185.9     Ca: 1484");
mvwprintw(win, 8, 2, "Sc: 2832       Ti: 3287       V: 3407        Cr: 2671");
mvwprintw(win, 9, 2, "Mn: 2061       Fe: 2861       Co: 2927       Ni: 2732");
mvwprintw(win, 10, 2, "Cu: 2562       Zn: 907        Ga: 2204       Ge: 2830");
mvwprintw(win, 11, 2, "As: 613        Se: 685        Br: 58.8       Kr: -152.3");
mvwprintw(win, 12, 2, "Rb: 686        Sr: 1655       Y: 3338        Zr: 4682");
mvwprintw(win, 13, 2, "Nb: 5017       Mo: 4912       Tc: --         Ru: 4150");
mvwprintw(win, 14, 2, "Rh: 3727       Pd: 2970       Ag: 2162       Cd: 765");
mvwprintw(win, 15, 2, "In: 2072       Sn: 2602       Sb: 1587       Te: 988");
mvwprintw(win, 16, 2, "I: 184.3       Xe: -108       Cs: 671        Ba: 1870");
mvwprintw(win, 17, 2, "La: 3457       Ce: 3257       Pr: 3127       Nd: 3100");
mvwprintw(win, 18, 2, "Pm: 3000       Sm: 1900       Eu: 1527       Gd: 3250");
mvwprintw(win, 19, 2, "Tb: 3230       Dy: 2562       Ho: 2968       Er: 2868");
mvwprintw(win, 20, 2, "Tm: 1950       Yb: 1469       Lu: 3668       Hf: 4602");
mvwprintw(win, 21, 2, "Ta: 5425       W: 5555        Re: 5627       Os: 5027");
mvwprintw(win, 22, 2, "Ir: 4527       Pt: 3827       Au: 3129       Hg: -38.83");
mvwprintw(win, 23, 2, "Tl: 1457       Pb: 1749       Bi: 1564       Po: 254");
mvwprintw(win, 24, 2, "At: 337        Rn: -62        Fr: 677        Ra: 1140");
mvwprintw(win, 25, 2, "Ac: 3471       Th: 5061       Pa: 4300       U: 4131");
mvwprintw(win, 26, 2, "Np: 4273       Pu: 3501       Am: 2880       Cm: 3383");
mvwprintw(win, 27, 2, "Bk: 983        Cf: --         Es: --         Fm: --");
mvwprintw(win, 28, 2, "Md: --         No: --         Lr: --         Rf: --");
mvwprintw(win, 29, 2, "Db: --         Sg: --         Bh: --         Hs: --");
mvwprintw(win, 30, 2, "Mt: --         Ds: --         Rg: --         Cn: --");
mvwprintw(win, 31, 2, "Nh: --         Fl: --         Mc: --         Lv: --");
mvwprintw(win, 32, 2, "Ts: --         Og: --");


//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses e limpando o cachê de memória
wrefresh(win);
getch();
clear();
endwin();
                                                };

//Função que printa a tabela de raios atômicos dos elementos químicos
void periodic_table::print_atomic_radius_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 80, 0, 0);
refresh();

//Printando uma tabela com os raios atômicos dos elementos químicos
    mvwprintw(win, 1, 2, "Tabela dos raios atômicos dos elementos químicos (pm).");
    mvwprintw(win, 2, 2, "------------------------------------------------------");
    mvwprintw(win, 3, 2, "H: 0.037   He: 0.031   Li: 0.152   Be: 0.112");
    mvwprintw(win, 4, 2, "B: 0.088   C: 0.077    N: 0.070    O: 0.073");
    mvwprintw(win, 5, 2, "F: 0.072   Ne: 0.038   Na: 0.186   Mg: 0.160");
    mvwprintw(win, 6, 2, "Al: 0.143  Si: 0.117   P: 0.098    S: 0.088");
    mvwprintw(win, 7, 2, "Cl: 0.079  K: 0.227    Ar: 0.097   Ca: 0.197");
    mvwprintw(win, 8, 2, "Sc: 0.162  Ti: 0.147   V: 0.134    Cr: 0.128");
    mvwprintw(win, 9, 2, "Mn: 0.127  Fe: 0.126   Co: 0.125   Ni: 0.124");
    mvwprintw(win, 10, 2, "Cu: 0.128  Zn: 0.134   Ga: 0.135   Ge: 0.122");
    mvwprintw(win, 11, 2, "As: 0.119  Se: 0.116   Br: 0.094   Kr: 0.110");
    mvwprintw(win, 12, 2, "Rb: 0.248  Sr: 0.215   Y: 0.180    Zr: 0.160");
    mvwprintw(win, 13, 2, "Nb: 0.146  Mo: 0.139   Tc: 0.130   Ru: 0.134");
    mvwprintw(win, 14, 2, "Rh: 0.134  Pd: 0.137   Ag: 0.144   Cd: 0.151");
    mvwprintw(win, 15, 2, "In: 0.156  Sn: 0.145   Sb: 0.133   Te: 0.123");
    mvwprintw(win, 16, 2, "I: 0.115   Xe: 0.108   Cs: 0.298   Ba: 0.253");
    mvwprintw(win, 17, 2, "La: 0.187  Ce: 0.182   Pr: 0.182   Nd: 0.181");
    mvwprintw(win, 18, 2, "Pm: 0.181  Sm: 0.180   Eu: 0.180   Gd: 0.180");
    mvwprintw(win, 19, 2, "Tb: 0.177   Dy: 0.178   Ho: 0.176   Er: 0.176");
    mvwprintw(win, 20, 2, "Tm: 0.175   Yb: 0.174   Lu: 0.173   Hf: 0.159");
    mvwprintw(win, 21, 2, "Ta: 0.146   W: 0.139    Re: 0.137   Os: 0.135");
    mvwprintw(win, 22, 2, "Ir: 0.136   Pt: 0.139   Au: 0.144   Hg: 0.150");
    mvwprintw(win, 23, 2, "Tl: 0.156   Pb: 0.154   Bi: 0.143   Th: 0.179");
    mvwprintw(win, 24, 2, "Pa: 0.163   U: 0.156    Np: 0.155   Pu: 0.159");
    mvwprintw(win, 25, 2, "Am: 0.173   Cm: 0.174   Bk: 0.170   Cf: 0.186");
    mvwprintw(win, 26, 2, "Es: 0.186   Fm: 0.180   Md: 0.173   No: 0.176");
    mvwprintw(win, 27, 2, "Lr: 0.173");
    mvwprintw(win, 28, 2, "Rf: --      Db: --       Sg: --       Bh: --");
    mvwprintw(win, 29, 2, "Hs: --      Mt: --       Ds: --       Rg: --");
    mvwprintw(win, 30, 2, "Cn: --      Nh: --       Fl: --       Mc: --");
    mvwprintw(win, 31, 2, "Lv: --      Ts: --       Og: --");

//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Atualizando a janela do ncurses e limpando o cachê de memória
wrefresh(win);
getch();
clear();
endwin();
                                                };


//Função que printa os números de oxidação que um elemento químico pode ter em diferentes compostos químicos
void periodic_table::print_oxidation_number_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(37, 100, 0, 0);
refresh();

//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);
//Printando uma tabela com os números de oxidação dos elementos químicos
mvwprintw(win, 1, 2, "Tabela dos números de oxidação dos elementos químicos.");
mvwprintw(win, 2, 2, "------------------------------------------------------");
mvwprintw(win, 3, 2, "H: +1, -1      He: 0        Li: +1       Be: +2");
mvwprintw(win, 4, 2, "B: +3          C: -4, +2, +4        N: -5, -3, +2, +3, +4, +5       O: -1, -2, +2");
mvwprintw(win, 5, 2, "F: -1          Ne: 0        Na: +1       Mg: +2");
mvwprintw(win, 6, 2, "Al: +3         Si: -4        P: -3, -2, +1, +3, +4, +5      S: -2, +2, +4, +6");
mvwprintw(win, 7, 2, "Cl: -1, +1, +3, +5, +7         Ar: 0        K: +1        Ca: +2");
mvwprintw(win, 8, 2, "Sc: +3         Ti: +2, +3, +4      V: -1, +2, +3, +4, +5");
mvwprintw(win, 9, 2, "Cr: -2, +2, +3, +6      Mn: +2, +4, +6, +7     Fe: +2, +3, +6");
mvwprintw(win, 10, 2, "Co: +2, +3      Ni: +2       Cu: +1, +2");
mvwprintw(win, 11, 2, "Zn: +2         Ga: +3       Ge: -4, +2, +4     As: -3, +3, +5");
mvwprintw(win, 12, 2, "Se: -2, +4, +6     Br: -1, +1, +3, +5, +7        Kr: 0");
mvwprintw(win, 13, 2, "Rb: +1         Sr: +2       Y: +3        Zr: +2, +4");
mvwprintw(win, 14, 2, "Nb: +3, +5     Mo: +2, +3, +4, +5, +6");
mvwprintw(win, 15, 2, "Tc: +2, +4, +7      Ru: +2, +3, +4, +6, +8     Rh: +2, +3, +4");
mvwprintw(win, 16, 2, "Pd: +2, +4      Ag: +1       Cd: +2");
mvwprintw(win, 17, 2, "In: +3         Sn: -4, +2, +4     Sb: -3, +3, +5");
mvwprintw(win, 18, 2, "Te: -2, +4, +6     I: -1, +1, +3, +5, +7         Xe: 0");
mvwprintw(win, 19, 2, "Cs: +1         Ba: +2       La: +3");
mvwprintw(win, 20, 2, "Ce: +3, +4     Pr: +3, +4     Nd: +3, +4");
mvwprintw(win, 21, 2, "Pm: +3         Sm: +3, +2     Eu: +2, +3         Gd: +3");
mvwprintw(win, 22, 2, "Tb: +3, +4        Dy: +3        Ho: +3        Er: +3");
mvwprintw(win, 23, 2, "Tm: +2, +3         Yb: +2, +3        Lu: +3        Hf: +4");
mvwprintw(win, 24, 2, "Ta: +3, +5         W: +2, +3, +4, +5, +6");
mvwprintw(win, 25, 2, "Re: +2, +4, +6, +7      Os: +2, +3, +4, +6, +8");
mvwprintw(win, 26, 2, "Ir: +2, +3, +4, +6     Pt: +2, +4      Au: +1, +3");
mvwprintw(win, 27, 2, "Hg: +1, +2     Tl: +1, +3     Pb: -4, +2, +4");
mvwprintw(win, 28, 2, "Bi: -3, +3, +5     Po: +2, +4, +6     At: -1, +1, +3, +5, +7     Rn: 0");
mvwprintw(win, 29, 2, "Fr: +1         Ra: +2       Ac: +3");
mvwprintw(win, 30, 2, "Th: +4         Pa: +4, +5       U: +3, +4, +5, +6");
mvwprintw(win, 31, 2, "Np: +3, +4, +5, +6, +7");
mvwprintw(win, 32, 2, "Pu: +3, +4, +5, +6, +7, +8     Am: +2, +3, +4, +5, +6");
mvwprintw(win, 33, 2, "Cm: +3, +4     Bk: +3, +4     Cf: +3, +4     Es: +3");
mvwprintw(win, 34, 2, "Fm: +2, +3         Md: +2, +3       No: +3         Lr: +3");

// Atualizando a janela do ncurses e limpando o cache de memória
wrefresh(win);
getch();
clear();
endwin();

                                                   };


//Função que printa a eletroafinidade e a eletronegatividade dos elementos químicos da tabela
void periodic_table::print_electronegativity_electroaffinity_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 110, 0, 0);
refresh();

//Printando a tabela de eletronegatividade e eletroafinidade sos elementos químicos
mvwprintw(win, 1, 2, "Tabela de eletronegatividade (Pauling) e eletroafinidade (K/mol) dos elementos químicos.");
mvwprintw(win, 2, 2, "----------------------------------------------------------------------------------------");
mvwprintw(win, 3, 2, "H: 2.1/72.7      He: --/--        Li: 1.0/59.7       Be: 2.0/--");
mvwprintw(win, 4, 2, "B: 2.0/-107     C: 2.5/121.8       N: 3.0/-7          O: 3.5/-141.0");
mvwprintw(win, 5, 2, "F: 4.0/328.0    Ne: --/--        Na: 0.9/52.8       Mg: 1.2/--");
mvwprintw(win, 6, 2, "Al: 1.5/--       Si: 1.8/133.6      P: 2.1/72.0        S: 2.5/200.4");
mvwprintw(win, 7, 2, "Cl: 3.0/348.6   Ar: --/--        K: 0.8/48.4        Ca: 1.0/--");
mvwprintw(win, 8, 2, "Sc: 1.3/18.1    Ti: 1.5/50.6       V: 1.6/50.9        Cr: 1.6/64.3");
mvwprintw(win, 9, 2, "Mn: 1.5/0       Fe: 1.8/15.7       Co: 1.8/63.7       Ni: 1.9/112.0");
mvwprintw(win, 10, 2, "Cu: 1.9/119.2   Zn: 1.6/--        Ga: 1.6/29.6       Ge: 1.8/118.0");
mvwprintw(win, 11, 2, "As: 2.0/78.0    Se: 2.4/194.0      Br: 2.8/324.6      Kr: --/--");
mvwprintw(win, 12, 2, "Rb: 0.8/46.9    Sr: 1.0/5.0        Y: 1.2/--        Zr: 1.3/41.1");
mvwprintw(win, 13, 2, "Nb: 1.6/86.1    Mo: 1.8/72.0       Tc: 1.9/53.0       Ru: 2.2/101.3");
mvwprintw(win, 14, 2, "Rh: 2.2/110.2   Pd: 2.2/54.2       Ag: 1.9/125.6      Cd: 1.7/--");
mvwprintw(win, 15, 2, "In: 1.7/28.9    Sn: 1.7/107.3      Sb: 1.9/103.2      Te: 2.1/190.2");
mvwprintw(win, 16, 2, "I: 2.5/295.2    Xe: --/--        Cs: 0.7/45.5        Ba: 0.9/13.9");
mvwprintw(win, 17, 2, "La: 1.1/48.0    Ce: 1.1/50.0       Pr: 1.1/50.0      Nd: 1.1/50.0");
mvwprintw(win, 18, 2, "Pm: 1.1/50.0    Sm: 1.1/50.0       Eu: 1.1/50.0      Gd: 1.1/50.0");
mvwprintw(win, 19, 2, "Tb: 1.1/50.0    Dy: 1.1/50.0       Ho: 1.1/50.0      Er: 1.1/50.0");
mvwprintw(win, 20, 2, "Tm: 1.1/50.0    Yb: 1.1/50.0       Lu: 1.1/50.0      Hf: 1.3/0");
mvwprintw(win, 21, 2, "Ta: 1.5/--       W: 1.7/78.6        Re: 1.9/27.2       Os: 2.2/103.7");
mvwprintw(win, 22, 2, "Ir: 2.2/151.0   Pt: 2.2/205.3      Au: 2.4/222.8      Hg: 1.9/0");
mvwprintw(win, 23, 2, "Tl: 1.8/19.2    Pb: 1.8/35.1       Bi: 1.9/91.2       Po: --/--");
mvwprintw(win, 24, 2, "At: --/--        Rn: --/--        Fr: --/--         Ra: 0.9/9.3");
mvwprintw(win, 25, 2, "Ac: 1.1/--       Th: 1.3/41.0       Pa: 1.5/--        U: 1.4/50.6");
mvwprintw(win, 26, 2, "Np: 1.3/--       Pu: 1.3/--        Am: 1.3/--        Cm: 1.3/--");
mvwprintw(win, 27, 2, "Bk: 1.3/--       Cf: 1.3/--        Es: --/--        Fm: --/--");
mvwprintw(win, 28, 2, "Md: --/--        No: --/--        Lr: --/--        Rf: --/--");
mvwprintw(win, 29, 2, "Db: --/--        Sg: --/--        Bh: --/--        Hs: --/--");
mvwprintw(win, 30, 2, "Mt: --/--        Ds: --/--        Rg: --/--        Cn: --/--");
mvwprintw(win, 31, 2, "Nh: --/--        Fl: --/--        Mc: --/--        Lv: --/--");
mvwprintw(win, 32, 2, "Ts: --/--        Og: --/--");

//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

// Atualizando a janela do ncurses e limpando o cache de memória
wrefresh(win);
getch();
clear();
endwin();
                                                                    };


//Função que printa a primeira energia de ionização dos elementos químicos
void periodic_table::print_first_ionization_energy_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();
WINDOW *win = newwin(35, 100, 0, 0);
refresh();

//Ajuste da borda
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);

//Printando a tabela da primeira energia de ionização dos elementos químicos
mvwprintw(win, 1, 2, "Tabela da primeira energia de ionização (kJ/mol) dos elementos químicos.");
mvwprintw(win, 2, 2, "-------------------------------------------.----------------------------");
mvwprintw(win, 3, 2, "H: 1312      He: 2372        Li: 520       Be: 899");
mvwprintw(win, 4, 2, "B: 798       C: 1087         N: 1400       O: 1313");
mvwprintw(win, 5, 2, "F: 1681      Ne: 2081        Na: 496       Mg: 737");
mvwprintw(win, 6, 2, "Al: 578      Si: 787         P: 1012       S: 1000");
mvwprintw(win, 7, 2, "Cl: 1251     Ar: 1521        K: 419        Ca: 590");
mvwprintw(win, 8, 2, "Sc: 633      Ti: 658         V: 650        Cr: 652");
mvwprintw(win, 9, 2, "Mn: 717      Fe: 763         Co: 760       Ni: 737");
mvwprintw(win, 10, 2, "Cu: 746     Zn: 906         Ga: 579       Ge: 762");
mvwprintw(win, 11, 2, "As: 947     Se: 941         Br: 1139      Kr: 1351");
mvwprintw(win, 12, 2, "Rb: 403     Sr: 549         Y: 600        Zr: 640");
mvwprintw(win, 13, 2, "Nb: 652     Mo: 684         Tc: 702       Ru: 710");
mvwprintw(win, 14, 2, "Rh: 719     Pd: 804         Ag: 731       Cd: 868");
mvwprintw(win, 15, 2, "In: 558     Sn: 709         Sb: 834       Te: 869");
mvwprintw(win, 16, 2, "I: 1008     Xe: 1170        Cs: 376       Ba: 502");
mvwprintw(win, 17, 2, "La: 538     Ce: 534         Pr: 527       Nd: 533");
mvwprintw(win, 18, 2, "Pm: 540     Sm: 545         Eu: 547      Gd: 593");
mvwprintw(win, 19, 2, "Tb: 566     Dy: 573         Ho: 581       Er: 589");
mvwprintw(win, 20, 2, "Tm: 597     Yb: 603         Lu: 524       Hf: 658");
mvwprintw(win, 21, 2, "Ta: 761     W: 770          Re: 760       Os: 840");
mvwprintw(win, 22, 2, "Ir: 880     Pt: 870         Au: 890       Hg: 1007");
mvwprintw(win, 23, 2, "Tl: 589     Pb: 715         Bi: 703       Po: 812");
mvwprintw(win, 24, 2, "At: 920     Rn: 1037        Fr: 376       Ra: 509");
mvwprintw(win, 25, 2, "Ac: 509     Th: 587         Pa: 568       U: 597");
mvwprintw(win, 26, 2, "Np: 604     Pu: 585         Am: 578       Cm: 581");
mvwprintw(win, 27, 2, "Bk: 601     Cf: 608         Es: 619       Fm: 627");
mvwprintw(win, 28, 2, "Md: 635     No: 642         Lr: 651       Rf: --");
mvwprintw(win, 29, 2, "Db: --      Sg: --          Bh: --        Hs: --");
mvwprintw(win, 30, 2, "Mt: --      Ds: --          Rg: --        Cn: --");
mvwprintw(win, 31, 2, "Nh: --      Fl: --          Mc: --        Lv: --");
mvwprintw(win, 32, 2, "Ts: --      Og: --");

// Atualizando a janela do ncurses e limpando o cache de memória
wrefresh(win);
getch();
clear();
endwin();
                                                          };

//Função que printa uma tabela de referência da variação das propriedades gerais dos elementos químicos
void periodic_table::print_periodic_properties_table(){
//Ajuste de variáveis
main_menu=false;
properties_menu=true;
reference_tables = false;
//Iniciando o ambiente ncurses
initscr();


//Janela de títulos
WINDOW *win0 = newwin(5, 100, 0, 0);
refresh();
wborder(win0, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win0, 1, 2, "Tabela de referência das propriedades periódicas dos elementos químicos.");
mvwprintw(win0, 2, 2, "    (--++ denota o sentido de crescimento na tabela periódica)");
wrefresh(win0);


//Tabela 1
WINDOW *win1 = newwin(10, 35, 5, 10);
refresh();
wborder(win1, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win1, 1, 2, "                       +   ");
mvwprintw(win1, 2, 2, "                       +   ");
mvwprintw(win1, 3, 2, "-------------++++++++++++++ ");
mvwprintw(win1, 4, 2, "                       +   ");
mvwprintw(win1, 5, 2, "Eletronegatividade     -   ");
mvwprintw(win1, 6, 2, "Eletroafinidade        -   ");
mvwprintw(win1, 7, 2, "Energia de ionização   -   ");
wrefresh(win1);

//Tabela 2
WINDOW *win2 = newwin(10, 35, 15, 10);
refresh();
wborder(win2, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win2, 1, 2, "   -                    ");
mvwprintw(win2, 2, 2, "   -  Eletropositividade");
mvwprintw(win2, 3, 2, "   -  Raio Atômico      ");
mvwprintw(win2, 4, 2, "   +                    ");
mvwprintw(win2, 5, 2, "++++++++++++-----------");
mvwprintw(win2, 6, 2, "   +");
mvwprintw(win2, 7, 2, "   +");

wrefresh(win2);
//Tabela 3
WINDOW *win3 = newwin(10, 35, 25, 10);
refresh();
wborder(win3, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win3, 1, 2, "   -                   -   ");
mvwprintw(win3, 2, 2, "   -                   -   ");
mvwprintw(win3, 3, 2, "   -   Volume Atômico  -   ");
mvwprintw(win3, 4, 2, "   +                   +   ");
mvwprintw(win3, 5, 2, "++++++++-----------++++++++");
mvwprintw(win3, 6, 2, "   +                   +   ");
mvwprintw(win3, 7, 2, "   +                   +   ");
wrefresh(win3);
//Tabela 4
WINDOW *win4 = newwin(10, 35, 5, 55);
refresh();
wborder(win4, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win4, 1, 2, "                      ");
mvwprintw(win4, 2, 2, "-----++++++++++++-----");
mvwprintw(win4, 3, 2, "    Maleabilidade     ");
mvwprintw(win4, 4, 2, "    Ductibilidade     ");
mvwprintw(win4, 5, 2, "    Tenacidade        ");
mvwprintw(win4, 6, 2, "-----++++++++++++-----");
mvwprintw(win4, 7, 2, "                      ");
wrefresh(win4);

//Tabela 5
WINDOW *win5 = newwin(10, 35, 15, 55);
refresh();
wborder(win5, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win5, 1, 2, "+                    -");
mvwprintw(win5, 2, 2, "+  Ponto de fusão    -");
mvwprintw(win5, 3, 2, "+  Ponto de ebulição -");
mvwprintw(win5, 4, 2, "-  ---++++++++++---  +");
mvwprintw(win5, 5, 2, "-                    +");
mvwprintw(win5, 6, 2, "-                    +");
wrefresh(win5);

//Tabela 6
WINDOW *win6 = newwin(10, 35, 25, 55);
refresh();
wborder(win6, 0, 0, 0, 0, 0, 0, 0, 0);
mvwprintw(win6, 1, 2, "-                    -");
mvwprintw(win6, 2, 2, "-                    -");
mvwprintw(win6, 3, 2, "-     Densidade      -");
mvwprintw(win6, 4, 2, "+ -----++++++++----- +");
mvwprintw(win6, 5, 2, "+                    +");
mvwprintw(win6, 6, 2, "+                    +");
wrefresh(win6);


//Atualizando a janela do ncurses e limpando o cache de memória
getch();
clear();
endwin();
                                                       };

//Link para uma referência mais completas de tabelas utéis
void periodic_table::get_further_info(){
//Ajuste de variáveis
main_menu=false;
properties_menu=false;
reference_tables = true;

//Iniciando o ambiente ncurses
initscr();

//Inicializando a tabela de referências bibliográficas
WINDOW *win = newwin(20, 100, 10, 10);
refresh();
wborder(win, 0, 0, 0, 0, 0, 0, 0, 0);


//Printando a tabela da primeira energia de ionização dos elementos químicos
mvwprintw(win, 1, 2, "         Referências bibliográficas.");
mvwprintw(win, 2, 2, "---------------------------------------------------------");
mvwprintw(win, 3, 2, "                                                         ");
mvwprintw(win, 4, 2, "Links úteis, contendo tabelas mais completas com as      ");
mvwprintw(win, 5, 2, "propriedades químicas dos elementos e tabelas de         ");
mvwprintw(win, 6, 2, "referências úteis em quimica (pressione Ctrl e clique no ");
mvwprintw(win, 7, 2, "link para acessar os sites de referência).               ");
mvwprintw(win, 8, 2, "                                                         ");
mvwprintw(win, 9, 2, "---------------------------------------------------------");
mvwprintw(win, 10, 2, "                                                        ");
mvwprintw(win, 11, 2, "https://sciencenotes.org/chemistry-reference-tables-pdf/");
mvwprintw(win, 12, 2, "https://en.wikipedia.org/wiki/Molar_ionization_energies_of_the_elements");
mvwprintw(win, 13, 2, "https://webbook.nist.gov/chemistry/");
mvwprintw(win, 14, 2, "https://periodictable.com");
mvwprintw(win, 15, 2, "https://www.rsc.org/periodic-table");
mvwprintw(win, 16, 2, "https://ascii.co.uk/art/chemistry");

//Atualizando a janela do ncurses e limpando o cache de memória
wrefresh(win);
getch();
clear();
endwin();
                                       };



//Funções que permitem navegar pela aplicação usando menus
//Menu principal
void periodic_table::set_main_menu(){
//Variáveis locais 
int option;

//Limpando o terminal e printando o cabeçalho da aplicação
clear_screen();
app_title();

//Exibindo as opções do menu
printf("     MENU PRINCIPAL.\n");
printf("----------------------\n");
printf("1. Exibir a tabela periódica.\n");
printf("2. Menu dos elementos químicos.\n");
printf("3. Saiba mais.\n");
printf("4. Ajuda.\n");
printf("5. Visualizar os créditos da aplicação.\n");
printf("6. Sair da aplicação.\n");

//Requisitando input do usuário
printf("Usuário selecione a opção desejada.\n");
scanf("%d", &option);

//Executando a ação solicitada
if(option==1){
print_periodic_table();
             };

if(option==2){
main_menu=false;
properties_menu=true;
reference_tables = false;
             };

if(option==3){
main_menu=false;
properties_menu=false;
reference_tables = true;
             };

if(option==4){
int flag1 = getc(stdin);
app_explanation();
             };

if(option==5){
credits();
int flag2 = getc(stdin);
             };

if(option==6){
clear_screen();
return;
             };

//Atualizando a tela da aplicação
menu_selection();
                                    };


//Menu de propriedades dos elementos químicos
void periodic_table::set_properties_menu(){
//Variáveis locais 
int option;

//Limpando o terminal e printando o cabeçalho da aplicação
clear_screen();
app_title();

//Exibindo as opções do menu
printf("     MENU DOS ELEMENTOS QUÍMICOS.\n");
printf("----------------------------------\n");
printf("1. Exibir a tabela periódica.\n");
printf("2. Exibir informações básicas sobre um elemento químico.\n");
printf("3. Exibir tabela com as densidades dos elementos químicos.\n");
printf("4. Exibir tabela com os pontos de fusão dos elementos químicos.\n");
printf("5. Exibir tabela com os pontos de ebulição dos elementos químicos.\n");
printf("6. Exibir tabela com os raios atômicos dos elementos químicos.\n");
printf("7. Exibir tabela com a eletroafinidade e a eletronegatividade dos elementos químicos.\n");
printf("8. Exibir tabela com as primeiras energias de ionização dos elementos químicos.\n");
printf("9. Visualizar tabela geral sobre variação das propriedades periódicas dos elementos químicos.\n");
printf("10. Exibir tabela com os número de oxidação mais usuais dos lementos químicos.\n");
printf("0. Retornar ao menu principal.\n");

//Requisitando input do usuário
printf("Usuário selecione a opção desejada.\n");
scanf("%d", &option);

//Executando a ação solicitada
if(option==1){
print_periodic_table();
main_menu=false;
properties_menu=true;
reference_tables = false;
             };

if(option==2){
clear_screen();
app_title();
get_element_properties();
main_menu=false;
properties_menu=true;
reference_tables = false;
             };

if(option==3)
print_density_table();

if(option==4)
print_melting_point_table();

if(option==5)
print_boiling_point_table();

if(option==6)
print_atomic_radius_table();

if(option==7)
print_electronegativity_electroaffinity_table();

if(option==8)
print_first_ionization_energy_table();

if(option==9)
print_periodic_properties_table();

if(option==10)
print_oxidation_number_table();

if(option==0){
main_menu=true;
properties_menu=false;
reference_tables = false;
             };

//Atualizando a tela da aplicação
menu_selection();
                                          };



//Menu de links úteis
void periodic_table::set_reference_tables(){
//Variáveis locais 
int option;

//Limpando o terminal e printando o cabeçalho da aplicação
clear_screen();
app_title();

//Exibindo as opções do menu
printf("           SAIBA MAIS.\n");
printf("----------------------------------\n");
printf("1. Exibir referências bibliográficas e links com maiores informações.\n");
printf("0. Retornar ao menu inicial.\n");
//Requisitando input do usuário
printf("Usuário selecione a opção desejada.\n");
scanf("%d", &option);

//Executando a ação solicitada
if(option==1)
get_further_info();

if(option==0){
main_menu=true;
properties_menu=false;
reference_tables = false;
             };

//Atualizando a tela da aplicação
menu_selection();
                                           };


//Função de seleção de menus
void periodic_table::menu_selection(){
if(main_menu==true && properties_menu==false && reference_tables==false)
set_main_menu();
if(main_menu==false && properties_menu==true && reference_tables==false)
set_properties_menu();
if(main_menu==false && properties_menu==false && reference_tables==true)
set_reference_tables();
                                     };


