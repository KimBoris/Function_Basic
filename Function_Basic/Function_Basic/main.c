#include <stdio.h>

int Add(int a, int b)//�̷��� ���¸� 1. �Լ��ñ״���, 2. �Լ�����  �̶���Ѵ�
{		//�Ű����� ���� ���� ���� + �ڵ������̴�, �����μ�
	//Add(3, 4) > int a = 3, int b = 4�̴� �� ������
	
	//����
	//1. �����μ��� ���μ��� ���� ( ���� ��� ) �� �� 2. Main�� ��
	//�Լ� �ٵ� ����
	int nResult; //>>���� ���� + �ڵ�����

	nResult = a + b;
	return nResult;

	
}//��

int main(void)
{
	int nResult = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);
	return 0;
}