package Chung;
import java.util.Scanner;
public class Bai6 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("nhap vao so bat ki: ");
		float a=sc.nextFloat();
		float gt=1;
		for(int i=1;i<=a;i++)
			gt*=i;
		System.out.println(gt);

	}
}