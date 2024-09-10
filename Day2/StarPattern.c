#include <stdio.h>
void main()
{
    /* for (int row = 0; row <= 3; row++)
    {
        for (int col = 3; col > row; col--)
        {
            printf("  ");
        }
        for (int col = 0; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    } 
    for (int row = 0; row <= 3; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("  ");
        }
        for (int col = 3; col > row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 3; col > row; col--)
        {
            printf("* ");
        }
        printf("\n");
    } */
   for (int row = 0; row <= 3; row++)
    {
        for (int col = 3; col > row; col--)
        {
            printf("  ");
        }
        for (int col = 0; col <= row; col++)
        {
            printf("* ");
        }
        for (int col = 0; col < row; col++)
        {
            printf("* ");
        }
        printf("\n");
    } 
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            printf("  ");
        }
        for (int col = 3; col > row; col--)
        {
            printf("* ");
        }
        for (int col = 3; col > row+1; col--)
        {
            printf("* ");
        }
        printf("\n");
    }
}