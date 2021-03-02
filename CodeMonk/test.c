#include<stdio.h>
#include<stdbool.h>
//#include<malloc.h>


long long conv_dec_bin(long long N) {
    long long bin_val = 0;
    int rem, fact = 1;
    while(N!=0) {
        rem = N%2;
        N = N/2;
        bin_val = bin_val + fact*rem;
        fact = fact*10;
    }
    /*
    if(0 == N) {
        bin_val = 0;
    } else {
        bin_val = N%2 + 10*conv_dec_bin(N/2);
    }*/

    return bin_val;
}
int Solve (long long N) {
   // Your code goes here
   long long i = 0;
   long long  sum = 0;
   int ret;
   for(i = 1; i<=N; i++) {
   	   long long bin_val = conv_dec_bin(i);
       sum = sum + bin_val;
       printf("%lld \t", bin_val);
   }
   printf("\n");

    ret = sum;
    // Problem description say something else. 
    // Therefore, keeping this code intact.
   ret = sum%1000000000;
   return ret;
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        long long N;
        scanf("%lld", &N);

        int out_ = Solve(N);
        printf("%d", out_);
        printf("\n");
    }
}