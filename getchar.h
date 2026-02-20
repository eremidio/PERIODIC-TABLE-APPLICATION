//Função customizada para receber input do usuário

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
template<class T>
T keypress() {
  system ("/bin/stty raw");
  T c;
  system("/bin/stty -echo");
  c = getc(stdin);
  system("/bin/stty echo");
  system ("/bin/stty cooked");
  return c;
} 
