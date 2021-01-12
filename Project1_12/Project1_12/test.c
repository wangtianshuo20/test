#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void Func1(int n) {
	int count = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			++count;
		}

	}
	for (int k = 0; k < 2 * N; ++k) {
		++count;
	}
	int m = 10;
	while (m--) {
		++count;
	}
	printf("%d\n", count);
}
void Funk2(int N){
	int count = 0;
	for (int k = 0; k < 2 * N; ++k) {
		++count;
	}
	int M = 10;
	while (M--) {
		++count;
	}
	printf("%d\n", count);

}
void Func3(int N,int M) {
	int count = 0;
	for (int k = 0; k < M; ++k) {
		++count;
	}
	for (int k = 0; k < N; ++k) {
		++count;
	}
	printf("%d\n", count);

}
void Func4(int N) {
	int count = 0;
	for (int k = 0; k < 100; ++k) {
		++count;
	}
	printf("%d\n", count);
}
const char*strchr(const char* str,int character)
void Bubblesort(int* a, int n) {//*a是数组指针，n是数组的大小
	assert(a);
	for (size_t end = n; end > 0; --end) {
		int exchange = 0;
		for (size_t i = 1; i < end; ++i) {
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
int Binarysearch(int arr[5], int n, int x) {
	int begin = 0;
	int end = n - 1;
	while (begin < end) {
		int mid = (begin+end)/2;
		if (arr[mid] < x) {
			begin = mid + 1;
		}
		else if(arr[mid] > x) {
			end = mid-1;
		}
		else {
			return arr[mid];
		}
	}
	return -1;
}
int main() {
	int arr[5] = { 1,2,3,4,5 };
	int tmp=Binarysearch(arr, 5, 3);
	printf("%d\n", tmp);
	return 0;
}
long long Func1(size_t N) {
	return N < 2 ? N:Func1(N - 1)* N;
}