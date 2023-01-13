#include<stdio.h>
float circle(float r);
void Hello();

int main()
{float r;
printf ("Enter the radius ");
scanf("%f",&r);

circle(r);
Hello();

    return 0;
}

float circle(float r){

printf("The diameter of circle is %.2f\n",2*r);

printf("The circumference of circle is %.2f\n",2*3.14*r);

printf("The area of circle is %.2f\n",3.14*r*r);

}
void Hello(){
    printf("Thank You");
}