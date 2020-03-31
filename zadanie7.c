#include <stdio.h>

int nwd(int sernik, int szarlotka)
{
  if (szarlotka == 0)
 {
  return sernik;
 }
  else if (sernik >= szarlotka && szarlotka > 0)
 {
  return nwd(szarlotka, (sernik % szarlotka));
 }
}
int main(){
  printf("Podaj dwie liczby: ");
  int sernik,szarlotka;
  
  scanf("%d %d",&sernik,&szarlotka);

  if((sernik<0)||(szarlotka<0)){
    printf("napisz poprawnie\n");
    return 1;
  }
  if(sernik>szarlotka){
    printf("NWD wynosi: %d\n",nwd(sernik,szarlotka));
  }
  else if(szarlotka>sernik){
    printf("NWD wynosi: %d\n",nwd(szarlotka,sernik));
  }
  else{
    printf("Liczby sa rowne\n");
  }
  return 0;
}
