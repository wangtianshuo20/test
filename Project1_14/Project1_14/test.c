#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int BinaryFind(int arr[], int size, int data) {
	int left = 0;
	int right = size;//这里的right取值决定了后续程序的写法，这里right取到了最后一个元素的后一个位置的下标，取不到那个位置的值，所以为左闭右开
	while (left < right) {//因为为左闭右开类型，当要找到元素的数组的最后一个元素时，就没有left==right的情况，所以不用加上等于
		int mid = left + ((right - left) >> 2);//如果采用以往的书写方式：(left+right)/2，当left和right都比较大的时候就会有溢出的可能，mid的值就会变得不确定，所以采用了这种写法
		if (arr[mid] == data) {
			return mid;
		}
		else if (arr[mid] > data) {//因为是左闭右开类型，mid中间元素已经比较过了，不需要再出现在下一次的比较数组中，所以要用mid，它不包括那个中间元素
			right = mid;
		}
		else {
			left = mid + 1;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1,2,3,4,5,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int ret=BinaryFind(arr, size, 6);
	if (ret == -1) {
		printf("没找到\n");
	}
	else {
		printf("找到了，下标为%d\n", ret);
	}

	return 0;
}
int Func1(int N) {
	if (N == 0) {
		return 1;
	}
	return Func1(N - 1) * N;
}
int main() {
	int ret = Func1(4);
	printf("%d\n", ret);
	return 0;
}