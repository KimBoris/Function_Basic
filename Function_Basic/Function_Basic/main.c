#include <stdio.h>

//int Add(int a, int b)//�̷��� ���¸� 1. �Լ��ñ״���, 2. �Լ�����  �̶���Ѵ�
//{		//�Ű����� ���� ���� ���� + �ڵ������̴�, �����μ�
//	//Add(3, 4) > int a = 3, int b = 4�̴� �� ������
//	
//	//����
//	//1. �����μ��� ���μ��� ���� ( ���� ��� ) �� �� 2. Main�� ��
//	//�Լ� �ٵ� ����
//	int nResult; //>>���� ���� + �ڵ�����
//
//	nResult = a + b;
//	return nResult;
//
//	
//}//��
//
//int main(void)
//{
//	int nResult = 0;
//	nResult = Add(3, 4);
//	printf("%d\n", nResult);
//	return 0;
//}


//�Լ��� �⺻ ��ҿ��� ���� �߿��Ѱ��� �ϳ�
//UI�� ����� '�и�'�ض�


//�߸��� ����
 //int main(void) {
//
//	printf("MAX : %d\n", GetFactorial(-1));
//	return 0;
//}
// 
// 
//int GetFactorial(int nParam)
//{
//	int nResult = 1, i = 0;
//	if (nParam < 1 || nParam>10)
//	{
//		//�Ű������� ���޹��� ���� ��ȿ���� �ʴٴ� �޼��� ���
//		//'�޼��� ���'�� UI�� �ش��ϹǷ� �Լ������� ó���ϴ°��� 
//		//�ٶ������� �ʴ�.
//		//UI�� ����� �и��ض�
//		puts("Error : 1~10������ ������ �Է��ϼ���");
//		return 0;
//	}
//	for (i = 0; i <= nParam; i++)
//	{
//		nResult *= i;
//		return nResult;
//	}

//�ߵ� ����

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	//�Ű����� ���� ��ȿ���� �ʴٸ� 0�� ��ȯ�����ν�
	//ȣ���� �Լ��� ������ �˸���.
	if (nParam < 1 || nParam > 10)
	{
		return 0;
	}
	for (i = 1; i <= nParam; ++i)
	{
		nResult *= i;
		return nResult;
	}
}

//ȭ�� ��°� ������ �ڵ�� ��� main�Լ��� ����Ѵ�
int main(void)
{
	int nResult = 0, nInput = 0;

	printf("����� ���� ���� (1~10)�� �Է��ϼ��� : ");
	scanf_s("%d", &nInput);

	//��ȯ���� Ȯ���� ������ ������ �ĺ��ϰ� ������ �� �ִ�.
	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		//�޼��� ����� ȣ���� �Լ��� �Ѵ�.
		//��, main�Լ��� �Ѵ�
		puts("ERROR : 1~10������ ������ �Է��Ͻÿ� \n");
		return 0;
	}
}