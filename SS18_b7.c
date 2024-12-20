#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[50];
};
typedef struct sinhVien sinhVien;

void studen(sinhVien *studentsptr);
void output(int currentSize, sinhVien *studentsptr);
void deleteStudent(int *currentSize, sinhVien *studentsptr, char *deleteName);

int main() {
    int currentSize = 5;
    char searchstr[50]; 
    sinhVien *studentsptr = (sinhVien *)malloc(50 * sizeof(sinhVien));

    if (studentsptr == NULL) {
        printf("Khong the cap phat bo nho dong\n");
        return 1;
    }
	
    studen(studentsptr);
	
    printf("Moi ban nhap ten: ");
    fflush(stdin); // Ğ?m b?o xóa s?ch b? ğ?m ğ?u vào
    fgets(searchstr, sizeof(searchstr), stdin);
    searchstr[strcspn(searchstr, "\n")] = '\0';
    
    deleteStudent(&currentSize, studentsptr, searchstr);
    
    free(studentsptr);
    return 0;
}

void studen(sinhVien *studentsptr) {
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
    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < currentSize; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("  ID: %d\n", studentsptr[i].id);
        printf("  Ho ten: %s\n", studentsptr[i].name);
        printf("  Tuoi: %d\n", studentsptr[i].age);
        printf("  So dien thoai: %s\n\n", studentsptr[i].phoneNumber);
    }
}

void deleteStudent(int *currentSize, sinhVien *studentsptr, char *deleteName) {
    int found = 0;
    for (int i = 0; i < *currentSize; i++) {
        if (strcmp(studentsptr[i].name, deleteName) == 0) {
            found = 1;
            for (int j = i; j < *currentSize - 1; j++) {
                studentsptr[j] = studentsptr[j + 1];
            }
            (*currentSize)--;
            printf("\nSinh vien '%s' da duoc xoa.\n", deleteName);
            output(*currentSize, studentsptr);
            break;
        }
    }
    if (!found) {
        printf("\nKhong tim thay sinh vien ten '%s'.\n", deleteName);
    }
}

