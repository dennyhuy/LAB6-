#include <stdio.h>
#include <math.h>
//Hàm tính giai thua 
unsigned long tinhGiaiThua(int N)
{
	int S=1;
	for(int i = 1;i<=N;i++)
	{
		S*=i;
	}
	return S;
}
int main()
{
	// Khai báo N 
	int N;
	printf("Tinh giai thua");
	printf("\n Nhap vao so can tinh: "); scanf("%d", &N);
	// Áp dung ham tính giai thua 
	printf("Ket qua= %d",tinhGiaiThua(N));
	
}
