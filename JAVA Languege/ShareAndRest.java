import java.util.Scanner;

public class ShareAndRest {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("������ : ");
		int a = sc.nextInt();
		if(a<0) {
			System.out.println("����� �ƴ� ���� �Է��߽��ϴ�.");
			System.exit(0);
		}
		return a;
	}
	public int calc(int a) {
		return a%3;
	}
	public void print(int a) {
		System.out.printf("�� ���� 3���� ���� �������� %d�Դϴ�.\n", a);
	}
	public static void main(String[] args) {
		ShareAndRest sar = new ShareAndRest();
		for(int i=0; i<3; ++i) {
			int a = sar.input();
			a = sar.calc(a);
			sar.print(a);
		} 
	}
}
