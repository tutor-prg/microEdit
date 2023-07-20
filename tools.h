#ifndef TOOLS_H_INCLUDED
#define TOOLS_H_INCLUDED
#include <windows.h>

#define bool char
#define true 1
#define false 0

void SetWindow(int Width, int Height);
void ShowConsoleCursor(bool showFlag);
void gotoxy(int y, int x);
char getCharYX(int y, int x);
void drawRect(int y, int x, int width, int height);


#endif // TOOLS_H_INCLUDED
