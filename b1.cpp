#include <stdio.h> 
// Hàm tính dien tích  
int tinhDienTich(int A, int B) 
{	
	return A*B;
}
// Hàm tính chu vi 
int tinhChuVi(int A, int B)
{
	return (A+B)*2;
}
int main() 
{	
	//Khai báo A và B 
	int A,B;
	printf(" Tinh ");
	printf("\n Nhap chieu dai= "); scanf("%d",&A);
	printf(" Nhap chieu rong= "); scanf("%d", &B);
	// Áp dung hàm vào tính dien tich 
	printf(" Dien tich hinh chu nhat la: %d",tinhDienTich(A,B));
	// Áp dung hàm vào tính chu vi  
	printf("\n Chu vi hinh chu nhat la: %d",tinhChuVi(A,B));
}
