#include <stdio.h>

int main() {
  printf("1~100까지의 짝수의 합을 구하는 프로그램입니다.");
  int i, sum = 0;
  for(i = 1; i <=100; i++){
  	if(i % 2 = 0) sum += i;
  }
  printf("sum = %d", sum);
  return 0;
}