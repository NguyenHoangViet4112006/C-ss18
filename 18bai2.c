#include<stdio.h>
struct Sinhvien{
    char name[50];
    int age;
    char phoneNumber[15];
};
int main(){
    struct Sinhvien sv1;
    printf("Moi ban nhap ten: ");
    fgets(sv1.name, sizeof(sv1.name), stdin);
    printf("Moi ban nhap tuoi: ");
    scanf("%d", &sv1.age);
    getchar();
    printf("Moi ban nhap so dien thoai: ");
    fgets(sv1.phoneNumber, sizeof(sv1.phoneNumber), stdin);
    printf("Ten sinh vien la: %s", sv1.name);
    printf("Tuoi cua sinh vien la: %d\n", sv1.age);
    printf("Sdt cua sinh vien la: %s", sv1.phoneNumber);
    return 0;
}

