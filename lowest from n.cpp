#include <stdio.h>

int main() {
   int n, num, min;
   
   scanf("%d", &n);
   scanf("%d", &min);
   
   for (int i = 2; i <= n; i++) {
    
      scanf("%d",&num);
      
      if (num < min) {
         min = num;
      }
   }
   
   printf("The lowest number is: %d\n", min);
   
   return 0;
}

