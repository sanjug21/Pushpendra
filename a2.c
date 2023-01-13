// to find the second highest number
#include <stdio.h>
int main()
{
    int smax,max,aray[5],min,minnum;
    printf("enter the 10 values in a array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &aray[i]);
    }
    min=aray[0];
    for(int j=0;j<5;j++){
if(aray[j]<min){
    min=aray[j];
}
    }
    printf(" min is %d\n",min);


    smax=min;
    max=min;
    for (int i = 0; i < 5; i++)
    {
        if (aray[i] > max)
        {   smax=max;
            max=aray[i];
        }
      else if(aray[i]<max && aray[i]>smax )
      { smax=aray[i];}

    }
    printf("The max no is %d\n",max);
    
    printf("The smax no is %d\n",smax);
    return 0;
}