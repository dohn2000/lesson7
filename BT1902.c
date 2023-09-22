#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void showInfor(){
	printf("\nTen: Nguyen Thanh Do");
	printf("\nTuoi: 23");
	printf("\ndia chi: Ha Noi");
	printf("\nEmail: dohn2000@gmail.com");
	printf("\nsdt: 012345679");
}
void showMessage(int msg){
	printf("\nHello msg");
}
void giaithua(int n)
{
	int i,giaithua=1;
	for(i=1;i<=n;i++){
		giaithua = giaithua*i;
	}
	printf("\nGiai thua cua n = %d",giaithua);
}
void tong (int m){
	int tong;
	tong =(m+1)*m/2;
	printf("\nTong = %d",tong);
}
int main(int argc, char *argv[]) 
{
	showInfor();
	showMessage(1);
	showMessage(2);
	showMessage(3);
	giaithua(5);
	tong(10);
	return 0;
}
