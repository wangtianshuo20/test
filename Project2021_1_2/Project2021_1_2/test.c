#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu(){
	printf("*******1.Add         2.Del *********\n");
	printf("*******3.Search      4.Div *********\n");
	printf("*************  0.Exit  *************\n");
	printf("*************  5.Print  ************\n");
	printf("************************************\n");
	printf("************************************\n");
	printf("************************************\n");
	printf("************************************\n");

}
enum npp {
	Eixt,
	Add,
	Del,
	Search,
	Div,
	Print
};
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
		case(Div):
			Divcontact(&con);
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