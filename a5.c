//to find the all duplicate elements in the array
#include<stdio.h>
int main()
{
int aray[100],n,count=0;
printf("Enter the size of array ");
scanf("%d",&n);
printf("Enter the element of the array ");
for(int i=0;i<n;i++){
    scanf("%d",&aray[i]);
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if (aray[i]==aray[j]){
            count++;
            break;
        }
    }
}
printf("The total no of duplicate items are %d",count);
    return 0;
}

// to delete ALL duplicate items in the array
#include<stdio.h>
int main()
{
int array[100],n;
printf("Enter the size of the array = ");
scanf("%d",&n);
printf("Enter the elements of the array\n");
for(int i=0;i<n;i++){
    scanf("%d",&array[i]);}

for(int i=0;i<n;i++)
{
 for(int j=i+1;j<n;j++)
 {
    if (array[i]==array[j])
    {
        for(int k=j;k<n;k++)
        {
            array[k]=array[k+1];
        }
        n--;
        j--;
    }
 }
}
printf("Array after deleting the duplicate items\t");
for (int i=0;i<n;i++){
    printf("%d\t",array[i]);
}

    return 0;
}