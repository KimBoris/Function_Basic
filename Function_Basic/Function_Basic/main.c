#include <stdio.h>

int Add(int a, int b)//이러한 형태를 1. 함수시그니쳐, 2. 함수원형  이라고한다
{		//매개변수 또한 지역 변수 + 자동변수이다, 형식인수
	//Add(3, 4) > int a = 3, int b = 4이다 와 같은말
	
	//순서
	//1. 형식인수에 실인수를 매핑 ( 값을 기술 ) 한 후 2. Main의 콜
	//함수 바디 시작
	int nResult; //>>지역 변수 + 자동변수

	nResult = a + b;
	return nResult;

	
}//끝

int main(void)
{
	int nResult = 0;
	nResult = Add(3, 4);
	printf("%d\n", nResult);
	return 0;
}