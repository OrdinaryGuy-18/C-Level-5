#include <stdio.h>
#include <string.h>

// Calculate 2 raised to the power of n (2^n)
int power(int base, int exponent)
{
    // Special case: if exponent is 0, return 1
    if (exponent == 0)
        return 1;
    
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

int countPermutations(int n, char str[n])
{
    int letter_count = 0;  // Count of letters (both uppercase and lowercase)
    
    for (int i = 0; i < n; i++)
    {
        // Count letters (both uppercase and lowercase)
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            letter_count++;
        }
        // Digits and other characters remain unchanged, so we don't count them
    }
    
    // Each letter can be in 2 forms (uppercase or lowercase)
    // So total permutations = 2^(number of letters)
    return power(2, letter_count);
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    int len = strlen(str);
    int permutations = countPermutations(len, str);
    printf("%d", permutations);
    return 0;
}
