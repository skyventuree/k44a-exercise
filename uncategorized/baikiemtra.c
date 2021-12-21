// Bai kiem tra so 2
// Dang Le Anh K44A

#include <stdio.h>
#include <string.h>

void countVowel(char *input)
{
    int count = 0, vowels = 0;
    char c;
    while(input[count] != '\n') {
        c = input[count];
        if(c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U') vowels++;
        count++;
    }
    printf("Trong string co %d phu am la ki tu hoa.\n", vowels);
}

void stringInverse(char *input, int m)
{
    char final[100];
    char* input_chopped = input + m; 
    strncpy(final, input, m);
    
    printf("Ket qua chuyen: %s%s", input_chopped, final);
}

int main()
{
    char str[100];
    printf("Nhap string: ");
    fgets(str, 100, stdin);
    countVowel(str);
    stringInverse(str, 4);
    return 0;
}
