#include "tools.h"

void SetWindow(int Width, int Height){
    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);      // Get Handle

    struct _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;
    SetConsoleWindowInfo(Handle, TRUE, &Rect);            // Set Window Size

    struct _COORD coord;
    coord.X = Width;
    coord.Y = Height;
    SetConsoleScreenBufferSize(Handle, coord);            // Set Buffer Size
}

void ShowConsoleCursor(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
}

void gotoxy(int y, int x) {
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

char getCharYX(int y, int x){
    COORD pos = {x, y};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    char c;
    DWORD N;
    ReadConsoleOutputCharacter(output, &c, 1, pos, &N);
    return c;
}

void drawRect(int y, int x, int width, int height){

}
