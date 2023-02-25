#ifndef INCLUDE_STACK_H
#define INCLUDE_STACK_H

#include "../Card/card.h"

Card *new_deck();

void delete_deck(Card *deck);

void print_deck(Card *deck);

#endif