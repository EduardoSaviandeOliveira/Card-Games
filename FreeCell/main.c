#include <stdio.h>
#include <stdlib.h>

#include "Card/card.h"
#include "Stack/stack.h"

int main() {
    Card *deck1 = new_deck();

    print_deck(deck1);

    delete_deck(deck1);
    
    return 0;
}