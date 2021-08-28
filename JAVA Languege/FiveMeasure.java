import java.util.Scanner;

public class FiveMeasure {
	public int input() { 
		Scanner sc = new Scanner(System.in);
		System.out.print("정수 입력: ");
		return sc.nextInt();
	}
	
	public void measure(int a) {
		if(a%5 == 0)
			this.print("이 값은 5로 나눠집니다.");
		else if(a<0)
			this.print("양수가 아닌 값을 입력했습니다.");
		else
			this.print("이 값은 5로 나눠지지 않습니다.");
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
