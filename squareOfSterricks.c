#include <stdio.h>

int main(void)
{
    int x = 0,y = 0;
    int squareSide = 0;
    printf("Enter Side of a Square = ");
    scanf("%u",&squareSide);
    for(x = 0; x < squareSide; x++)
    {
        for(y = 0; y < squareSide; y++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
