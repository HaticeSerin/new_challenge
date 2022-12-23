#include <stdio.h>
int main()
{
    int sayi1,sayi2,i;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);
    printf("Cift sayilar Tek sayilar\n");
    if(sayi1<sayi2){
    for(i=sayi1;i<=sayi2;i++){
    	if(i%2==0){
    		printf("%d\n\t",i);
		}
		else{
			printf("\t%d\n",i);
		}
    }
    }
    if(sayi2<sayi1){
    	for(i=sayi2;i<=sayi1;i++){
    	if(i%2==0){
    		printf("%d\n\t",i);
		}
	    else{
			printf("\t%d\n",i);
		}
    }
}
	
    return 0;
}
