#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
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
�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
int fac(int n){//�ݹ�
	if (n <= 1)
		return 1;
	if (n > 1)
		return n*fac(n - 1);
}
int fac(int n){//�ǵݹ�
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

�ݹ�ͷǵݹ�ֱ�ʵ��strlen
int strlen(char* str){  //�ǵݹ�
	int count = 0;
	while (*str != '\0'){
		count += 1;
		str++;
	}
	return count;
}
int strlen(char* str){  //�ݹ�
	if (*str)
		return 1+ strlen(str+1);
	else
		return 0;
}

int main(){
	char str[] = "abcde";
	int len = strlen(str);
	printf("%d\n", len);
	return 0;
}

��дһ������reverse_string(char * string)���ݹ�ʵ�֣�
�������ַ����е��ַ���������
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



дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int sum(int n){
	if (n <= 9)
		return n;
	else
		return n % 10 + sum(n / 10);
}
int main(){
	int n = 0;
	printf("����һ���Ǹ�������\n");
	scanf("%d", &n);
	printf("%d������֮��Ϊ%d \n", n, sum(n));
	return 0;
}



��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
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
	printf("����n,k\n");
	scanf("%d,%d", &n,&k);
	int res=fun(n, k);
	printf("%d^%d=%d\n", n, k, res);
	return 0;
}


�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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
	printf("����n��\n");
	scanf("%d", &n);
	int s = fab(n);
	printf("��%d��fab����%d\n", n, s);
	return 0;
}