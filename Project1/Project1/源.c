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

//void test()//voidȡ��return
//{
//	 static int a = 1;//�ֲ����� ȫ��
//	a++;
//	printf("a=%d\n", a);
//
//}
//void swap(int* pa, int* pb)//�Զ��庯��function
//{
//	int tmp = 0;//��ʽ����ʵ�������൱��ʵ������Ŀ���
//	tmp = *pa;//ָ�� ��ַ
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

//�����ݹ飬
void print(int n)//1234  location123  location 12 location 1 
{
	if (n > 9)//1234    location 123 location 12 location 1 unable hence jump to 47lin
	{
		print(n / 10);//123 back up 12 back up 1 back up41  jb�õ�12
	}
	printf("%d", n % 10);//printf remainder 1 after jump back45   �õ�12 �õ�����2
}

#include "Դ.h"//������������
//extern int Add(int, int);
//#define MAX(X,Y) (X>Y?X:Y)
int main()
{
	//�ݹ飬�����ݹ� ��ΪС �Լ����Լ� ���о��Ǽ�ס 

	unsigned int num = 0;
	scanf("%d", &num);
	print(num);//������ô��ȥ���� �ģ�ͷ����
	








	//��ʽ����
	//int len = 0;
	////len = strlen("asd");
	////printf("% d\n",len)
	//printf("% d\n", strlen("asd"));//��ʽ����.����

	//���ĵ�print
	//printf("%d", printf("%d", printf("%d", printf("%d", 43))));



	//���ֲ��Ҷ������������Զ��庯��










	//�ж�������һ��ģ��
	//int i = 0;
	//for (i = 100; i <= 200, i++;)
	//{
	//	if (is_prime(i) == 1)
	//		printf("%d".i);
	//}



	//�Զ��庯��
	//int a = 10;
	//int b = 20; 
	//printf("a = %d b=%d\n", a, b);
	//swap(&a, &b);//��ַ���ã�Ҫ��Ҫ�ı��ⲿ������������������ô�ֵ 
	//printf("a = %d b=%d\n", a, b);








	//�⺯��strcpy
	//char arr1[] = "bit";
	//char arr2[20] = "xxxxxx";
	//strcpy(arr2, arr1);
	//printf("%s\n", arr2);












	//int i = 0;
	//char password[20] = { 0 };
	//for (i = 0; i <= 3; i++)
	//{
	//	printf("�������룺��");
	//	scanf("%s", password);
	//	if (strcmp(password, "123456") == 0)
	//	{
	//		printf("��½�ɹ�\n");
	//		break;

	//	}
	//	else
	//	{
	//		printf("��¼ʧ��");
	//	}
	//}
	//if (i == 3)
	//	printf("������������˳�����");













//�ַ���ֵ
	 // char arr1[] = "suckkkkkkkkkkkkk";
		//char arr2[] = "################";
		//int left = 0;
		//int right = strlen(arr1) - 1;

		//while (left<=right)
		//{
		//	arr2[left] = arr1[left];
		//	arr2[right] = arr1[right];
		//	printf("%s\n", arr2);
		//	Sleep(1000);//��Ϣ1��
		//	system("cls");//���
		//	left++;
		//	right++;

		//}


	//��Ԫ��  �������㷨
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
	//		printf("�ҵ��ˣ�%d\n", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("cant find this number\n");

	//}










	//�㷨����
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



	//��ϰ�㷨
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



	//�׳��㷨ʵ��
	//int i = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d", &n);//�����ǣ��������͵��������

	//for (i = 1;i<=n; i++)
	//{
	//	ret = ret * i;
	//}
	//printf("ret=%d\n", ret);

	//forѭ�����
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





	//forѭ��
	//int i = 0;
	//for (i=1;i<10;i++)
	//{
	//	printf("%d", i);
	//}



	//whichѭ��while
	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < 'o' || ch>'9')
	//		continue;
	//	putchar(ch);
	//}



	//continue����ִ��ѭ��
	//int i = 1;
	//while (i <= 10)
	//{
	//	i++;
	//	if (i == 5);
	//	continue;

	//	printf("%d", i);
	//	
	//}



	//ѭ�����loop while��� ��ӡ1��10
	//int i = 1;
	//while (i <=10)
	//{
	//	printf("%d", i);
	//	i++;
	//}

	//break���
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
	//	printf("������\n");
	//	break;
	//case 6:
	//
	//case 7:
	//	printf("��Ϣ��\n");
	//	break;


	//}



	//switch(�������ͣ���� weekly
	//int day = 0;
	//scanf("%d", &day);
	//		 switch (day)
	//		 {
	//		 case 1:
	//			 printf("����һ\n");
	//			 break;
	//		 case 2:
	//			 printf("���ڶ�\n");
	//			 break;
	//		 case 3:
	//			 printf("������\n");
	//			 break;
	//		 case 4:
	//			 printf("������\n");
	//			 break;
	//		 case 5:
	//			 printf("������\n");
	//			 break;
	//		 case 6:
	//			 printf("������\n");
	//			 break;
	//		 case 7:
	//			 printf("������\n");
	//			 break;
	//		 default:
	//			 printf("�������\n");
	//			 break;


	//		 }


	//��ż���ж�
	//int num = 29;
	//if (1 == num % 2)
	//	printf("����\n");
	//else
	//	printf("ż��\n");

	//1-100while���
	//int i = 1;
	//while (i < 100)
	//{
	//	printf("%d", i);
	//	i += 2;
	//}

//��֧��� if
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


	//�� �ӷ�����
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
	//���� const
	/*const int n = 10;
	int arr[n] = { 2 };*/

	//�ַ�����
	/*char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));*/

	//�ַ���
	////char arr1[] = "abc";
	////char arr2[] = { 'a','b','c',0 };
	////printf("%s\n", arr1);
	////printf("%s\n", arr2);
	/////*printf("%d\n", strlen("c:\te\32"));*/
	//
	//ת���ַ�
	//printf("%c\n", "\x61");

	//\\ѡ�����
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
	/*������
	int a = 0;
	int b = ~a;
	
	printf("%d\n", b);*/
	/*������
	int a = 10;
	int b = a++;
	printf("%d\n", a, b);*/

	/*ǿ�Ʋ�����*/
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
