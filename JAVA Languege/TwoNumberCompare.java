import java.util.Scanner;

public class TwoNumberCompare {
	public int[] input() {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[2];
		System.out.print("���� A : ");
		arr[0] = sc.nextInt();
		System.out.print("���� B : ");
		arr[1] = sc.nextInt();
		return arr;
	}
	public void compare(int[] arr) {
		if(arr[0] > arr[1])
			this.printing("A�� Ů�ϴ�.");
		else if(arr[0] < arr[1])
			this.printing("B�� Ů�ϴ�.");
		else
			this.printing("A�� B�� ���� ���Դϴ�.");
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
