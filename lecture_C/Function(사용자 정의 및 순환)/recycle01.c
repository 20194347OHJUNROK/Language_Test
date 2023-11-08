/*
* 함수의 호출 방법(2가지)

* 값에 의한 호출(call-by-value)
: 함수를 호출할때, 전달되는 인수의 값을 복사하여 복사된 값을 매개변수에 저장한다.
  즉, 매개변수의 메모리 공간과, 전달되는 인수의 메모리공간은 주소값이 다르기때문에 전혀 영향을 받지않는다.
 
* 참조에 의한 호출(call-by-reference)
: 함수를 호출할때, 전달되는 인수의 값을 넘기는 것이 아니라 메모리의 주소값을 넘긴다.
  즉, 전달되는 인수의 주소값과 매개변수의 주소값이 공유되기때문에 함수에서 어떠한 연산이
  수행을 하게되면 호출한곳에 영향을 끼칠수밖에없다.
  C언어에서는 주소를 참조하여 함수를 호출하는 방식이 존재하지않기때문에
  주소를 저장하는 포인터 변수(*)와 인수값앞에 주소를 전달하는(&)를 붙여서 호출해야한다.
*/

/*
* 순환(재귀) 함수
: 함수가 자기자신을 계속해서 호출하는 것을 순환함수(recursive function)또는 재귀 함수라고한다. 
  함수가 호출될때마다 메모리공간(스택)에 계속 쌓아지기때문에 스택 공간을 많이 사용한다는 단점이있다.
  또한 반복문보다 속도도 느리지만 순환(재귀)함수는 코드가 간결하여 많이 사용된다.
  대표적으로 팩토리얼, 폴더보기등에서 구현하는 경우가 많다.
*/
// 팩토리얼 공식 : n! = n * f(n-1);
#include<stdio.h>
long long factorial(long long n);

int main()
{
	long long input;

	printf("Enter an intger : ");
	scanf("%lld", &input);

	long long result = factorial(input);
	printf("%lld! = %lld\n", input, result);

	return 0;
}

long long factorial(long long n)
{
	if (n == 1) { return 1; }
	else
	{
		printf("%lld! = %lld*(%lld-1)\n", n, n, n);
		return n * factorial(n - 1);
	}
}