public class Assignment {
	public static void main(String[] args) {
		byte b = 123;
		short s = 456;
		int i = s;
		// byte b2 = 456;	// ���� : byte ������ ǥ���� �� ����
		// short s2 = i;	// ���� : int ����� �ƴ�
		System.out.printf("b = %d\n", b);
		System.out.printf("s = %d\n", s);
		System.out.printf("i = %d\n", i);
		// System.out.printf("s2 = %d\n", s2);
		// System.out.printf("b2 = %d\n", b2);
	}
}
