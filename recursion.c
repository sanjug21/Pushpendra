#include<stdio.h>
int fact(int n);

int main()
{
int n;
printf("Enter the no ");
scanf("%d",&n);
printf("the factorial of %d is %d",n,fact(n));

    return 0;
}
int fact(int n){
    if(n==0){
        return 1;
    }
    int factn1=fact(n-1);
    int factn=factn1*n;
    return factn;
}