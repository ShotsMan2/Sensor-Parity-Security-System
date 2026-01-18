#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n = 7, sonuc, j, son, array[] = {6, 14, 43, 53, 64, 32, 24};

    sonuc = 1;

    son = 0;

    printf("ba?langiç dizisi: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            array[i] = 0;
        }
        else
        {
            array[i] = 1;
        }
    }
    printf("\n parite dizisi: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j >= 0; j--)
        {
            sonuc *= 2;
        }
        son += array[i] * sonuc;
    }
    printf("\n guvenlik kodu: %d \n", son);

    return 0;
}
