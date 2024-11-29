#include<stdio.h>

int main(){
	//b1: khai bao bien m,n de luu gia tri vao mang arr[m][n]
	int m,n;
	//b2: yeu cau nguoi dung nhap vao so hang
	printf("nhap vao so hang: ");
	scanf("%d",&m);
	//b3: yeu cau nguoi dung nhap vao so cot
	printf("nhap vao so cot: ");
	scanf("%d",&n);
	//b4: khai bao bien mang arr va luu gia tri nhap vao arr
	int arr[m][n];
	//b5: nguoi dung nhap vao tung phan tu trong mang va luu gia tri phan tu nguoi dung nhap vao
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){	
			printf("nhap vao gia tri cho arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	//b6: in ra man hinh ma tran
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%3d",arr[i][j]);
		}	
		printf("\n");
	}
	return 0;
}
