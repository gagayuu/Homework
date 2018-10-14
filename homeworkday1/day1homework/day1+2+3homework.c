//打印100~200 之间的素数
//输出乘法口诀表
// 判断1000年-- - 2000年之间的闰年
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int i = 0;
//	int n = 0;
//	for (n = 100; n <= 200; n++){
//		for (i = 2; i <n; i++){
//			if (n%i == 0)
//				break;
//			
//		}
//		printf("%d ", n);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int row = 0;
//	int col= 0;
//	for (row = 1; row <= 9; row++){
//		for (col = 1; col <= row; col++){
//			printf("%dx%d=%d  ", row, col, row*col);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int year = 0;
//	for (year = 1000; year <= 2000; year++){
//		if (year % 4 == 0)
//			printf("%d,", year);
//	}
//
//	return 0;
//}


//1. 给定两个整形变量的值，将两个值的内容进行交换。
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//3.求10 个整数中最大值。
//4.将三个数按从大到小输出。
//5.求两个数的最大公约数。

//#include<stdio.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("%d,%d\n", a, b);
//	tmp = a;
//	a = b; 
//	b = tmp;
//	printf("%d,%d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("%d,%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d,%d\n", a, b);
//	return 0;
//}



//#include<stdio.h>
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < len; i++){
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void swap(int* a,int* b,int* c){
//	int tmp = 0;
//	if (*a < *b){
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//	}
//	if (*a <* c){
//		tmp = *a;
//		*a = *c;
//		*c = tmp;
//	}
//	if (*b <* c){
//		tmp = *b;
//		*b = *c;
//		*c = tmp;
//	}
//}
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d,%d,%d", &a, &b, &c);
//	 swap(&a, &b, &c);
//	 printf("%d,%d,%d", a, b, c);
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d,%d", &a, &b);
//	while (a != b){
//		if (a > b)
//			a = a - b;
//		else  
//			b = b - a;
//	}
//	printf("最大公约数为 %d \n",a);
//	return 0;
//}



//1.将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。

//#include<stdio.h>
//void print(int arr[], int sz){
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main(){
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 6, 7, 8, 9, 10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	print(a, sz);
//	print(b, sz);
//	int tmp = 0;
//	int i = 0;
//
//	for (i = 0; i < sz; i++){
//		tmp = a[i];
//		a[i] = b[i];
//		b[i] = tmp;
//	}
//	printf("交换后：\n");
//	print(a, sz);
//	print(b, sz);
//
//	return 0;
//}


//#include<stdio.h>
//int main(){
//	int  i = 0;
//	float sum = 0.0;
//	float n = -1.0;
//	for (i = 1; i <= 100; i++){
//		sum += n / i;
//		n *= (-1);
//	}
//	printf("%f \n", sum);
//	return 0;
//}


#include<stdio.h>
int main(){
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++){
		if (i % 10 == 9)
			count += 1;;
	}
	printf("%d\n", count);
	return 0;
}