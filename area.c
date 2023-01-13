#include<stdio.h>
int main()
//perimeter of a rectangle
{
int length,width;
printf("Enter the length of the perimeter = ");
scanf("%d",&length);
printf("Enter the width of the perimeter = ");
scanf("%d",&width); 
printf("parameter of the rectangle will be %d\n",2*(length+width));   


//Area of a cube
    int side;
    printf ("Enter the length of the side = ");
    scanf ("%d",&side);
    printf ("Area of cube will be %d",side*side*side);

    return 0;
}