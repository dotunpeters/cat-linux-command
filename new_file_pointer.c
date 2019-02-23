//include the cs50.h header file where function "get_string" exist
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //get file name from user input
    //use a sample file i include called "student.csv"
    string file = get_string("input file name: ");
    FILE*ptr = fopen(file, "r");
    char ch = fgetc(ptr);

    //iterate through each character of the file
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(ptr);
    }
}