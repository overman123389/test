#define _CRT_SECURE_NO_WARNINGS 1


//函数的定义
void swap(int* pa, int* pb)//自定义函数function
{
	int tmp = 0;//形式参数实例化后相当于实体参数的拷贝
	tmp = *pa;//指针 地址
	*pa = *pb;
	*pb = tmp;

}