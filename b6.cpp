#include <stdio.h>
//Ham Hoan Vi
void hoanVi(int *a,int *b)
{
	int tam=*a;
	*a=*b;
	*b=tam;
}
int main()
{
	int a,b;
	printf("Nhap vao hai so can hoan vi: ");
	scanf("%d%d",&a,&b);
	hoanVi(&a,&b);
	printf("\n Sau khi hoan vi: a=%d, b=%d",a,b);
}
