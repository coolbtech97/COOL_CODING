#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int limit,n,num;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&limit);
    for(n=3;n<limit;n++)
    {
        num=n;
        while(num)
        {
            if(num%10==3||num%10==7)
            {
                printf("%d\n",n);
                break;
            }
            num/=10;
        }
    }
    return 0;
}