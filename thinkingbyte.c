#include"thinkingbyte.h"
char getch(void)
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
}
int IntOnly()
{
	int num,i=0;
	char numstr[SIZE]; 
	char ch;
	while(i<=SIZE)
	{
		ch=getch();
		if(i==0 && (ch=='+' || ch=='-'))
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		else if(ch>='0' && ch<='9')
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		/*else if(ch==10)
		{
			if(i>0)
				/*printf("\b \b");
				//i--;
				num=atoi(numstr);
				return num;*

		}*/
		else if(ch=='\n')
		{
			//break;
			num=atoi(numstr);
			return num;

		}
		else
		{
			printf(" \b");
		}
	}
	//num=atoi(numstr);
	//return num;
}//end Intonly

void cls()
{
	system("clear");
}
void Invalid()
{
	printf("\aInvalid Input\n");
}
void EXIT()
{
	printf("Thank You for Using\v\b\bOur Program\n");
	exit(0);
}
int MainMenu()
{
	int choiceMenu;
	printf("\t 1. Create \n\t 2. Insert \n\t 3. Display\n\t 4. Search \n\t 5. Sort \n\t 6. Merge \n\t 7. About Us \n\t 8. Our Official Site \n\t 9. Help \n\t 0. EXIT \n");
	//scanf("%d",&choiceMenu);
	choiceMenu=IntOnly();
	return choiceMenu;
}
