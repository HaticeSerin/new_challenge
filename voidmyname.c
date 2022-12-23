#include"stdio.h"

void myname(char *name,int age){
	printf("My name is %s I am %d years old.",name,age);
}
int main(){
	int age;
	char name[15];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Enter your age: ");
	scanf("%d",&age);
    myname(name,age);
    
	return 0;
}
