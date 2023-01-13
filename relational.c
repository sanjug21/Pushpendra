#include<stdio.h>
int main(){
float a,b;
printf("Enter the first no =");
scanf("%f",&a);
printf("Enter the second no =");
scanf("%f",&b);
printf ("First no is greater than second %d\n",a>b);
printf ("second no is greater than first %d\n",a<b);
printf ("First no is greater than and equal to second %d\n",a>=b);
printf ("Second no is greater than and equal to first %d\n",b>=a);
printf ("First no is equal to second %d\n",a==b);
return 0;
}
