#include<stdio.h>

int main()
{
	/*
		포인터 변수로 문자열을 선언한 경우에는 컴파일러가 알아서 무작위의 메모리공간에
		NULL값을 포함하여 문자열을 할당해주고 우리는 포인터변수를 통하여 그문자열값의 시작주소만 알수있다. 
		그런데 이 문자열은 리터럴상수(문자열 상수)이기 때문에
		포인터 변수를 통하여 값을 변경할수없다.

		반면에, 문자형 배열 같은 경우에는 인덱스를 이용하여 값을 변경할수있다.
	*/
	char arr[] = "C_Program";
	char* pch = "C_Program";
	static int i;
	// 포인터 변수를 통하여 문자열을 선언하는 이유
	printf("포인터 변수 pch가 가리키고 있는 문자열 : %s\n\n", pch);
	
	
	// 배열 요소 변경
	arr[0] = 'S';
	// *(pch+0) = 'S';			ERROR!!
 
	printf("arr[]배열의 바이트 크기 : %d\n", sizeof(arr));
	printf("포인터 변수 pch의 바이트 크기 : %d\n\n", sizeof(pch));
	printf("arr배열의 주소 : %p\n", arr);
	printf("포인터 변수 pch의 주소 : %p\n\n", pch);


	printf("[배열 사용]\t [포인터 사용]\n");
	for (i = 0; i<9; i++)
	{
		// 인덱스를 통하여 문자값을 읽어온것뿐이기 때문에 주소이동은 일어나지않는다.
		printf("arr[%d] = %c\t", i, arr[i]);
		printf("pch[%d] = %c\n", i, pch[i]);
		// printf("*(pch+%d) = %c\n", i, *(pch + i));

		/*
		 printf("*(pch++) : %c\n",*(pch++));
		 포인터로 ++ 연산을 통하여 문자열 값을 출력할수는 있지만, 주소이동이 일어나기때문에
		 마지막 문자열의 값에는 엉뚱한값이 출력이된다.
		*/
	}
	
	printf("\n for 루프 이후 포인터 변수 pch의 주소 : %p\n", pch);

	// NULL(0)값이 포함되어있는지 여부를 확인.
	printf("arr[%d] = %d\t",i,arr[i]);
	printf("*(pch + %d) = %d\n",i,*(pch + i));
	

	return 0;
}