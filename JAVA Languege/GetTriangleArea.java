import java.util.Scanner;

public class GetTriangleArea {
	public static void main(String[] args) {
		System.out.println("삼각형의 면적을 구합니다.");
		System.out.print("밑변: ");
		double base = GetNumber();
		System.out.print("높이: ");
		double height = GetNumber();
		PrintTriangleArea(base, height);
	}
	public static double GetNumber() {
		Scanner sc = new Scanner(System.in);
		return sc.nextDouble();
	}
	public static void PrintTriangleArea(double _getBase, double _getHeight) {
		System.out.println("면적은 " + ((_getHeight * _getBase)/2) + "입니다.");
	}
}
