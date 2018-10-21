#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
递归方式实现打印一个整数的每一位 
void  print(int n){
	if (n>0){
		print(n / 10);
		printf("%d ", n % 10);
	}
}
int main(){
	int n = 0;
	scanf("%d", &n);
	print(n);
	return 0;
}
递归和非递归分别实现求n的阶乘
int fac(int n){//递归
	if (n <= 1)
		return 1;
	if (n > 1)
		return n*fac(n - 1);
}
int fac(int n){//非递归
	int i = 0;
	int f=1;
  if(n<=1)
  return 0;
	for (i = 1; i <= n; i++){
		f = f*i;
	}
	return f;
}

int main(){
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", fac(n));
	return 0;
}

递归和非递归分别实现strlen
int mystrlen(char* str){  //非递归
	int count = 0;
	while (*str != '\0'){
		count += 1;
		str++;
	}
	return count;
}
int mystrlen(char* str){  //递归
	if (*str)
		return 1+ strlen(str+1);
	else
		return 0;
}

int main(){
	char str[] = "abcde";
	int len = mystrlen(str);
	printf("%d\n", len);
	return 0;
}

编写一个函数reverse_string(char * string)（递归实现）
将参数字符串中的字符反向排列
void reverse_string(char* str ){
	if (*str != '\0'){
		str++;
		reverse_string(str);
		printf("%c ", *(str - 1));
	}
	
}

int main(){
	char str[] = "abcde";
	printf("%s\n", str);
    reverse_string(str);
	return 0;
}



写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
int sum(int n){
	if (n <= 9)
		return n;
	else
		return n % 10 + sum(n / 10);
}
int main(){
	int n = 0;
	printf("输入一个非负整数：\n");
	scanf("%d", &n);
	printf("%d的数字之和为%d \n", n, sum(n));
	return 0;
}



编写一个函数实现n^k，使用递归实现
int fun(int n, int k){
	if (k == 0)
		return 1;
	else if (k == 1)
		return n;
	else
		return n*fun(n, k - 1);
}

int main(){
	int n = 0;
	int k = 0;
	printf("输入n,k\n");
	scanf("%d,%d", &n,&k);
	int res=fun(n, k);
	printf("%d^%d=%d\n", n, k, res);
	return 0;
}


递归和非递归分别实现求第n个斐波那契数
int fab(int n){
	if (n <= 2)
		return 1;
	return fab(n - 1) + fab(n - 2);
}
int fab(int n){
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	for (i = 0; i < n - 2; i++){
		a = b;
		b = c;
		c = a + b;
	}
	return c;
	if (n <= 2)
		return 1;
}

int main(){
	int n = 0;
	printf("输入n：\n");
	scanf("%d", &n);
	int s = fab(n);
	printf("第%d个fab数是%d\n", n, s);
	return 0;
}
