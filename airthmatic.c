#include<stdio.h>
int main()
{
float a,b;
printf("Enter the first num = ");
scanf("%f",&a);
printf("Enter the seconf num = ");
scanf("%f",&b);
//sum of two numbers
printf("Sum of two no will be %.2f\n",a+b);
//subtract of two numbers 
printf("Subtract of two no will be %.2f\n",a-b);
//multiply of two numbers
printf("Multiply of two no will be %.2f\n",a*b);
//divide of two numbers
printf ("Divide of two no will be %.2f\n",a/b);
//modulus of two numbers
printf ("Remainder will be %d",(int)(a)%(int)(b));

/*
// we will find out the average of the given numbers
float a,b,c;
printf("We can find the average of three no \n");
printf("Enter the first no = ");
scanf ("%f",&a);
printf("Enter the second no = ");
scanf ("%f",&b);
printf("Enter the third no = ");
scanf ("%f",&c);
printf("The average of the given no is %.2f",(a+b+c)/3);

*/
    return 0;
}