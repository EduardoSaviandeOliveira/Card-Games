#ifndef INCLUDE_STACK_C
#define INCLUDE_STACK_C

#include "stack.h"

Card *new_deck() {
    Card *deck = malloc(sizeof(Card) * 13 * 4);

    /*
    Position is the card number + suit * 13, because the array starts in 0, not in 1
    Number 1 (0) is (1 - 1) + 0 * 13 = 0 + 0 = 0
    Number 30 (29) is (4 - 1) + 2 * 13 = 29
    Number 52 (51) is (13 - 1) + 3 * 13 = 12 + 39 = 51 
    */

    for(int i=0;i<4;i++) {
        for(int j=1;j<=13;j++) {
            int position = (j - 1) + (i * 13);
            deck[position].number = j;
            deck[position].suit = i + 1;
        }
    }

    return deck;
}

void delete_deck(Card *deck) {
    free(deck);
}

void push(Card *card1, Card *card2) {

}

void push_always(Card *card1, Card *card2) {

}

void pop(Card *card1, Card *card2) {

}

void print_deck(Card *deck) {
    for(int i=0;i<52;i++) {
        print_card(&deck[i]);
    }
}

#endif