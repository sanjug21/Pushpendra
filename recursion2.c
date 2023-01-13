#include <stdio.h>

int fab(int n);


int main()
{
int n;
printf("Enter the nth fibnacchi ");
scanf("%d",&n);
printf("%d",fab(n));

    return 0;
}

int fab(int n){
if(n==0){return 0;}
if(n==1){return 1;}

int fab2=fab(n-2);
int fab1=fab(n-1);
int fabn=fab2+fab1;
return fabn;
}