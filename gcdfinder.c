#include <stdio.h>

int factor(int a, int fac[]);
int comp(int a[], int size_a, int b[], int size_b);

int main()
{
    int n1, n2;
    printf("Input:\n");
    scanf("%d %d", &n1, &n2);

    int fac1[100], fac2[100];
    int size1, size2;

    printf("Factors 1: ");
    size1 = factor(n1, fac1);
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", fac1[i]);
    }

    printf("\nFactors 2: ");
    size2 = factor(n2, fac2);
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", fac2[i]);
    }

    int product = comp(fac1, size1, fac2, size2);
    printf("\nGCD: %d\n", product);

    return 0;
}

int factor(int a, int fac[])
{
    int index = 0, i = 2; // Starting i at 2 to avoid division by zero
    while (a > 1)
    {
        if (a % i == 0) // Correct condition to check for factors
        {
            a /= i; // Divide a by i
            fac[index++] = i;
        }
        else
        {
            i++;
        }
    }
    return index; // Return the size of the factors array
}

int comp(int a[], int size_a, int b[], int size_b)
{
    int pro = 1;
    int i = 0, j = 0;

    while (i < size_a && j < size_b)
    {
        if (a[i] == b[j])
        {
            pro *= a[i];
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return pro;
}
