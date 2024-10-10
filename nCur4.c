// something called arrows kinda excited for this not gonna lie
#include<ncurses.h>


int main()
{
 int key,x,y;
 initscr();
 keypad(stdscr, TRUE); //to be able to use arrow keys
 noecho();  //doesn't repeat what you type anymore
 x = 5;
 y = 5;

while(key != 'q')
{ 
 clear();
 move(0,0);
 printw("Press arrow keys and exit by pressing:  q");
move(y,x);
 printw("O->");
 refresh();
 key = getch();
 if( key == KEY_UP)
 {
  y--;
 if(y<5)
 y = 5;
 }
 else if( key == KEY_DOWN )
{ 
 y++;
 if(y>30)
 y = 30;
}
 else if( key == KEY_LEFT )
 {
  x--;
 if (x < 0)
  x=0; }
 else if(key == KEY_RIGHT )
 {
 x++;
 if(x>30)
  x= 30;
 }
}

endwin();
return 0;
}

