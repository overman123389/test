#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>//funtion use
#include<stdlib.h>
//int Max(int x,int y)
//{
//	if  (x > y)
//		return x; 
//	else 
//		
//		return y;

//void test()//void取消return
//{
//	 static int a = 1;//局部变量 全局
//	a++;
//	printf("a=%d\n", a);
//
//}
//void swap(int* pa, int* pb)//自定义函数function
//{
//	int tmp = 0;//形式参数实例化后相当于实体参数的拷贝
//	tmp = *pa;//指针 地址
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int is_prime(int n)//function should be indepent
//{
//	int j = 0;
//	for (j = 2, j < n, j++;)
//	{
//		if (n % j == 0)
//			return 0;
//	} 
//	return 1;
//}

//函数递归，
void print(int n)//1234  location123  location 12 location 1 
{
	if (n > 9)//1234    location 123 location 12 location 1 unable hence jump to 47lin
	{
		print(n / 10);//123 back up 12 back up 1 back up41  jb得到12
	}
	printf("%d", n % 10);//printf remainder 1 after jump back45   得到12 得到余数2
}

#include "源.h"//函数声明定义
//extern int Add(int, int);
//#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//递归，函数递归 大化为小 自己调自己 还有就是记住 

	unsigned int num = 0;
	scanf("%d", &num);
	print(num);//它是怎么跑去调用 的，头函数
	








	//链式访问
	//int len = 0;
	////len = strlen("asd");
	////printf("% d\n",len)
	//printf("% d\n", strlen("asd"));//链式访问.套娃

	//查文档print
	//printf("%d", printf("%d", printf("%d", printf("%d", 43))));



	//二分查找二叉树但是用自定义函数










	//判断素数，一个模板
	//int i = 0;
	//for (i = 100; i <= 200, i++;)
	//{
	//	if (is_prime(i) == 1)
	//		printf("%d".i);
	//}



	//自定义函数
	//int a = 10;
	//int b = 20; 
	//printf("a = %d b=%d\n", a, b);
	//swap(&a, &b);//传址调用；要是要改变外部函数变量，否则就是用传值 
	//printf("a = %d b=%d\n", a, b);








	//库函数strcpy
	//char arr1[] = "bit";
	//char arr2[20] = "xxxxxx";
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);












	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i <= 3; i++)
	//{
	//	printf("输入密码：》");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		printf("登陆成功\n");
	//		break;

	//	}
	//	else
	//	{
	//		printf("登录失败");
	//	}
	//}
	//if (i == 3)
	//	printf("三次密码错误，退出程序");













//字符赋值
	 // char arr1[] = "suckkkkkkkkkkkkk";
		//char arr2[] = "################";
		//int left = 0;
		//int right = strlen(arr1) - 1;

		//while (left<=right)
		//{
		//	arr2[left] = arr1[left];
		//	arr2[right] = arr1[right];
		//	printf("%s\n", arr2);
		//	Sleep(1000);//休息1秒
		//	system("cls");//清空
		//	left++;
		//	right++;

		//}


	//找元素  二叉树算法
	//int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	//int k = 4;
	//int sz = sizeof(arr) / sizeof(arr[0]);//caculate element of number
	//int left = 0;
	//int right = sz - 1;
	//while (left <= right)
	//{
	//	int mid = (left + right) / 2;
	//	if (arr[mid] > k)
	//	{
	//		right = mid - 1;

	//	}
	//	else if (arr[mid] < k)
	//	{
	//		left = mid + 1;

	//	}
	//	else
	//	{
	//		printf("找到了：%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("cant find this number\n");

	//}










	//算法更改
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <= 4; n++)
	//{
	//
	//		ret = ret * n;
	//	
	//	sum = sum + ret;
	//}
	//printf("sum=%d\n", sum);



	//练习算法
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//for (n = 1; n <=4; n++)
	//{
	//	ret = 1; //
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret = ret * i;
	//	}
	//	sum = sum + ret;
	//}
	//printf("sum=%d\n", sum);



	//阶乘算法实现
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);//不考虑，超出整型的溢出错误

	//for (i = 1;i<=n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("ret=%d\n", ret);

	//for循环语句
	//int i = 0;

	//do
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d", i);
	//	i++;
	//} 
	//while (i <= 10);

	//int i = 0;

	//do
	//{
	//	printf("%d", i);
	//	i++;
	//	if (i == 5)
	//		break;
	//} while (i <= 10);





	//for循环
	//int i = 0;
	//for (i=1;i<10;i++)
	//{
	//	printf("%d", i);
	//}



	//which循环while
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < 'o' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}



	//continue跳过执行循环
	//int i = 1;
	//while (i <= 10)
	//{
	//	i++;
	//	if (i == 5);
	//	continue;

	//	printf("%d", i);
	//	
	//}



	//循环语句loop while语句 打印1到10
	//int i = 1;
	//while (i <=10)
	//{
	//	printf("%d", i);
	//	i++;
	//}

	//break语句
	//int day = 0;
	//scanf("%d", &day);
	//switch (day)
	//{
	//case 1:
	//	
	//case 2:
	//	
	//case 3:
	//
	//case 4:

	//case 5:
	//	printf("工作日\n");
	//	break;
	//case 6:
	//
	//case 7:
	//	printf("休息日\n");
	//	break;


	//}



	//switch(必须整型）语句 weekly
	//int day = 0;
	//scanf("%d", &day);
	//		 switch (day)
	//		 {
	//		 case 1:
	//			 printf("星期一\n");
	//			 break;
	//		 case 2:
	//			 printf("星期二\n");
	//			 break;
	//		 case 3:
	//			 printf("星期三\n");
	//			 break;
	//		 case 4:
	//			 printf("星期四\n");
	//			 break;
	//		 case 5:
	//			 printf("星期五\n");
	//			 break;
	//		 case 6:
	//			 printf("星期六\n");
	//			 break;
	//		 case 7:
	//			 printf("星期天\n");
	//			 break;
	//		 default:
	//			 printf("输入错误\n");
	//			 break;


	//		 }


	//奇偶数判断
	//int num = 29;
	//if (1 == num % 2)
	//	printf("奇数\n");
	//else
	//	printf("偶数\n");

	//1-100while语句
	//int i = 1;
	//while (i < 100)
	//{
	//	printf("%d", i);
	//	i += 2;
	//}

//分支语句 if
	/*int age = 79;
	if (age < 18)
		printf("inmature\n");
	else if (age >= 18 && age < 28)
		printf("mature\n");
	else if (age >= 50 && age < 90)
	printf("old\n");
	else
		printf("jsdna\n");*/


	/*int a = 10;
	int* p = &a;*/
	/**p = 20;
	printf("a=%d\n", a);*/

	/*printf("%d\n", sizeof(p));*/
	/*printf("%p\n,&a");*/


	//宏 加法函数
	//
	//define 
	//int a = 10;
	//int b = 19;
	//int sum = add(a,b);
	//printf("sum=%d\n", sum);
	

	//int a = 3;
	//int b = 4;
	//int max = Max(a, b);
	//printf("Max=%d\n", max);
	//max = MAX(a, b);
	//printf("max=%d\n", max);


	return 0;


}
//		 
//}
//int main()
//{
// key word
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	
	//常量 const
	/*const int n = 10;
	int arr[n] = { 2 };*/

	//字符长度
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/

	//字符串
	////char arr1[] = "abc";
	////char arr2[] = { 'a','b','c',0 };
	////printf("%s\n", arr1);
	////printf("%s\n", arr2);
	/////*printf("%d\n", strlen("c:\te\32"));*/
	//
	//转义字符
	//printf("%c\n", "\x61");

	//\\选择语句
	/*int line = 0;
		printf("chidabing \n");
		while (line < 599)
		{
			printf("cjiasj: % d\n",line);
				line++;
		}
		if (line >= 599)
			printf("cjs\n");*/
	//int num1 = 49;
	//int num2 = 89;
	//int max = 0;
	//max=Max(num1, num2);
	//printf("max=%d\n", max);
	/*操作符
	int a = 0;
	int b = ~a;
	
	printf("%d\n", b);*/
	/*操作符
	int a = 10;
	int b = a++;
	printf("%d\n", a, b);*/

	/*强制操作符*/
	/*int = (int)3.14;*/
	//key word
	//register int a = 10;//auto



//	return 0;
//}

//int Add(int x, int y);
//{
//	int z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int a = 9;
//	int b = 90;
//	int sum = 0;
//	sum = add(a, b);
//
//	printf("sum=%d\n", sum);
//
//	return 0;
//}
//
