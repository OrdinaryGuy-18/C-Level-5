#include <stdio.h>
#include <string.h>

// Function to sort words in ascending order
void sortWords(char words[][20], int count) {
    char temp[20];
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (strcmp(words[j], words[j + 1]) > 0) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    char words[10][20];
    
    // Input number of words
    scanf("%d", &n);
    
    // Input n words
    for (int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }
    
    // Sort in ascending order
    sortWords(words, n);
    
    // Print the output (ascending - descending combo)
    for (int i = 0; i < n; i++) {
        printf("%s - %s\n", words[i], words[n-i-1]);
    }
    
    return 0;
}
