import java.util.Scanner;

public class PyeongToJegopMeter {
	static double pyeong;
	static double jegop;
	
	public static void main(String[] args) {
		final double JA = 30.0 / 99.0;
		final int SIX = 6;
		System.out.print("평형을 입력하세요 : ");
		pyeong = input();
		jegop  = calc(pyeong, SIX, JA);
		print();
	}
	// 평수 입력
	public static double input() {
		Scanner sc = new Scanner(System.in);
		double pyeong = sc.nextDouble();
		return pyeong;
	}
	// 결과 출력
	public static void print() {
		System.out.printf("평형 %f는 %.2f 제곱미터 입니다.\n", pyeong, jegop);
	}
	// 평수->제곱 환산
	public static double calc(double _pyeongParm, int _sixParm, double _jaParm) {
		return (_sixParm*_jaParm) * (_sixParm*_jaParm) * _pyeongParm;
	}
}
