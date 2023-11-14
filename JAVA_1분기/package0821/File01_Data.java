package package0821;

//데이터(Data)
//- 프로그램에서 다루는 값

//자료형(Data Type)
//- 프로그램에서 다루는 데이터의 종류
//- 정수, 실수, 문자, 문자열 논리 등이 있다.
//- 실 생활에서 숫자와 문자를 구분하여 사용하 듯
//	프로그램 내에서도 다양한 형태의 데이터들이 다뤄지며
//	이를 구분하기 위해 여러 타입들이 정의되어있다.

//자료형의 종류
//- boolean	: 논리형 데이터(true, false)
//- char		: 문자형 데이터(아스키코드, 유니코드)
//- byte		: 정수형 데이터(1byte)
//- short		: 정수형 데이터(2byte)
//- int		: 정수형 데이터(4byte, -21억~21억), 기본 정수 타입
//- long		: 정수형 데이터(8byte)
//- float		: 실수형 데이터(4byte, 소수점 7자리)
//- double	: 실수형 데이터(8byte, 소수점 16자리), 기본 실수 타입


//문자열같은 경우는 기본 자료형이 아닌 String 클래스 타입이다.
//기본 자료형외의 타입 : 참조 타입 
//- new 연산자를 통해 메모리를 동적으로 할당 받는 데이터 타입
//- 배열, 객체, 인터페이스 객체

//변수(Variable) = 변할수 있는 수
//- 프로그램에서 데이터를 다루기 위한 가장 기본적인 수단
//- 데이터를 저장하고 사용하기 위한 수단
// → 프로그램은 스스로 데이터를 저장하지 않기 때문에
//	 입력/연산/처리 된 데이터들을 지운다.
// → 이런한 데이터들을 유지하려면 별도의 저장 공간에 저장하여
//	 유지를 해야한다.  → 이때 저장되는 저장 공간이 메모리 공간
//   → 개발자가 데이터를 저장하고, 이를 다시 사용하기 위해 
//	   저장 공간에 식별자를 부여한다.

//→ 변수 = 식별자가 부여된 저장 공간

//변수가 필요한 이유
//- 연산/입력된 데이터를 유지
//- 데이터를 재사용
//- 사용되는 데이터의 용도/목적

//변수를 사용하기 위한 방법
//1. 변수 선언
//	- 데이터를 저장할 저장 공간을 만들고 식별자를 부여하는 단계
//	- 식별자는 저장될 데이터의 용도/목적에 맞게 명명
//  - type identifier;

//2. 데이터 대입(저장)
//	- 선언된 변수에 데이터를 저장하기 위한 단계
//	- 대입 연산자(=)를 통해 변수에 데이터 또는 표현식의 결과 값을 저장
//	- variable = value;

//3. 변수 초기화
//	- 변수 선언과 동시에 데이터를 대입하는 단계
//	- type identifier = value;

//4. 변수 사용
//	- 변수의 식별자를 작성하면, 변수에 저장된 값을 불러온다.

public class File01_Data {

	public static void main(String[] args) {
		
				// boolean 타입 
				System.out.println(true);  // 참
				System.out.println(false); // 거짓
				
				// char 타입
				System.out.println('A');   // 문자
				
				// int 타입
				System.out.println(100);	// 정수
				
				// double 타입
				System.out.println(3.141592); // 실수 
				
				// String 클래스 타입
				//  문자열은 더하기 연산을 지원하며
				//  다른 타입의 데이터들과 하나의 문자열로 만들어진다.
				System.out.println("Hello");  // 문자열
				System.out.println("Hello " + "World!");
				// = System.out.println("Hello World!");
				System.out.println("Data = " + 50);
				// = System.out.println("Data = 50");
				
				//------------------------------------------
				System.out.println("-----------------");
				System.out.println("width  : " + 20);
				System.out.println("height : " + 5);
				System.out.println("area   : " + (20 * 5));
				
				System.out.println("-----------------");
				
				// 너비를 저장하기 위한 int 형 변수 width 선언
				int width;
				
				// 변수 width에 20 을 대입
				width = 20;
				
				// 높이를 저장하기 위한 int 형 변수 height 를 선언하고 5를 대입
				int height = 5;
				
				// 넓이를 저장하기 위한 int 형 변수 area 를 선언하고
				// 너비와 높이를 곱한 값을 대입
				int area = width * height;
				// 곱하기 연산을 하기 전에 변수에 저장된 값을 먼저 불러온다.
				// 불러온 값을 곱하기 연산을 통해 값을 구하고 area 변수에 저장
				
				System.out.println("width  : " + width);
				// = System.out.println("width  : " + 20);
				// = System.out.println("width  : 20");
				System.out.println("height : " + height);
				System.out.println("area   : " + area);
	}

}
