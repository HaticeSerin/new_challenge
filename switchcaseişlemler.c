#include"stdio.h"
#include"stdlib.h"
int main(){
	int n;
	float s1,s2;
	printf("Enter a first number: ");
	scanf("%f",&s1);
	printf("Enter a second number: ");
	scanf("%f",&s2);
	printf("\n1.Addition(+)\n2.Subtraction(-)\n3.Multiplication(*)\n4.Division(/)\n");
	printf("Please select a option(1-4):\n");
	scanf("%d",&n);
	switch(n){ 
		case 1:
			printf("%.2f+%.2f=%.2f",s1,s2,s1+s2);
			break;
		case 2:
			printf("%.2f-%.2f=%.2f",s1,s2,s1-s2);
			break;
		
		case 3:
			printf("%.2f*%.2f=%.2f",s1,s2,s1*s2);
			break;
		
		case 4:
			printf("%.2f/%.2f=%.2f",s1,s2,s1/s2);
			break;
		
		default:
			printf("You keyed wrong!");
			break;
	}
	return 0;
}
