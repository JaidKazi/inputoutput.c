#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXN 100000

int is_prime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int prime_factors(int num) {
    int factors = 0;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            if (is_prime(i)) {
                factors++;
            }
            num /= i;
        }
    }
    return factors;
}

int max_subarray(int A[], int N, int K) {
    int left = 0, max_length = 0;
    int almost_prime_factors[MAXN + 1] = {0};

    for (int right = 0; right < N; right++) {
        int factors = prime_factors(A[right]);
        for (int factor = 2; factor <= factors; factor++) {
            if (is_prime(factor)) {
                almost_prime_factors[factor]++;
            }
        }

        while (almost_prime_factors[2] >= K || almost_prime_factors[3] >= K || almost_prime_factors[5] >= K || almost_prime_factors[7] >= K) {
            int factors = prime_factors(A[left]);
            for (int factor = 2; factor <= factors; factor++) {
                if (is_prime(factor)) {
                    almost_prime_factors[factor]--;
                }
            }
            left++;
        }

        max_length = (right - left + 1) > max_length ? (right - left + 1) : max_length;
    }

    return max_length;
}

int main() {
    int T, N, K;
    int A[MAXN];

    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; case_num++) {
        scanf("%d %d", &N, &K);

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int result = max_subarray(A, N, K);
        printf("Case %d: %d\n", case_num, result);
    }

    return 0;
}
