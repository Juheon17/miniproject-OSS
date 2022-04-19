#include <stdio.h>
#include <string.h>
#include "product.h"
#include "manager.h"

void listProduct(Product *p, int count){

    printf("********************");
    for(int i=0; i<count; i++) {
        if (p[i].price==-1) continue;

        printf("\n %d. %s", i+1, p[i].name);

    }
} 

int selectProductNo(Product *p, int count) {
    int num;
    listProduct(p, count);

    printf("\n번호는(취소: 0)? : ");
    scanf("%d", &num);
    return num;

}
