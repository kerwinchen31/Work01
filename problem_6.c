#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0;
  int y = 100 * 101 * .5 * 100 * 101 * .5;
  for (int a = 1; a <= 100; a++){
    x += a * a;
      }
  printf("%d \n", y - x);
}
