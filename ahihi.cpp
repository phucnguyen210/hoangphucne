#include <stdio.h> 
struct SinhVien{
    char TenSV[11];
    char Mssv[11];
    char Lop[8];
    char gioitinh;
    int ntns;
    float toan,ly,tin,DTB;
};
      typedef struct sinhven sv;
      void nhap1sv(sv &a)
      {
       flushall();
       printf ("nhap ten sinh vien: ");   getch (a.ten);
       printf("nhap ma so sinh vien: ");  getch (a. mssv);
       printf ("nhap lop: ");  scanf("%s,"&a.lop);
       printf ("nhap nam sinh: "); scanf ("%d",&a.namsinh );
       flushall();
       printf(" gioi tinh(Nam y/nu x):"); scanf("%c",&a.gioitinh);
       printf("nhap diem toan: "); scanf("%f",&a.toan);
       printf("nhap diem ly: ");   scanf ("%f",&a.ly);
       printf("nhap diem tin: ");  scanf("%f",&a.tin);
       a.DTB=(a.toan+a.ly+a.tin)/3 ;
    }
    void xuat1sv (sv &a)
    {
     printf ("ten sinh vien :");   puts (a.ten);
     printf ("ma so sinh vien: ")   puts (a.Mssv);
     pirtnf("lop: "); puts (a.lop);
     if (a.gioitinh=="x")
       printf("gioi tinh: Nu");
       else 
       printf ("gioi tinh : Nam");
       printf (("ntns :%d",a.ntns));
       printf("diem toan: %f",a.toan);
       printf("diem ly: %f",a. ly);
       printf("diem tin: ",a.tin);
       printf("diem TB: %f",a.DTB);
    }
    void nhapdssv(sv a[], int n)
    {
     for (int i=0;i<n;i++)
    {
    printf ("nhap hoc sinh thu: %d",i+1);
    nhap1sv(a[i]);
  }
}
          void xuatdssv (a[], int n)
          {
          for (int i=0;i<n;i++)
    {
     printf ("sinh vien thu: %d",i+1);
     xuat1sv(a[i]);
  }
 }
 void timtensv(sv a[],int n, char x [])
 {int flag =0;
 for (int i=0;i<n;i++)
    if (strcmp (a[i].ten,x)==0)
    {
     xuat1sv (a[i]);
     flag =1;
    }
 if (flag ==0)
 printf ("khong co ten sinh vien can tim");
}
     int DemsvDTB>5 (sv a[],int n)
     { int dem =0;
     for (int i=0;i<n;i++)
     {
      if (a[i].DTB>5)
      dem ++;
  }
      return dem++;
  }
  void danhsachsvnganhcntt (sv a[],int n )
  { int flag =0;
  for (int i=0;i<n;i++)
  {   if( a[i].lop[3]=‘T’ && a[i].lop[4]=‘H’) 
    {   xuat1sv(a[i]);
       flag=1;
   }
}   
     if (flag ==0)
     printf("khong co sinh vien trong lop");
 }
    void InterchangeSort (sv a[],int n)
    {
     sv tam ;
    for (int i=0;i<n-1;i++)
   for (int j=i+1;j<n;j++)
   if (a[i].DTB>a[j].DTB)
   {
  tam=a[i];
  a[i]=a[j];
  a[j]=tam;
 }
}
     void xuatdssvnu (sv a[],int n)
     {int flag =0;
     for (inti=0;i<n;i++)
     { if (a[i].gioitinh=="x")
     { xuat1sv(a[i]);
     flag =1;
  }
}
     if (flag ==0)
     printf("khong co sinh vien trong lop");
 }
int main ()
 {
  int a[],n;
  xuat1sv (sv &a);
  xuat1sv (sv &a);
  nhapdssv(sv a[], int n);
  timtensv(sv a[],int n, char x []);
  danhsachsvnganhcntt (sv a[],int n );
  InterchangeSort (sv a[],int n);
  xuatdssvnu (sv a[],int n);
  DemsvDTB>5 (sv a[],int n);
  return 0;
 }
