import java.util.Scanner;

public class FiveMeasure {
	public int input() { 
		Scanner sc = new Scanner(System.in);
		System.out.print("���� �Է�: ");
		return sc.nextInt();
	}
	
	public void measure(int a) {
		if(a%5 == 0)
			this.print("�� ���� 5�� �������ϴ�.");
		else if(a<0)
			this.print("����� �ƴ� ���� �Է��߽��ϴ�.");
		else
			this.print("�� ���� 5�� �������� �ʽ��ϴ�.");
	}
	
	public void print(String str) {
		System.out.println(str);
	}
	
	public static void main(String[] args) {
		FiveMeasure fm = new FiveMeasure();
		int a = fm.input();
		fm.measure(a);
	}
}
