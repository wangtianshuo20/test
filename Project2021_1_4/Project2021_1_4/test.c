#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main() {
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wd");//�����һ���ļ���test,txt���ļ�����wd�Ǵ򿪷�ʽ�������Ʒ�ʽ��д����֮�󸳸��ļ�ָ�����pf
//	fwrite(&a, 4, 1, pf);//���ļ���д��������һ��������Ҫд�ĵ�ַ���ڶ���������д�������Ƕ���ֽڣ�������������Ҫд�ĸ��������ĸ�������Ҫ�ϴ����ĸ��ļ���
//	fclose(pf);//�ļ�ʹ����֮��Ҫ���ļ�ָ���ͷţ�������Ϊ��ָ��
//	pf = NULL;
//	return 0;
//}
int main() {
	//���ļ�
	FILE* pf=fopen("test.txt", "r");
	if (pf == NULL) {
		printf("%s\n", strerror(errno));//�����ʧ�ܵĻ�ϵͳ�����ᴴ���ṹ�����͵��ļ���Ϣ��
	}
	//д�ļ�
	//�ر��ļ�
	fclose(pf);//��ָ���ļ���Ϣ����ָ�봫���رպ���fclose�Ϳ�����
	pf = NULL;
	return 0;
}