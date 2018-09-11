#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0;
  for (int y = 0; y < 1000; y++){
    if (y % 3 == 0 || y % 5 == 0)
      x += y;
  }
  printf("%d \n", x);
}
