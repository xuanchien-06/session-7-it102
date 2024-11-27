#include<stdio.h>

int main(){
	int array[5]={1,2,8,10,9};
	int kiemtra;
	printf("cac so chan trong mang la: ");
	for(int i=0;i<5;i++){
		if(array[i] % 2 == 0){
			printf(" %d ",array[i]);
			kiemtra=1;
		}
	}
	if(kiemtra==0){	
		printf("mang khong chua so chan\n",kiemtra);	
	}
	return 0;
}
