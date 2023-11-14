package package0918;

public class Homework01 {
	public static void main(String[] args) 
	{
		// 2 부터 N 까지의 소수들을 모두 출력
		int N = 100;
		
		for(int prime = 2; prime <= N; prime++) 
		{
			
			// 변수 prime 의 값이 소수인지 아닌지 판별
			boolean isPrime = true;
			
			for(int i = 2; i * i <= prime; i++) 
			{
				if(prime % i == 0) 
				{
					isPrime = false;
					break;
				}
			}
			
			if(isPrime) 
				System.out.print(prime + " ");
			
		}
		
	}
}
