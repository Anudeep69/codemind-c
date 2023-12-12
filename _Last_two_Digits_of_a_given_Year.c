#include<stdio.h>
int main()
{
    int y,year;
    scanf("%d",&year);
    y=year%100;
    printf("%02d",y);
}