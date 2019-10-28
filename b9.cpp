#include <stdio.h>
#include <stdlib.h>
void Nhap(int &a)
{
	printf("\n Nhap vao so can kiem tra: ");
	scanf("%d", &a);	
} 
int soChanSoLe(int a) 
{
	int ok=1;
	if (a %2==0) return ok;
	else return ok=0;
}
int main()
{
	
	printf("CHUONG TRINH KIEM TRA SO CHAN SO LE");
	int a;
	Nhap(a);
	if (soChanSoLe(a)==1) printf(" Day la so chan");
	else printf(" Day la so le");
}
