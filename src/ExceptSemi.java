// 프로그램끝의 ;의 누락되면 어떤결과값을 초래하는지 프로그램을 컴파일하여 알아보시오.

public class ExceptSemi {
	public static void main(String[] args) {
		showError(); 
	}
	public static void showError() {
		// Syntax error, insert ";" to complete BlockStatements
		// System.out.println("Hello World!") 
	}
}
