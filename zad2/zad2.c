#include <stdio.h>
#include <stdlib.h>
void iloczyntablic(int tab1[3][3], int tab2[3][3], int tab3[3][3])
{
int a,b;
for(a=0; a<3; a++)
{ for(b=0; b<3; b++)
tab3[a][b]=tab1[a][b]*tab2[a][b];
}
}

int main()
{
  int a,b;
  int tablica1[3][3];
  int tablica2[3][3];
  int tablica3[3][3];
  printf("Podaj tablice 1: \n");
  for(a=0; a<3; a++)

  { for(b=0; b<3; b++)

  scanf("%d",&tablica1[a][b]);
  }

  { for(b=0; b<3; b++)

  scanf("%d",&tablica1[a][b]);
  }
  printf("Podaj tablice 2: \n");
  for(a=0; a<3; a++)

  { for(b=0; b<3; b++)

  scanf("%d",&tablica2[a][b]);
  }
printf("PODALES: \n");

  for(a=0; a<3; a++)

  { for(b=0; b<3; b++)

  printf("%d ",tablica1[a][b]);
  }
  putchar('\n');
  for(a=0; a<3; a++)

  { for(b=0; b<3; b++)

  printf("%d ",tablica2[a][b]);
  }
    putchar('\n');
  iloczyntablic(tablica1,tablica2,tablica3);
  printf("Po uzyciu funkcji: \n");
  for(a=0; a<3; a++)

  { for(b=0; b<3; b++)

  printf("%d ",tablica3[a][b]);
}
return 0;
}
