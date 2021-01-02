#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu() {
	printf("******1.Add       2.Del    *****\n");
	printf("******3.Search    4.Mod   ******\n");
	printf("******5.Print     0.Exit ********\n");
	printf("*********************************\n");
	printf("*********************************\n");
	printf("*********************************\n");
	printf("*********************************\n");
	printf("*********************************\n");

}
enum prr {//注意这里Add要从第二个位置开始，这样它是数值才代表1
	Exit,
	Add,
	Del,
	Search,
	Mod,
	Print
};//这里用枚举结构是为了方便下面得switch选择函数的选值，不同再填1，2，3，4，直接写功能就可以了，方便写代码
int main() {
	int input = 0;
	struct Con con;
	Initcontact(&con);
	do {
		menu();
		printf("请输入您要选择的功能：\n");
		scanf("%d", &input);
		switch (input) {
		case(Add):
			Addcontact(&con);
			break;
		case(Del):
			Delcontact(&con);
			break;
		case(Search):
			Searchcontact(&con);
			break;
		case(Mod):
			Modcontact(&con);
			break;
		case(Print):
			Printcontact(&con);
			break;
		default:
			break;
		}

	} while (input);
	return 0;
}