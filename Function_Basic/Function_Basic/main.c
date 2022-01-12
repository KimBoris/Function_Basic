#include <stdio.h>

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

//잘된 예시

int GetFactorial(int nParam)
{
	int nResult = 1, i = 0;
	//매개변수 값이 유효하지 않다면 0을 반환함으로써
	//호출자 함수에 오류를 알린다.
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

//화면 출력과 관련한 코드는 모두 main함수가 담당한다
int main(void)
{
	int nResult = 0, nInput = 0;

	printf("계승을 구할 정수 (1~10)을 입력하세요 : ");
	scanf_s("%d", &nInput);

	//반환값을 확인해 오류와 정상을 식별하고 대응할 수 있다.
	nResult = GetFactorial(nInput);
	if (nResult == 0)
	{
		//메세지 출력을 호출자 함수가 한다.
		//즉, main함수가 한다
		puts("ERROR : 1~10사이의 정수를 입력하시오 \n");
		return 0;
	}
}