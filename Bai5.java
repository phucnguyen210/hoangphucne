package Chung;
import java.util.Scanner;
public class Bai5 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
//		System.out.print("nhap n vao: ");
//		int n=sc.nextInt();
		int a[]=new int [200];
		int sum=0;
		System.out.print("nhap cac so vao ");

		for(int i=0;i<=200;i++) {
			System.out.print(" ");
		a[i]=sc.nextInt();
		sum+=a[i];
		if(sum>100)
			break;
		}
		System.out.println("tong cac so da nhap vao la"+sum);
	}
}