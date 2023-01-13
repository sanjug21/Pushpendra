#include<stdio.h>
int main()
{
// we will discuss the assignment operators
float num1,num2;
printf("Enter the first no = ");
scanf("%f",&num1);
printf("Enter the second no = ");
scanf("%f",&num2);
printf("Sum of two no will be %.2f\n",num1 +=num2);
printf("Subtract of two no will be %.2f\n",num1 -=num2);
printf("Multiply of two no will be %.2f\n",num1 *=num2);
printf("Divide of two no will be %.2f\n",num1 /=num2);
//modular assignment opertator
int num3,num4;
printf("Enter the first no = ");
scanf("%d",&num3);
printf("Enter the second no = ");
scanf("%d",&num4);
printf("Reminder of two no will be %d\n",num3 %=num4);   
    return 0;
}