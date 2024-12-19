#include<stdio.h>
struct Sinhvien{
    char name[50];
    int age;
    char phoneNumber[15];
    char id[50];
};
int main() {
    struct Sinhvien sinhviens[50];
    int n = 5;
    for (int i = 0; i < n; i++) {
        sinhviens[i].id[0] = ' ';
        snprintf(sinhviens[i].name, sizeof(sinhviens[i].name), "Sinh vien %d", i + 1);
        sinhviens[i].age = 20 + i;
        snprintf(sinhviens[i].phoneNumber, sizeof(sinhviens[i].phoneNumber), "012345678%d", i);
    }
    printf("Thong tin cac sinh vien hien co:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", i + 1);
        printf("Ten: %s\n", sinhviens[i].name);
        printf("Tuoi: %d\n", sinhviens[i].age);
        printf("So dien thoai: %s\n", sinhviens[i].phoneNumber);
    }
    printf("\nNhap thong tin sinh vien moi:\n");
    sinhviens[n].id[0] = ' ';
    printf("Moi ban nhap ten: ");
    fgets(sinhviens[n].name, sizeof(sinhviens[n].name), stdin);
    printf("Moi ban nhap tuoi: ");
    scanf("%d", &sinhviens[n].age);
    getchar();
    printf("Moi ban nhap so dien thoai: ");
    fgets(sinhviens[n].phoneNumber, sizeof(sinhviens[n].phoneNumber), stdin);
    snprintf(sinhviens[n].id, sizeof(sinhviens[n].id), "%d", n + 1);
    n++;
    printf("\nThong tin cac sinh vien sau khi them moi:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", i + 1);
        printf("Ten: %s", sinhviens[i].name);
        printf("Tuoi: %d\n", sinhviens[i].age);
        printf("So dien thoai: %s", sinhviens[i].phoneNumber);
    }

    return 0;
}

