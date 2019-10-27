#include <stdio.h>
//Ham kiem tra so chinh phuong
int kiemTraSoChinhPhuong(int N)
{
	int i=0;
	while(i*i<=N)
	{
		if(i*i==N)
		{
			return 0;	
		}
		++i;
	}
	return 1;
}
//Ham tinh tong M so chinh phuong
int tinhTongChinhPhuong(int M)
{
	int s;
	for(int i=1;i<=M;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(j*j==i) s+=i;
		}
	}
	return s;
}
int main()
{
	int N,M;
	printf("CHUONG TRINH KIEM TRA SO CHINH PHUONG");
	printf("\n Nhap vao so chinh phuong can kiem tra: ");
	scanf("%d",&N);
	printf("Nhap vao so chinh phuong can tinh tong: ");
	scanf("%d",&M);
	if(kiemTraSoChinhPhuong(N)==1) printf("\n Day la so chinh phuong");
	else printf("\n Day khong phai la so chinh phuong");
	printf("\n Tong cac so chinh phuong can tinh la: %d",tinhTongChinhPhuong(M));
}
