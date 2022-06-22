#include <stdio.h>
void fun() {
   int a = 15, b = 25;
   int c = a + b;
   {
      int c = b - a;
      printf("%d ", c);
   }
   printf("%d", c);
}
int main() {
    fun();
    return 0;
}

