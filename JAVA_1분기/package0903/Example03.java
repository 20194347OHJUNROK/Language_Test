package package0903;

import java.util.Scanner;

public class Example03 {
	public static void main(String[] args) {
		// 사용자로부터 입력받은 정수값을 검사하여
		// 그 값에 맞는 결과값을 출력
		// - 3의 배수인 경우 : Fizz
		// - 5의 배수인 경우 : Buzz
		// - 3의배수이면서 5의배수인 경우 : FizzBuzz
		// - 그 외인 경우 : 정수값
		
		Scanner input=new Scanner(System.in);
		System.out.println("Enter an positive integer >>> ");
		int num=input.nextInt();
		String msg=" ";
		
		if(num%3==0 && num%5==0)
		{
			msg="FizzBuzz";
		}
		else if(num%3==0)
		{
			msg="Fizz";
		}
		else if(num%5==0)
		{
			msg="Buzz";
		}
		else
		{
			System.out.println(num);
		}
		
		System.out.println(msg);
		input.close();
	}
}
