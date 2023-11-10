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
#include <stdio.h> 

int main(){
	int n;
	printf("gia tri cua n la: ");
	scanf("%d", &n);
	
	if(n>=2){
		int i; 
		int k; 
		printf("so nguyen to nho hon n la: \n"); 
		for(k=n-1;k>0;k=k-1){
		for(i=2; i<=k;i++){
			if((k%i)==0){
				if(k==2){
					printf("%d\n", k); 
					break; 
				}
				break; 
			}
			if(i==(k-1)){
				printf("%d\n", k);
			} 
		} 
	}
	}
	return 0;  
} 
*/

/*
bai 5
nhap so nguyen duong n. liet ke n so chinh phuong dau tien 
*/

/*
#include <stdio.h>
#include <math.h>

void soChinhPhuong(int a){
	int x=pow(a,2);
	printf("%d\n",x); 
} 

int main(){
	int n; 
	printf("gia tri cua n la: ");
	scanf("%d", &n);
	
	printf("n so chinh phuong dau tien la \n");
	int i; 
	for(i=0;i<n;i++){
		soChinhPhuong(i); 
	} 
	return 0; 

} 
*/

/*
bai 6
nhap so nguyen duong n . dem xem co bao nhieu so hoan thien nho hon n 
*/ 

/*
#include <stdio.h>

// Ham kiem tra xem so nhap vao co phai so hoan thien khong. in ra 
void sohoanthien(int a){
	int s = 0;
	int i; 
	for(i = 1; i <= a/2; i++){
		if(a % i == 0){
			s += i;
		} 
	} 
	if(s == a){
		printf("%d\n", a);
	} 
}

// Ham in ra so hoan thien tu 1 toi n 
void soht(int k){
	int x; 
	for( x = 1; x < k; x++){
		sohoanthien(x);  
	} 
}

int main(){
	unsigned int n;
	printf("Giá tr? c?a n là: ");
	scanf("%u", &n);
	
	soht(n);
	
	return 0;  
}
*/
 
 
/*
Bai 7
viet chuong trinh nhap cac so nguyen n gom ba chu so . xuat ra màn hinh chu so lon nhat o vi tri nao(hang don vi, chuc, tram)
*/

/*
#include <stdio.h>

// Tim chu so lon nhat va vi tri  
void maxNumber(int n){
    int maxDigit = 0;
    int position = 0;
  
    int temp = n;
    int i; 
    for( i = 0; i < 3; i++){
        int digit = temp % 10;
        temp /= 10;
        
        if(digit > maxDigit){
            maxDigit = digit;
            position = i;
        } 
    }
    
    switch(position){
        case 0:
            printf("chu so lon nhat o hang tram la %d\n", maxDigit);
            break;
        case 1:
            printf("chu so lon nhat o hang chuc la %d\n", maxDigit);
            break;
        case 2:
            printf("chu so lon nhat o hang don vi la %d\n", maxDigit);
            break;
        default:
            printf("Khong xac dinh \n");
            break;
    }
}

int main(){
    unsigned int n;
    printf("Nhap gia tri nguyen duong n: ");
    scanf("%u", &n);
    
    while(n < 100 || n > 999){
        printf("gia tri cua n sai . n phai nguyen va 99<n<100 . vui long nhap lai :");
        scanf("%u", &n);
    }
    
    maxNumber(n);
    return 0;
}
*/

/*
Bai 8
viet chuong trinh nhap vao so nguyen n gom ba chu so . xuat ra man hinh theo thu tu tang dan cua ca chu so 
*/

#include <stdio.h> 
//Tim chu so lon nhat 
int maxNumber(int a){
	int max=0;
	
	while(a!=0){
		if(a%10>max){
			max=a%10 ;
		} 
		a=a/10; 
	} 
	
	return max; 
	 
} 
//Tim chu so nho nhat 
int minNumber(int b){
	int min=9;
	
	while(b!=0){
		if(b%10<min){
		min=b%10; 
	}
	    b=b/10;  	 
    }
	
	return min; 
} 

int main(){
	unsigned int n;
    printf("Nhap gia tri nguyen duong n: ");
    scanf("%u", &n);
    
    while(n < 100 || n > 999){
        printf("gia tri cua n sai . n phai nguyen va 99<n<100 . vui long nhap lai :");
        scanf("%u", &n);
    }
	
	minNumber(n);
	maxNumber(n);
	
	printf("chu so %d duoc viet theo thu tu tang dan cua cac chu so la : %d", n, minNumber(n)); 
	
	int x=n%10, y=(n/10)%10, z=n/100;
	
    //trong x,y,z in ra so tam trung middle  
	
	printf("%d", maxNumber(n)); 
	
	return 0; 
}

/*
chu vi = perimeter  
dien tich = area 
HCN = rectangle  
Hàm strlen() có trong thu vien chuan <string.h> tinh do dai chuoi ky tu  
*/
 
