#include <stdio.h>
#include <algorithm>
void nhap(int a,int b)
{
	printf("\n Nhap vao hai so a,b: ");	
}
//Ham tim USCLN
int ucln(int a,int b)
{
	if(a==0 || b==0)
	{
		return a+b;
	}
	while(a!=b)
	{
		if(a>b)
		{
			a-=b; // a= a - b
		} else{
			b-=a;
		}
	}
	return a; 
}
// Ham tim BSCNN
int bscnn(int a,int b)
{
	
	return a*b/ucln(a,b);

}
int main()
{
	printf("Viet Chuong trinh tim uoc chung lon nhat va tim  BCSNN");
	int a,b;
	nhap(a,b);
	scanf("%d%d",&a,&b);
	printf(" UCLN la: %d",ucln(a,b));
	printf(" BCNN la: %d",bscnn(a,b));
}
