/* nCurses.c */

#include<ncurses.h>

int main(){

char letter;
initscr();
printw("Press any key   disclaimer:t&c apply");
refresh();

letter = getch();
clear();

printw("You pressed the  key ' %c'",letter);
refresh();


getch();
endwin();
return 0;
}
