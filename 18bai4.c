#include<stdio.h>
struct Sinhvien{
	int id;
	char name[50];
	int age;
	char num[50];
};
int main(){
	struct Sinhvien sv1[5];
	for(int i =0; i<5; i++){
		sv1[i].id=i+1;
		printf("Moi ban nhap ten: ");
    	fgets(sv1[i].name, sizeof(sv1[i].name), stdin);
    	printf("Moi ban nhap tuoi: ");
    	scanf("%d", &sv1[i].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai: ");
    	fgets(sv1[i].num, sizeof(sv1[i].num), stdin);
	}
    for(int i =0;i<5; i++){
		printf("Ten sinh vien la: %s\n", sv1[i].name);
		printf("Sinh vien co id la: %d\n", sv1[i].id);
		printf("Tuoi cua sinh vien la: %d\n", sv1[i].age);
		printf("Sdt cua sinh vien la: %s", sv1[i].num);
	}	
	return 0;
}

