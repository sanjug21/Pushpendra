#include<stdio.h>
int main(){
int n,rem,sum=0,f=1,temp;
printf("Enter the number ");
scanf("%d",&n);
temp=n;
while(n>0){
    rem=n%10;
    while (rem>0){
        f=f*rem;
        rem--;
    }
    sum +=f;
    n /=10;
    f=1;
}  
if (temp==sum){
printf("The given no %d is a strong no",temp);}
else 
printf("The given no %d is not a strong no",temp);

}