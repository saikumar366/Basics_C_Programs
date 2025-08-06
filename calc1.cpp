#include<stdio.h>

main(){
	int num1, num2, res;
	char opt;
	char more_calculation;
	//div_by_zero=0;
	
	printf("Calculator App!");
	do{	
	printf("\nEnter The first Number is : ");
	scanf("%i",&num1 );
	
	printf("Enter The Second Number is : ");
	scanf("%i",&num2 );
	
	printf("the first Number is : %i\n", num1);
	printf("the Second Number is : %i\n", num2);
	
	printf("Select operator  (+,-,*,/):");
	scanf("\n%c", &opt); // new line is compulsory;;
	
	switch(opt){
		case '+': res=num1+num2; break;
		case '-': res=num1-num2; break;
		case '*': res=num1*num2; break;
		case '/': res=num1/num2; break;
		default: 
		      printf("Invalid OPerator..\n"); 
	}
	printf("The operator is %c\n", opt);
	printf("The result is %i\n", res);
	printf("Do u Like Calculate Again(y/n):");
	scanf("\n%c", &more_calculation);
}
while(more_calculation=='y');
printf("Bye, Visit Again!!");
}
