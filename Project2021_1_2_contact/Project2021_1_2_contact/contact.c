#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void Initcontact(struct Con* ps) {
	memset(ps->data, 0, sizeof(ps->data));//把1000个成员的信息初始化为0
	ps->size = 0;
}
void Printcontact(const struct Con* ps) {
	printf("%-20s\t%-20s\t%-10s\t%-20s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");//先打印标题，\t的意识是一个tab空格，-20s代表大小为20并且左对齐，注意打印后面汉字的时候要加双引号
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		printf("%-20s\t%-20s\t%-10d\t%-20s\t%-20s\n",
			ps->data[i].name,//ps是结构体指针，之后让它指向它所包含的数组，i第几个成员，之后找到了people结构体，之后再访问里面的成员
			ps->data[i].sex,
			ps->data[i].age,
			ps->data[i].tel,
			ps->data[i].src
		);
	}
	
}
void Addcontact(struct Con* ps){//因为size被初始化为0，所以增加朋友的时候就从第一个开始赋值就可以了，每次赋值一个人之后size++
	if (ps->size == MAX) {//先判断通讯录满没满
		printf("通讯录已经满啦\n");
	}
	printf("请输入姓名：\n");
	scanf("%s", ps->data[ps->size].name);
	printf("请输入性别：\n"); 
	scanf("%s", ps->data[ps->size].sex);
	printf("请输入年龄:\n");
	scanf("%d", &(ps->data[ps->size].age));
	printf("请输入电话:\n");
	scanf("%s", ps->data[ps->size].tel);
	printf("请输入地址：\n");
	scanf("%s", ps->data[ps->size].src);
	ps->size++;
	printf("添加成功！\n");
}
int Findname(struct Con* ps, char *name) {
	int i = 0;
	for (i = 0; i < ps->size; i++) {
		if (0 == strcmp(ps->data[i].name, name)) {//用strcmp来比较两个字符串是否相等，传的都是字符数组名，也就是首元素地址
			return i;//把找到的数组下标位置返回出去
		}
		
	}
	return -1;
}
void Delcontact(struct Con* ps) {
		char name[name_max];//定义一个字符数组来存放要输入的名字
		printf("请输入您要删除的人的姓名：\n");
		scanf("%s", name);//name是数组名，数组名代表数组首元素地址
						  //首先就要判断要删除的这个人是否存在
		int ret = Findname(ps, name);
		if (ret == -1) {
			printf("您要删除的人不存在\n");
		}
		else {
			int j = 0;
			for (j = ret; j < ps->size - 1; j++) {//从返回的下标i开始，将要删除的人的数据覆盖掉
				ps->data[j] = ps->data[j + 1];
			}
			ps->size--;
			printf("删除成功！\n");
		}
		
	}
void Searchcontact(const struct Con* ps) {
	char name[name_max];
	printf("请输入您要查找的人的姓名：\n");
	scanf("%s", name);
	int ret = Findname(ps, name);
	if (ret == -1) {
		printf("您要查找的人不存在\n");
	}
	else {//直接把查找到的人的信息打印出来就可以了
		printf("%-20s\t%-20s\t%-10s\t%-20s\t%-20s\n", "姓名", "性别", "年龄", "电话", "住址");
		printf("%-20s\t%-20s\t%-10d\t%-20s\t%-20s\n",
				ps->data[ret].name,
				ps->data[ret].sex,
				ps->data[ret].age,
				ps->data[ret].tel,
				ps->data[ret].src
			);
	}

}
void Modcontact(struct Con* ps) {
	char name[name_max];
	printf("请输入您要修改的人的姓名：\n");
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
		printf("请输入年龄:\n");
		scanf("%d",&( ps->data[ret].age));
		printf("请输入电话:\n");
		scanf("%s", ps->data[ret].tel);
		printf("请输入地址：\n");
		scanf("%s", ps->data[ret].src);
		printf("修改成功！\n");
	}
	
}