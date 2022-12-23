#include"stdio.h"
#define pi 3.1415
int main(){
	float area,circum,r;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	area=pi*r*r;
	circum=2*pi*r*r;
	printf("Area of the circle: %.2f\n",area);
	printf("Circumference of the circle: %.2f",circum);
	
	return 0;
}
