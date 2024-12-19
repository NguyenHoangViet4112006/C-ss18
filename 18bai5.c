#include <stdio.h>
struct Sinhvien{
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};
int main() {
    int n = 5;
	struct Sinhvien sv1={"Vu Hong Van","19","098765"};
	printf("Ten sinh vien la: %s\n", sv1.name);
	printf("Tuoi cua sinh vien la: %s\n", sv1.age);
	printf("Sdt cua sinh vien la: %s\n", sv1.phoneNumber);
    int id;
    printf("\nNhap ID cua sinh vien can sua: ");
    scanf("%d", &id);
    getchar();
    int found = 0;
    for (int i = 0; i < n; i++){
        if (sv1[i].id == id) {
            found = 1;
            printf("Nhap ten moi: ");
            fgets(sinhviens[i].name, sizeof(sv1[i].name), stdin);
            printf("Nhap tuoi moi: ");
            scanf("%d", &sv1[i].age);
            getchar();
            break;
        }
    }
    if(!found){
        printf("Khong tim thay sinh vien voi ID %d\n", id);
    }
    printf("\nThong tin cac sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv1[i].id);
        printf("Ten: %s", sv1[i].name);
        printf("Tuoi: %d\n", sv1[i].age);
        printf("So dien thoai: %s", sv1[i].phoneNumber);
    }
    return 0;
}

