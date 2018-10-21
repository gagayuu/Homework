//1.写一个函数返回参数二进制中 1 的个数   //（n>>1）&1==1判断最后一位是否为1
//比如： 15 0000 1111 4 个 1
//2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列  
//（获取每一位的值：(n>>i)&1, i+=2, 偶数位i从1开始，奇数位i从0开始，但都从最高位输出）
//3. 输出一个整数的每一位。
//4.编程实现： 两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//第四题
//int main(){
//	int a = 1999;
//	int b = 2999;
//	int m = a^b;   //异或运算：相同为0，相异为1
//	int count = 1;
//	while (m){     //求m中1的个数
//		m &= m - 1;
//		count++;
//	}
//	printf("%d与%d的二进制表达中有%d个不同\n", a, b, count);
//	return 0;
//}




//第三题
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





//第二题
//void  print(int n){   
//	int i = 0;
//	//输出偶数位
//	for (i = 31; i > 0; i -= 2){
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//输出奇数位
//	for (i = 30; i >= 0; i -= 2){
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//第一题
//int count_one_bits(unsigned int n){    //方法1:n与n-1按位与
//	int count = 0;
//	while (n){
//		n &= n - 1;
//		count++;
//	}
//	return count;
//
//}
//int count_one_bits(unsigned int n){    //方法2：十进制n转换为二进制采用除2取余的方式，
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

//int count_one_bits(unsigned int n){   //方法3
//	int i = 0;
//	int count = 0;
//	for (i = 1; i != 0; i <<= 1){
//		//判断每一位的值是否为1
//		if ((n & 1) == 1){
//			count++;
//		}
//		//右移准备判断下一位的值
//		n >>= 1;
//		return count;
//	}
//}
//int main(){
//	unsigned int a = 0;
//	scanf("%u", &a);
//	printf("二进制中1的个数为：%d\n", count_one_bits(a));
//	return 0;
//}