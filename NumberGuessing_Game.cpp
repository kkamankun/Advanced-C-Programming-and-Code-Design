#include<stdio.h>
#include<stdlib.h> //rand함수 호출을 위한 선언 
#include<time.h>  //time함수 호출을 위한 선언  


int main(void)
{
	int random=0, answer=0;
	int count=1;
	int min=0, max=0;
	d
	srand(time(NULL));
	printf("생성시킬 숫자의 최소값과 최대값을 차례로 입력하세요!!\n"); 
	scanf("%d%d", &min, &max); 
	int na=(max+1)-min;
	random=rand()%na+min; 
	
		printf("정답은 %d~ %d 사이에서 있습니다!\n",min,max); 
	while(1){
		scanf("%d", &answer);
		
		if(answer < random){
			printf(" 아닙니다. 더 높습니다.\n");
			count++;
		}
		else if(answer > random){
			printf(" 아닙니다. 더 낮습니다. \n");
			count++;
		}
		else{
			printf("정답입니다~ %d번만에 맞췄습니다!",count);
			break;
		}
	
}
	
	return 0;
}
