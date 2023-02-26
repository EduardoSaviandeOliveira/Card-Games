#ifndef INCLUDE_CARD_DECK_H
#define INCLUDE_CARD_DECK_H

#include <stdio.h>
#include <stdlib.h>

typedef enum {
    clubs = 1,
    hearts,
    diamonds,
    spades
} Suits;

typedef struct {
    int number;
    Suits suit;
} Card;

Card *new_card(int number, Suits suit);

void delete_card(Card *card);

void print_card(Card *card);

const char *print_suit(Suits suit);

#endif