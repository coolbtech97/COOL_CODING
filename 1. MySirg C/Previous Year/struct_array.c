#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct cricket{
    char name[21];
    char team[21];
    float average;
};
int main()
{
    struct cricket a[50],temp;
    int i,j;
    system("cls");
    for(i=0;i<50;i++)
    {
        printf("Enter the name of Player %d : ",i+1);
        fgets(a[i].name,21,stdin);
        printf("Enter the team name of player %d",i+1);
        fgets(a[i].team,21,stdin);
        printf("Enter the average of Player %d : ",i+1);
        scanf("%f",&a[i].average);
    }
    for(i=0;i<50;i++)
    {
        for(j=1;j<50;j++)
        {
            if(a[j].team<a[j-1].team)
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }
    }
    
    return 0;
}