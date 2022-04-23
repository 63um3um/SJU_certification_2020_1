#include <stdio.h>
int main() {
   int M,max=0,max_arr=1;
   scanf("%d", &M);

   for (int i = 0; i < M; i++) {
      
      int N, T,N_num=0;

      scanf("%d", &N); //input N

      for (int j = 1; j <= N; j++) {
         if (N % j == 0) {
            N_num += 1;
         }
      } // N num of factor

      scanf("%d", &T);

      int n;

      while (1) {

         int flag_T = 0;
         int arr = 0;
         scanf("%d", &n);

         if (n <= 0) {
            break;
         } //stop condition

         int n_num=0;


         for (int k = 1; k <= n; k++) {
            if (n % k == 0) {
               n_num += 1;
            }
         } // n : num of factor



         if (n_num % T == 0&&flag_T==0) {
            arr += 1;
            printf("%d", n);
            flag_T += 1;
         }
         else if (N_num == n_num) {
            arr += 1;
            printf("%d", n);
         }
         
         if (arr == 0) {
            printf("none");
         }


         if (max < arr) {
            max = arr;
            max_arr = i+1;
         }
      }
      
   }
   printf("%d %d", max_arr, max);
}