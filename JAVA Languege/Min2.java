import java.util.*;

public class Min2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int x, y, m;
		Scanner sc = new Scanner(System.in);
		Min2 m2 = new Min2();
		System.out.print("�� ���� �Է�: ");
		x = sc.nextInt();
		y = sc.nextInt();
		m = m2.min(x, y);
		System.out.println(x + "��" + y + "�� ���� ��: " + m);
	}
	
	int min(int a, int b) {
		if(a<b)	return a;
		else	return b;
	}
}
