package package0904;

public class File01_LoopStatement {
	public static void main(String[] args) {
		// 반복문(Loop statement)
		// - 코드를 반복 수행하기 위한 제어문
		// - 주어진 조건을 만족하는 동안 코드를 수행한다.
		// - 대부분의 반복문은 조건식을 포함하고있다.
		// - 종류
		//		while 문
		//		: 특정 조건을 만족하는 동안 반복수행
		//		do while 문 
		//		: 특정 조건을 만족하는동안 반복 수행, 최소 1번은 무조건 수행
		//		for 문
		//		: 특정 횟수, 범위를 다룰때 사용
		//		for each 문
		//		: 배열, 컬렉션을 순차 탐색하며 반복 수행
		//=========================================================================
		
		// while문(~동안)
		// : 특정 조건을 만족하는 동안 반복수행하는 반복문
		// : while문은 조건식만 지정된다. 구조는 if와 동일
		// : 코드가 끝난 다음 조건식을 다시 검사한다.
		
		// 카운팅
		int count = 0;
		
		System.out.println("While문");
		while(count<5)
		{
			System.out.println(count + ".Hello World!");
			count++;
		}
		System.out.println("-----------------------------------");
		
		// do ~ while 문
		// - while문처럼 조건에 의해 수행되는 반복문
		// - 단, 무조건 최소 한번은 수행된다.
		//	while문 : 선 검사, 후 실행
		// do~while문 : 선 실행, 후 검사
		
		System.out.println("do ~ while문");
		count = 10;
		do {
			System.out.println(count + ".Hello world!");
			count++;
		}while(count<5);
		System.out.println("-----------------------------------");
		
		// for 문
		// - 특정 횟수, 범위를 다룰때 사용되는 반복문
		// - 반복문에 필요한 변수선언과 증감식을 작성할수 있다.
		// - 구조는 제어문 중에서는 제일 복잡하지만 직관적이라서
		//	 이해하는데는 어렵지않다.
		// 구조
		//		초기식 : 반복문에서 사용할 변수 선언 및 초기화
		//		조건식 : 반복 수행하기 위한 조건
		// 		반복 후 처리 : 반복수행이 끝난 다음 수행할 명령어
		System.out.println("for문");
		for(int count2=0;count2<5;count2++) {
			
			System.out.println(count2 + ".Hello World!");
		}
		//	System.out.println(count2); 	ERROR!!
		// count2 변수는 반복문을 수행하기위한 변수이기때문에 해당블록밖에서는 사용이 불가능하다. (메모리절약가능!)
	}
}
