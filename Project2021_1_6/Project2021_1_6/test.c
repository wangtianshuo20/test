#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//struct S  {
//	int a;
//	double b;
//	char arr[10];
//};
//int main() {
//	struct S s = { 8,9.82,"asdf" };
//	struct S tmp = { 0 };
//	char str[100] = { 0 };
//	sprintf(str, "%d %lf %s", s.a, s.b, s.arr);//将结构体变量s中的格式化数据转换为字符串数据输出到str中
//	printf("%s\n", str);
//	sscanf(str, "%d %lf %s", &(tmp.a), &(tmp.b), tmp.arr);//将字符数组str中的字符串数据转换为格式数据输入到结构体变量tmp中
//	printf("%d %lf %s\n", tmp.a, tmp.b, tmp.arr);
//	return 0;
//}
//struct stu {
//	char name[10];
//	int age;
//	double score;
//};
//int main() {
//	struct stu tmp = { 0 };
//	FILE* pf=fopen("asdf.txt", "rb");
//	if (pf == NULL) {
//		return 0;
//	}
//	//目前文件里面已经有了变量s的数据，所以现在可以把它输入到变量里，变成我们看的懂的东西
//	fread(&tmp, sizeof(struct stu), 1, pf);//我们从文件里以二进制的形式读数据，输入到程序数据区的变量tmp中
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//void Savecontact(struct contact* ps) {
//	FILE* pfwrite=fopen("asdf.txt", "wb");
//	if (pfwrite == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < ps->size; i++) {
//		fwrite(&(ps->data[i]), sizeof(struct people), 1, pfwrite);//将通讯录中已经写好的成员信息存放到文件中
//	}
//	fclose(pfwrite);
//	pfwrite = NULL;
//}
//void Loadcontact(struct contact* ps) {
//	struct people tmp = { 0 };
//	FILE* pf = fopen("asdf.txt", "rb");
//	if (pf == NULL) {
//		printf("Loadcontact::%s\n", strerror(errno));
//		return;
//	}
//	//把文件中存储的二进制数据输入到变量tmp中
//	while (fread(&tmp, sizeof(struct people), 1, pf)) {//当文件中没有可读数据的时候，fread（）函数返回0
//		Checkcapacity(ps);//首先检查通讯录的空间是否够用，如果不够进行增容
//		ps->data[size] = tmp;
//		ps->size++;//每传输完一个成员后，size++
//	}
//	fclose(pf);
//	pf = NULL;
//
//}
//int main() {
//	FILE* pf=fopen("asdff.txt", "r");
//	if (pf == NULL) {
//		perror("file opening fail");
//		return 0;
//	}
//	int c=fgetc(pf);
//	printf("%d\n", c);//文件为空文件，这时候打印结果为-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main() {
//	printf("%s\n", strerror(errno));//把错误码转换为错误信息，需要引头文件<string.h><errno.h>
//	perror("file opening fail")//和strerror一样的效果，区别在于它会把函数里面写的字符串一起打印，并且会加冒号，而且这个函数不需要引头文件
//	return 0;
//}
int main() {
	int ch = 0;
	FILE*pf= fopen("asdf.txt", "r");
	if (!pf) {
		perror("err");
		return 0;
	}
	while ((ch = fgetc(pf)) != EOF) {
		putchar(ch);
	}
	if (ferror(pf)) {
		printf("error\n");
	}
	else if (feof(pf)) {
		printf("end of file\n");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}