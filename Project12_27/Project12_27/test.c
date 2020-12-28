#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() {
	char* a[] = { "work","at","alibaba" };
	char** ptr = a;
	ptr++;
	printf("%s\n", *ptr);
	return 0;
}
int main() {
	char* c[] = { "enter","new","point","first" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
    char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);
return 0;
}
int main() {
	unsigned long pulArray[] = { 6,7,8,9,10 };
	unsigned long* pulptr;
	pulptr = pulArray;
	printf("%d\n", *(pulptr + 3) += 3);
	return 0;
}
//求解自幂数
int main() {
	int i = 0;
	for (i = 0; i < 100000; i++) {
		int n = 1;
		int tmp = i;
		double sum = 0.0;
		while (tmp/=10) {
			n++;
		}
		tmp = i;
		while (tmp) {
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i && n == 3) {
			printf("%d ", i);
		}
	}
	return 0;
}