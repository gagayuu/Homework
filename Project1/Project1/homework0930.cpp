//99乘法表
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void mult(int n){
//	int line = 0;
//	int row = 0;
//	for (line = 1; line <= n; line++){
//		for (row = 1; row <= line; row++){
//			int mul = line*row;
//			printf("%d*%d=%d  ", line, row, mul);
//
//		}
//		printf("\n");
//	}
//
//}
//
//void main(){
//	int m = 0;
//	scanf("%d", &m);
//	mult(m);
//
//
//}





//使用函数实现两个数的交换
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void swap(int* a, int* b){
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//	
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	printf("交换前：%d,%d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：%d,%d\n", a, b);
//	return 0;
//}





//实现一个函数判断year是不是闰年
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void leapyear(int year){
//	if (year % 400 == 0)
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//	
//}
//int main(){
//	int y;
//	scanf("%d", &y);
//	leapyear(y);
//	return 0;
//}





//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//#include<stdio.h>
//void init(int arr[], int length){
//	int i = 0;
//	for (i = 0; i < length; i++){
//		arr[i] = i;
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int length){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < length - 1; i++){
//		for (j = 0; j < length - 1 - i; j++){
//			if (arr[j] < arr[j + 1]){
//				int t;
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	}
//	int k = 0;
//	for (k = 0; k < length; k++){
//		printf("%d ", arr[k]);
//	}
//}
//void empty(int arr[], int length){
//	int i = 0;
//	for (i = 0; i < length; i++){
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//	
//}
//int main(){
//	int a[5];
//	int len = sizeof(a)/ sizeof(a[0]) - 1;
//	printf("初始化数组：\n");
//	init(a, len);
//	printf("对数组元素逆序排序\n");
//	reverse(a, len);
//	printf("清空数组\n");
//	empty(a, len);
//
//	return 0;
//}




//判断一个数是不是素数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int prime(int* m){
	int i = 0;
	for (i = 2; i<*m; i++){
		if (*m%i == 0){
			
			return 0;
		}
			
	}
	
	return 1;

}
int main(){
	int n = 0;
	scanf("%d", &n);
	prime(&n);
	if (prime(&n)){
		printf("素数\n");
	}
	else
		printf("不是素数\n");

	return 0;
}