import java.util.Scanner;

public class Grades {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("���� �Է� : ");
		return sc.nextInt();
	}
	public String calc(int a) {
		if(a>79)
			return "���";
		else if(a>69)
			return "��ȣ";
		else if(a>59)
			return "����";
		else
			return "����";
	}
	public void print(String str) {
		System.out.println(str + "�Դϴ�.");
	}
	public static void main(String[] args) {
		Grades g = new Grades();
		for(int i=0; i<2; ++i) {
			int a = g.input();
			String str = g.calc(a);
			g.print(str);
		}
	}
}
