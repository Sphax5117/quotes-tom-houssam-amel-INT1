// quotes.c
#include "quote.h"
#define MAX_QUOTES 100

void print_quote(char ** quotes, int index) {
   printf("%s\n", quotes[index]);
}

void print_random_quote(char ** quotes) {
   int index = rand() % MAX_QUOTES;
   print_quote(quotes, index);
}

void add_quote() {
   printf("TEST");
}

void remove_quote() {

}

void remove_quote(char quotes[][MAX_LENGTH], int *count) {
    int i;
    if (*count == 0) {
        printf("Nothing to remove.\n");
    }
    display_quotes(quotes, *count);
    printf("Enter the number of the quote to remove: ");
    for (int i = index - 1; i < *count - 1; i++) {
        strcpy(quotes[i], quotes[i + 1]);
    }
    (*count)--;
    save_quotes(quotes, *count);
    printf("Quote removed\n");
}


void display_all_quote(char quotes[][MAX_LENGTH], int count) {
    if (count == 0) {
        printf("There is no quote.\n");
    }
    for (int i = 0; i < count; i++) {
        printf("%s\n", i + 1, quotes[i]);
    }
}





void menu() {

} 