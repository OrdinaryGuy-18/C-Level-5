#include <stdio.h>
#include <string.h>

int isAnagramWithCondition(char a[], char b[], int len1, int len2);

int main()
{
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == 0 || len1 != len2)
    {
        printf("Invalid Input.");
        return 0;
    }

    int result = isAnagramWithCondition(str1, str2, len1, len2);
    if (result)
    {
        printf("%s and %s are anagrams.\n", str1, str2);
    }
    else
    {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }

    return 0;
}

int isAnagramWithCondition(char a[], char b[], int len1, int len2)
{
    int charCount[256] = {0};  // Single frequency array

    for (int i = 0; i < len1; i++)
    {
        charCount[(int)a[i]]++;  // Increment for str1
        charCount[(int)b[i]]--;  // Decrement for str2
    }

    for (int i = 0; i < 256; i++)
    {
        if (charCount[i] != 0)
        {
            return 0;  // Not an anagram
        }
    }

    return 1;  // Strings are anagrams
}
