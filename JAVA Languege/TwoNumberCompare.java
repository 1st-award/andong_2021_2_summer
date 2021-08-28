import java.util.Scanner;

public class TwoNumberCompare {
	public int[] input() {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[2];
		System.out.print("정수 A : ");
		arr[0] = sc.nextInt();
		System.out.print("정수 B : ");
		arr[1] = sc.nextInt();
		return arr;
	}
	public void compare(int[] arr) {
		if(arr[0] > arr[1])
			this.printing("A가 큽니다.");
		else if(arr[0] < arr[1])
			this.printing("B가 큽니다.");
		else
			this.printing("A와 B가 같은 값입니다.");
	}
	public void printing(String str) {
		System.out.println(str);
	}
	
	public static void main(String[] args) {
		TwoNumberCompare tc = new TwoNumberCompare();
		int []arr = tc.input();
		tc.compare(arr);
	}
}
