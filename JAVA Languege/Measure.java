import java.util.Scanner;

public class Measure {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("���� A : ");
		int a = sc.nextInt();
		System.out.print("���� B : ");
		int b = sc.nextInt();
		if(a%b == 0)
			System.out.printf("%d�� %d�� ����Դϴ�.\n", b, a);
		else
			System.out.printf("%d�� %d�� ����� �ƴմϴ�.\n", b, a);
	}
}
