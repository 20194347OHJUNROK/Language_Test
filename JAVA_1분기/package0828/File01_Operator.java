package package0828;

public class File01_Operator {
	public static void main(String[] args) {
		// 대입 연산자, 복합 대입 연산자
		int a=10;
		a=a+10;
		// a = 10 + 10;
		// a = 20;
		System.out.println("a = " + a);
		
		a+=10;
		System.out.println("a = " + a);
		
		// 증감 연산자
		// 변수에 저장된 값을 1 증가 또는 감소시키는 연산자
		// 변수만 지정하면 되기 때문에 단항 연산자이다.
		// ++(증가) , --(감소)
		// 작성의 위치에 따라 전위증감과 후위증감으로 구분된다.
		// 전위 증감 : ++n → 변수 앞에 작성되며, 증가한값을 반환한다
		// 후위 증감 : n++ → 변수 뒤에 작성되며, 증가하기전의 값을 반환한다.
		int b = 0;
		
		System.out.println("n = " + ++b);
		
		System.out.println("n = " + b++);
		
		// 비교연산자(관계 연산자)
		// 두 숫자 값의 크기를 비교하는 연산자
		// 비교 연산자의 결과 값은 True, False 이다.
		// > , <, >=, <=, ==, !=
		// 비교연산자로는 범위를 표현할수 없다!
		// 비교연산자는 논리값을 비교할수 없다!
		// JAVA에서는 다수의 연산자를 동시에 수행하지않기 때문에 연산자에 맞지않는
		// 타입이 올시 컴파일러가 감지한다.
		// → x의 범위 : 0이상 100 미만 → 0 <= x < 100	EROR!
		// → 0 <= x < 100 → ture < 100  문법오류!!!
		
		int c = 10;
		
		System.out.println(c + " >= 10 : " + (c>=10));
		System.out.println(c + " < 10 : " + (c<10));
		
		
		// 논리 연산자
		// - 논리값을 연산하기 위한 연산자
		// - 연산자의 결과 값 또한 논리값이다.
		// - 두 개 이상의 비교 연산을 통한 값을 하나의 값으로 연산한다.
		// && , ||, !
		
		// &&(AND) 연산자
		int d = 10;
		System.out.println("d 가 0 이상이고 10 미만이다 : " + ((d>=0) && (d<10)));
		
		// ||(OR) 연산자
		System.out.println("d 가 0 이상이거나 10 미만이다 : " + ((d>=0) || (d<10)));
		
		// !(NOT) 연산자
		System.out.println("d가 홀수다 : " + !(d%2==0));
		
		
		// 조건 연산자
		// - 조건에 따른 특정 값을 지정하여 지정된 값을 반환시키는 연산자
		// - 조건식 : 비교 연산자 또는 논리 연산자로 표현된 식
		// 		조건식? true일때의 표현식 : false일때의 표현식
		
		int score = 80;
		// 비교 연산자의 결과 값에 따라 원하는 값으로 반환되도록 할수있다.
		System.out.println((score >= 0 ? "Pass" : "Fail"));
		
		// score가 0이면 음수로 양수이면 그대로 출력해라
		System.out.println((score >=0? score : 0));
		
		
		// 비트 연산자
		// - 비트 단위로 연산하는 연산자
		// - 비트 논리 연산다
		//	 : 비트 단위로 논리 연산(AND , OR, XOR, NOT)
		// - 비트 시프트 연산자
		//	 : 비트 단위로 이동 연산
		
		// 다수의 상태를 처리하기 위한 데이터들을 한 번에 관리
		// 20개의 전등의 상태를 관리하기 위해 20개의 boolean타입의 변수가 아닌
		// 32bit 인 int 타입 변수 하나를 이용
		int lightState 		 = 0b0000_0000_0000_0000_0000;
		final int LIGHT_MASK = 0b1111_1111_1111_1111_1111;
		
		// 전원 ON
		lightState = lightState | LIGHT_MASK;
		
		
		// 전원 OFF
		lightState = lightState & (~LIGHT_MASK);
		
		// n번재 전등 ON
		int lightNum = 5;
		
		int lightN = 1 << (lightNum - 1);
		// → 0b0001_0000
		lightState = lightState | lightN;
		
		// n번재 전등 OFF
		lightState = lightState & (~lightN);
		// → ~lightN = 0b1110_1111
		
		// Toggle → ON/OFF기능
		// N번째의 전등이 ON이면 OFF, OFF이면 ON
		lightState = lightState ^ lightN;
		// → lightN = 0b0001_0000
		
	}
	
}
