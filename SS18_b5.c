#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct sinhVien{
	int id;
	char name[50];
	int age;
	char phoneNumber[50];
};
typedef struct sinhVien sinhVien;
 
int main(){
	int n;
	sinhVien *studentsptr=(sinhVien *)malloc(5 *sizeof(sinhVien));
	if(studentsptr ==NULL){
		printf("khong the cap phat bo nho dong"); 
		return 1; 
	} 
	studentsptr[0].id = 1;
    strcpy(studentsptr[0].name, "Nguyen A");
    studentsptr[0].age = 20;
    strcpy(studentsptr[0].phoneNumber, "0123456789");

    studentsptr[1].id = 2;
    strcpy(studentsptr[1].name, "Tran B");
    studentsptr[1].age = 21;
    strcpy(studentsptr[1].phoneNumber, "0987654321");

    studentsptr[2].id = 3;
    strcpy(studentsptr[2].name, "Le C");
    studentsptr[2].age = 22;
    strcpy(studentsptr[2].phoneNumber, "0912345678");

    studentsptr[3].id = 4;
    strcpy(studentsptr[3].name, "Hoang D");
    studentsptr[3].age = 23;
    strcpy(studentsptr[3].phoneNumber, "0976123456");

    studentsptr[4].id = 5;
    strcpy(studentsptr[4].name, "Pham E");
    studentsptr[4].age = 24;
    strcpy(studentsptr[4].phoneNumber, "0987634521");
	 
	printf("moi ban nhap vi tri can tim ");
	scanf("%d",&n); 
	if(n<0 ||n>5){
		printf("id này khong ton tai");
		return 0;
	}else{
		for(int i=0;i<5;i++){
			if(studentsptr[i].id==n){
				printf("moi ban nhap ten "); 
				getchar();
				fgets(studentsptr[i].name,sizeof(studentsptr[i].name),stdin);
				studentsptr[i].name[strcspn(studentsptr[i].name, "\n")] = '\0';
				
				printf("moi ban nhap tuoi ");
				scanf("%d",&studentsptr[i].age);
			} 
		} 
	} 
	 for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  ID: %d\n", studentsptr[i].id);
        printf("  Ho ten: %s\n", studentsptr[i].name);
        printf("  Tuoi: %d\n", studentsptr[i].age);
        printf("  So dien thoai: %s\n\n", studentsptr[i].phoneNumber);
    }
	
	return 0;  
} 
