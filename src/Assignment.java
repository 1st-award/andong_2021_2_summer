public class Assignment {
	public static void main(String[] args) {
		byte b = 123;
		short s = 456;
		int i = s;
		// byte b2 = 456;	// 오류 : byte 범위로 표현할 수 없음
		// short s2 = i;	// 오류 : int 상수가 아님
		System.out.printf("b = %d\n", b);
		System.out.printf("s = %d\n", s);
		System.out.printf("i = %d\n", i);
		// System.out.printf("s2 = %d\n", s2);
		// System.out.printf("b2 = %d\n", b2);
	}
}
