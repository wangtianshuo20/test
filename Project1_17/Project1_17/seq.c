#define _CRT_SECURE_NO_WARNINGS 1
#include"seq.h"
void Seqlistinit(Seqlist* ps, size_t initcapacity) {
	assert(ps);
	initcapacity <= 3 ? 3 : initcapacity;//因为initcapacity是一个整数，整数有可能传入小于3的数甚至负数，所以将它的最低限度设为3
	ps->array = (SDataType*)malloc(initcapacity * sizeof(SDataType));
	if (ps->array == NULL) {
		return;
	}
	ps->capacity = initcapacity;
	ps->size = 0;
}
void SeqlistDestroy(Seqlist* ps) {
	assert(ps);
	if (ps->array) {//如果array动态空间里面还有数据，就会进入if语句内
		free(ps->array);
		ps->array = NULL;
		ps->capacity = 0;
		ps->size = 0;
	}
}
void SeqlistPrint(Seqlist* ps) {
	assert(ps);
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}
void Checkcapacity(Seqlist* ps) {
	assert(ps);
	if (ps->capacity == ps->size) {
		int newcapacity = 2 * ps->capacity;
		ps->array = (SDataType*)realloc(ps->array,newcapacity * sizeof(SDataType));
		if (ps->array == NULL) {
			return;
		}
		ps->capacity = newcapacity;
	}
}
void Seqlistpushback(Seqlist* ps, SDataType x) {
	assert(ps);
	Checkcapacity(ps);
	ps->array[ps->size++] = x;
}
void Seqlistpopback(Seqlist* ps) {
	assert(ps);
	if (SeqEmpty(ps))
		return;
	ps->size--;
}
void Seqlistpushfront(Seqlist* ps, SDataType x) {
	assert(ps);
	Checkcapacity(ps);
	for (int i = ps->size-1; i >=0; i--) {
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[0] = x;
	ps->size++;
}
void Seqlistpopfront(Seqlist* ps) {
	assert(ps);
	for (int i = 1; i < ps->size; i++) {
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;
}
int Seqlistfind(Seqlist* ps, SDataType x) {
	assert(ps);
	for (int i = 0; i < ps->size; i++) {
		if (ps->array[i] == x) {
			return i;
		}
	}
	return -1;
}
void Seqlistinsert(Seqlist* ps, int pos, SDataType x) {
	assert(ps);
	if (pos<0 || pos>ps->size) {//判断pos是否有意义
		return;
	}
	Checkcapacity(ps);
	for (int i = ps->size; i >= pos; i--) {
		ps->array[i + 1] = ps->array[i];
	}
	ps->array[pos] = x;
	ps->size++;
}
void Seqlisterase(Seqlist* ps, int pos) {
	assert(ps);
	if (pos < 0 || pos >= ps->size) {//判断pos是否有意义
		return;
	}
	for (int i = pos + 1; i < ps->size; i++) {
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;

}
int Seqlistsize(Seqlist* ps) {
	assert(ps);
	return ps->size;
}
int Seqcapacity(Seqlist* ps) {
	assert(ps);
	return ps->capacity;
}
int SeqEmpty(Seqlist* ps) {
	assert(ps);
	return 0 == ps->size;//顺序表为空返回1，不为空返回0
}
void SeqlistClear(Seqlist* ps) {
	assert(ps);
	ps->size = 0;
}