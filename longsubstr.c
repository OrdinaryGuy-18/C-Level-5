#include <stdio.h>
#include <string.h>

// Check if a string is a palindrome and return 1 if true, 0 if false
int checkpalindrome(char str[], int size)
{
    int flag = 0;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

void longestpalindrome(char str[], char nstr[])
{
    int len = strlen(str);
    int max_length = 0;
    int start_idx = 0;
    
    char sub[100]; // Temporary substring
    
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            int size = 0;
            // Extract substring from index i to j
            for (int k = i; k <= j; k++)
            {
                sub[size++] = str[k];
            }
            sub[size] = '\0';
            
            // Check if substring is palindrome
            if (checkpalindrome(sub, size))
            {
                // Update if this palindrome is longer
                if (size > max_length)
                {
                    max_length = size;
                    start_idx = i;
                }
            }
        }
    }
    
    // Copy the longest palindromic substring to nstr
    int idx = 0;
    for (int i = start_idx; i < start_idx + max_length; i++)
    {
        nstr[idx++] = str[i];
    }
    nstr[idx] = '\0';
}

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    char nstr[100];
    longestpalindrome(str, nstr);
    
    printf("The longest palindromic substring is: ");
    puts(nstr);
    
    return 0;
}
