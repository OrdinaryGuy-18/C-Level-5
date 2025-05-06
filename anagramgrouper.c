#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int Anagram_check(char str1[], char str2[])
{
    char freq[256] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0;
    }
    
    for (int i = 0; i < len1; i++) {
        freq[str1[i]]++;
        freq[str2[i]]--;
    }
    
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            return 0;
        }
    }
    
    return 1;
}

void Anagram_group(int length, char a[length][50])
{
    // This array tracks if a word has been processed in any way
    int processed[100] = {0}; // Assuming max 100 words
    
    for (int i = 0; i < length; i++) {
        // Skip if already processed
        if (processed[i] == 1) {
            continue;
        }
        
        // Process this word as a potential group starter
        processed[i] = 1;
        
        // This is the first word in a potential group
        char group[1000] = ""; // Buffer to hold the grouped words
        strcpy(group, a[i]);   // Start with the current word
        
        // Check all other words for anagrams
        for (int j = 0; j < length; j++) {
            // Skip if already processed or same as current
            if (i == j || processed[j] == 1) {
                continue;
            }
            
            // If it's an anagram, add to group
            if (Anagram_check(a[i], a[j])) {
                strcat(group, " ");
                strcat(group, a[j]);
                processed[j] = 1; // Mark as processed
            }
        }
        
        // Print the group
        printf("%s\n", group);
    }
}

int main()
{
    int words;
    scanf("%d", &words);
    
    char str[words][50];
    for (int i = 0; i < words; i++) {
        scanf("%s", str[i]);
    }
    
    Anagram_group(words, str);
    return 0;
}
