public class PrePost {
	public static void main(String[] args) {
		int a, b;
		a = b = 5;
		System.out.println("�ʱ� a, b ��");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		b = 2 * a++;
		System.out.println("b = 2 * a ++ ���� ��");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		a = b = 5;
		System.out.println("���� a, b ��");
		System.out.printf("\ta = %d, b = %d\n", a, b);
		b = 2 * ++a;
		System.out.println("b = 2 * ++a ���� ��");
		System.out.printf("\ta = %d, b = %d\n", a, b);
	}
}
