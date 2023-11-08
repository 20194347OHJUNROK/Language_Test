#include<iostream>
#include<cstdio>
int main()
{
	using std::cin;
	using std::cout;
	using std::endl;

	const int LENGTH=80;

	// ���ڿ��� ������ �迭
	char str[LENGTH +1] = { 0, };

	// counter �迭�� ũ��
	const int COUNTER_LEN = 'z' - 'A' + 1;			//	58


	// ���ڿ����� �� �����ڰ� ���� Ƚ���� ������ �迭
	int counter[COUNTER_LEN] = { 0, };
	// �� counter[0] = 'A'�� ���� Ƚ�� �� ('A' - 'A' = 0)
	// �� counter[1] = 'B'�� ���� Ƚ��	�� ('B' - A' = 1)
	// ...
	// �� counter[25] = 'Z'�� ���� Ƚ��('Z' -'A' =25)
	// �� counter[26]~ counter[31] = ASCI �ڵ忡�� �빮�ڿ� �ҹ��� ������ ���ڵ�
	// �� counter[32] = 'a'�� ���� Ƚ�� �� ('a' - 'A' = 32)
	// �� counter[57] = 'z'�� ���� Ƚ�� �� ('z' - 'A' = 57)
	
	// ����� �Է�
	cout << "Enter a string :";
	cin.getline(str,LENGTH);
	cout << endl;


	// �ݺ����� �̿���, �迭 str�� ����Ǿ��ִ� ���ڿ����� �� ����('\0')�� ������ ������ �� �����ڰ� ����� �������� ���
	for (int i = 0; str[i]!=0 && i<=LENGTH; i++)
	{
		// str[i]�� �������� ���, �� �����ڰ� ���� Ƚ���� ����
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			counter[str[i] - 'A']++;
			// �� str[i] = 'A' ; str[i] - 'A' = 0; counter[0]++;
			// �� str[i] = 'a' ; str[i] - 'A' = 32; counter[32]++;
			// �� str[i] = 'z' ; str[i] - 'A' = 57; counter[57]++;
		}
	}

	// ���
	cout << "Number of alpabets"<<endl;
	
	// �ݺ����� �̿���, �迭 couter�� ���Ұ� 0�� �ƴ� ��� ���
	for (int i = 0; i < COUNTER_LEN; i++)
	{
		if (counter[i])
		{
			// ���� ���
			// �� cout ��ü�� ��Ʈ�� ���� �����ڸ� �̿��� ����� ����, ����� �� 
			//		�� ��Ʈ�� ���� �������� �ι�° �ǿ������� �ڷ����� ���� ����ϴ� ���°� �����ȴ�.
			//		���� ���� ���·� ����ϱ� ���ؼ��� ����� ���� �ڷ����� char �ڷ����� �Ǿ���Ѵ�.
			cout << (char)('A' + i) << " : ";
			// printf("%c : ", 'A' + i);

			// counter[i]�� ����ŭ ���� ���
			for (int j = 0; j < counter[i]; j++)
				cout << "*";

				// ����
				cout << endl;
		}
	}

	return 0;
}