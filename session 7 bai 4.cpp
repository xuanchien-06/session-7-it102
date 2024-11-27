#include<stdio.h>

int main(){
	int i,n;
	printf("nhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	int array[n];
	for( i=0;i<n;i++){
		printf("nhap cac phan tu trong mang: ");
		scanf("%d",&array[i]);		
	}
	return 0;
}
