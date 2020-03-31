#include <stdio.h>
int menu(){
  int calku;
  while(1){
    printf("1.Dodawanie\n 2.Odejmowanie\n 3.Mnozenie\n 4.Dzielenie\n Wybor: ");
    scanf("%d",&calku);
    switch(calku){
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    default:
      printf("Prosze wybrac poprawne dzialanie\n");
    }
  }
}

int main(){
  printf("Program kalkulator, wybierz opcje z menu\n");
  int cal;
  cal=menu();
  printf("Prosze podac dwie liczby\n");
  float cos1,cos2,wynik;
  scanf("%f %f",&cos1,&cos2);
  if((cos2==0)&&(cal==4))
  {printf("NIE MOZNA DZIELIC PRZEZ ZERO\n"); 
  return 1;}
  if(cals == 1){wynik=l1+l2;}
  else if(cal==2)
  {rowne=cos1-cos2;}
  else if(cal==3)
  {rowne=cos1*cos2;}
  else if(cal==4)
  {rowne=cos1/cos2;}
  switch(cal){
  case 1:
    rowne=(cos1+cos2);
  case 2:
    rowne=(cos1-cos2);
  case 3:
    rowne=(cos1*cos2);
  case 4:
    rowne=(cos1/cos2);
  }
  printf("Wynik: %f",rowne);
  return 0;
}
