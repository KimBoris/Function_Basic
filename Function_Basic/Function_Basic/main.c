#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//int Add(int a, int b)//이러한 형태를 1. 함수시그니쳐, 2. 함수원형  이라고한다
//{		//매개변수 또한 지역 변수 + 자동변수이다, 형식인수
//	//Add(3, 4) > int a = 3, int b = 4이다 와 같은말
//	
//	//순서
//	//1. 형식인수에 실인수를 매핑 ( 값을 기술 ) 한 후 2. Main의 콜
//	//함수 바디 시작
//	int nResult; //>>지역 변수 + 자동변수
//
//	nResult = a + b;
//	return nResult;
//
//	
//}//끝
//
//int main(void)
//{
//	int nResult = 0;
//	nResult = Add(3, 4);
//	printf("%d\n", nResult);
//	return 0;
//}


//함수의 기본 요소에서 가장 중요한것중 하나
//UI와 기능을 '분리'해라
//매개변수의 유효성은 callee함수가 해라

/////////////////////////////////////////////////////////////////
//잘못된 예시
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
//		//매개변수로 전달받은 값이 유효하지 않다는 메세지 출력
//		//'메세지 출력'은 UI에 해당하므로 함수내에서 처리하는것은 
//		//바람직하지 않다.
//		//UI와 기능은 분리해라
//		puts("Error : 1~10사이의 정수를 입력하세요");
//		return 0;
//	}
//	for (i = 0; i <= nParam; i++)
//	{
//		nResult *= i;
//		return nResult;
//	}
// /////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//잘된 예시

//int GetFactorial(int nParam)
//{
//	int nResult = 1, i = 0;
//	//매개변수 값이 유효하지 않다면 0을 반환함으로써
//	//호출자 함수에 오류를 알린다.
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
////화면 출력과 관련한 코드는 모두 main함수가 담당한다
//int main(void)
//{
//	int nResult = 0, nInput = 0;
//
//	printf("계승을 구할 정수 (1~10)을 입력하세요 : ");
//	scanf_s("%d", &nInput);
//
//	//반환값을 확인해 오류와 정상을 식별하고 대응할 수 있다.
//	nResult = GetFactorial(nInput);
//	if (nResult == 0)
//	{
//		//메세지 출력을 호출자 함수가 한다.
//		//즉, main함수가 한다
//		puts("ERROR : 1~10사이의 정수를 입력하시오 \n");
//		return 0;
//	}
//	
/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////
//<<메뉴 이벤트 루프 구현>>
//화면에 메뉴를 출력하는 함수의 선언 및 정의

//int PrintMenu(void)
//{
//	int nInput = 0;
//
//	//메뉴를 출력하기전 화면을 지운다
//	//system("cls"); 화면에 출력된 내용을 지운다. 
//	system("cls");
//	//메뉴를 출력하고 사용자 입력을 받는다
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
//			puts("새 항목을 추가합니다\n");
//			break;
//		case 2:
//			puts("기존 항목에서 검색합니다\n");
//			break;
//		case 3:
//			puts("전체 내용을 출력합니다\n");
//			break;
//		case 4:
//			puts("기존 항목을 삭제합니다\n");
//			break;
//		default:
//			puts("알 수 없는 명령입니다\n");
//			break;
//		}
//		_getch();
//		//한글자를 누르면 바로 반응하는 함수
//		//getch() = 화면에 누른 값을 출력하지 않는다.
//		//getche() = 화면에 누른 값을 출력한다.
//	}
//}
/////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////
//프로그램의 전체 흐름
//int main(void)
//{
//	int nMenu = 0; int nAge = 0;
//
//	//간단히 구현한 이벤트 루프
//	while ((nMenu = PrintMenu()) != 0)
//	{
//		if (nMenu == 1)
//		{
//			nAge = GetAge();
//			printf("요금은 %d원 입니다.", GetFee(nAge));
//			_getch();
//		}
//	}
//	puts("Bye~~~~");
//	return 0;
//}
//
////나이를 매개변수로 받고 요금을 반환하는 기능을 제공
////1. 기능함수
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
////메뉴를 출력하고 사용자로부터 '선택'을 받는 인터페이스
////2. UI처리 함수(선택)
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
////사용자로부터 나이를 '입력'받는 인터페이스
////3. UI처리 함수(입력)
//int GetAge(void)
//{
//	int nAge = 0;
//	printf("나이를 입력하세요.  : ");
//	scanf_s("%d", &nAge);
//	return nAge;
//}
/////////////////////////////////////////////////////////////////


//세 정수를 입력받아 최댓값을 찾아 출력하는 프로그램
//입력, 최댓값계산, 출력 세부분으로 구성되어 있는점을 확인해라

//int main(void)
//{
//	int aList[3] = { 0 };
//	int nMax = -9999, i = 0;
//	//입력
//
//
//	//최대값계산
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
//	//출력
//	printf("%d, %d, %d 중 가장 큰 수는 %d입니다.\n", aList[0], aList[1], aList[2], nMax);
//
//	return 0;
//}

/////////////////////////////////////////////////////////////////
//1. 함수의 원형선언
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
//	//입력
//	for (i = 0; i < 3; i++)
//	{
//		aList[i] = GetData();
//	}
//
//	//최대값계산
//	nMax = GetMax(aList[0], aList[1], aList[2]);
//
//	//출력
//	PrintData(aList[0], aList[1], aList[2], nMax);
//	
//	return 0;
//} 
////C, C++에서는 main에 있는 함수가 main함수보다 밑에 있으면 읽지 못한다.
////그래서 함수 원형을 선언해준다 >>> 1.
//int GetData(void)
//{
//	int nData;
//	printf("정수를 입력하시오\n");
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
//	printf("%d %d %d 중 가장 큰 수는 %d 입니다.\n", a, b, c, nMax);
//}
/////////////////////////////////////////////////////////////////

//전역변수
int Data = 0;

int Add(int a, int b); //원형 선언(헤더파일)

int main(void)
{
	printf("%d\n", Data);
	Add(0, 0);
	printf("%d\n", Data);
	//Data의 값 : 0, 0
	//{}를 벗어나면 0이 되기 때문.

	printf("\n\n%d", Data);
	Add2(0, 0);
	printf("\n\n%d", Data);
	//Data 의 값 :  0, 100
	return 0;
}

int Add(int a, int b)
{
	int Data = 0; // >>여기서는 전역변수 Data가 아닌 Add의 Data가 된다.
	Data = 100;   
	//이렇게 하면 0 0 이 나온다
	//why? Data 의 {}를 벗어나게되면 Data값은 날아가기 때문
}

int Add2(int a, int b)
{
	Data = 100;
}