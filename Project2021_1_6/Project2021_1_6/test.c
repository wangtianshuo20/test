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
//	sprintf(str, "%d %lf %s", s.a, s.b, s.arr);//���ṹ�����s�еĸ�ʽ������ת��Ϊ�ַ������������str��
//	printf("%s\n", str);
//	sscanf(str, "%d %lf %s", &(tmp.a), &(tmp.b), tmp.arr);//���ַ�����str�е��ַ�������ת��Ϊ��ʽ�������뵽�ṹ�����tmp��
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
//	//Ŀǰ�ļ������Ѿ����˱���s�����ݣ��������ڿ��԰������뵽�����������ǿ��Ķ��Ķ���
//	fread(&tmp, sizeof(struct stu), 1, pf);//���Ǵ��ļ����Զ����Ƶ���ʽ�����ݣ����뵽�����������ı���tmp��
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
//		fwrite(&(ps->data[i]), sizeof(struct people), 1, pfwrite);//��ͨѶ¼���Ѿ�д�õĳ�Ա��Ϣ��ŵ��ļ���
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
//	//���ļ��д洢�Ķ������������뵽����tmp��
//	while (fread(&tmp, sizeof(struct people), 1, pf)) {//���ļ���û�пɶ����ݵ�ʱ��fread������������0
//		Checkcapacity(ps);//���ȼ��ͨѶ¼�Ŀռ��Ƿ��ã����������������
//		ps->data[size] = tmp;
//		ps->size++;//ÿ������һ����Ա��size++
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
//	printf("%d\n", c);//�ļ�Ϊ���ļ�����ʱ���ӡ���Ϊ-1
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main() {
//	printf("%s\n", strerror(errno));//�Ѵ�����ת��Ϊ������Ϣ����Ҫ��ͷ�ļ�<string.h><errno.h>
//	perror("file opening fail")//��strerrorһ����Ч����������������Ѻ�������д���ַ���һ���ӡ�����һ��ð�ţ����������������Ҫ��ͷ�ļ�
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