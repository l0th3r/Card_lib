#include "../includes.h"

/* create a card */
/* return a card struct (Card_t) */
Card_t create_card(int id, int suit, int position)
{
	Card_t card;

	card.id = id;
	card.suit = suit;
	card.position = position;
	card.hidden = 0;

	return card;
}

/* create a deck */
/* return a classic deck of card struct (Deck_t) */
Deck_t create_deck(int length, int joker_len, int suit_length)
{
	int i = 0;
	int j = 0;

	Deck_t deck;

	/* allocate */
	deck.pile = malloc(sizeof(Card_t) * (length + joker_len));

	if(deck.pile)
	{
		/* create cards */
		while(i < length)
		{
			deck.pile[i] = create_card(i, i / suit_length, i % suit_length);
			i++;
		}
		/* create joker cards */
		while(j < joker_len)
		{
			deck.pile[i] = create_card(i, 4, j);
			j++;
			i++;
		}
	}

	deck.size = length;
	deck.j_nb = joker_len;
	return deck;
}


/* create a list*/
List_t create_list()
{
	List_t list;

	list.pile = malloc(sizeof(Card_t));
	list.count = 0;

	return list;
}

/* create hand */
Hand_t create_hand(int cap)
{
	Hand_t hand;

	hand.pile = malloc(sizeof(Card_t));
	hand.count = 0;
	hand.cap = cap;

	return hand;
}


/* destroy deck */
void dest_deck(Deck_t target)
{
	free(target.pile);
}

/* destroy list */
void dest_list(List_t target)
{
	free(target.pile);
}

/* destroy hand */
void dest_hand(Hand_t target)
{
	free(target.pile);
}