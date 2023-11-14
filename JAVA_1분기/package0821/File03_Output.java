package package0821;

// 출력(Output)
// - 프로그램 내부에서 외부로 데이터가 전달
// - 모니터, 스피커, 파일 저장등이 출력장치에 해당
// - 표준 출력 : System.out
// - 기본 출력 메소드 : System.out.println()  개행 O
//		자동완성기능  : sysout + ctrl + space바

// 그 외 출력 메서드
// - System.out.print(출력할 데이터)  개행 X
// - System.out.printf(서식지정자 및 출력할 데이터) C언어의 pintf()함수와 동일한 기능

public class File03_Output {
	public static void main(String[] args) {
		System.out.println("Hello World!");
		System.out.print("Hello JAVA!");	// 개행을 하지않는다.
		System.out.print("HI\n");
		System.out.println("============================================================================");
		
		// 문자열 서식
		//  - 형식화된 문자열된 문자열을 통해 하나의 문자열을 표현
			//  - 문자열 서식 내에 데이터가 대입될 자리를
			//    서식 지정자를 통해 지정한다.
			//  - 서식 지정자는 대입될 데이터에 따라 타입을 명시
			//		%d : decimal (10진수)
			//      %s : string (문자열)
			//		%f : floating-point (실수)
			//      %x : hexa decimal(16진수)
		int value1 = 100;
		int value2 = 200;
		System.out.printf("value : %d\n", value1);
		System.out.printf("value : %d\n", value2);
		
		int value = 10;
		// 서식 지정자의 구조
		//  %[플래그][길이][.정확도]자료형
		System.out.println("|1234567890|");
		System.out.printf("|%10d|\n",value);	//최소 길이, 오른쪽부터 차례대로 정렬
		System.out.printf("|%-10d|\n",value);	//최소 길이, 왼쪽부터 차례대로 정렬
		System.out.printf("|%010d|\n",value);	// 빈 공백을 0으로 채워넣음
		System.out.println("============================================================================");
		
		
		double pi = 3.141592;
		System.out.printf("|%f|\n", pi);
		System.out.printf("|%10f|\n", pi);
		System.out.printf("|%10.3f|\n", pi); // 소수 3째자까지 출력
		System.out.println("============================================================================");
		
		// string 클래스의 format 메서드
		// 문자열 서식을 통해 문자열을 만드는 기능을 가진 함수
		String strPI=String.format("|%10.2f|",pi);
		
		System.out.println(strPI);
		
	}
}
