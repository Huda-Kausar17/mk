#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long getWays(int n, int m, long* c) {
    long dp[n + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    
    for (int i = 0; i < m; i++) {
        for (int amount = c[i]; amount <= n; amount++) {
            dp[amount] += dp[amount - c[i]];
        }
    }
    
    return dp[n];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    long* c = malloc(m * sizeof(long));
    for (int i = 0; i < m; i++) {
        scanf("%ld", &c[i]);
    }

    printf("%ld\n", getWays(n, m, c));
    
    free(c);
    return 0;
}
