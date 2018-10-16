//1.写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列
//3. 输出一个整数的每一位。
//4.编程实现： 两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
	int a = 1999;
	int b = 2999;
	int m = a^b;
	int count = 1;
	while (m){
		m &= m - 1;
		count++;
	}
	printf("%d与%d的二进制表达中有%d个不同\n", a, b, count);
	return 0;
}





//void  fun(int n){
//	if (n > 0){
//		fun(n / 10);
//		printf("%d ", n % 10);
//	}
//	
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}




//int main(){                      //将n除二取余，用count计数，通过count的位数来判断是奇数位还是偶数位放入不同的数组
//	int n = 0;                   
//	scanf("%d", &n);
//	int count = 0;
//	int odd[16] = { 0 };
//	int even[16] = { 0 };
//	int x = 0;
//	int i = 0;
//	int j = 0;
//	while (n != 0){
//		x = n % 2;
//		n >>= 1;
//		count++;
//
//		if (count % 2 == 0){
//			even[i] = x;
//			i++;
//		}
//		else{
//			odd[j] = x;
//			j++;
//		}
//		}
//	
//	printf("偶数位有\n");
//	for (i = 0; i < 16; i++){
//		printf("%d ", odd[i]);
//	}
//	printf("\n");
//	printf("奇数位有\n");
//	for (i = 0; i < 16; i++){
//		printf("%d ", even[i]);
//	}
//	return 0;
//}





//int count_one_bits(unsigned int n){    //n与n-1按位与
//	int count = 0;
//	while (n){
//		n &= n - 1;
//		count++;
//	}
//	return count;
//
//}
//int count_one_bits(unsigned int n){    //十进制n转换为二进制采用除2取余的方式，
//	int count = 0;                     //记录每次余数，若是1，count++;
//	int x = 0;                         //而n/2运算在这个情况下可以替换为n>>1.
//	while (n){
//		x = n % 2;
//		n >>= 1;
//		if (x % 2 == 1){
//			count++;
//		}
//	}
//	return count;
//}
//
//int main(){
//	unsigned int a = 0;
//	scanf("%u", &a);
//	printf("二进制中1的个数为：%d\n", count_one_bits(a));
//	return 0;
//}