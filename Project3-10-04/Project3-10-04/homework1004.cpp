//#include<stdio.h>
//int main(){
//	int line = 0;
//	int row = 0;
//	for (line = 1; line <= 7; line++){
//		for (row = 1; row <= (2 * line - 1); row++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (line =6; line >=1; line--){
//		for (row = (2 * line - 1); row>=1; row--){
//			printf("*");
//		}
//		printf("\n");
//	}
//
//		return 0;
//}



//���0~999��ˮ�ɻ���
//#include<stdio.h>
//int main(){
//	int n=0;
//	printf("0~999��ˮ�ɻ�����\n");
//	for (n = 100; n <1000; n++){
//		int i = n / 100;
//		int j = (n / 10) % 10;
//		int k = n % 10;
//		if (n == i*i*i + j*j*j + k*k*k){
//			printf("%d  ", n);
//		}
//
//	}
//
//	return 0;
//}



//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��.
//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(){
//	int n = 0;
//	printf("������һ�����֣�\n");
//	scanf("%d", &n);
//	int i = 0;
//	int t = 0;
//	int sum = 0;
//	
//	for (i = 0; i < 5; i++){
//		t = t* 10+n;
//		sum += t;
//		
//	}
//	printf("%d\n", sum);
//	
//	return 0;
//}


//����{}�ɶԳ���
#include<stdio.h>
int main(){
	int ch = 0;
	int count = 0;
	while ((ch = getchar()) != '\n'){
		if (ch == '{'){
			count++;
		}
	    if (count != 0 && ch == '}'){
			count--;
		}
		
	}
	if (count == 0)
		printf("��ȷ\n");
	else
		printf("����\n");


	return 0;
}