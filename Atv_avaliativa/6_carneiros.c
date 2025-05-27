#include <stdio.h>

int main() {
    
    int carneiros_roubados = 0;
    int total_carneiros = 0 ;
    int estrelas;
    int p = 0;
    int i = 0;

  printf("Quantas estrelas existem?\n>> ");
  scanf("%d", &estrelas);

  int carneiros[estrelas];
  int roubados[estrelas];

  for(int i = 0; i < estrelas; i++){
    printf("Carneiros da estrela %d\n>>", i+1);
    scanf("%d", &carneiros[i]);
    total_carneiros += carneiros[i];
    roubados[i]=0;
  }
  while( i >= 0 && i<estrelas ){
    if(carneiros[i] % 2 ==0){
      if(carneiros[i]>0){
        carneiros[i]--;
        roubados[i]=1;
        carneiros_roubados++;
      }
      i--;
    }else{
      if(carneiros[i]>0){
        carneiros[i]--;
        roubados[i]=1;
        carneiros_roubados++;
      }
      i++;
    }
  }

  for(int x = 0; x <estrelas; x++){
    p = p + roubados[x];
  }
  printf("%d ",p);
  printf("%d\n",total_carneiros-carneiros_roubados);
  return 0;

}
