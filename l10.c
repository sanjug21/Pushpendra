//to find the hcf of two or three given numbers
#include<stdio.h>
int main()
{
int num1,num2,min,hcf=1;
printf("Enter the first number ");
    scanf("%d",&num1);
printf("Enter the second number ");
    scanf("%d",&num2);
    min=(num1<num2)?num1:num2;
    for (int i=1;i<=min;i++)
    {
        if (((num1%i)==0)&&((num2%i)==0))
        hcf=i;
    }
printf("The HCF of %d and %d is %d",num1,num2,hcf);
}