#include<stdio.h>

int main(){
	int mang[100];
	int n; 
	printf("Nhap n=");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("mang[%d]=",i);
		scanf("%d",&mang[i]);
	}
	// in ra cac phan tu cua mang da nhap
		for(int i=0;i<n;i++){
			printf("mang[%d]=%d",i,mang[i]);
		}
	// tong cac phan tu la so chan trong mang
		int tong=0;
		for(int i=0;i<n;i++){
			if(mang[i]%2==0) tong = tong+mang[i];
		}
		printf("Tong mang la %d",tong);
        
 	    int min=mang[0];
		for(int i=0;i<n;i++){
			if(min>mang[i]) min=mang[i];
		}	
		printf(" \nIn ra so nho nhat la %d",min);
	}
	

