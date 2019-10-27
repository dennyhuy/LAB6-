#include <stdio.h>
//Ham kiem tra so doi xung
int kiemTraSoDoiXung(int num)
{
	int r,sum=0,temp;
	for(temp=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum*10+r;
	}
	if(temp==sum) return 1;
	else return 0;
}
int main()
{
	int num;
	printf("Chuong trinh kiem tra so doi xung");
	printf("\n Nhap vao so can kiem tra: ");
	scanf("%d",&num);
	if (kiemTraSoDoiXung(num) == 1) printf(" Day la so doi xung");
	else printf("Day khong phai la so doi xung.");
}
