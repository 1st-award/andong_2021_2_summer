import java.util.*;

public class Min1 {

	public static void main(String[] args) {
		int x, y;
		Scanner sc = new Scanner(System.in);
		System.out.print("두 정수 입력: ");
		x = sc.nextInt();
		y = sc.nextInt();
		if(x<y)	System.out.println("작은 값: " + x);
		else	System.out.println("작은 값: " + y);
	}
}
