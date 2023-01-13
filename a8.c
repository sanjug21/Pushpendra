//to rotate the array
#include<stdio.h>
int main()
{
    int aray[100],n,first,N,r;
    printf("Enter the size of the array = ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(int i=0;i<n;i++){
    scanf("%d",&aray[i]);}
printf("To shift digits left to right press 1 and to shift digit right to left press 2\n");
scanf("%d",&N);
switch(N){
case(2):
    printf("Enter the no of time shifts ");
    scanf("%d",&r);
for(int i=0;i<r;i++){
first=aray[0];
for(int j=0;j<n-1;j++)
{
    aray[j]=aray[j+1];
}
aray[n-1]=first;
}
printf("Array after shifting\t");
for(int i=0;i<n;i++){
    printf("%d\t",aray[i]);
}break;

case (1):
        printf("Enter the no of time shift ");
    scanf("%d",&r);
for(int i=0;i<r;i++){
first=aray[n-1];
for(int j=n-1;j>0;j--)
{
    aray[j]=aray[j-1];
}
aray[0]=first;
}
printf("Array after shifting\t");
for(int i=0;i<n;i++){
    printf("%d\t",aray[i]);
}
break;

}
return 0;
}
