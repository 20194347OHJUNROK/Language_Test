package package0903;

public class File01_Conditional_Statement {
	public static void main(String[] args) {
		// 제어문(Control Statement)
		// - 프로그램의 흐름을 제어하기 위한 구문
		// - 종류
		//	: 조건문 → 조건에 따라 수행될 코드를 결정하는 제어문
		//	: 반복문 → 반복횟수 또는 조건에 따라 코드를 반복 수행하는 제어문
		// - 구조
		//	(1)	제어문
		//			제어할 명령어
		//========================================================
		// (2) 제어문 {
		//				제어할 명령어
		//				제어할 명령어
		//			}
		
		// 조건문(Conditional Statement)
		// - 조건에 따라 수행할 코드를 결정하는 제어문
		// - 종류
		//		: 단순 if문 		→ 특정 조건을 만족할 경우에만 코드를 수행시킬때
		//		: if-else문 		→ 특정 조건의 결과에 따라 코드를 수행시킬때
		//		: if-else if문 	→ 다수의 조건의 결과에 따라 코드를 수행시킬때
		//		: switch문 		→ 주어진 표현식의 결과에 따라 코드를 수행시킬때
		
		// 단순 if 문
				//  - 특정 조건을 만족할 경우에만 코드를 수행시킬 때 사용되는 조건문
				//  - 조건을 만족하지 않은 경우에는 코드를 넘어간다.
				System.out.println("단순 if 문");
				
				int n = 15;
				if(n > 10) {
					System.out.println("n 이 10보다 큽니다.");
							}
				System.out.println("-------------------");
				
		// if-else 문
				//  - 특정 조건의 결과에 따라 수행할 코드를 결정하는 조건 문
				//  - 단순 if 문 다음에 else 문을 작성한 형태 
				//  - else 문에는 절대 조건식을 작성하지 않는다.
				//    else 문은 앞의 if 문의 조건식이 false 일 때 수행된다.
				
				System.out.println("if-else 문");
				n = 5;
				
				if(n > 10) {
					System.out.println("n 이 10보다 큽니다.");
							}
				else {
					System.out.println("n 이 10보다 크지 않습니다.");
					}
				
				System.out.println("-------------------");
			
	
	// 중첩 조건문
			// - 조건문 내에 또 다른 조건문을 작성한 형태
			// - 다수의 조건 분기를 나눌때 사용이 되어지나
			// - 되도록 사용하는 것을 피하는 것이 좋다.
	
	if(n>10)
	{
		System.out.println("n이 10보다 큽니다.");
	}
	else {
		if(n<10)
		{
			System.out.println("n이 10보다 작습니다.");
		}
		else
		{
			System.out.println("n이 10과 같습니다.");
		}	
	}
		System.out.println("-------------------");
	
		// if-else if문
			//	- 다수의 조건에 의해 수행할 코드를 결정하는 조건문
			//  - 기존에 조건식을 작성할 수 없었던 else 문에
			//    조건식을 작성하기 위해 if 문을 추가한 형태
			//  - else + if 인 형태
			//  - else 문을 마지막 위치에 선택적으로 작성할 수 있다.
			System.out.println("if-else if 문");

			n = 15;
			if(n > 10) {
				System.out.println("n 이 10보다 큽니다.");
			}
			else if(n < 10) {
				System.out.println("n 이 10보다 작습니다.");
			} 
			// else if(n == 10) {
			else { // n == 10
				System.out.println("n 이 10과 같습니다.");
			}
			
			System.out.println("-------------------");
			
		
		// Switch 문
			// - if문과는 달리 조건이 아닌 값에 의해 분기가 나뉜다.
			// - switch 문에는 값을 지정하며 실수값은 지정될수없다.
			// - switch 문은 하나의 블록으로만 작성된다.
			// - 블록 내에 case구문을 통해 값을 검사하며, 일치하는 값이 있으면 블록이 끝날때까지 수행한다.
			// - case 구문 : 블록내에서 시작 위치를 지정한다.
			//			  : 리터럴(실수제외), 상수, enum 만 작성될수있다.
			// - 분기를 나눌 때는 'break'키워드를 통해 블록 내에서 switch문을 탈출
			System.out.println("Switch문");
			
			int select = 2;
			
			if(select ==1)System.out.println("1st menu");
			else if(select==2)System.out.println("2st menu");
			else if(select==3)System.out.println("3st menu");
			System.out.println("-------------------");
			//------------------------------------------------------------------
			switch(select)
			{
			case 1:
				System.out.println("1st menu");
				break;
			case 2:
				System.out.println("2st menu");
				break;	//switch문을 종료
			case 3:
				System.out.println("3st menu");
				break;
			default:	// → 위의 모든 case에 해당하지 않는 경우
				System.out.println("not include menu");
			}
		
}	
}

	


