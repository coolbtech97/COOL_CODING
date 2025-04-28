#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,c,j;
    system("cls");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("\nThe prime numbers from 2 to %d are :",n);
    for(i=2;i<=n;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}