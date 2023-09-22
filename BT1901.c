#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str[100];
	char s1[100],s2[100];
	char s3[100];
	int n3,n1,n2,i,j;
	fflush(stdin);fflush(stdout);
		//b1
	printf("\nNhap vao chuoi = ");
	scanf("%s",str);
	i = strlen(str);
	printf("\nDo dai chuoi = %d",i);
	//B2
	printf("\nNhap vao chuoi 1 = ");
	scanf("%s",s1);
	printf("\nNhap vao chuoi 2 = ");
	scanf("%s",s2);
	n1 = strlen(s1);
	n2 = strlen(s2);
	j=0;
	for (i = n1;i<n1+n2;i++){
		s1[i]=s2[j];
		j++;
	}
	printf("\nDo dai chuoi s1 = %s",s1);
	//b3
	printf("\nNhap vao chuoi 3 = ");
	scanf("%s",s3);
	n3 = strlen(s3);
	for (i = 0;i<n3;i++)
	{
		printf("\n%c",s3[i]);
	}
	
	return 0;
}
