// quotes.c
#include "quote.h"

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

void display_all_quote() {

}

void menu() {

} 