#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void)
{
	srand(time(NULL));
	for(int i=0; i<5; i++){
		printf("%d\n", rand());
	}
	
	return 0;
}

