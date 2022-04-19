#include <stdio.h>
#include <string.h>
#include "product.h"

int createProduct(Product *p) {

    printf("제품명은? : ");
    scanf(" %[^\n]", p->name);

    printf("제품의 설명을 적어주세요 : ");
    scanf(" %[^\n]", p->detail);

    printf("제품의 중량은? : ");
    scanf(" %s", p->weight);

    printf("판매 가격은? : ");
    scanf(" %d", &p->price);

    printf("배송방법은 ?(1:새벽배송 /2:택배배송)");
    scanf(" %d", &p->way);

    return 1;
}

void readProduct(Product p){

    if(p.price==-1) printf("메뉴를 수정해주세요.");

    else{
    printf("%s %s", p.name, p.weight);
    printf("\n%s", p.detail);
    printf("\n%d원", p.price);
    if (p.way == 1) {
        printf("\n새벽배송\n");
    }
    else printf("\n택배배송\n");
    }

}

int updateProduct(Product *p) {

    printf("제품명은? : ");
    scanf(" %[^\n]", p->name);

    printf("제품의 설명을 적어주세요 : ");
    scanf(" %[^\n]", p->detail);

    printf("제품의 중량은? : ");
    scanf(" %s", p->weight);

    printf("판매 가격은? : ");
    scanf(" %d", &p->price);

    printf("배송방법은 ?(1:새벽배송 /2:택배배송)");
    scanf(" %d", &p->way);

    return 1;
}

int deletProduct(Product *p) {

    p->price = -1;
    
    return 1;
}

