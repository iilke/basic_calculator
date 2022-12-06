//Ilke D. 	27/11/2022

#include <stdio.h>
int main()
{
float num1=0, num2=0, out=0;  //as the numbers that user gives and output
char op;                     //as operation
int con;                     //whether user wants to continue or not
	
do
{

	printf("Enter two floating point numbers: ");
	scanf("%f%f",&num1,&num2);
	printf("Choose operation (+, -, *, /):");
	scanf(" %c",&op);
	
	switch(op)
	{
	case '+':
		 out=num1+num2;
		 printf("%.2f + %.2f = %.2f\n",num1,num2,out);
		 break;


	case '-':	 
		 out=num1-num2;
		 printf("%.2f - %.2f = %.2f\n",num1,num2,out);
		 break;
		 
		 
    	case '*':
    	 out=num1*num2;
    	 printf("%.2f * %.2f = %.2f\n",num1,num1,out);
    	 break;
    	 
    	 
    	case '/':
    	 out=num1/num2;
    	 printf("%.2f / %.2f = %.2f\n",num1,num1,out);
    	 break;
	
	
	default:
		printf("wrong input!!!\n");
		
	}
	printf("Do you want to continue?\n");
	scanf("%d",&con);
	   
}
while (con!=0 && con==1);

printf("The program is terminated.\n");

return 0;
}
