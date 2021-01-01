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
		printf("不存在该子串\n");
	}
	else {
		printf("存在该子串\n");
	}
	return 0;
}
int main() {
	char arr[] = "wangtian.shuo@go";
	char* p = ".@";
	char* ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) {//当strtok（）在arr中找不到标记也找不到‘\0’的时候，会返回空指针
		printf("%s\n", ret);
	}
	
	return 0;
}
iscntrl-------任何控制字符
isspace-------空白字符：空格' ',换页符‘\f’,换行‘\n’，回车‘\r’，制表符‘\t’,垂直制表符'\v'
isdigit-------十进制数字0~9
isxdigit------十六进制数字，包括所有十进制数字，小写字母a~f,大写字母A~F
islower-------小写字母a~z
isupper-------大写字母A~Z
isalpha-------字母a~z或A~Z
isalum--------字母或者数字，a~z，A~Z，0~9
ispunct-------标点符号，不属于数字和字母的图形字符
isgraph-------任何图形字符
isprint-------任何可打印字符

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
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//我们希望把1，2，3，4，5，拷贝到3，4，5，6，7的位置，但是memcpy这个函数实现不了这个功能，也就是处理不了自己给自己拷贝内存重叠的情况
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
	memset(arr, 1, 10);//这里不是改变了十个整型，而是改变了十个字节，所以第一个元素就为01 01 01 01 结果就为16843009
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