package package0904;

public class Example02 {
	public static void main(String[] args) {
		
		// Q1. 1부터 20까지의 정수를 출력하는 반복문을 작성
		int n1=1;
		while(n1<=20)
		{
			
			System.out.println("n = "+ n1);
			n1++;
		}
		System.out.println("-----------------------------------");
		
		// Q2. 1부터 20까지의 정수중 짝수만 출력하는 반복문을 작성
		int n2=1;
		while(n2<=20)
		{
			if(n2%2==0)
			{
				System.out.println("n2 = " + n2);
			}
			n2++;
		}
		System.out.println("-----------------------------------");
		
		// Q3. 1부터 10까지의 정수중 합을 구하는 반복문을 작성
		int n3=1;
		int total=0;
		
		while(n3<=10)
		{
			total+=n3;
			n3++;
		}
		System.out.println("TOTAL = " + total);
	}
}
