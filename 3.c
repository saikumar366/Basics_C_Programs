#include<stdio.h>
struct Employee
{
	int no;
	char name[20];
	struct Date
	{
		int dd;
		int mm;
		int yy;
	}doj;
}emp;
int main()
{
	emp.no=101;
	strcpy(emp.name,"Naveen");
	emp.doj.dd=10;
	emp.doj.mm=02;
	emp.doj.yy=23;
	
	printf("\nEmployee Number %i",emp.no);
	printf("\nEmployee Name %s",emp.name);
	printf("\nDate of Joining  %i- %i -%i ",emp.doj.dd,emp.doj.mm,emp.doj.yy);
	
}
