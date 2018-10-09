//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
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
	int sz = sizeof(a) / sizeof(a[0]);//求数组的元素个数
	printf("初始化数组：\n");
	init(a, sz);
	print(a, sz);
	printf("对数组元素逆序排序\n");
	reverse(a, sz);
	print(a, sz);
	printf("清空数组\n");
	empty(a, sz);
	print(a, sz);

	return 0;
}
