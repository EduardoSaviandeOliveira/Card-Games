#ifndef INCLUDE_STACK_H
#define INCLUDE_STACK_H

#include "../Card/card.h"

Card *new_deck();

void delete_deck(Card *deck);

void push(Card *card1, Card *card2);

void push_always(Card *card1, Card *card2);

void pop(Card *card1, Card *card2);

void print_deck(Card *deck);

#endif