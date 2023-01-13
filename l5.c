//sum of even no 
#include <stdio.h>
int main (){
int sum=0,num;
printf("Sum of all even no in a given range\n");
printf("Enter the range ");
scanf("%d",&num);
for(int i=1;i<=num;i++){if(i%2==0){sum=sum+i;}

}printf("The sum  is %d",sum);
    return 0;
}