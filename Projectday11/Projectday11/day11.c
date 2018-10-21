//  判断abcde的值不相等：a*b*c*d*e==120
#define N 10
#include<stdio.h>

//第三题：打印杨辉三角
int main(){
	int i = 0;
	int j = 0;
	int a[N][N] = {0};
	for (i = 0; i < N; i++){
		for (j = 0; j < i; j++){
			if ((j == 0) || (j == i)){
				a[i][0] = 1;
				a[i][j] = 1;
			}
			else{
				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}





//第二题：A说：不是我。 
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//int main(){
//	char killer = ' ';
//	for (killer = 'A'; killer <= 'D'; killer++){
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3){
//			printf("killer:%c\n", killer);
//		}
//	}
//
//	return 0;
//}





//第一题：5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							){
							//判断abcde的值不重复
//							if (a*b*c*d*e == 120){
//								printf("A=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}