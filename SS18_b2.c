#include <stdio.h>
#include <string.h>
 
struct sinhVien{
	char name[50];
	char age[50];
	char phoneNumber[50];
};
typedef struct sinhVien sinhVien;
 
int main(){
	sinhVien s;
	printf("moi ban nhap ten ");
	fgets(s.name,100,stdin);
	fflush(stdin); 
	printf("moi ban nhap tuoi ");
	fgets(s.age,100,stdin);
	fflush(stdin);
	printf("moi ban nhap so dien thoai ");
	fgets(s.phoneNumber,100,stdin);
	fflush(stdin);
	printf("thong tin sinh vien ");
	printf("ho ten:%s",s.name);
	printf("tuoi:%s",s.age); 
	printf("so dien thoai:%s",s.phoneNumber);
	
	return 0;  
} 
