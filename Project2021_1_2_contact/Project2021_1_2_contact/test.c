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
enum prr {//ע������AddҪ�ӵڶ���λ�ÿ�ʼ������������ֵ�Ŵ���1
	Exit,
	Add,
	Del,
	Search,
	Mod,
	Print
};//������ö�ٽṹ��Ϊ�˷��������switchѡ������ѡֵ����ͬ����1��2��3��4��ֱ��д���ܾͿ����ˣ�����д����
int main() {
	int input = 0;
	struct Con con;
	Initcontact(&con);
	do {
		menu();
		printf("��������Ҫѡ��Ĺ��ܣ�\n");
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