#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define name_max 20
#define sex_max 20
#define tel_max 20
#define src_max 20
#define MAX 1000
#include<string.h>
struct people {
	char name[name_max];//������name_max������������Ϊ�˷����Ժ��޸�,Ҳ������д���룬����д������
	char sex[sex_max];
	int age;
	char tel[tel_max];
	char src[src_max];
};//������ÿ���˵���������
struct Con {
	struct people data[MAX];//���ﶨ����һ�������Ա���ܹ�1000����ÿ��Ԫ�����ŵ���ÿ���˵�������Ϣ
	int size;//size��������ͨѶ¼����˶�����
};//���Զ���һ��struct Con�������Ƕ�����һ�����Դ��1000������Ϣ��ͨѶ¼
void Initcontact(struct Con* ps);
void Printcontact( const struct Con* ps);
void Addcontact(struct Con* ps);
void Delcontact(struct Con* ps);
void Searchcontact(const struct Con* ps);
void Modcontact(struct con* ps);