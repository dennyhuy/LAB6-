#include <stdio.h> 
// H�m t�nh dien t�ch  
int tinhDienTich(int A, int B) 
{	
	return A*B;
}
// H�m t�nh chu vi 
int tinhChuVi(int A, int B)
{
	return (A+B)*2;
}
int main() 
{	
	//Khai b�o A v� B 
	int A,B;
	printf(" Tinh ");
	printf("\n Nhap chieu dai= "); scanf("%d",&A);
	printf(" Nhap chieu rong= "); scanf("%d", &B);
	// �p dung h�m v�o t�nh dien tich 
	printf(" Dien tich hinh chu nhat la: %d",tinhDienTich(A,B));
	// �p dung h�m v�o t�nh chu vi  
	printf("\n Chu vi hinh chu nhat la: %d",tinhChuVi(A,B));
}
