#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap02(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main7() {

	//ָ��ͺ���

	//1.ֵ����
	int a = 10;
	int b = 20;
	  //swap01(a, b);

	//2.��ַ����
	//����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);


	system("pause");
	return 0;
}