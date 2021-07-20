import java.util.Scanner;

public class RadiusToCircleArea {
	static int radius;
	static double circleArea;
	
	public static void main(String[] args) {
		final double PI = 3.14;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("원의 반지름 입력: ");
		radius = sc.nextInt();
		circleArea = calc(PI, radius);
		print();
	}
	// 결과 출력
	public static void print() {
		System.out.printf("반지름 %d의 원의면적은 %.1f입니다.\n", radius, circleArea);
	}
	// 면적 계산
	public static double calc(double _PI, int _radius) {
		return _radius * _radius * _PI;
	}
}
