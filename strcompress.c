#include <stdio.h>
#include <string.h>

void strcompress(char str[], char compressed[]);

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character if present

    char compressed[200];  // To store the compressed output
    strcompress(str, compressed);
    printf("%s\n", compressed);

    return 0;
}

void strcompress(char str[], char compressed[]) {
    int len = strlen(str);
    int k = 0;  // Index for compressed array
    int count = 1;  // Counter for consecutive characters

    for (int i = 0; i < len; i++) {
        if (i == len - 1 || str[i] != str[i + 1]) {
            // Append the character
            compressed[k++] = str[i];
            // Append its count
            compressed[k++] = count + '0';
            count = 1;  // Reset count for the next character
        } else {
            count++;
        }
    }
    compressed[k] = '\0';  // Null-terminate the compressed string
}
