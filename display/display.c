#include "../includes.h"

char* get_card(Card_t target)
{
	int suit = target.suit;
	int pos = target.position;
	int hidden = target.hidden;

	char* suit_to_display =  malloc(sizeof(char) * 4);
	char* str_val =  malloc(sizeof(char) * 3);
	char* str = malloc(sizeof(char) * 12);

	/* set suit to display */
	switch(suit)
	{
		case 0:
			strcpy(suit_to_display, "♣");
			break;
		case 1:
			strcpy(suit_to_display, "♦");
			break;
		case 2:
			strcpy(suit_to_display, "♥");
			break;
		case 3:
			strcpy(suit_to_display, "♠");
			break;
	}

	/* set card to display */
	switch (pos)
	{
		case 0:
			strcpy(str_val, "As");
			break;
		case 9:
			sprintf(str_val, "%d", pos + 1);
			break;
		case 10:
			strcpy(str_val, "J ");
			break;
		case 11:
			strcpy(str_val, "Q ");
			break;
		case 12:
			strcpy(str_val, "K ");
			break;
		default:
			sprintf(str_val, "%d ", pos + 1);
			break;
	}

	if(hidden == 1)
		sprintf(str, "|  ??  |");
	else if(suit == 4)
		sprintf(str, "|  JO  |");
	else
		sprintf(str, "| %s %s |", str_val, suit_to_display);

	return str;
}