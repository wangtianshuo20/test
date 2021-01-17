#define _CRT_SECURE_NO_WARNINGS 1
#include"seq.h"
int main() {
	Seqlist s;
	Seqlistinit(&s, 5);
	Seqlistpushback(&s, 1);
	Seqlistpushback(&s, 2);
	Seqlistpushback(&s, 3);
	Seqlistpushback(&s, 4);
	Seqlistpushback(&s, 5);
	//SeqlistPrint(&s);
	Seqlistinsert(&s, 3, 9);
	SeqlistPrint(&s);
	return 0;
}
