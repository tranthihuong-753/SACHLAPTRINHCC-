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

/*
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
*/

/*
Bai 3
tinh tong s=1/2+2/3+3/4+..+(2n+1)/(2n+2) 
n>0
*/

/*
#include <stdio.h>

int main() {
    int n;
    printf("Nhap gia tri cua n: ");
    scanf("%d", &n);

    float s = 0;
    int i;

    for (i = 0; i <= 2n; i++) {
        s += (float)(i + 1) / (i + 2); //(2n+1)/(2n+2) && i<=n tuong duong  (i + 1) / (i + 2) &&  i <= 2n
    }

    printf("Tong cua day so la: %f", s);

    return 0;
}
*/

/*Bai 4
Tinh tong a-2+3-...+((-1)^(n +1))*n 
n>0
*/

/*
#include <stdio.h>
#include <math.h>
 
int main(){
	int n;
	printf("nhap vao gia tri n: ");
	scanf("%d", &n);
	
	int s=0;
	
	int i; 
	for(i=0;i<=n;i++){
		int k= pow(-1, i+1)*i;
		s+=k; 
	} 
	printf("gia tri cua tong la : %d", s);
	return 0; 
} 
*/

/*
Bai 1
Nhap vao x, y. Tinh va in ra tong, hieu, tich, thuong, du cua 2 so do
*/

//Tong=sum , Hieu=Difference, Tich=Product, Thuong=Quotient, Du=Remainder 
//addition : phep cong ,subtraction : phep tru  ,multiplication : phep nhan ,division : phep chia

/*
#include <stdio.h>

int main(){
	int a,b;
	printf("gia tri cua a va b la: "); 
	scanf("%d %d", &a, &b); 
	
	int sum=a+b, difference=a-b, product=a*b, quotient=a/b, remainder=a%b;
	printf("gia tri cua tong la %d\ngia tri cua hieu la %d\ngia tri cua tich la %d\ngia tri cua \
thuong la %d", sum, difference, product, quotient, remainder);
	return 0; 
} 
*/

/*
Bai 2 
nhap vao so nguyen n, kiem tra xem n chan hay le 
*/
/*
#include <stdio.h>

int main(){
	int n;
	printf("nhap vao gia tri n: ");
	scanf("%d", &n);
	
	if((n%2)==0){
		printf("so nhap vao la chan"); 
	} else{
		printf("so nhap vao la le "); 
	} 
	return 0; 
} 
/*
nhap vao ba canh a, b, c cua tam giac  . 
xuat ra man hinh tam giac thuoc loai gi (thuong, can, deu, vuong can, vuong)
*/

/*
#include <stdio.h>
#include <math.h>
 
int main(){
	float a, b, c;
	printf("gia tri ba canh theo thu tu tu nho den lon la :"); 
	scanf("%f %f %f", &a, &b, &c); 

    if (a==b){
    	if(pow(c,2)==pow(b,2)+pow(a,2)) {
    	    printf("vuong can");	
		}else{
		if(a==c){ 
		    printf("deu");
	    }else{ 
			printf("can");
		} 
	} else{
		if(pow(c,2)==pow(b,2)+pow(a,2)) {
			printf("vuong");
		}else{
			printf("thuong");
		} 
	} 
	return 0; 	 
} 
*/

/*
bai 4 
nhap so nguyen n .
xuat n ra man hinh.
n chan thi gap doi 
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("gia tri cua n la: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("%d", 2*n); 
	}else{
		printf("%d",n); 
	} 
	return 0; 
} 
*/

/*
bai 5:
nhap vao so nguyen n.
neu n>5 thi tang n len 2 don vi va tra ve gia tri n.
nguoc lai tra ve gia tri 0.
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("gia tri cua n la: ");
	scanf("%d", &n);
	
	if(n>5){
		n+=2;
		printf("%d", n); 
	} else{
		printf("0"); 
	} 
	return 0; 
} 
*/

/* 
bai 6:
tinh n! voi n>=0
*/

/*
#include <stdio.h>

int main(){
	unsigned int n;
	printf("nhap vao gia tri cua n khong am : ");
	scanf("%u", &n);
	
	int s=1;
	int i; 
	
	if(n<=1){
		printf("gia tri n! voi n=%u la : 1", n); 
	} else{
		for(i=1;i<=n;i++){
			s=s*i; 
		} 
		printf("gia tri n! voi n=%u la : %d", n, s); 
	} 
	return 0; 
} 
*/

/*
bai 7:
tinh s=1*3*..*(2n+1) voi n>=0 
*/ 

/*
#include <stdio.h>

int main(){
	unsigned int n;
	printf("nhap vao gia tri cua n :");
	scanf("%u", &n);
	
	int s=1;
	int i;
	
	for(i=1;i<=n;i++){
		int k=2*i+1; 
		s=s*k;  
	} 
	printf("gia tri cua s la: %d", s);
	return 0; 
} 
*/

/*
bai 8:
tinh s=1+3+..+(2n+1) voi n>=0 
*/ 

/*
#include <stdio.h>

int main(){
	unsigned int n;
	printf("nhap vao gia tri cua n :");
	scanf("%u", &n);
	
	int s=1;
	int i;
	
	for(i=1;i<=n;i++){
		int k=2*i+1; 
		s=s+k;  
	} 
	printf("gia tri cua s la: %d", s);
	return 0; 
} 
*/

/* 
bai 9:
tinh s=1-2+3-4+...+((-1)^(n+1)*n)
voi n>0 
*/

/*
#include <stdio.h>
#include <math.h> 

int main(){
	 unsigned int n;
	 printf("nhap vao gia tri n : ");
	 scanf("%u", &n);
	 
	 int s=0;
	 int i;
	 
	 for(i=0;i<=n;i++){
	 	int k=pow(-1, i+1)*i;
		s+=k;  
	 } 
	 printf("gia tri cua s la: %d", s);
	 return 0; 
} 
*/

/*
bai 10
tinh s=1+1.2+1.2.3+...+1.2.3...n voi n>0
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("gia tri cua n la : ");
	scanf("%d", &n);
	
	int k1=1;
	int k0=0; 
	int i;
	 
	if(n>0){
		for(i=1;i<=n;i++){
			k1=k1*i;
			k0+=k1; 
		} 
		printf("gia tri cua s la : %d", k0); 
	} 
	return 0; 
} 
*/
/*
bai 11
tinh s=1^2+2^2+...+n^2 voi n>0
*/

/*
#include <stdio.h>
#include <math.h> 
int main(){
	int n;
	printf("nhap vao gia tri n : ");
	scanf("%d", &n);
	
	int k=0, i;
	
	if(n>0){
		for(i=1;i<=n;i++){
			k+=pow(i,2); 
		} 
		printf("gia tri cua s la : %d", k); 
	} 
	return 0; 
} 
*/

/* 
bai 12
tinh s=1+1/2+1/3+...+1/n voi n>0
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("gia tri cua n la : ");
	scanf("%d", &n);
	
	int i;
	float k=0; 
	
	if(n>0){
		for(i=1;i<=n;i++){
			k+=(1/i); 
		} 
		printf("gia tri cua s la : %f", k); 
	} 
	return 0; 
} 
*/

/*
bai 13
tinh s=1+1/(1+2)+..+1/(1+2+...+n)
voi n>0
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("nhap vao gia tri cua n: ");
	scanf("%d",&n);
	
	float k0=0;
	float k1=0; 
	int i;
	 
	if(n>0){
		for(i=1;i<=n;i++){
			k0=1/(k0+i);
			k1+=k0; 
		} 
		printf("%f", k1); 
	} 
	return 0; 
} 
*/

/*
bai 14 
tinh s=x^y
*/

/*
#include <stdio.h>
#include <math.h>
 
int main(){
	float x,y ;
	printf("gia tri cua x va y la : "); 
	scanf("%f %f", &x, &y); 
	
	if (y<=0){
		if(x!=0){
			printf("%f", pow(x, y)); 
		} 
	} else{
		printf("%f", pow(x, y));
	} 
	return 0;  
} 
*/

/* 
bai 15
tinh s=1+(1+2)+...+(1+2+...+n)
voi n>0
*/

/*
#include <stdio.h>

int main(){
	int n;
	printf("nhap vao gia tri cua n : ");
	scanf("%d", &n);
	
	int i, k0=0, k1=0;
	
	if(n>0){
		for(i=0;i<=n;i++){
			k0+=i;
			k1+=k0; 
		} 
		printf("gai tri cua s la : %d", k1); 
	} 
	return 0; 
} 

*/

/*
bai 16
cho so nguyen n
tinh tri tuyet doi cua n 
*/

#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("gia tri nguyen cua n la: ");
	scanf("%d", &n);
	
	int x=abs(n);
	 
	printf("%d", x);
	return 0; 
} 


/*
pow(a, b)==a^b 
int la kieu du lieu 
unsigned int la kieu du lieu cho so nguyen khong am  
%d dinh dang chuoi cua int
%u la dinh dang chuoi cua  unsigned int
*/ 
/*
Ham tinh phan so 
#include <stdio.h>

float addFractions(int num1, int denom1) {
    return (float)num1/denom1 ;
}

int main(){
	float x=addFractions(3,2); 
	printf("%f", x); 
} 
*/ 
