#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "generator.h"

int main()
{
  srand(time(NULL));
  float tablica[100];
  for(int j=0;j<100;j++){
    tablica[j]=rand_norm();
    printf("%f \n",normalRandom());
  }
  float suma=0;
  for(int k=0;k<100;k++){
    s1+=tablica[i];
  }
  float s2,w;
  s2=s1/100.0;
  s1=0.0; 
  for(int j=0;j<100;j++){
    suma+=pow((tablica[j]-s2),2.0);
  }
  w=s1/100.0;
  printf("Srednia wynosi: %f\n",s2);
  printf("Wariancja wynosi: %f\n",w);
  return 0;
}
