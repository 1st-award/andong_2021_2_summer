import java.util.Scanner;

public class ScoreInput {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("������ �Է��ϼ���: ");
		int score = sc.nextInt();
		System.out.println(score + "��(��) ���� "+ ((score>=0 && score<=100) ? '��' : '��') + "�� ���� �Դϴ�.");
	}
}
