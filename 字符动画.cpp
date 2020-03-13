#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h>
#define WEIGHT 70
#define HEIGHT 70 
#define N WEIGHT*HEIGHT
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[N];/*字符数组,用来存储从文件打开的字符串*/
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
    
    
	for(i=1;i<=1164;i++)
	{
		sprintf(FileName,"c:\\\\1\\something (%d).txt",i);
        
	in=fopen(FileName,"r");
	fread(hi,1,N,in); 
	printf("%s",hi);
	Sleep(50);//等待50毫秒执行
	//gotoxy(1,1);
	fclose(in);
	system("cls");
	}
} 
//void gotoxy(int x, int y) //函数是将光标位置移动到坐标x,y 
//	{
//		COORD pos;pos.X = x - 1;pos.Y = y - 1;
  //      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	//}
