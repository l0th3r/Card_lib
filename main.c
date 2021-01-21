/*
* THIS FILE IS FOR DEBUG AND TEST PURPOSE
*/

#include "includes.h"

int get_random(int end)
{
	int num;

	num = rand() % end;
	return num;
}

int main(int ac, char** av)
{
	int i = 0;
	Deck_t test = create_classic_32();

	srand(time(NULL));

	while(i < test.size + test.j_nb)
	{
		printf("%d = %s\n", i, get_card(test.pile[i]));
		i++;
	}

	dest_deck(test);

	return 0;
}