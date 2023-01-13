#include<stdio.h>

// volume of a cube
int cube(int side);


int main()
{int side;
printf ("Enter the side of cube =");
scanf("%d",&side);
printf("The volume of cube is %d",cube(side));


    return 0;
}

int cube(int side){

return side*side*side;


}