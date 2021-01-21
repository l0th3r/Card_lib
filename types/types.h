#ifndef CARD_TYPES
#define CARD_TYPES

/* create types */
typedef struct
{	
	/* position in the deck */
	int id;

	/* clubs = 0, diamonds = 1, hearts = 2, spades = 3, joker = 4 */
	int suit;

	/* position of the card on the suit from 0 to 12 (0 is As 12 is king) */
	int position;
	
	/* 1 if the card should be hidden */
	int hidden;
} Card_t;

typedef struct
{
	Card_t* pile;
	size_t size;
	size_t j_nb;
} Deck_t;

typedef struct
{
	Card_t* pile;
	size_t count;
} List_t;

typedef struct
{
	Card_t* pile;
	size_t cap;
	size_t count;
} Hand_t;

/* destroy */
void dest_deck(Deck_t target);
void dest_list(List_t target);
void dest_hand(Hand_t target);

/* functions */
Card_t create_card(int id, int suit, int position);
Deck_t create_deck(int length, int joker_len, int gap_start, int gap_end);
Deck_t create_classic_52();
Deck_t create_classic_32();
List_t create_list();

#endif