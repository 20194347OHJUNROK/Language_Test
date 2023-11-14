package package0917;

public class File02_OverLoop {
	public static void main(String[] args) {
		// 중첩 반복문
		// - 반복문 내에 또 다른 반복문을 작성한 형태
		
		// 한 반에 30명인 학생의 번호를 출력
		for(int n=1; n<=30; n++)
		{
			System.out.println(n + "번 학생");
		}
		System.out.println("============================================");
		//-----------------------------------------------------------------
		
		// 3개의 반의 학생들의 번호를 출력
		// 이때 각 반에 30명의 학생이 있다.
		
		for(int class_ = 1; class_ <= 3; class_++)
		{
			System.out.println(class_ + "반 ");
			for(int n=1; n<=30; n++)
			{
				System.out.println("\t" + n + "번 학생");
			}
		}
	}
}
