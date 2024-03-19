#include <stdio.h>
int main(){
  int valor1;
  int valor2;
  printf("Digite um número inteiro:\n");
  scanf("%d", &valor1);
  printf("Digite outro número inteiro:\n");
  scanf("%d", &valor2);
  for(int i = valor1; i <= valor2; i++){
    if(primo(i) == 1){
      printf("%d\n", i);
      
    }
  }
}



int primo(int valor){
  int i;
  int divisivel = 0;
  for(i = valor; i>0; i--){
    if(valor % i == 0){
      divisivel = divisivel + 1;
    }
  }
  if(divisivel == 2){
    return 1;
  }
  else{
    return 0;
  }
}