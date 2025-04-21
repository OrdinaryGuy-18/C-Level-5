#include <stdio.h>
#include <math.h>

int prime(int n);

int main() {
    int n;
    printf("Input: ");
    scanf("%d", &n);

    int isprime = prime(n);

    if (isprime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

int prime(int n) {
    if (n <= 1) {
        return 0; // Not prime
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}
