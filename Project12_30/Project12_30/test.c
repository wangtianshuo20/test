#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
char* my_strstr(const char* p1,const char* p2) {
	assert(p1 && p2);
	char* s1 = p1;
	char* s2 = p2;
	char* cur = p1;
	if (*p2 == '\0') {
		return p1;
	}
	while (*cur) {
		s1 = cur;
		s2 = p2;
		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return cur;
		}
		if (*s1 == '\0') {
			return NULL;
		}
		cur++;

	}
	return NULL;



}
int main() {
	char arr1[] = "abcde";
	char arr2[] = "dg";
	char* tmp=my_strstr(arr1, arr2);
	if (tmp == NULL) {
		printf("�����ڸ��Ӵ�\n");
	}
	else {
		printf("���ڸ��Ӵ�\n");
	}
	return 0;
}
int main() {
	char arr[] = "wangtian.shuo@go";
	char* p = ".@";
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) {//��strtok������arr���Ҳ������Ҳ�Ҳ�����\0����ʱ�򣬻᷵�ؿ�ָ��
		printf("%s\n", ret);
	}
	
	return 0;
}
iscntrl-------�κο����ַ�
isspace-------�հ��ַ����ո�' ',��ҳ����\f��,���С�\n�����س���\r�����Ʊ����\t��,��ֱ�Ʊ��'\v'
isdigit-------ʮ��������0~9
isxdigit------ʮ���������֣���������ʮ�������֣�Сд��ĸa~f,��д��ĸA~F
islower-------Сд��ĸa~z
isupper-------��д��ĸA~Z
isalpha-------��ĸa~z��A~Z
isalum--------��ĸ�������֣�a~z��A~Z��0~9
ispunct-------�����ţ����������ֺ���ĸ��ͼ���ַ�
isgraph-------�κ�ͼ���ַ�
isprint-------�κοɴ�ӡ�ַ�

int main() {
	char arr[] = "i am the king";
	int i = 0;
	while (arr[i]) {
		if (islower(arr[i])) {
			arr[i] = toupper(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);
}
void* my_memcpy(char*dest,const char*src,size_t num){
	assert(dest && src);
	void* tmp = dest;
	while (num--) {
		* (char*)dest = *(char*) src;
		++(char*)dest;
		++(char*)src;

	}
	return tmp;
}
struct stu {
	int age;
	char name[10];
};
int main() {
	struct stu s1[] = { {10,"wang"},{20,"li"} };
	struct stu s2[] = { 0 };
	my_memcpy(s2, s1, sizeof(s1));
	printf("%s\n", s2[1].name);
	return 0;

}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//����ϣ����1��2��3��4��5��������3��4��5��6��7��λ�ã�����memcpy�������ʵ�ֲ���������ܣ�Ҳ���Ǵ������Լ����Լ������ڴ��ص������
	my_memcpy(arr + 2, arr, 20);
	return 0;
}
void* my_memmove(void* dest, void* src, size_t num) {
	assert(dest && src);
	void* tmp = dest;
	if (dest < src) {
		while (num--) {
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else {
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return tmp;
}
int main() {
	int arr[10] = { 0 };
	memset(arr, 1, 10);//���ﲻ�Ǹı���ʮ�����ͣ����Ǹı���ʮ���ֽڣ����Ե�һ��Ԫ�ؾ�Ϊ01 01 01 01 �����Ϊ16843009
	return 0;
}
struct {
	int a;
	float b;
	char c;
}s;
struct {
	int a;
	float b;
	char c;
}*p;
int main() {
	p = &s;
	return 0;
}
typedef struct Node {
	int data;
	struct Node* next;
}N;
int main() {
	struct Node s1;
	N s2;
	return 0;
}
struct t {
	double b;
	char c;
};
struct s {
	int a;
	struct t s1;
	char arr[10];
};
int main() {
	struct s p1 = { 2,{2.0,'c'},"adc" };
	return 0;
}
struct S1 {
	char c1;
	int a;
	char c2;
};
struct S2 {
	char c1;
	char c2;
	int a;
};
int main() {
	struct S1 s1 = { 0 };
	printf("%d\n", sizeof(s1));
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s2));
	return 0;
}
struct S1 {
	double d;
	char c;
	int i;
};
int main() {
	printf("%d\n", sizeof(struct S1));
	return 0;
}
#include<stddef.h>
struct S {
	char c;
	int a;
	double b;
};
int main() {
	printf("%d\n", offsetof(struct S, c));
	printf("%d\n", offsetof(struct S, a));
	printf("%d\n", offsetof(struct S, b));
	return 0;
}
void Init(struct s* ps) {
	ps->a = 100;
	ps->c = 'w';
	ps->d = 3.14;
}