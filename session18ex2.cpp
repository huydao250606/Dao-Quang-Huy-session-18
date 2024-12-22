#include<stdio.h>

int main(){
	struct person{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct person person1;
	printf("nhap name: ");
	fgets(person1.name,sizeof(person1.name),stdin);
	printf("nhap age: ");
	scanf("%d",&person1.age);
	fflush(stdin);
	printf("nhap so dien thoai: ");
	fgets(person1.phoneNumber,sizeof(person1.phoneNumber),stdin);
	printf("%s\n",person1.name);
	printf("%d\n",person1.age);
	printf("%s\n",person1.phoneNumber);
	return 0;
}
