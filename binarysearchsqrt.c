include <stdio.h>

// Function to compute the square root using binary search
int squareRoot(int n) {
    if (n == 0 || n == 1) {
        return n; // Square root of 0 or 1 is the number itself
    }
    
    int left = 1, right = n / 2, result = 0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (mid * mid == n) {
            return mid; // Perfect square root found
        } else if (mid * mid < n) {
            left = mid + 1;
            result = mid; // Store the last valid approximation
        } else {
            right = mid - 1;
        }
    }
    return result; // Return integer part of the square root
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = squareRoot(n);
    printf("The integer square root of %d is: %d\n", n, result);

    return 0;
}
