# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <termios.h>
#define SIZE 10
char getch();
/*char getch(void)
{
	struct termios old, new;
	char ch;
	tcgetattr(0, &old);
	new=old;
	new.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( 0, TCSANOW, &new);
	ch=getchar();
	tcsetattr(0, TCSANOW, &old);
	return(ch);
}*/
int IntOnly();

void cls();
void Invalid();
void EXIT();

int MainMenu();
