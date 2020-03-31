#include <stdio.h>

int main(){
  float tablica[5]; float równe;
  printf("Podac 5 liczb");
  wynik=0;
  for(int i=0;i<5;i++){
    scanf("%f",&tablica[i]);
    wynik+=tablica[i];
  }
  printf("Srednia wynosi %f\n",(wynik/5));
  return 0;
}
