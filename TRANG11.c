/*
Bai tap trang 11
*/

/* 
Bai 1:
Giai va bien luan phuong trinh ax+b=0
*/

/*
#include <stdio.h> 

int main(){
	float a,b;
	printf("gia tri cua a va b lan luot la : ");
	scanf("%f %f", &a, &b);
	
	if(a==0){
		if(b==0){
			printf("phuong trinh vo so nghiem"); 
		} else{
			printf("phuong trinh vo nghiem"); 
		}
		} else{
			printf("nghiem cua he phuong trinh la : %f", -b/a); 
		}  
	return 0; 
} 
*/

/*
Bai 2 
Tinh tong s=1+2+3+...+n(n>0)
*/

#include <stdio.h>

int main(){
	int n;
	printf("gia tri nguyen duong cua n la :");
	scanf("%d", &n); 
	
	int i ;
	for(i=0; i<=n; i++){
		i+=i; 
	} 
	printf("tong cac so nguyen tu 1 den %d la : %d", n, i);
	return 0; 
} 
