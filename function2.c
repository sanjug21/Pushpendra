#include<stdio.h>
int minmax(int a,int b);
int armstrong(int n,int sum,int arm,int r);

int main()
{int a,b,n,sum=0,arm,temp,r;
printf("We will find out which no is max and min\n");
printf("Enter the 1st num =");
scanf("%d",&a);
printf("Enter the 2nd num =");
scanf("%d",&b);
minmax(a,b);
printf("we will find out given no is armstrong or not\n");
printf("Enter the no = ");
scanf ("%d",&n);
armstrong(n,sum,arm,r);


    return 0;
}

int minmax(int a,int b){
a>b?printf("The %d is maximum and %d is minimum\n",a,b):printf("The %d is maximum and %d is minimum\n",b,a);
}
int armstrong(int n,int sum,int arm,int r){ 
    arm=n;
while(n>0)
{
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
}
if(arm==sum)
printf("The given no %d is a armstrong",arm);
else printf("the given no %d is not a armstrong",arm);
}