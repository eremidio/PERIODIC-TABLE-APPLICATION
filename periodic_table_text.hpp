//ESTE ARQUIVO CONTERÁ ALGUMAS FUNÇÕES DE TEXTO PARA O APLICATIVO DA TABELA PERIÓDICA

//************************************************************************************************************************
//Cabeçalho
#pragma once
#include<cstdio>
#include<iostream>



//************************************************************************************************************************
//FUNÇÕES DE TEXTO USADAS NO PROGRAMA

//Função que printa o cabeçalho da aplicação

void app_title(){
                                                                    
printf("  F       #######   #      ####  ####  #         #         |     |                 \n");
printf("   \\         #     # #     #   # #     #        # #      --Si----Si--              \n");
printf("    B--F     #    #####    ####  ####  #       #####       |     |          N       \n");
printf("   /         #   #     #   #   # #     #      #     #      |     |         /|\\     \n");
printf("  F          #  #       #  ####  ####  ##### #       #   --Si----Si--     / | \\    \n");
printf("                                                           |     |       H  H  H    \n");
printf("                              O=O   H--H    N ≡ N                                             \n");
printf("         O=C=O   He                                #                           H                  \n");
printf("      H                   ####   ####  ####   #   ###  ####   #   ####     #    \\             O    \n");
printf("      |         O-->O     #   #  #     #   #  #  #   # #   #  #  #        # #    O--O        / \\  \n");
printf("   H--C--H    //          ####   ####  ####   #  #   # #   #  #  #       #####       \\      H   H  \n");
printf("      |      O            #      #     # #    #  #   # #   #  #  #      #     #       H            \n");
printf("      H                   #      ####  #  #   #   ###  ####   #   #### #       #                  \n\n\n");

               };

//Explicação
void app_explanation(){
printf("                     COMO USAR ESTA APLICAÇÃO.                                   \n");
printf("---------------------------------------------------------------------------------\n");
printf("Este é um aplicativo sobre a tabela periódica dos elementos químicos.            \n");
printf("A aplicação contém funcionalidades para exibir a tabela periódica e e tabelas com\n");
printf("as propriedades mais comuns dos elementos químicos. Atualmente são conhecidos 118\n");
printf("ao todo, entre encontrados na natureza e os sintetizados artificialmente.      \n\n");
printf("A aplicação possuí uma simples interface de texto e consiste em uma série de me- \n");
printf("nus que possuem uma seríe de opções que podem ser acessadas digitando-se o número\n");
printf("correspondente a opção deseja. Erros de digitação podem acarretar erro na lógica \n");
printf("de execução do programa. Os menus são auto explicativos e de fácil navegação.   \n\n");
printf("A aplicação contém um menu principal que dá acesso a funcionalidade de visualiza- \n");
printf("ção da tabela periódica, ao menu de tabelas que contém algumas propriedades bási- \n");
printf("cas dos elementos químicos e a uma tabela que contém links de sites que disponibi-\n");
printf("zam informações mais completas.                                                 \n\n");
printf("Esta aplicação foi desenvolvida no Linux e projetada para ser executada no termi- \n");
printf("nal, por isso algumas sequências de escape podem não funcionar em outras platafor-\n");
printf("mas. A aplicação faz uso da biblioteca ncurses que deve estar instalado no dispo- \n");
printf("sitivo no qual a aplicação será executada.                                      \n\n");
//Pausa
int flag=std::cin.get();

                      };
//Créditos
void credits(){
//Variáveis 
const int x=95;
//Texto
printf("\033[%dm\nEscrito por Elias Rodrigues Emídio.\nSugestões de melhorias, entrar em contato com: e.r.emidio@yandex.com\n\033[0m", x);

printf("               )        Se você não for parte da solução então você deve ser o precipitado. \n");
printf("             )   )                               -Trina L. Short-                           \n");
printf("            (  )(                       o                                                   \n");
printf("           ( (( )                        o                                                  \n");
printf("            )`)(,                       ___              ___  ___  ___  ___                 \n");
printf("             .__.                       | |        ._____|_|__|_|__|_|__|_|_____.           \n");
printf("             |  |                       | |        |__________________________|@|           \n");
printf("             |  |                       |o|          | | |@|  | |  | |  |~| | |             \n");
printf("             | _|                      .' '.         | | |@|  | |  |~|  |#| | |             \n");
printf("           __|(]_)                   /  o   \\        | | :@:  :~:  : :  :#: | |             \n");
printf("          / __[)|_                  :____o___:     ._|_|_.\"    \"    \"    \"._|_|_.           \n");
printf("         / ( | (]_)                 '.______.'     |___|@|                |___|@|           \n");
printf("        /   )|(]__)                                                                         \n");
printf("       /  ___|(]_)                                                                          \n");
printf("         /   |  |                                                                           \n");
printf("  ejm   /    \\__/                                                                          \n");

//Pausa
int flag=std::cin.get();
              };

