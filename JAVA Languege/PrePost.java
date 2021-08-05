public class PrePost {
	public static void main(String[] args) {
		int a, b;
		a = b = 5;
		System.out.println("초기 a, b 값");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		b = 2 * a++;
		System.out.println("b = 2 * a ++ 수행 후");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		a = b = 5;
		System.out.println("원래 a, b 값");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		b = 2 * ++a;
		System.out.println("b = 2 * ++a 수행 후");
		System.out.printf("\ta = %d, b = %d\n", a, b);
	}
}
