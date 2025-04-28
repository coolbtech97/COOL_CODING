#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    system("cls");
    printf("\n");
    for(i=9;i>=0;i--)
    {
        printf("\n\t");
        for(j=0;j<10;j++)
        {
            if(i+j>8)
            {
                printf("*  ");
            }
        }
    }
    return 0;
}