#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Initcontact(struct Con* ps) {
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void Addcontact(struct Con* ps) {
	if (ps->size == MAX) {
		printf("通讯录已经满啦\n");
	}
	printf("请输入姓名：\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入性别：\n");
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入年龄：\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入电话：\n");
	scanf("%s", ps->data[ps->size].tel);
	printf("请输入地址：\n");
	scanf("%s", ps->data[ps->size].ars);
	ps -> size++;
	printf("添加成功！\n");

}
void Printcontact(const struct Con* ps) {
	printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "姓名","性别","年龄","电话","住址");
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
	printf("请输入要删除人的姓名：\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("您要删除的人不存在\n");
	}
	else {
		int i = 0;
		for (i = ret; i < ps->size - 1; i++) {
			ps->data[i] = ps->data[i + 1];
		}
		ps->size--;
	}
	printf("删除成功！\n");
}
void Searchcontact(const struct Con* ps) {
	char name[name_max];
	printf("请输入您要查找人的姓名：\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("您要查找的人不存在\n");
	}
	else {
		printf("%-10s\t%-10s\t%-10s\t%-20s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
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
	printf("请输入您要修改人的姓名：\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("您要修改的人不存在\n");
	}
	else {
		printf("请输入姓名：\n");
		scanf("%s", ps->data[ret].name);
		printf("请输入性别：\n");
		scanf("%s", ps->data[ret].sex);
		printf("请输入年龄：\n");
		scanf("%d", &(ps->data[ret].age));
		printf("请输入电话：\n");
		scanf("%s", ps->data[ret].tel);
		printf("请输入地址：\n");
		scanf("%s", ps->data[ret].ars);
	}
}