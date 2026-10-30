
#include <stdio.h>
#include <string.h>

int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    char X[1000], Y[1000];
    int dp[1001][1001];

    int m, n, i, j;

    printf("Enter first string: ");
    scanf("%999s", X);

    printf("Enter second string: ");
    scanf("%999s", Y);

    m = strlen(X);
    n = strlen(Y);

    // Initialize first row and column
    for (i = 0; i <= m; i++)
        dp[i][0] = 0;

    for (j = 0; j <= n; j++)
        dp[0][j] = 0;

    // Fill the DP table
    for (i = 1; i <= m; i++){
        for (j = 1; j <= n; j++){
            if (X[i - 1] == Y[j - 1]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = max(
                    dp[i - 1][j],
                    dp[i][j - 1]
                );
            }
        }
    }

    printf("Length of LCS = %d\n", dp[m][n]);

    // Reconstruct the LCS
    char lcs[1001];
    int k = 0;

    i = m;
    j = n;

    while (i > 0 && j > 0){
        if (X[i - 1] == Y[j - 1]){
            lcs[k] = X[i - 1];
            k++;
            i--;
            j--;
        }
        else if (dp[i - 1][j] >= dp[i][j - 1]){
            i--;
        }
        else{
            j--;
        }
    }

    lcs[k] = '\0';

    // Reverse the LCS
    for (i = 0; i < k / 2; i++){
        char temp = lcs[i];
        lcs[i] = lcs[k - i - 1];
        lcs[k - i - 1] = temp;
    }

    printf("Longest Common Subsequence = %s\n", lcs);

    return 0;
}
