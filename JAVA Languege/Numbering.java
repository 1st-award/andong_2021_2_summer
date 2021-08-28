import java.util.Scanner;

public class Numbering {
	public int inputData() {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수값 : ");
		return sc.nextInt();
	}
	
	public void compare(int a) {
		if(a>0)
			this.printing("양수");
		else if(a<0)
			this.printing("음수");
		else
			this.printing("0");
	}
	
	public void printing(String str) {
		System.out.println("이 값은 " + str + "입니다.");
	}
	
	public static void main(String[] args) {
		Numbering nb = new Numbering();
		for(int i=0; i<3; ++i) {
			int a = nb.inputData();
			nb.compare(a);
		}
	}
}
