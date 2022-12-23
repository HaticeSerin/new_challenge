#include"stdio.h"
int main(){
	int i,j;
	int array[3]={1,2,3};
	int array1[4]={3,4,5,6};
	int array2[4]={6,7,8,9};
	printf("The output is\n");
	for(i=0;i<3;i++){
		for(j=0;j<2*i;j++){
			printf("%d",array[i]);
		}
		printf("\n");	
	}
	for(i=1;i<4;i++){
		for(j=0;j<2*i-1;j++){
			printf("%d",array1[i]);
		}
		printf("\n");	
	}
		for(i=1;i<4;i++){
		for(j=0;j<2*i;j++){
			printf("%d",array2[i]);
		}
		printf("\n");
	}
	return 0;
}
