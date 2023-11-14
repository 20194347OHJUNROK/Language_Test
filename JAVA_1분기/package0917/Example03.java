package package0917;

import java.util.Scanner;

public class Example03 {
	public static void main(String[] args) {
		/*
		 * 소수(Prime Number)
		 	: 2이상의 자연수 중에서 약수가 1과 자기 자신만 있는 수
		 	: → 2, 3, 5, 7, 11, 13 ....
		 	
		  2이상의 자연수 N을 입력받아 자연수 N이 소수인지 아닌지 출력하는 프로그램을 작성
		 */
		System.out.println("Enter an integer >>> ");
	
		// 사용자 입력
		Scanner input =new Scanner(System.in);
		int n=input.nextInt();
		
		boolean isPrime = true; // n이 '소수'임을 가정
		
		for(int i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				isPrime = false;
				// 나눠지는 수를 발견했으므로 더이상 검사할 필요가 없다.
				break;
			}
		}
		
		if(isPrime)System.out.println(n + "is prime number.");
		else System.out.println(n + "is not prime number.");

		input.close();
		
		
		
	}
}
