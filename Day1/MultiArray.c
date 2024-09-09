#include <stdio.h>
void main()
{
    int rl=3,cl=3;
    int a[rl][cl];

    /* for (int row = 0; row < rl; row++)
    {
        for (int col = 0; col < cl; col++)
        {
            printf("Enter number for a[%d][%d] = ",row,col);
            scanf("%d",&a[row][col]);
        }
    }
    for (int row = 0; row < rl; row++)
    {
        for (int col = 0; col < cl; col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    } */
    for (int row = 0; row < rl; row++)
    {
        for (int col = 0; col <= row ; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}