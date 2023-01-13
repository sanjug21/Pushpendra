#include<stdio.h>
#include<math.h>
int main()
{// to count the numbers
int count=0,num=5321166464;
int no=num;
for(;num!=0;count++){
    num/=10;
}
printf("Total no of digits are %d\n",(int)log10(no)+1);
printf("Total no of digits are %d",count);

    return 0;
}