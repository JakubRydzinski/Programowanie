#include <stdio.h>

void main(void){
  float x1,x2,h,wynik;
  printf("Podaj dlugosc a, b oraz wysokosc\n");
  scanf("%f %f %f",&x1, &x2, &h);
  wynik=x1*x2*h*1.0;
  printf("Objetosc prostopadloscianu wynosi: %f\n",wynik);
system("pause"); 
}
