#include <stdio.h>

int main(void) {
  int D;
  scanf("%i", &D);
  int saida1, saida2, saida3;
  saida1 = 6;
  saida2 = 7;
  saida3 = 8;
  if((D-saida1)%8==0){
    printf("1");
  }else if((D-saida2)%8==0){
    printf("2");
  }else{
    printf("3");
  }
  
  return 0;
}