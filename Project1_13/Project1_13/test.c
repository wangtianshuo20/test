#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
long long* Fibnacci(size_t N) {
	long long* Fibarray = malloc(sizeof(long long) * (N + 1));//��ΪҪ���ǵ�N����0����������Կ��ٵĿռ����Ҫ+1
	Fibarray[0] = 0;
	if (N == 0) {//������ж���Ϊ�˷�ֹԽ�磬���NΪ0��ʱ�򣬻�Ҫִ��Fibarray[1] = 1;��ô��̬���ٵ��ڴ�ͻ�Խ��
		return Fibarray;
	}
	Fibarray[1] = 1;
	for (int i = 2; i <= N; ++i) {//�ܹ�������N+1����������һ������0
		Fibarray[i] = Fibarray[i - 1] + Fibarray[i - 2];
	}
	return Fibarray;

}
int main() {
	printf("%d\n", Fibnacci(1000));

	return 0;
��
void Bubblesort(int* a, int n) {
	assert(a);
	for (size_t end = n; end > 0;--end) {
		int exchange = 0;
		for (size_t i = 0; i < end; ++i) {
			if (a[i - 1] > a[i]) {
				swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}
		if (exchange == 0) {
			break;
		}
	}
}
long long* Fibnacci(size_t n) {
	if (n == 0) {
		return NULL;
	}
	long long* fibarr = (long long*)malloc((n + 1) * sizeof(long long));
	fibarr[0] = 0;
	fibarr[1] = 1;
	for (size_t i = 2; i <= n; ++i) {
		fibarr[i] = fibarr[i - 1] + fibarr[i - 2];
	}
	return fibarr;
}
int main() {
	printf("%d\n", Fibnacci(10));
	return 0;
}
long long Fic1(size_t N) {
	return N > 1 ? 1 : Fic1(N - 1) * N;
}