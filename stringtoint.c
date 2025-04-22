#include <stdio.h>
#include <string.h>
#include <math.h>

int stringtoint(char str[]);
int integerconv(int a[], int n, int isNegative);

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int n = stringtoint(str);
    printf("%d\n", n);

    return 0;
}

int stringtoint(char str[])
{
    int len = strlen(str);
    int integer[len];
    int start = 0, index = 0;
    int isNegative = 0;

    if (str[0] == '-') {
        isNegative = 1;
        start = 1;
    }

    for (int i = start; i < len; i++)
    {
        if (str[i] >= '0' && str[i] <= '9') {
            integer[index++] = str[i] - '0';
        }
    }

    return integerconv(integer, index, isNegative);
}

int integerconv(int a[], int n, int isNegative)
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        int product = a[i] * pow(10, n - (i + 1));
        num += product;
    }

    if (isNegative) {
        num = -num;
    }

    return num;
}
