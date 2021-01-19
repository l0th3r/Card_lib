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

	Deck_t test = create_deck(52, 1, 13);

	while(i < test.size + test.j_nb)
	{
		printf("%s\n", get_card(test.pile[i]));
		i++;
	}

	dest_deck(test);

	return 0;
}