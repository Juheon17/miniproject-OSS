typedef struct {
    char name[20];
    char detail[50];
    char weight[10];
    int price;
    int way; //1:새벽배송 / 2:택배배송
} Product;


int createProduct(Product *p); //제품을 추가하는 함수
void readProduct(Product p); //하나의 제품의 상세내용을 보여주는 함수
int updateProduct(Product *p); //제품을 수정하는 함수
int deletProduct(Product *p); //제품을 삭제하는 함수
void saveData(Product *p, int count); //FILE 저장
int loadData(Product *p); //FILE 로드
void searchProductName(Product *p, int count); //이름으로 검색
void searchProductPrice(Product *p, int count); //가격으로 검색
void searchProduceWeight(Product *p, int count); //무게로 검색

