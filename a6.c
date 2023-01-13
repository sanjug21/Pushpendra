// to arrange elements of array in ascendind or descending order
#include<stdio.h>
int main()
{
    int aray[100],temp,n;
    printf("Enter the size of the array = ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(int i=0;i<n;i++){
    scanf("%d",&aray[i]);
}

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(aray[i]>aray[j])
        {
            temp=aray[i];
            aray[i]=aray[j];
            aray[j]=temp;
        }
    }
}
printf("Array in the increasing order\t");
for(int i=0;i<n;i++){
    printf("%d",aray[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(aray[i]<aray[j])
        {
            temp=aray[i];
            aray[i]=aray[j];
            aray[j]=temp;
        }
    }
}
printf("\n");
printf("Array in the decreasing order\t");
for(int i=0;i<n;i++){
    printf("%d",aray[i]);
}
}