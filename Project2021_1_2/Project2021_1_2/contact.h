#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define name_max 20
#define sex_max 10
#define tel_max 20
#define ars_max 20
#define MAX 1000
#include<string.h>
struct people {
	char name[name_max];
	char sex[sex_max];
	int age;
	char tel[tel_max];
	char ars[ars_max];
};
struct Con {
	struct people data[MAX];
	int size;
};
void Initcontact(struct Con* ps);
void Addcontact(struct Con* ps);
void Printcontact(const struct Con* ps);
void Delcontact(struct Con* ps);
void Searchcontact(const struct Con* ps);
void Divcontact(struct Con* ps);