#ifndef INCLUDE_CARD_DECK_C
#define INCLUDE_CARD_DECK_C

#include "card.h"

Card *new_card(int number, Suits suit) {
    Card *card = malloc(sizeof *card);

    card->number = number;
    card->suit = suit;

    return card;
}

void delete_card(Card *card) {
    free(card);
}

void print_card(Card *card) {
    printf("Number %d ", card->number);
    printf("Suit %d\n", card->suit);
}

#endif