package package0827;

// Scanner 클래스를 사용하기위해 Scanner 클래스의 경로를 지정
// 자동 완성기능 → ctrl +shift + o : 필요한 클래스는 import하고, import된 불필요한 클래스는 제거
import java.util.Scanner;

// 입력(Input)
// 프로그램 외부에서 내부로 데이터가 전달되는 과정
// - 키보드, 마우스, 파일 읽기
// - 코드에 값을 작성하는 경우는 입력이 아니라 코딩일뿐이다
// 		int applePrice = 3000; // 입력이 아닌 그냥 코딩

public class File01_Input {
	public static void main(String[] args) {
		
		// 표준 입력(Standard Input)
		//	시스템 상의 기본 입력 장치 = 키보드
		//  System.in 객체
		
		// 입력을 받기 위한 메서드
		// - read 메서드
		// System.in.read() 
		//  : 문자 하나를 입력을 받는 메서드
		//  : 정수 형태(아스키 코드)로 반환되기 때문에 
		//	  타입 별로 변환해야하는 작업이 필요	
		//  : 처음 다루기에는 어려운 메서드 
		
		// Scanner 클래스
		//  - 입력받은 값을 우리가 원하는 형태로 바로 사용하기 위해
		//    번역을 해주는 클래스
		//  - System.in 을 통해서 입력 받은 값을 개발자가 원하는 타입으로
		//    변환해서 전달해준다.
		//		기존
		//			[키보드] → "abcd" → 엔터 → '110101010001010101' → read() 를 통해 1byte 씩 로드
		//		Scanner
		//			[키보드] → "abcd" → 엔터 → '110101010001010101' 
		//					 → Scanner 객체 → 원하는 타입(지정된 타입)으로 반환
		
		// Scanner 객체를 이용한 입력
		//  1. Scanner 객체를 생성
		//		a. 객체를 저장하기 위한 변수 선언 = 일반 변수 선언과 동일
		// 		b. 객체를 만들기 위한 new 연산자와 함께 클래스이름과 동일한 메서드를 작성
		//		c. Scanner 객체에 System.in 을 포함하기 위해 인자로 System.in 을 전달
		//  2. Scanner 객체의 close() 메서드를 마지막 부분에 작성
		Scanner input= new Scanner(System.in);

		
		// 3. 사용자로부터 입력
		//	- next()		: 입력된 값을 문자열로 반환,	공백 문자를 구분으로 반환
		//	- nextLine()	: 입력된 값을 문자열로 반환, 엔터까지의 문자열을 반환
		//	- nextInt()		: 입력된 값을 정수로 반환,	공백 문자를 구분으로 반환
		//	- nextDouble()	: 입력된 값을 실수로 반환,	공백 문자를 구분으로 반환
		
		// Scanner 객체의 next() 메서드
		String str1 = input.next();	// 공백을 구분으로 반환되기때문에 한 단어씩 읽어온다.
		System.out.println("str1 = "+ str1);
		
		String str2 = input.next();
		System.out.println("str2 = "+ str2);
		// Scanner 객체 내에는 입력된 값을 저장하는 저장소가 있고
				// 저장소에 저장된 값이 없으면 System.in 을 통해 입력을 받아오고
				// 저장소에 저장된 값이 있으면 저장된 값을 반환한다.
		
		
		// Scanner 객체의 nextLint() 메서드
		// - 공백을 포함하며 입력된값을 엔터까지 읽어온다.
		// - 엔터 문자만 버리고 반환한다.
		// * 다른 입력 메서드들은 엔터 문자를 읽지 않기 때문에 Scanner 객체의 저장소에 그대로 남아있다.
		// → 때문에 nextLine()을 제외한 메서드를 통해 입력을 받은 다음에 nextLint()메서드를 사용해야하는 경우
		//	 엔터문자를 제거해야한다.
		input.nextLine(); // 저장소에 남은 값을 반환해서 비운다.!
		String str3= input.nextLine();
		System.out.println("str 3 = "+ str3);
		
		
		// Scanner 객체의 nextInt() 메서드
		int value1 = input.nextInt();
		System.out.println("value1 = " + value1);
		
		int value2 = input.nextInt();
		System.out.println("value 2 = " + value2);
		System.out.println("value1 + value2 = " + (value1+value2));
		// 입력 스트림을 해제
		// 해제된 이후에는 입력을 받을수 없다.
		input.close();
	}
}