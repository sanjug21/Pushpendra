//to swap the first and the last digit of a number
#include<stdio.h>
#include<math.h>
int main()
{
int num=532143,first,last,swapno,po=0,dec,no;
no=num;
for(;num!=0;po++){
    num/=10;
}
dec=po;
last=no%10;
first=pow(10,dec-1);
swapno=last*first;
swapno=swapno+(no%first);
swapno=swapno-last;
printf("%d",swapno=swapno+(no/first));
}