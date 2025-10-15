#include <stdio.h>

int main(){
  int num, pos=0, neg=0;
  
  do{
      printf("Digite numero a validar  ");
      scanf("%d",&num);
      if (num>0){
          pos++;
      }
      if (num<0){
          neg++;
          
      }
  }while (num != 0);
  
  printf("En total hay %d numeros positivos y %d numeros negativos.",pos,neg);
  

    return 0;
}
