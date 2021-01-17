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
void Seqlistinit(Seqlist* ps, size_t capacity);//顺序表初始化
void SeqlistDestroy(Seqlist* ps);//顺序表销毁
void SeqlistPrint(Seqlist* ps);//顺序表打印
void Checkcapacity(Seqlist* ps);//检查空间，如果满了，进行增容
void Seqlistpushback(Seqlist* ps, SDataType x);//尾插
void Seqlistpopback(Seqlist* ps);//尾删
void Seqlistpushfront(Seqlist* ps, SDataType x);//头插
void Seqlistpopfront(Seqlist* ps);//头删
int Seqlistfind(Seqlist* ps, SDataType x);//顺序表查找
void Seqlistinsert(Seqlist* ps, size_t pos, SDataType x);//在指定位置插入
void Seqlisterase(Seqlist* ps, size_t pos);//在指定位置删除
int Seqlistsize(Seqlist* ps);//返回顺序表中有效元素的个数
int Seqcapacity(Seqlist* ps);//返回顺序表的容量
int SeqEmpty(Seqlist* ps);//检查顺序表是否为空
void SeqlistClear(Seqlist* ps);//清空顺序表