#include <stdio.h>
#include <math.h>
//H�m t�nh giai thua 
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
	// Khai b�o N 
	int N;
	printf("Tinh giai thua");
	printf("\n Nhap vao so can tinh: "); scanf("%d", &N);
	// �p dung ham t�nh giai thua 
	printf("Ket qua= %d",tinhGiaiThua(N));
	
}
