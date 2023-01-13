//to inseert a element in the array
#include<stdio.h>
int main()
{
int array[100],num,pos,n,i;
printf("Enter the size of the array = ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(i=0;i<n;i++){
    scanf("%d",&array[i]);
}
printf("Select the position of the elemnt =");
scanf("%d",&pos);
printf("Enter the value of the element = ");
scanf("%d",&num);
if(pos>n+1||pos<=0)
printf("Invalid input");
else
{
    for (i=n;i>=pos;i--)
    {array[i]=array[i-1];}
    array[pos-1]=num;
    n++;

for(int i=0;i<n;i++){
printf("%d",array[i]);}
    return 0;
}
}