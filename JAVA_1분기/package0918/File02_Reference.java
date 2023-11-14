package package0918;

public class File02_Reference {
	public static void main(String[] args) {
		/*
		 *  참조(Reference)
		 	: '무언가를 가리킨다.'
		 
		 * 참조변수(Reference Variable)
		  	: 메모리 주소를 가리키는 변수
		  	: 참조 변수는 메모리의 주소를 저장하기 때문에 다른 참조변수에 주소를 전달하면
		  	  배열을 공유하게된다. 즉 배열이 복사되는 것이 아니다.
		  	: 따라서, 동일한 원소를 가진 별도의 배열을 만들려면 주소를 복사하는것이 아닌 별도의 배열을 생성하여
		  	  각 원소를 복사해야한다.
		 */
		
		int a=10;
		
		int[] arr = {10, 20, 30};
//----------------------------------------------------
		int b = a;		// a의 값을 b에 복사
		System.out.println(a);
		System.out.println(b);
		
		a=15;
		System.out.println(a);
		System.out.println(b);
		System.out.println("----------------------------");
//------------------------------------------------------
		
		int[] arr2 = arr;  // arr의 값(주소)를 arr2에 복사
		System.out.println(arr[0]);
		System.out.println(arr2[0]);
		
		arr[0] = 100;
		System.out.println(arr[0]);
		System.out.println(arr2[0]);
		System.out.println("----------------------------");
//------------------------------------------------------------
		
		int[]copy=new int[arr.length];
		
		for(int i=0;i<arr.length;i++)
		{
			copy[i]=arr[i];
			System.out.println("copy[" + i +"] = " + copy[i]);
		}

		
	}
}
