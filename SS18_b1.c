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
	strcpy(s.name,"le ba duy");
	strcpy(s.age,"99");
	strcpy(s.phoneNumber,"0384722382");
	 
	printf("\nthong tin sinh vien ");
	printf("\nho ten:%s",s.name);
	printf("\ntuoi:%s",s.age); 
	printf("\nso dien thoai:%s",s.phoneNumber);
	
	return 0;  
} 
