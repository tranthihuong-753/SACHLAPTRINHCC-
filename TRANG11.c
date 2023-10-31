/*
Bai tap trang 11
*/

/* 
Bai 1:
Giai va bien luan phuong trinh ax+b=0
*/

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
