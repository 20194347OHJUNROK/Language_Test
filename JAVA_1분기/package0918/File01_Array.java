package package0918;

public class File01_Array {
	public static void main(String[] args) {
		/*
		 *  배열(Array)
		 	: 같은 타입의 여러 변수를 하나의 묶음으로 다루는 자료구조
		 	: 공통된 특징이나 용도에 따라 묶음
		 	: 다수의 저장 공간을 하나의 식별자로 다룬다.
		 	: → 각 저장 공간의 번호 = 인덱스(index)
		 	: = 인덱스와 인덱스에 대응하는 원소들로 구성된 데이터 집합
		 	
		 * 배열 선언
		 	: 배열에 저장될 원소의 타입과 배열을 의미하는 대괄호[] 를 통해 타입을 명시
		 	: 대괄호의 위치는 식별자의 앞 또는 뒤에 작성될수 있다.
		 	: 배열을 참조할 변수를 선언
		 	:  = 생성된 배열의 주소를 저장하는 변수
		 	:  = 참조 변수(Reference Variable)
		 	
		 * 배열 생성
		 	: 선언된 배열은 원하는 개수만큼의 저장 공간을 가지는 것이 아니다.
		 	: → 하나의 저장 공간 = 원소(item)
		 	: new 연산자와 원하는 타입의 배열을 생성
		 	: → new 타입[개수]
		 	: → new는 연산자이기 때문에 결과값이 있으며 결과값은 생성된 배열의 메모리 주소
	 		: 각 원소는 기본값으로 초기화
		 	: → 기본값 : 0 , 0.0 , false, null
		 	
		 * 배열의 원소 접근
		 	: 배열에 접근하기 위해서는 배열을 참조하는 참조 변수와 접근하고자하는 원소의 인덱스를 명시
		 	: 인덱스 : 0부터 1씩 증가하는 정수
		 		→ 첫번째 원소의 인덱스 = 0
		 		→ 두번째 원소의 인덱스 = 1
		 		= 인덱스의 범위 : 0 <= index < 원소의 개수
		 
		 * 배열의 길이
		  	: 배열의 원소의 개수
		  	: JVM이 모든 배열의 길이를 관리
		  	: 배열을 참조하는 참조 변수의 length 속성을 이용
		  	
		  
		  * 배열의 초기화
		    : 배열을 생성과 동시에 원하는 값들로 저장
		    : 배열의 길이는 값의 개수로 맞춰진다.
		    : 배열을 선언과 동시에 초기화할 경우에는 'new int[]'를 생략할수있다
		    : 그 외에는 생략을 하면 오류가 발생한다.
		 */
		
		// int형 데이터 5개를 저장하기위한 배열
		int size = 5;
		
		int[]arr1 = new int[5];
		int[]arr2 = new int[size];
		int[]arr3 = new int[size+1];
		System.out.println(arr1);
		System.out.println(arr2);
		System.out.println(arr3);
		
		// 참조 변수[index] = index에 위치한 원소에 접근
		// → 인덱스가 0인 원소에 10을 대입
		arr1[0] = 10;
		System.out.println(arr1[0]);
		
		// → 인덱스가 4인 원소에 50을 대입
		// → 마지막 원소에 50을 대입
		arr1[size-1] = 50;
		System.out.println(arr1[4]);
		System.out.println();
		
		
		// arr1의 원소의 개수 = 길이
		int length = arr1.length;
		System.out.println("arr1's length = " + length);
		
		// 반복문을 이용해 배열의 모든 원소에 접근
		// → 모든 원소에 인덱스를 통해 차례대로 접근
		for(int i=0; i<arr1.length; i++)
		{
			System.out.println("arr["+i+"] = " + arr1[i]);
		}
		System.out.println();
		
		
		int[] arr4 = new int[] {50,40,30,20,10};
	// →  int[] arr4 = {50,40,30,20,10};
		
		for(int i=0; i<arr4.length; i++)
		{
			System.out.println("arr4[" + i + "] = " + arr4[i]);
		}
		
		//   arr4 = new int[5];   성공!
		//   arr4 = {100, 200, 300, 400, 500};  오류!
		// → arr4 = new int[] {100, 200, 300, 400, 500};
	
	}
}
