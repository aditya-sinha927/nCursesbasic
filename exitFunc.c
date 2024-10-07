#include<ncurses.h>
#include<string.h>
#include<stdlib.h> 


int starttext()
{
	printw("root@Kyuubi/:");
	refresh();
	return 0;
}



int main(){
	initscr();
	char ch;
	int i = 0;
	int row = 0;
	int column = 0;
	starttext();
	char *c = malloc(256);
do{
	memset(c,0,256);
	while ((ch = getch()) != '\n')  // Loop until Enter key is pressed
    {
        c[i++] = ch;  // Store the character
    }
    
    c[i] = '\0'; 
	i = 0;
	move(row++,column);
	starttext();
}
	while((strcmp(c,"exit")));;

	getch();
	free(c);
	endwin(); 

return 0;
}


