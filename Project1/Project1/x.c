#define _CRT_SECURE_NO_WARNINGS 1


//�����Ķ���
void swap(int* pa, int* pb)//�Զ��庯��function
{
	int tmp = 0;//��ʽ����ʵ�������൱��ʵ������Ŀ���
	tmp = *pa;//ָ�� ��ַ
	*pa = *pb;
	*pb = tmp;

}