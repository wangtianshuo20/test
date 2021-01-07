#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wd");//代表打开一个文件，test,txt是文件名，wd是打开方式（二进制方式来写），之后赋给文件指针变量pf
//	fwrite(&a, 4, 1, pf);//在文件里写东西，第一个参数是要写的地址，第二个参数是写的内容是多大字节，第三个参数是要写的个数，第四个参数是要上传到哪个文件里
//	fclose(pf);//文件使用完之后，要把文件指针释放，并且置为空指针
//	pf = NULL;
//	return 0;
//}
int main() {
	//打开文件
	FILE* pf=fopen("test.txt", "r");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));//如果打开失败的话系统并不会创建结构体类型的文件信息区
	}
	//写文件
	//关闭文件
	fclose(pf);//把指向文件信息区的指针传给关闭函数fclose就可以了
	pf = NULL;
	return 0;
}