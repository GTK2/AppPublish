#include <stdio.h>

int main() {
  printf("1~100사이의 3의 배수를 출력하는 프로그램입니다.\n");
  int i;
  for(i = 1; i <=100; i++){
  	if(i % 3 == 0) 
  		printf("%d ", i);
  }
  return 0;
}