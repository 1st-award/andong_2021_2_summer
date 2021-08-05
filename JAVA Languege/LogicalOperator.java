public class LogicalOperator {
	public static void main(String[] args) {
		int a= 1, b= 2;
		System.out.printf("%d %d\n", a, b);
		a= a^b;
		System.out.printf("%d %d\n", a, b);
		b= a^b;
		System.out.printf("%d %d\n", a, b);
		a = a^b;
		System.out.printf("%d %d\n", a, b);
		
		System.out.println((3>2) && (3>4));
		System.out.println((3!=2)||(-1>0));
		System.out.println((3!=2)^(-1>0));
	}

}
