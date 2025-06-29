#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[3],i,j,n;
    system("cls");
    printf("Enter the number : ");
    for(i=0;i<3;i++)
    {
        scanf("%1d");
    }
    system("cls");
    printf("The number you entered is ");
    for(i=0;i<3;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}