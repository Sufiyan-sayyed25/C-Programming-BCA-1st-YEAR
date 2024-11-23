//C program to display grades 
#include <stdio.h>
int main() 
{
    float percentage=0.0; 
    printf("enter percentage: ");
    scanf("%f",&percentage);
    if(percentage<40)
        printf("\n Sorry, you are fail");
    if 
    (percentage>=40 && percentage<50)
	printf("\n third class");

    if(percentage>=50 && percentage<60)
	printf("\n second class");

    if(percentage>=60 && percentage<70)
	printf("\n first class");

    else
    {
        printf("\n Congratulations Dist");
    }

    return 0;
}