#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
//�Ű������� ��ȿ���� callee�Լ��� �ض�

/////////////////////////////////////////////////////////////////
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
// /////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//�ߵ� ����

//int GetFactorial(int nParam)
//{
//	int nResult = 1, i = 0;
//	//�Ű����� ���� ��ȿ���� �ʴٸ� 0�� ��ȯ�����ν�
//	//ȣ���� �Լ��� ������ �˸���.
//	if (nParam < 1 || nParam > 10)
//	{
//		return 0;
//	}
//	for (i = 1; i <= nParam; ++i)
//	{
//		nResult *= i;
//		return nResult;
//	}
//}
//
////ȭ�� ��°� ������ �ڵ�� ��� main�Լ��� ����Ѵ�
//int main(void)
//{
//	int nResult = 0, nInput = 0;
//
//	printf("����� ���� ���� (1~10)�� �Է��ϼ��� : ");
//	scanf_s("%d", &nInput);
//
//	//��ȯ���� Ȯ���� ������ ������ �ĺ��ϰ� ������ �� �ִ�.
//	nResult = GetFactorial(nInput);
//	if (nResult == 0)
//	{
//		//�޼��� ����� ȣ���� �Լ��� �Ѵ�.
//		//��, main�Լ��� �Ѵ�
//		puts("ERROR : 1~10������ ������ �Է��Ͻÿ� \n");
//		return 0;
//	}
//	
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//<<�޴� �̺�Ʈ ���� ����>>
//ȭ�鿡 �޴��� ����ϴ� �Լ��� ���� �� ����

//int PrintMenu(void)
//{
//	int nInput = 0;
//
//	//�޴��� ����ϱ��� ȭ���� �����
//	//system("cls"); ȭ�鿡 ��µ� ������ �����. 
//	system("cls");
//	//�޴��� ����ϰ� ����� �Է��� �޴´�
//	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n : ");
//	scanf_s("%d", &nInput);
//	
//	return nInput;
//}
//int main()
//{
//	int nMenu = 0;
//	while ((nMenu = PrintMenu()) != 0)
//	{
//		switch (nMenu)
//		{
//		case 1:
//			puts("�� �׸��� �߰��մϴ�\n");
//			break;
//		case 2:
//			puts("���� �׸񿡼� �˻��մϴ�\n");
//			break;
//		case 3:
//			puts("��ü ������ ����մϴ�\n");
//			break;
//		case 4:
//			puts("���� �׸��� �����մϴ�\n");
//			break;
//		default:
//			puts("�� �� ���� ����Դϴ�\n");
//			break;
//		}
//		_getch();
//		//�ѱ��ڸ� ������ �ٷ� �����ϴ� �Լ�
//		//getch() = ȭ�鿡 ���� ���� ������� �ʴ´�.
//		//getche() = ȭ�鿡 ���� ���� ����Ѵ�.
//	}
//}
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//���α׷��� ��ü �帧
//int main(void)
//{
//	int nMenu = 0; int nAge = 0;
//
//	//������ ������ �̺�Ʈ ����
//	while ((nMenu = PrintMenu()) != 0)
//	{
//		if (nMenu == 1)
//		{
//			nAge = GetAge();
//			printf("����� %d�� �Դϴ�.", GetFee(nAge));
//			_getch();
//		}
//	}
//	puts("Bye~~~~");
//	return 0;
//}
//
////���̸� �Ű������� �ް� ����� ��ȯ�ϴ� ����� ����
////1. ����Լ�
//int GetFee(int nAge)
//{
//	int nFee = 1000;
//	if (nAge < 20)
//	{
//		nFee /= 2;
//
//	}
//		return nFee;
//}
//
////�޴��� ����ϰ� ����ڷκ��� '����'�� �޴� �������̽�
////2. UIó�� �Լ�(����)
//int PrintMenu()
//{
//	int nInput = 0;
//
//	system("cls");
//	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n : ");
//	scanf_s("%d", &nInput);
//	return nInput;
//}
//
////����ڷκ��� ���̸� '�Է�'�޴� �������̽�
////3. UIó�� �Լ�(�Է�)
//int GetAge(void)
//{
//	int nAge = 0;
//	printf("���̸� �Է��ϼ���.  : ");
//	scanf_s("%d", &nAge);
//	return nAge;
//}
/////////////////////////////////////////////////////////////////


//�� ������ �Է¹޾� �ִ��� ã�� ����ϴ� ���α׷�
//�Է�, �ִ񰪰��, ��� ���κ����� �����Ǿ� �ִ����� Ȯ���ض�

//int main(void)
//{
//	int aList[3] = { 0 };
//	int nMax = -9999, i = 0;
//	//�Է�
//
//
//	//�ִ밪���
//	nMax = aList[0];
//	for (i = 1; i < 3; i++)
//	{
//		if (nMax < aList[i])
//		{
//			nMax = aList[i];
//		}
//	}
//
//
//	//���
//	printf("%d, %d, %d �� ���� ū ���� %d�Դϴ�.\n", aList[0], aList[1], aList[2], nMax);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////
//1. �Լ��� ��������
//int GetData(void);
//int GetMax(int a, int b, int c);
//void PrintData(int a, int b, int c, int nMax);
//
//
//int main(void)
//{
//	int aList[3] = { 0 };
//	int nMax = -9999, i = 0;
//
//	//�Է�
//	for (i = 0; i < 3; i++)
//	{
//		aList[i] = GetData();
//	}
//
//	//�ִ밪���
//	nMax = GetMax(aList[0], aList[1], aList[2]);
//
//	//���
//	PrintData(aList[0], aList[1], aList[2], nMax);
//	
//	return 0;
//} 
////C, C++������ main�� �ִ� �Լ��� main�Լ����� �ؿ� ������ ���� ���Ѵ�.
////�׷��� �Լ� ������ �������ش� >>> 1.
//int GetData(void)
//{
//	int nData;
//	printf("������ �Է��Ͻÿ�\n");
//	scanf_s("%d", &nData);
//	return nData;
//}
//int GetMax(int a, int b, int c)
//{
//	int nMax = 0;
//	nMax = a;
//	if (nMax < b)
//	{
//		nMax = b;
//	}
//	if (nMax < c)
//	{
//		nMax = c;
//	}
//	return nMax;
//}
//void PrintData(int a, int b, int c, int nMax)
//{
//	printf("%d %d %d �� ���� ū ���� %d �Դϴ�.\n", a, b, c, nMax);
//}
/////////////////////////////////////////////////////////////////

//��������
int Data = 0;

int Add(int a, int b); //���� ����(�������)

int main(void)
{
	printf("%d\n", Data);
	Add(0, 0);
	printf("%d\n", Data);
	//Data�� �� : 0, 0
	//{}�� ����� 0�� �Ǳ� ����.

	printf("\n\n%d", Data);
	Add2(0, 0);
	printf("\n\n%d", Data);
	//Data �� �� :  0, 100
	return 0;
}

int Add(int a, int b)
{
	int Data = 0; // >>���⼭�� �������� Data�� �ƴ� Add�� Data�� �ȴ�.
	Data = 100;   
	//�̷��� �ϸ� 0 0 �� ���´�
	//why? Data �� {}�� ����ԵǸ� Data���� ���ư��� ����
}

int Add2(int a, int b)
{
	Data = 100;
}