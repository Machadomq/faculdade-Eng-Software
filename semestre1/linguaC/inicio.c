
#include <stdio.h>
#include <stdio.h>

int main(void) {

  float temperatura;

  printf("Digite uma temperatura em graus Celcius:");
  scanf("%f", &temperatura);
  float tempFormat=(temperatura*9/5)+32;
  printf(" A temperatura em fahrenheit:%.2f", tempFormat);

  return 0;
}