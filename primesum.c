include <stdio.h>
// Function to check if a number is prime
int checkPrime(int n) {
if (n <= 1) {
return 0; // 0 and 1 are not prime numbers
}
for (int i = 2; i <= n / 2; ++i) {
if (n % i == 0) {
return 0; // Not a prime number
}
}
return 1; // Is a prime number
}
int main() {
int n, i;
int flag = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 2; i <= n / 2; ++i) {

if (checkPrime(i) == 1) {
// Check if n - i is a prime number
if (checkPrime(n - i) == 1) {
flag = 1;
break;
}
}
}
if (flag == 1) {
printf("True\n");
} else {
printf("False\n");
}
return 0;
}
