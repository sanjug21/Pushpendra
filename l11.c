//to find the lcm of the given no
#include<stdio.h>
int main()
{
int num1,num2,max,lcm;
printf("Enter the first number ");
    scanf("%d",&num1);
printf("Enter the second number ");
    scanf("%d",&num2);
max=(num1>num2)?num1:num2;
int i=max;
while(1)
{
    if((i%num1==0)&&(i%num2==0)){
        lcm=i;
        break;
    }
    i+=max;
}
printf("The lcm of %d and %d is %d",num1,num2,lcm);


}