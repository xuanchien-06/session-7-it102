#include<stdio.h>

int main(){
	int arr[5]={16, 22, 13, 4, 35};
	int max=arr[0];
	int min=arr[0];
	for (int i=0;i<5;i++){
		if (arr[i]>max){
			max=arr[i];
		} else if (arr[i]<min){
			min=arr[i];
		}
	}
	printf("phan tu lon nhat cua mang la: %d \n", max);
	printf("phan tu nho nhat cua mang la: %d \n", min);
	return 0;
}
