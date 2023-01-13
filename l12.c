//to fint the all armstrong no in a given range
#include<stdio.h>
#include<math.h>
int main()
{
int num1,num2,sum,digit,i;
printf("Enter the first number ");
    scanf("%d",&num1);
printf("Enter the second number ");
    scanf("%d",&num2);
    printf("The arm strong no in the given range are ");
for(;num1<=num2;num1++){
    i=num1;
sum=0;
digit=(int)log10(num1)+1;
while(i>0){
sum=sum+round(pow((i%10),digit));
i/=10;
}if(num1==sum){
printf("%d\t",num1);}
}
}


