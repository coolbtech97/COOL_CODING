#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sum=0,i,j,k,a[3][3],b[3][3],c[3][3];
    system("cls");
    printf("Enter the matrix A : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the matrix b : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    } 
    system("cls");
    printf("You Entered the matrix A:");
    for(i=0;i<3;i++)
    {
        printf("\n\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    printf("\nAnd matrix B:");
    for(i=0;i<3;i++)
    {
        printf("\n\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
    }
    printf("\n\nAnd the multiplication of two matrix is:\n");
    
    for(i=0;i<3;i++)
    {
        printf("\n\t");
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
            printf("%d ",c[i][j]);
        }
    }
    printf("\n");
    return 0;
}