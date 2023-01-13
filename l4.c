#include<stdio.h>
#include<math.h>
int main()
{
// To find the prime no in a given range

int i,j,flag;
printf ("we will find all the prime no in a given range\n");
printf("Enter the 1st range =");
scanf("%d",&i);
printf("Enter the 2nd range =");
scanf("%d",&j);
printf("The Prime no are \n");

for (;i<=j;i++){
    flag=1;
for(int k=2;k<=i/2;k++){
if(i%k==0){
    flag=0;
    break;
}if(flag)
printf("%d",i);
}

} 
printf("%d\n",i);}

/*

int a;
do{
    printf ("enter number =");
    scanf("%d",&a);
    printf("%d\n",a);
    if(a%7==0){break;}
}while (1);
printf("Thanks\n");

}*/

