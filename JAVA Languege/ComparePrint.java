import java.util.Scanner;

public class ComparePrint {
	public int[] input() {
		int[] arr = new int[2];
		Scanner sc = new Scanner(System.in);
		System.out.print("정수 A : ");
		arr[0] = sc.nextInt();
		System.out.print("정수 B : ");
		arr[1] = sc.nextInt();
		return arr;
	}
	public char[] compare(int[] arr) {
		char[] ch = new char[2];
		if(arr[0] < arr[1]) {
			ch[0] = 'B';
			ch[1] = 'A';
		}
		else {
			ch[1] = 'B';
			ch[0] = 'A';
		}
		return ch;
	}
	public void print(char[] ch) { 
		System.out.printf("%c > %c입니다.\n", ch[0], ch[1]);
	}
	public static void main(String[] args) {
		ComparePrint cp = new ComparePrint();
		int[] arr = cp.input();
		char[] ch = cp.compare(arr);
		cp.print(ch);
	}
}
