#include <stdio.h>

void main()
{
    printf(
        "\"Hello World\", input\\output = %%\n" // using backslash we can print ""
        "The \bspaces \bare \berased \b.\n" // "\b" remove one character before it 
        "The words are\roverwritten\n"  // "\r" move the cursor at the start of the line and print the characters
        "Hi There,\n\t This is a new line.\n" // "\n" print move cursor to the next line
        "\aThis is a warning\n"   // "\a" give a small warning or a beep sound
        "Hello\vWorld\n"    // "\v" add a new line and print a tab space 
        "Hello\f World\n"    // "\f" break the page and print the statement on the next page
    );
}