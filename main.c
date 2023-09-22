##include <stdio.h>

#include <stdlib.h>



int main() {

    int x,i,j,k,sum;

    sum =0;

    int *p;

    p =(int*) calloc(1, sizeof(int));

    i=0;

    do{

    printf("\nMenu chuong trinh");

    printf("\n==================================");

    printf("\n1.Nhap vao N so nguyen");

    printf("\n2.Hien thi danh sach cac phan tu trong mang");

    printf("\n3.Tinh tong cac phan tu trong mang");

    printf("\n4.Sap xep cac phan tu trong mang theo thu tu tang dan");

    printf("\n5.Thoat");

    printf("\n==================================");

    printf("\nNhap vao lua chon = ");

    scanf("%d",&x);

    switch(x){

        case 1:{

        printf("\nNhap vao so nguyen N = ");

        scanf("%d",p+i);

        i++;

        p =  (int *) realloc(p, i *sizeof(int));

        break;}

        case 2:{

        printf("\nCac phan tu trong mang la ");

        for(j=0;j<i;j++){

            printf("%d ", p[j]);

        }

        break;}

        case 3:{

        for(j=0;j<i;j++){

            sum = sum + p[j];}

            printf("\nTong cac phan tu trong mang = %d",sum);

        break;}

        case 4:{

        printf("cac so duoc sap xep theo thu tu tang dan: ");

            for (j=0;j<i;j++)

            {

                for (k=i-1;k>j;k--)

            {

                if(p[j]>p[k])

                {

                    p[j] =p[j]+p[k];

                    p[k] = p[j]-p[k];

                    p[j] = p[j]-p[k];

                }}}

            for(j=0;j<i;j++){

            printf("%d ", p[j]);}

        break;}

        case 5:{

        return 0;

        }

        default:{ 

        printf("\nNhap sai !!!!!");

        break;}

    }

    }while(x!= 6);

    free(p);

    return 0;

}