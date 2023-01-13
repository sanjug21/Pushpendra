#include<stdio.h>
int main()
{/*
// we will find that given no is a digit or not
char digit;
printf("Enter the digit = ");
scanf ("%c",&digit);

if ((digit>='0')&&(digit<='9'))

printf ("Given input %c is a digit \n",digit);
else
printf ("Given input %c is not a digit \n",digit);

*/

// we will find out the given no is a prime no or not
int number;
printf("Enter the no = ");
scanf("%d",&number);
if ((number==1)||(number==1)||(number==3)||(number==5)||(number==7))
printf("%d is a prime number",number);
else if ((number%2==0)||(number%3==0)||(number%5==0)||(number%7==0))
printf("%d is a not prime number",number);
else
printf("%d is a prime number",number);

    return 0;
}