#include<stdio.h>
#include"area.h"
#include"sub.h"

int main()
{
	float fLength , fBreadth , fResult;

	printf("\n Enter length : ");
	scanf("%f",&fLength);
	printf("\n Enter breadth : ");
	scanf("%f",&fBreadth);

	fResult = AREARECT(fLength , fBreadth);
	printf("\n Area of Rectangle = %.2f  ",fResult);


	fResult = addition(fLength , fBreadth);
	printf("\n Addition  = %.2f  ",fResult);
	
	fResult = sub(fLength , fBreadth);
	printf("\n subtraction = %.2f  ",fResult);
	
	
	getch();
    return 0;
}
