#include<stdio.h>
#include <windows.h>

#define RED         (FOREGROUND_RED | FOREGROUND_INTENSITY)
#define BLUE        (FOREGROUND_BLUE | FOREGROUND_INTENSITY)
#define PINK        (RED | BLUE)
#define RED_BG      (BACKGROUND_RED | BACKGROUND_INTENSITY)
#define WHITE       (RED | GREEN | BLUE)
#define GREEN       (FOREGROUND_GREEN | FOREGROUND_INTENSITY)

void PrintString(HANDLE hStdOut, WORD Attribute, LPCSTR str);

int main(void)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	printf("\t\t♬ ♪ MP3 Player\n"); printf("\t\t\t♪ ♬\n"); printf("\t\t\t\t\t(사운드)\n");
	printf("\t\t\t\t\t플레이:o,p\n\t\t\t\t\t정지:s\n\t\t\t\t\t볼륨 Up:u\n\t\t\t\t\t볼륨 Down:d\n");

	PrintString(hStdOut, RED, "\n");

	printf("_______________________________\n");
	printf("|OM###############iiiiiiiiiiiMO|\n");
	printf("|OM###############iiiiiiiiiiiMO|\n");
	printf("|OM###############+++++iiiiiiMO|\n");
	printf("|OM##############++++++++++++MO|\n");
	printf("|OM##############++++++++++++MO|\n");
	printf("|OM#############oooooooooooooMO|\n");
	printf("|OM#############oooooooooooooMO|\n");
	printf("|OM############OOOOOOOOOOooooMO|\n");
	printf("|OM############OOOOOOOOOOOOOOMO|\n");
	printf("|OM############88888OOOOOOOOOMO|\n");
	printf("|OM###########888888888888888MO|\n");
	printf("|8M###########E88888888888888M8|\n");
	printf("|8M##########EEEEEEEEEEEEEEE#88|\n");
	printf("|888888888888888888888888888888|\n");
	printf("|888888888888`````8888888888888|\n");
	printf("|8888888i````  UP  ```=88888888|\n");
	printf("|888888`````````````````8888888|\n");
	printf("|88888``````8888888``````888888|\n");
	printf("|8888 PAUSE 88888888 PLAY 88888|\n");
	printf("|88888``````8888888``````888888|\n");
	printf("|888888`````````````````8888888|\n");
	printf("|8888888o``  DOWN  ```+88888888|\n");
	printf("|EEEEEEEEEEEE`````EEEEEEEEEEEEE|\n");
	printf("|EEEEEEEEEEEEEEEEEEEEEEEEEEEEEE|\n");

	
	CloseHandle(hStdOut);

	return 0;
}

void PrintString(HANDLE hStdOut, WORD Attribute, LPCSTR str)
{
	SetConsoleTextAttribute(hStdOut, Attribute);
	puts(str);
}