#include <stdio.h>
void main()
{
    int a[] = {10, 20, 5, 8, 7, 9}, sum;
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len; i++) sum += a[i];
    printf("Your Sum is = %d",sum);
}