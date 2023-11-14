package package0918;

public class File03_MultiArray {
	public static void main(String[] args) {
		/*
		 * 다차원 배열(Multidimensional Array)
		 	: 배열은 공통적인 특징 또는 용도가 같은 다수의 데이터들을 저장하기위한 저장공간의 집합체
		 	: 공통적인 특징 또는 용도를 가진 배열도 하나의 묶음으로 다룰수있다.
		 	 → 기존의 배열 : 1차원 배열
		 	 → 2차원 배열 : 다수의 1차원 배열의 묶음
		 	 → 3차원 배열 : 다수의 2차원 배열의 묶음
		 */	
		
		// 3개의 학년이 있고 
		// 각 학년마다 6개의 반이 있고
		// 각 반마다 30명씩 있다.
		// 이때 전교생의 학점을 저장하기 위한 저장 공간의 개수는 540 개의 저장공간이 필요하다.
		
 		int[] scores = new int[540];
 		// → 1차원 배열만으로는 학년, 반, 번호 를 통해
 		//   특정 학생의 점수를 다루기가 힘들다.
 		
 		
 		int[] class1_1 = new int[30];
 		int[] class1_2 = new int[30];
 		int[] class1_3 = new int[30];
 		int[] class1_4 = new int[30];
 		int[] class1_5 = new int[30];
 		int[] class1_6 = new int[30];
 		//...
 		// int[] class3_6 = new int[30];
 		//---------------------------------------------------
 		
 		// 1학년의 6개의 반의 학생들의 점수들을 저장하기 위해
 		// 각 반의 주소만 저장하면 된다.
 		// → 총 6개의 반의 주소를 저장하기 위한 배열
 		int[][] class1 = {
 				class1_1, // 길이가 30인 배열의 주소
 				class1_2,
 				class1_3,
 				class1_4,
 				class1_5,
 				class1_6
 				};
 		
 		// 2차원 배열의 생성
 		//  - new 타입[반의개수][반의학생수]
 		//	- 이때 반의 학생 수는 생략이 가능하다.
 		int[][] class2 = new int[6][30];
 		System.out.println(class2);
 		System.out.println(class2[0]);
 		System.out.println(class2[0][0]);
 		// class2[반][번호]
 		
 		// 3반 20번
 		int classN = 3;
 		int studentN = 20;
 		class2[classN - 1][studentN - 1] = 10;
 		
 		
 		// 2차원 배열의 모든 원소에 접근
 		int[][] class3 = new int[6][];
 		
 		class3[0] = new int[30];
 		class3[1] = new int[27];
 		class3[2] = new int[28];
 		class3[3] = new int[29];
 		class3[4] = new int[30];
 		class3[5] = new int[31];
 		
 		for(int classNum = 0; classNum < class3.length; classNum++) {
 			System.out.println((classNum + 1) + "반");
 			
 			for(int studentNum = 0; studentNum < class3[classNum].length; studentNum++) {
 				System.out.println("  "+(studentNum+1)+"번 : " + class3[classNum][studentNum]);
 				
 			}
		
	}
	}
}
