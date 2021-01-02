#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Initcontact(struct Con* ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void Addcontact(struct Con* ps) {
	if (ps->size == MAX) {
		printf("ͨѶ¼�Ѿ�����\n");
	}
	printf("������������\n");
	scanf("%s", ps->data[ps->size].name);
	printf("�������Ա�\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("���������䣺\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("������绰��\n");
	scanf("%s", ps->data[ps->size].tel);
	printf("�������ַ��\n");
	scanf("%s", ps->data[ps->size].ars);
	ps -> size++;
	printf("��ӳɹ���\n");

}
void Printcontact(const struct Con* ps) {
	printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����","�Ա�","����","�绰","סַ");
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		printf("%-10s\t%-10s\t%-10d\t%-20s\t%-20s\n",
			ps->data[i].name,
			ps->data[i].sex,
			ps->data[i].age,
			ps->data[i].tel,
			ps->data[i].ars

		);
	}
}
int Findname(struct Con* ps, char* name) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {
			return i;
		}
	}
	return -1;
}
void Delcontact(struct Con* ps) {
	char name[20];
	printf("������Ҫɾ���˵�������\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("��Ҫɾ�����˲�����\n");
	}
	else {
		int i = 0;
		for (i = ret; i < ps->size - 1; i++) {
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
	}
	printf("ɾ���ɹ���\n");
}
void Searchcontact(const struct Con* ps) {
	char name[name_max];
	printf("��������Ҫ�����˵�������\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("��Ҫ���ҵ��˲�����\n");
	}
	else {
		printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "סַ");
		int i = 0;
			printf("%-10s\t%-10s\t%-10d\t%-20s\t%-20s\n",
				ps->data[ret].name,
				ps->data[ret].sex,
				ps->data[ret].age,
				ps->data[ret].tel,
				ps->data[ret].ars

			);
		
	}
}
void Divcontact(struct Con* ps) {
	char name[name_max];
	printf("��������Ҫ�޸��˵�������\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("��Ҫ�޸ĵ��˲�����\n");
	}
	else {
		printf("������������\n");
		scanf("%s", ps->data[ret].name);
		printf("�������Ա�\n");
		scanf("%s", ps->data[ret].sex);
		printf("���������䣺\n");
		scanf("%d", &(ps->data[ret].age));
		printf("������绰��\n");
		scanf("%s", ps->data[ret].tel);
		printf("�������ַ��\n");
		scanf("%s", ps->data[ret].ars);
	}
}