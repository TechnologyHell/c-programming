#include<stdio.h>

void main()
{
    int row, i, j, num=1;
    printf("Enter the number of rows : ");
    scanf("%d" , &row);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d\t", num);
            num++;
        }
        printf("\n");
    }
}