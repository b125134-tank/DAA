
#include <stdio.h>
#include <limits.h>
#define MAX 100

int main(){
    int N, i, j, k, len;
    int arr[MAX];

    long long dp[MAX][MAX];

    printf("Enter number of dimensions: ");
    scanf("%d", &N);

    if (N < 2 || N > MAX){
        printf("Invalid input! N must be between 2 and 100.\n");
        return 0;
    }

    printf("Enter the dimensions:\n");

    for (i = 0; i < N; i++){
        scanf("%d", &arr[i]);

        if (arr[i] <= 0){
            printf("Dimensions must be positive.\n");
            return 0;
        }
    }

    // Initialize DP table
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            dp[i][j] = 0;
        }
    }

    // len represents the number of matrices
    for (len = 2; len < N; len++){
        for (i = 1; i <= N - len; i++){
            j = i + len - 1;

            dp[i][j] = LLONG_MAX;

            // Try every possible splitting position
            for (k = i; k < j; k++){
                long long cost =
                    dp[i][k] +
                    dp[k + 1][j] +
                    (long long)arr[i - 1] * arr[k] * arr[j];

                // Store minimum cost
                if (cost < dp[i][j]){
                    dp[i][j] = cost;
                }
            }
        }
    }

    printf("\nMinimum number of scalar multiplications = %lld\n",
           dp[1][N - 1]);

    return 0;
}
