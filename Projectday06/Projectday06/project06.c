//1.дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//2.��ȡһ�������������������е�ż��λ������λ���ֱ��������������
//3. ���һ��������ÿһλ��
//4.���ʵ�֣� ����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
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
	printf("%d��%d�Ķ����Ʊ������%d����ͬ\n", a, b, count);
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




//int main(){                      //��n����ȡ�࣬��count������ͨ��count��λ�����ж�������λ����ż��λ���벻ͬ������
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
//	printf("ż��λ��\n");
//	for (i = 0; i < 16; i++){
//		printf("%d ", odd[i]);
//	}
//	printf("\n");
//	printf("����λ��\n");
//	for (i = 0; i < 16; i++){
//		printf("%d ", even[i]);
//	}
//	return 0;
//}





//int count_one_bits(unsigned int n){    //n��n-1��λ��
//	int count = 0;
//	while (n){
//		n &= n - 1;
//		count++;
//	}
//	return count;
//
//}
//int count_one_bits(unsigned int n){    //ʮ����nת��Ϊ�����Ʋ��ó�2ȡ��ķ�ʽ��
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
//int main(){
//	unsigned int a = 0;
//	scanf("%u", &a);
//	printf("��������1�ĸ���Ϊ��%d\n", count_one_bits(a));
//	return 0;
//}