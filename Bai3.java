package Chung;
import java.util.Scanner;
public class Bai3 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("nhap ho ten: ");
		String ten=sc.nextLine();
		System.out.println("nhap nam sinh: ");
		int ns=sc.nextInt();
		int tuoi=2023-ns;
		if(tuoi<16)
			System.out.println("ban "+ten+" o do tuoi vi thanh nien");
		if(tuoi>=16 && tuoi<18)
			System.out.println("ban "+ten+" o do tuoi truong thanh");
		if(tuoi>=18)
			System.out.println("ban "+ten+" da gia");
	}

}
