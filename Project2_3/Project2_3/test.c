#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int a, int b) {
	return (a + b);
}
int Sub(int a, int b) {
	return(a - b);
}
int Mul(int a, int b) {
	return (a * b);
}
int Div(int a, int b) {
	return(a / b);
}
void menu() {
	printf("***** 1.Add      2.Sub  *******\n");
	printf("***** 3.Mul      4.Div  *******\n");
	printf("*********** 0.exit ************\n");
	printf("*******************************\n");
	printf("*******************************\n");
}
int main() {
	int input = 0;
	int a = 0;
	int b = 0;
	int(*p[])(int, int) = { 0,Add,Sub,Mul,Div };
	do {
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4) {
			printf("请输入两个操作数\n");
			scanf("%d%d", &a, &b);
			int ret = p[input](a, b);
			printf("%d", ret);
			printf("\n");

		}
		else if (input == 0) {
			printf("您已退出\n");
		}
		else {
			printf("请重新输入\n");
		}
	} while (input);
	return 0;
	
    

}