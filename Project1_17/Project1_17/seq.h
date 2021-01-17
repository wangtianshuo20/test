#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>
#pragma once
typedef int SDataType;
typedef struct Seqlist {
	SDataType* array;
	int capacity;
	int size;
}Seqlist;
void Seqlistinit(Seqlist* ps, size_t capacity);//˳����ʼ��
void SeqlistDestroy(Seqlist* ps);//˳�������
void SeqlistPrint(Seqlist* ps);//˳����ӡ
void Checkcapacity(Seqlist* ps);//���ռ䣬������ˣ���������
void Seqlistpushback(Seqlist* ps, SDataType x);//β��
void Seqlistpopback(Seqlist* ps);//βɾ
void Seqlistpushfront(Seqlist* ps, SDataType x);//ͷ��
void Seqlistpopfront(Seqlist* ps);//ͷɾ
int Seqlistfind(Seqlist* ps, SDataType x);//˳������
void Seqlistinsert(Seqlist* ps, size_t pos, SDataType x);//��ָ��λ�ò���
void Seqlisterase(Seqlist* ps, size_t pos);//��ָ��λ��ɾ��
int Seqlistsize(Seqlist* ps);//����˳�������ЧԪ�صĸ���
int Seqcapacity(Seqlist* ps);//����˳��������
int SeqEmpty(Seqlist* ps);//���˳����Ƿ�Ϊ��
void SeqlistClear(Seqlist* ps);//���˳���