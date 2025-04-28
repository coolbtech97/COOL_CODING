#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, N, sum = 0;
    system("cls");
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    N = n;
    while (n != 0)
    {
        sum = sum * 10 + (n % 10);
        n /= 10;
    }
    
    printf("Reverse of %d: %d\n", N, sum);
    return 0;
}
