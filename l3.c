#include<stdio.h>
#include<math.h>
int main()
{
    // need to fint that given no is a armstrong or not


int r,n,sum=0,temp,num,cou=0;
printf("We will check weather the given no is a armstrong no or not \n");
printf("Enter a no = ");
scanf("%d",&n);
temp=n;
num=n;

cou=(int)log10(n)+1;


while(num>0){
    r=num%10;
    sum=sum+round(pow(r,cou));
    num=num/10;

}
if(temp==sum)
printf("Armstrong Number");
else
printf("Not a Armstrong Number");

    return 0;
}
