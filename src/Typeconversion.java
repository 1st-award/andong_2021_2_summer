import java.util.Scanner;

public class Typeconversion {
	
	public static void main(String[] args) {
		byte b;
		int i;
		
		Scanner sc = new Scanner(System.in);
		b = sc.nextByte();
		i = sc.nextShort();
		
		printArgs(b, i);
	}
	public static void printArgs(byte _b, int _i) {
		System.out.println(_b + _i);
		System.out.println(10/4);
		System.out.println(10.0/4);
		System.out.println((char)0x12340041);
		System.out.println((byte)(_b + _i));
		System.out.println((int)2.9 + 1.8);
		System.out.println((int)(2.9 + 1.8));
		System.out.println((int)2.9 + (int)1.8);
	}
}
