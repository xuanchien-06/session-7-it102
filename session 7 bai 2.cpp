#include<stdio.h>

int main(){
	int array[5];
	for(int i=1;i<=5;i++){
	printf("nhap vao so array[%d] ",i);
	scanf("%d",&array[i]);
	}
	for(int a=1;a<=5;a++){
		printf("%d",array[a]);
		}
	
	return 0;
}
