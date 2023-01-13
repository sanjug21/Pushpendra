#include<stdio.h>
int main()
{
//to print a table


    int no;
    printf("Table no you want =");
    scanf("%d",&no);
    for(int i=1;i<=10;i++)
    {printf("%d\n",no*i);}

    
    return 0;
}

