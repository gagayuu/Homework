//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
#include<stdio.h>
void init(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		arr[i] = i;

	}
}
void reverse(int arr[], int sz){
	int left = 0;
	int right = sz - 1;

	while (left<right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}

}
void empty(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		arr[i] = 0;
	}


}
void print(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main(){
	int a[5];
	int sz = sizeof(a) / sizeof(a[0]);//�������Ԫ�ظ���
	printf("��ʼ�����飺\n");
	init(a, sz);
	print(a, sz);
	printf("������Ԫ����������\n");
	reverse(a, sz);
	print(a, sz);
	printf("�������\n");
	empty(a, sz);
	print(a, sz);

	return 0;
}
