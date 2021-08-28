import java.util.Scanner;

public class Grades {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("점수 입력 : ");
		return sc.nextInt();
	}
	public String calc(int a) {
		if(a>79)
			return "우수";
		else if(a>69)
			return "양호";
		else if(a>59)
			return "보통";
		else
			return "낙제";
	}
	public void print(String str) {
		System.out.println(str + "입니다.");
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
