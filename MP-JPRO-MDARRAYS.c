#include <stdio.h>
#include <string.h>

const int p=32;
const int o=65;
void ok(int, int, char tab[p][o]);
void cosiek(int, int, char tab[p][o]);

int main()
{
  char ble[p][o];
  memset(ble, ' ', sizeof(ble));
  ble[0][32]='#';
  ok(p,o,ble);
  cosiek(p,o,ble);
  return 0;
}
void ok(int zw, int ex, char tab[p][o]){
  for(int i=0;i<(zw-1);i++)
    {
    for(int j=0;j<ex;j++)
    {
      if((tab[i][j-1]==' ')&&(tab[i][j]==' ')&&(tab[i][j+1]=='#'))
      {
        tab[i+1][j]='#';
      }
      if((tab[i][j-1]=='#')&&(tab[i][j]==' ')&&(tab[i][j+1]==' '))
      {
        tab[i+1][j]='#';
      }
    }
  }
}
void cosiek(int zw, int ex, char tab[p][o])
{
  for(int i=0;i<zw;i++)
    {
    for(int j=0;j<ex;j++)
    {
      printf("%c",tab[i][j]);
    }
    printf("\n");
  }
  system("pause");
  exit(0);
}

