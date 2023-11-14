package package0918;

public class Example03 {
	public static void main(String[] args) {
		// 20, 16, 21, 6, 7, 19, 33, 26, 1중에서 가장 큰 값과 가장 작은 값을 출력
		
		int[]numbers= {20, 16, 21, 6, 7, 19, 33, 26, 1};
		
		
		int max=numbers[0];
		int min=numbers[0];
		
		for(int i=1 ;i<numbers.length; i++)
		{
			max = max<numbers[i]? numbers[i]:max;
			min = min>numbers[i]? numbers[i]: min;
		}
		
		System.out.println("MAX = " + max);
		System.out.println("Min = " + min);
	}
}
