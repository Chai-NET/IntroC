#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_to_read = fopen("sometext.txt", "r");
    FILE *file_to_write = fopen("newtext.txt", "a");

    // a for append
    // r for read
    // w for write
    // more information at:
    // geeksforgeeks.org/c-fopen-function-with-examples/?ref=lbp

    if (file_to_read == NULL || file_to_write == NULL) 
    {
        printf("One file wouldn't open! \n");
        return -1;

    }
    char c;
    // Replaces all the '.' caracters with the '!' character
    while ((c=fgetc(file_to_read)) != EOF) 
    {
        if (c == '.') 
        {
            c = '!';
        }
        fputc(c, file_to_write);
    }
    fclose(file_to_write);  
    fclose(file_to_read);
}