//1.дһ���������ز����������� 1 �ĸ���   //��n>>1��&1==1�ж����һλ�Ƿ�Ϊ1
//���磺 15 0000 1111 4 �� 1
//2.��ȡһ�������������������е�ż��λ������λ���ֱ��������������  
//����ȡÿһλ��ֵ��(n>>i)&1, i+=2, ż��λi��1��ʼ������λi��0��ʼ�����������λ�����
//3. ���һ��������ÿһλ��
//4.���ʵ�֣� ����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������
//int main(){
//	int a = 1999;
//	int b = 2999;
//	int m = a^b;   //������㣺��ͬΪ0������Ϊ1
//	int count = 1;
//	while (m){     //��m��1�ĸ���
//		m &= m - 1;
//		count++;
//	}
//	printf("%d��%d�Ķ����Ʊ������%d����ͬ\n", a, b, count);
//	return 0;
//}




//������
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





//�ڶ���
//void  print(int n){   
//	int i = 0;
//	//���ż��λ
//	for (i = 31; i > 0; i -= 2){
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//�������λ
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


//��һ��
//int count_one_bits(unsigned int n){    //����1:n��n-1��λ��
//	int count = 0;
//	while (n){
//		n &= n - 1;
//		count++;
//	}
//	return count;
//
//}
//int count_one_bits(unsigned int n){    //����2��ʮ����nת��Ϊ�����Ʋ��ó�2ȡ��ķ�ʽ��
//	int count = 0;                     //��¼ÿ������������1��count++;
//	int x = 0;                         //��n/2�������������¿����滻Ϊn>>1.
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

//int count_one_bits(unsigned int n){   //����3
//	int i = 0;
//	int count = 0;
//	for (i = 1; i != 0; i <<= 1){
//		//�ж�ÿһλ��ֵ�Ƿ�Ϊ1
//		if ((n & 1) == 1){
//			count++;
//		}
//		//����׼���ж���һλ��ֵ
//		n >>= 1;
//		return count;
//	}
//}
//int main(){
//	unsigned int a = 0;
//	scanf("%u", &a);
//	printf("��������1�ĸ���Ϊ��%d\n", count_one_bits(a));
//	return 0;
//}