package Chung;
import java.util.Scanner;
public class Bai5 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int sum=0;
		System.out.print("nhap cac so tu nhien vao: ");
		for(int i=0;i<=200;i++) {
		i=sc.nextInt();
		sum+=i;
		System.out.println("tong hien cac so vua nhap vao la:"+sum);
		if(sum>=100)
			break;
		}
		System.out.println("tong cac so da nhap vao va lon hon 100 la: "+sum);
	}
}