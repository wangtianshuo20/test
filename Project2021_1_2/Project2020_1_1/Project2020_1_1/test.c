#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	struct S {
//		int a : 2;
//		int b : 5;
//		int c : 10;
//		int d : 30;
//	};
//	return 0;
//}//意为创建的a变量只需要2个字节，b变量只需要5个字节，c变量只需要10个字节。d变量只需要30个字节，而如果用这个位段类型去
////定义一个变量的时候，系统会先开辟一个整型空间，32个bit位（4个字节），先把a，b，c存进去，然而当存d时候，只余下15个bit位，不够d
////的存储空间，这个时候余下的15个bit位就会被浪费掉，系统会再开辟一个新的整型空间来存放d，所以如果用sizeof（struct s)计算值
//struct s {
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main() {
//	struct s s1 = { 0 };
//	s1.a = 10;
//	s1.b = 20;
//	s1.c = 3;
//	s1.d = 4;
//	return 0;
//}
//enum Sex {
//	men = 2,
//	women = 4
//};
//enum Color {
//	Red,
//	Green,
//	Blue
//};
//int main() {
//	enum Color c = Red;
//	printf("%d\n", c);
//	printf("%d %d %d\n", Red, Green, Blue);
//	printf("%d %d\n", men, women);
//	return 0;
//}
//union Un {
//	char c;
//	int i;
//};
//int main() {
//	union Un u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &u.c);
//	printf("%p\n", &u.i);
//	printf("%p\n", &u);
//	return 0;
//}
//int check_sys(){
//	union Un {
//	int a;
//	char c;
//}u;
//	u.a = 1;//给整型数据赋值1，再取出第一个字节部分，判断是0还是1，因为是共用体，给a赋值的同时也相当于给一个字节的c赋值
//	return u.c;
//}
//int main() {
//	int ret = check_sys();
//	if (ret == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	return 0;
//}
union Un {
	int a;//a的大小为4，默认对齐数为8，取较小值4
	char arr[5];//arr[5]的大小为5，但每个元素的大小为1，默认对齐数为8，取较小值1
};//联合体的总大小为5，但5不满足4的整数倍，所以最终大小为8