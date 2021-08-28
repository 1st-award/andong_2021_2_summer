import java.util.Scanner;

public class GradesSwitch {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("���� �Է� : ");
		return sc.nextInt();
	}
	public String calc(int a) {
		switch(a/10) {
		case 10: case 9: case 8:
			return "���";
		case 7:
			return "��ȣ";
		case 6:
			return "����";
		default:
			return "����";
		}
	}
	public void print(String str) {
		System.out.println(str + "�Դϴ�.");
	}
	public static void main(String[] args) {
		GradesSwitch g = new GradesSwitch();
		for(int i=0; i<2; ++i) {
			int a = g.input();
			String str = g.calc(a);
			g.print(str);
		}
	}
}
