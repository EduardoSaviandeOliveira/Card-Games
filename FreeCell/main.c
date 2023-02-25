#include <stdio.h>
#include <stdlib.h>

typedef enum {
    clubs = 1,
    hearts = 2,
    diamonds = 3,
    spades = 4
} Suits;

typedef struct {
    int number;
    Suits suit;
} Card;

Card *new_card(int number, Suits suit) {
    Card *card = malloc(sizeof *card);

    card->number = number;
    card->suit = suit;

    return card;
}

void delete_card(Card *card) {
    free(card);
}

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

void print_deck(Card *deck) {
    for(int i=0;i<52;i++) {
        printf("Number %d ", deck[i].number);
        printf("Suit %d\n", deck[i].suit);
    }
}

void delete_deck(Card *deck) {
    printf("%s", "Deleted");
    free(deck);
}

int main(){
    Card *deck1 = new_deck();

    delete_deck(deck1);
    
    return 0;
}