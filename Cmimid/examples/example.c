#include <stdio.h>
int main(int argc, char** argv) {
  int i = 0;
  while (i < 10) {
    if (i % 2 == 0) {
      printf("%d\n" , i);
    }
    i ++;
  }
  return 0;
}
