#include<stdio.h>
int main()
{
int aray[10];
printf ("enter the 10 values in a array\n");
for (int i=0;i<=9;i++){
scanf("%d",&aray[i]);
}printf("The array is ");
for(int i=0;i<10;i++){
printf("%d\t",aray[i]);}

    return 0;
}

//to print -ve no in a array
#include <stdio.h>
int main()
{
    int aray[10];
    printf("enter the 10 values in a array\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &aray[i]);
    }
    printf("The array is ");
    for (int i = 0; i < 10; i++)
    {
        if (aray[i] < 0)
        {
            printf("%d\t", aray[i]);
        }
    }

    return 0;
}

// to find the min and max no in a array
#include <stdio.h>
int main()
{
    int min,max,aray[10];
    printf("enter the 10 values in a array\n");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &aray[i]);
    }
    min=aray[0];
    max=aray[0];
    for (int i = 1; i < 10; i++)
    {
        if (aray[i] > max)
        {
            max=aray[i];
        }

        if(aray[i]<min){
            min=aray[i];
        }
    }
    printf("The max no is %d\n",max);
    
    printf("The min no is %d\n",min);
    return 0;
}