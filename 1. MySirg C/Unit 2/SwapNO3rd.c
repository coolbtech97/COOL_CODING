#include<stdio.h>
int main()
{
    int a,b;
    system("cls");
    printf("Enter 2 valuess : ");
    scanf("%d%d",&a,&b);
    a+=b;
    b=a-b;
    a-=b;
    printf("After swapping, The values are\n\n\ta=%d\n\tb=%d",a,b);
    return 0;
}