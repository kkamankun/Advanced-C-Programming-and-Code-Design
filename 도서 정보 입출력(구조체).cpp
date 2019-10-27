#include<stdio.h>
void clearBuffer(void);

typedef struct book{
	char author[10];
	char name[30];
	int page;
}Book;
int main(void){
	Book b[3];
	printf("도서 정보 입력\n");
	for(int i=0;i<3;i++){
		putchar('\n');
		fputs("저자 : ",stdout);
		fgets(b[i].author, sizeof(b[i].author), stdin);
		
		fputs("제목 : ",stdout);
		fgets(b[i].name, sizeof(b[i].name), stdin);
		
		fputs("페이지 수 : ",stdout);
		scanf("%d", &b[i].page);
		
		clearBuffer();
		
	}
	fputs("\n\n\n도서 정보 출력\n",stdout);
	
	for(int i = 0; i<3 ; i++){
	printf("\nbook %d \n",i+1);
	printf("저자 : %s", b[i].author);
	printf("제목 : %s", b[i].name);
	printf("페이지 수 : %d\n", b[i].page);
}
return 0;
}
void clearBuffer(void){
	while(getchar()!='\n');
}

