#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define name_max 20
#define sex_max 20
#define tel_max 20
#define src_max 20
#define MAX 1000
#include<string.h>
struct people {
	char name[name_max];//这里用name_max而不用数字是为了方便以后修改,也方便了写代码，不会写错数字
	char sex[sex_max];
	int age;
	char tel[tel_max];
	char src[src_max];
};//定义了每个人的描述数据
struct Con {
	struct people data[MAX];//这里定义了一个数组成员，总共1000个，每个元素里存放的是每个人的描述信息
	int size;//size用来计数通讯录里存了多少人
};//所以定义一个struct Con变量就是定义了一个可以存放1000个人信息的通讯录
void Initcontact(struct Con* ps);
void Printcontact( const struct Con* ps);
void Addcontact(struct Con* ps);
void Delcontact(struct Con* ps);
void Searchcontact(const struct Con* ps);
void Modcontact(struct con* ps);