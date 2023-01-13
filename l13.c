//to find the perfect no in a given range
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the first number ");
    scanf("%d",&num1);
printf("Enter the second number ");
    scanf("%d",&num2);
    for (;num1<=num2;num1++){
        sum=0;
        for(int i=1;i<num1;i++){
            if(num1%i==0){
                sum+=i;
            }
        }
    if (sum==num1){
        printf("%d\t",num1);}
    }
}