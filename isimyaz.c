#include "stdio.h"
#include "string.h"
int main(){
	int age,age1=21;
    char name1[15]="hatice";
    char name[15];
    printf("Enter your name and age:\n");
    scanf("%s %d",name,&age);
    if(strcmp(name,name1)==0&&age==age1){
    	printf("Ohh,you are good person!");
	}
	else{
		printf("sitdown 0!");
	}
    
    return 0;

}
