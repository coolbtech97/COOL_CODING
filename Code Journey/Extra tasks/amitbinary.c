#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,binary=0;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n)
    {
        binary*=10;
        binary+=n%2;
        n/=2;
    }
    printf("%d",binary);
    return 0;
}