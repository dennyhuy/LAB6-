#include <stdio.h> 
#include <math.h>
// ham kiem tra so nguyen to
int kiemTraSoNguyenTo(int N)
{
	if(N<2)
	{
		return 0;
	}
		for(int i=2;i<=sqrt(N);i++)
		{
			if(N%i==0)
			{
				return 0;
			}
		}
		return 1;
		  
} 
int main()
{
	//Nhap vao so N
	int N;
	printf("Chuong trinh kiem tra so nguyen to");
	printf("\n Nhap vao so can kiem tra: "); scanf("%d",N);
	//Neu 1 thi la so nguyen to con 0 thi ko phai la so nguyen to
	if(kiemTraSoNguyenTo(N)==1)
	{
		printf(N+" Day la so nguyen to");
	}
	else 
	{
		printf(N+" Day khong phai la so nguyen to");
	}
	
}
