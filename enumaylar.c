#include"stdio.h"
#include"stdlib.h"
enum months{January=1,February,March,April,May,June,July,August,September,October,November,December} i;

int main(){
	int option;
	printf("Enter a number (1-12):");
	scanf("%d",&option);
	i=option;
	switch(i){
		case 1:	printf("January");
		break;
		case 2:	printf("February");
		break;
		case 3: printf("March");
		break;
		case 4: printf("April");
		break;
		case 5: printf("May");
		break;
		case 6: printf("June");
		break;
		case 7: printf("July");
		break;
		case 8: printf("August");
		break;
		case 9: printf("September");
		break;
		case 10: printf("October");
		break;
		case 11: printf("November");
		break;
		case 12: printf("December");
		break;
		default:
			printf("You have dialed wrong");
			break;
	}
	return 0;
}
