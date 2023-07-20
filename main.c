#include "tools.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define W 70
#define H 25
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main()
{
    system("chcp 1251 >> nul");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "UKR");

    SetConsoleTitle("microEdit");
    SetWindow(W, H);

    int x = 0, y = 0; //Місце де спочатку стоїть курсор
    gotoxy(y, x); //поставити курсор в точку (y, x)

    while (true){
        gotoxy(y, x);

        int code1 = getch();
        if (code1 == 0){
        }
        else if (code1 == 224){
            int code2 = getch();

            if (code2 == UP){
                y--;
                if (y==-1) y = 0;
            }

            if (code2 == DOWN){
                y++;
                if (y==H)  y = H-1;
                gotoxy(y, x);
            }

            if (code2 == LEFT){
                x--;
                if (x==-1) x = 0;
            }

            if (code2 == RIGHT){
                x++;
                if (x==W)  x = W-1;
            }

            gotoxy(y, x);
        }
        else {
            putchar(code1);
            x++;
            if (x==W){
                x=0;
                y++;
            }
        }
    }

    return 0;
}



