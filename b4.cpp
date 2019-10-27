#include <stdio.h>
#include <math.h>
//Ham kiem tra so nguyen to
int kiemTraSoNguyenTo(int N)
{
	if(N<2) return 0;
	for(int i=2;i<=sqrt(N);i++ )
	{
		if(N%i==0) return 0;
	}
	return 1;
}
//Ham xuat ra cac so nguyen to nho hon N
int xuatRaCacSo(int N)
{
	  	for(int i=1;i<N;i++) 
	   		if(kiemTraSoNguyenTo(i)) printf("%d",i);
				
}
	
int main()
{
	int N;
	printf("Chuong trinh kiem tra va in cac so nho hon so nguyen to");
	printf("\n Nhap vao so N : ");
	scanf("%d",&N);
	printf(" la Cac so nguyen to nho hon %d",xuatRaCacSo(N));

}

