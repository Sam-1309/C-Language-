#include<windows.h>
int main()
{
 COORD c;
    c.X=25;
    c.Y=20;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    // gotoxy (25,20)//
    printf ("C language");
    return 0 ;

}
