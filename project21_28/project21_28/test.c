#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int money = 0;
	int total = 0;
	int empty = 0;
	printf("请输入您拥有的钱数\n");
	scanf("%d", &money);
	total = money;
	empty = money;
	while (empty >= 2) {
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d\n", total);
	return 0;
}
void move(int arr[], int sz) {
	int left = 0;
	int right = sz - 1;
	while (left < right) {//这里的left<right是循环执行的总条件
		while ((left < right) && (arr[left] % 2 == 1)) {//这里面的left<right是为了防止数组全是奇数的时候left越界访问
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0)) {//防止数组全是偶数的时候right越界访问
			right--;
		}
		if(left < right) {
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}
int main() {
	unsigned char a = 200;
	unsigned char b = 100;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d", a + b, c);
	return 0;
}
int main() {
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%d\n", b);
	return 0;
}
int main() {
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if(j==0){
				arr[i][j] = 1;
			}
			if (i == j) {
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1) {
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int main() {
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++) {
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
			printf("killer=%c\n", killer);
		}
	}
	return 0;
}