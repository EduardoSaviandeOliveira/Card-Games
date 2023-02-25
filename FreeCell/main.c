#include <stdio.h>
#include <stdlib.h>

#include "Card_Deck/card_deck.h"
#include "Stack/stack.h"

int main(){
    Card *deck1 = new_deck();

    print_deck(deck1);
    
    return 0;
}