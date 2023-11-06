/*
bai 2
viet chuong trinh tin dien tich , chu vi cua hinh chu nhat voi chieu dai va rong nhap tu ban phim 
*/
/*
#include <stdio.h>

int  perimeter(int a, int b){
	return  2*(a+b);
} 

int area(int a, int b){
	return  a*b;
} 

int main(){
	int x,y;
	printf("nhap vao gia tri chieu dai va rong : ");
	scanf("%d %d", &x,&y);
	
	printf("chu vi hinh chu nhat la : %d\n", perimeter(x,y));
	printf("dien tich hinh chu nhat la : %d", area(x,y));
    return 0; 
} 
*/

/*
bai 3
 viet chuong trinh tin dien tich , chu vi cua hinh tron voi ban kinh nhap tu ban phim 
*/
/*
#include <stdio.h>
#define PI 3.14 
float  perimeter(float a){
	return  2*PI*a;
} 

float area(float a){
	return PI*a*a;
} 

int main(){
	float x;
	printf("nhap vao gia tri ban kinh : ");
	scanf("%f", &x);
	
	printf("chu vi hinh tron la : %f\n", perimeter(x));
	printf("dien tich hinh tron la : %f", area(x));
    return 0; 
} 
*/

/*
bai 4
nhap so nguyen duong n. liet ke tat ca cac so nguyen to nho hon n
*/

/*
bai 9
*/
#include <stdio.h> 
void luong(int a, int b){
	if(b<12){
		printf("luong nhan duoc la : %d", (b-a)*6000); 
	} else {
		if(a<12){
		    printf("luong nhan duoc la : %d", (12-a)*6000+(b-12)*7500); 
		}else{
			printf("luong nhan duoc la : %d", (b-a)*7500);
		} 
	} 
} 

int main(){
	int a,b;
	printf("gia vao ca va tan ca la: ");
	scanf("%d %d", &a,&b);
	if((a>=6)&&(b<=18)&&(a<b)){
	luong(a,b);
	}else{
		printf("gio vao som nhat la 6 gio, gio ra tre nhat la 18 gio . Ban da nhap sai gio vao/ra, vui long nhap lai ") ;
	} 
	return 0; 	
	}   


/*
bai 10
*/


 

/*
chu vi = perimeter  
dien tich = area 
HCN = rectangle  
*/
 
