#include<stdio.h>
int main()
{
int a=0,b=1,c=0;
for(int i=1;i<10;i++){
    printf("%d\t",a);
    c=a+b;
    a=b;
    b=c;
}



    return 0;
}