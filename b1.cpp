#include <stdio.h> 
int dienTich(float r)
{
	float S;
	S = r*r * 3.14;
	return S;
}
int dienTich2(float d)
{
	float A;
	return A = (d*d/4) * 3.14;
}
int chuVi(float r)
{
	float C;
	return C = r * 2 * 3.14;
}
int chuVi2(float d)
{
	float C;
	return C = d * 3.14;
}
int main() 
{
	float r;
	printf("CHUONG TRINH TINH CHU VI VA DIEN TICH HINH TRON");
	printf("\n Nhap vao ban kinh: ");
	scanf("%f",&r);
	printf("Dien tich hinh tron la: %d",dienTich(r));
	printf("\n Chu vi hinh tron la: %d",chuVi(r));
}
