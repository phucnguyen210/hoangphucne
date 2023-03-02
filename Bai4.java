package Chung;
import java.util.Scanner;
public class Bai4 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("nhap vao so nguyen tu 1-12: ");
		
		int n;
		do {
		n=sc.nextInt();
		System.out.print("nhap lai so nguyen phai tu 1-12 ");}
		while(n>12); {
		for(int i=1;i<=n;i++)
			if(n==i)
				System.out.println("thang "+i);
	
		}
	}

}
