#include<stdio.h>
struct Sinhvien{
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct Sinhvien sv1={"Vu Hong Van","19","098765"};
	printf("Ten sinh vien la: %s\n", sv1.name);
	printf("Tuoi cua sinh vien la: %s\n", sv1.age);
	printf("Sdt cua sinh vien la: %s\n", sv1.phoneNumber);
	return 0;
}

