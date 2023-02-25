#include <stdio.h>
#include <stdlib.h>

#include "Card_Deck/card_deck.h"

int main(){
    Card *deck1 = new_deck();

    delete_deck(deck1);
    
    return 0;
}