#include <stdio.h>

void writeEvenNumbers(int limit) {
    FILE *writer;
    writer = fopen("/tmp/evennumbers.txt", "w+");
    for (int i; i <= limit; i++) {
        if(i / 2 == 0) fprintf(writer, "%d\n", i);
    }
    fclose(writer);   
}

void readFile() {
    FILE *reader;
    char c;
    reader = fopen("/tmp/evennumbers.txt", "w+");
    while ((c = getc(reader)) != EOF) putchar(c);
    fclose(reader);
}

int main() {
    writeEvenNumbers(100);
    readFile();
    return 0;
}