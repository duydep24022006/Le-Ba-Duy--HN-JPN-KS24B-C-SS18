#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct sinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
};
typedef struct sinhVien sinhVien;
 
int main(){
	sinhVien *studentsptr=(sinhVien *)malloc(5 *sizeof(sinhVien));
	if(studentsptr ==NULL){
		printf("khong the cap phat bo nho dong"); 
		return 1; 
	} 
	for(int i=0;i<5;i++){
		printf("moi ban nhap thong tin sinh vien thu %d\n",i+1);
		
		printf("moi ban nhap ten "); 
		getchar();
		fgets(studentsptr[i].name,sizeof(studentsptr[i].name),stdin);
		studentsptr[i].name[strcspn(studentsptr[i].name, "\n")] = '\0';

		printf("moi ban nhap tuoi ");
		scanf("%d",&studentsptr[i].age);
		
		getchar();
		printf("moi ban nhap sdt ");
		fgets(studentsptr[i].phoneNumber,sizeof(studentsptr[i].phoneNumber),stdin);
		studentsptr[i].phoneNumber[strcspn(studentsptr[i].phoneNumber, "\n")]='\0';		
	} 
	printf("so sinh vien ban vua nhap "); 
	for(int i=0;i<5;i++){
		 printf("\nSinh vien %d:\n", i + 1);
        printf("  Ho ten: %s\n", studentsptr[i].name);
        printf("  Tuoi: %d\n", studentsptr[i].age);
        printf("  So dien thoai: %s\n", studentsptr[i].phoneNumber);
	} 
	return 0;  
} 
