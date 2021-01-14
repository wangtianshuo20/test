#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int BinaryFind(int arr[], int size, int data) {
	int left = 0;
	int right = size;//�����rightȡֵ�����˺��������д��������rightȡ�������һ��Ԫ�صĺ�һ��λ�õ��±꣬ȡ�����Ǹ�λ�õ�ֵ������Ϊ����ҿ�
	while (left < right) {//��ΪΪ����ҿ����ͣ���Ҫ�ҵ�Ԫ�ص���������һ��Ԫ��ʱ����û��left==right����������Բ��ü��ϵ���
		int mid = left + ((right - left) >> 2);//���������������д��ʽ��(left+right)/2����left��right���Ƚϴ��ʱ��ͻ�������Ŀ��ܣ�mid��ֵ�ͻ��ò�ȷ�������Բ���������д��
		if (arr[mid] == data) {
			return mid;
		}
		else if (arr[mid] > data) {//��Ϊ������ҿ����ͣ�mid�м�Ԫ���Ѿ��ȽϹ��ˣ�����Ҫ�ٳ�������һ�εıȽ������У�����Ҫ��mid�����������Ǹ��м�Ԫ��
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
		printf("û�ҵ�\n");
	}
	else {
		printf("�ҵ��ˣ��±�Ϊ%d\n", ret);
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