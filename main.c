#include "quote.c"
#include <time.h>

int main() {

    char *filename = "quotes.txt";
    FILE *filepointer = fopen(filename, "r");
    char buffer_for_next_char;
    int len = 0;
    char *text = (char *) malloc(len * sizeof(char));
    if (filepointer == NULL) {
        printf("Error, could not open file %s", filename);
        return 1;
    }

    while ((buffer_for_next_char = fgetc(filepointer)) != EOF) {  //fgetc increment the pointer of filepoiter till the end of the file
        text[len] = buffer_for_next_char;
        len++;
    }
    for (int i = 0; i < len; i++) {
        printf("%c", text[i]);
    }




    srand(time(NULL));
    return 0;
}