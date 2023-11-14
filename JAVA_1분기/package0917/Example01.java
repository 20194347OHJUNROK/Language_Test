package package0917;

import java.util.Scanner;

// Q1. 계산기의 기능을 가지고있는 소스코드를 작성하라.
public class Example01 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String menu="======================계산기======================\n"
				+ "1. 더하기\n"
				+ "2. 빼기\n"
				+ "3. 곱하기\n"
				+ "4. 나누기(몫)\n"
				+ "5. 나머지\n"
				+ "6/ 종료\n"
				+ "===================================================\n";
		
		while(true)
		{
			// 1. 메뉴(기능 목록) 출력
			System.out.println(menu);
			
			// 2. 입력
			System.out.println("기능을 입력하세요");
			int select = input.nextInt();
			
			// 3. 검사
			if(select==6)
			{
				System.out.println("종료합니다 .");
				break;
			}
			if(select <1 || select>6)
			{
				System.out.println("없는 기능입니다.");
				continue;
			}
			
			// 4. 정상적인 기능 및 연산수행
			
			int result = 0; //연산의 결과를 저장하기위한 변수
			
			System.out.println("두개의 정수를 입력하시요.");
			int n1 =input.nextInt();
			int n2 = input.nextInt();
			
			if(select == 1)			result =n1+n2;
			else if(select == 2)	result = n1-n2;
			else if(select == 3)	result = n1*n2;
			else if(select == 4)
				{
					if(n2==0)
					{
						System.out.println("나눌 수 없는 수입니다.");
						continue;
					}
					result = n1/n2;
				}
			else if(select == 5)
				{
					if(n2==0)
					{
						System.out.println("나눌 수 없는 수입니다.");
						continue;
					}
					result = n1%n2;
				}
			
			// 출력
			System.out.println("RESULT : " + result);
		}
		
		input.close();
		
	}
}
