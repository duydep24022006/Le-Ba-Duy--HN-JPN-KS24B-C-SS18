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
void studen();
int main(){
	int n,currentSize=5;
	int *currentSizeptr= &currentSize;
	sinhVien *studentsptr=(sinhVien *)malloc(50 *sizeof(sinhVien));
	if(studentsptr ==NULL){
		printf("khong the cap phat bo nho dong"); 
		return 1; 
	} 
	studen(currentSize,studentsptr,studentsptr);
	printf("\nmoi ban nhap thong tin sinh vien thu %d\n",currentSizeptr+1);
		studentsptr[*currentSizeptr].id=*(currentSizeptr+1);
		printf("moi ban nhap ten ");
		getchar();
		fgets(studentsptr[*currentSizeptr].name,sizeof(studentsptr[*currentSizeptr].name),stdin);
		studentsptr[*currentSizeptr].name[strcspn(studentsptr[*currentSizeptr].name, "\n")] = '\0';
		
		printf("moi ban nhap tuoi ");
		scanf("%d",&studentsptr[*currentSizeptr].age);
		
		getchar();
		printf("moi ban nhap sdt ");
		fgets(studentsptr[*currentSizeptr].phoneNumber,sizeof(studentsptr[*currentSizeptr].phoneNumber),stdin);
		studentsptr[*currentSizeptr].phoneNumber[strcspn(studentsptr[*currentSizeptr].phoneNumber, "\n")]='\0';
	output(currentSize,studentsptr,studentsptr);
	return 0;  
}
void studen(int currentSize, sinhVien *studentsptr) {
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
} 
void output(int currentSize, sinhVien *studentsptr) {
 printf("\nDanh sach sinh vien sau khi them:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  ID: %d\n", studentsptr[i].id);
        printf("  Ho ten: %s\n", studentsptr[i].name);
        printf("  Tuoi: %d\n", studentsptr[i].age);
        printf("  So dien thoai: %s\n\n", studentsptr[i].phoneNumber);
    }
} 
