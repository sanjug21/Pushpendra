// to find the factorial of the given number
#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Enter the number ");
    scanf("%d",&num);
    int temp=num;
    while (num>0)
    {
    fact=fact*(num);
    num--;
    }
    printf("THe factorial of %d is %d",temp,fact);
}