import java.util.Scanner;

public class GradesSwitch {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("점수 입력 : ");
		return sc.nextInt();
	}
	public String calc(int a) {
		switch(a/10) {
		case 10: case 9: case 8:
			return "우수";
		case 7:
			return "양호";
		case 6:
			return "보통";
		default:
			return "낙제";
		}
	}
	public void print(String str) {
		System.out.println(str + "입니다.");
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
