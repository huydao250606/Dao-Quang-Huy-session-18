#include<stdio.h>

int main(){
	struct person{
		char name[30];
		int age;
		char phoneNumber[20];
	};
	struct person person1{"Dao Quang Huy",18,"0889382506"};
	printf("%s\n",person1.name);
	printf("%d\n",person1.age);
	printf("%s\n",person1.phoneNumber);
	return 0;
}
