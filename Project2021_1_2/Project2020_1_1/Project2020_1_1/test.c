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
//}//��Ϊ������a����ֻ��Ҫ2���ֽڣ�b����ֻ��Ҫ5���ֽڣ�c����ֻ��Ҫ10���ֽڡ�d����ֻ��Ҫ30���ֽڣ�����������λ������ȥ
////����һ��������ʱ��ϵͳ���ȿ���һ�����Ϳռ䣬32��bitλ��4���ֽڣ����Ȱ�a��b��c���ȥ��Ȼ������dʱ��ֻ����15��bitλ������d
////�Ĵ洢�ռ䣬���ʱ�����µ�15��bitλ�ͻᱻ�˷ѵ���ϵͳ���ٿ���һ���µ����Ϳռ������d�����������sizeof��struct s)����ֵ
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
//	u.a = 1;//���������ݸ�ֵ1����ȡ����һ���ֽڲ��֣��ж���0����1����Ϊ�ǹ����壬��a��ֵ��ͬʱҲ�൱�ڸ�һ���ֽڵ�c��ֵ
//	return u.c;
//}
//int main() {
//	int ret = check_sys();
//	if (ret == 1) {
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}
//	return 0;
//}
union Un {
	int a;//a�Ĵ�СΪ4��Ĭ�϶�����Ϊ8��ȡ��Сֵ4
	char arr[5];//arr[5]�Ĵ�СΪ5����ÿ��Ԫ�صĴ�СΪ1��Ĭ�϶�����Ϊ8��ȡ��Сֵ1
};//��������ܴ�СΪ5����5������4�����������������մ�СΪ8