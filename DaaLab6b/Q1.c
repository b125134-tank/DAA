#include <stdio.h>

int main(){
    int n, i;
    int fib[100];

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100){
        printf("Please enter n between 0 and 99.\n");
        return 0;
    }

    // Base cases
    fib[0] = 0;

    if (n >= 1)
        fib[1] = 1;

    // Calculate Fibonacci numbers
    for (i = 2; i <= n; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci number at position %d = %d\n",
           n, fib[n]);

    return 0;
}
