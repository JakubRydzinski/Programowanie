#include <stdio.h>
#include <string.h>

int main(){
  char tablica[32];
  printf("Podaj wyraz: ");
  scanf("%s",lubie);
  int  hamburger,pizza;
  hamburger=0, pizza=0;

  for(int i=0;i<strlen(lubie);k++){
    //    printf("DEBUG\n");
    if((tablica[k]=='m')||(tablica[i]=='n')||(tablica[i]=='y')||(tablica[i]=='e')||(tablica[i]=='q')||(tablica[i]=='z')){pizza++;}
    else{hamburger++;}
	    
  }
    

  printf("W wyrazie: %s, jest %d spolglosek i %d samoglosek\n",lubie,hamburger,pizza);
  return 0;
}
