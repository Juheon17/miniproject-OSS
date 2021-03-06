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

void saveData(Product *p, int count) {

    FILE *fp;
    fp = fopen("test.txt", "wt");

    for(int i=0; i<count; i++) {
        if(p[i].price== -1 ) continue;
        //fprintf(fp, "%10s %8s %7d %1d %s\n", p[i].name, p[i].weight, p[i].price, p[i].way, p[i].detail);
    fprintf(fp, "%s\n", p[i].name);
    fprintf(fp, "%s\n" ,p[i].weight);
    fprintf(fp, "%s\n", p[i].detail);
    fprintf(fp, "%d\n",p[i].price);
    fprintf(fp, "%d\n",p[i].way);
    }
    fclose(fp);
    printf("=>저장됨! ");

}

int loadData(Product *p) {

    //int count=0, i;
    int i;
    FILE *fp;
        if(fp = fopen("test.txt","rt")) {
        for(i=0; i<100; i++) {
        fscanf(fp, " %[^\n]", p[i].name);
        if(feof(fp)) break;
        fscanf(fp, " %s", p[i].weight);
        fscanf(fp, " %[^\n]", p[i].detail);
        fscanf(fp, " %d", &p[i].price);
        fscanf(fp, " %d", &p[i].way);
        }

        fclose(fp);
        printf("\n=> 로딩 성공!\n");
        return i;
        }
        else {
        printf("\n=> 파일 없음\n");
        return 0;
    }

}

void searchProductName(Product *p, int count){
    int scnt =0; //검색할 데이터가 있는지 확인
    char search[50]; //검색할 데이터

    printf("검색할 제품명은? : ");
    scanf(" %[^\n]", search);

    for(int i=0; i<count; i++) {
        if(p[i].price==-1) continue;
        if(strstr(p[i].name, search)) {
            printf("%d. %s\n",i+1, p[i].name);
            scnt++;
        }
    }
    if(scnt ==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}

void searchProductWeight(Product *p, int count){
    int scnt =0; //검색할 데이터가 있는지 확인
    char search[10]; //검색할 무게

    printf("찾으시는 중량은? : ");
    scanf(" %s", search);

    for(int i=0; i<count; i++) {
        if(p[i].price==-1) continue;
        if(strstr(p[i].weight, search)) {
            printf("%d. %s\n", i+1, p[i].name);
            scnt++;
        }
    }
    if(scnt ==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}

void searchProductPrice(Product *p, int count){
    int scnt =0; //검색할 데이터가 있는지 확인
    int search; //검색할 금액

    printf("찾으시는 금액은? : ");
    scanf(" %d", &search);

    for(int i=0; i<count; i++) {
        if(p[i].price==-1) continue;
        //if(strstr(p[i].weight, search)) {
        if(p[i].price == search) {    
            printf("%d. %s\n", i+1, p[i].name);
            scnt++;
        }
    }
    if(scnt ==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
}
