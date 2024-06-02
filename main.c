#include"thinkingbyte.h"
int main()
{	
	int choice;
	while(1)
	{
		choice=MainMenu();
		switch(choice)
		{
			case 1:
				cls();
				printf("Create is Coming Soon..😊️😊️😊️\n");
				break;
			case 2:
				cls();
				printf("Insert is Coming Soon..😊️😊️😊️\n");
				break;
			case 3:
				cls();
				printf("Display is Coming Soon..😊️😊️😊️\n");
				break;
			case 4:
				cls();
				printf("Search is Coming Soon..😊️😊️😊️\n");
				break;
			case 5:
				cls();
				printf("Sort is Coming Soon..😊️😊️😊️\n");
				break;
			case 6:
				cls();
				printf("Merge is Coming Soon..😊️😊️😊️\n");
				break;
			case 7:
				cls();
				printf("About_Us is Coming Soon..😊️😊️😊️\n");
				break;
			case 8:
				cls();
				printf("Our_Official_Site is Coming Soon..😊️😊️😊️\n");
				break;
			case 9:
				cls();
				printf("Help is Coming Soon..😊️😊️😊️\n");
				break;
			case 0:
				cls();
				EXIT();
				break;
			default :
				cls();
				Invalid();
		}
	}
	return 0;
}
