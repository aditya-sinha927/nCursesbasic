//ncurses x and y =D
#include<ncurses.h>

int main()
{
int x= 0;
int y = 0;

initscr();
clear();

getyx(stdscr,y,x);
//this is a macro that expands into x = getcurx(stdscr);
printw(		"x=%d\n"
		"y=%d",
	x,y);
refresh();

y = 5;
x = 10;
int i = 0;
while(i<25)
{
	move(x,y);
	printw("|_|");
	refresh();
	napms(1000);
	x++;
	y++;
	i++;
}
getch();
endwin();

return 0;
}
