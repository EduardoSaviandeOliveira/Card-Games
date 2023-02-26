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
    printf("Suit %s\n", print_suit(card->suit));
}

const char *print_suit(Suits suit) {
    if(suit == clubs) {
        return "clubs";
    }

    if(suit == spades) {
        return "spades";
    }
        
    if(suit == hearts) {
        return "hearts";
    }
        
    if(suit == diamonds) {
        return "diamonds";
    }

    return "It's not a suit";
}

#endif