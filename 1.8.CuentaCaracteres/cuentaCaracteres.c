#include <stdio.h>

main()
{
    int linebreak = 0, tabulators = 0, blankSpace = 0, character;

    for(long i = 0; (character = getchar()) != EOF; i++)
    {
        if(character == '\n')
            ++linebreak;
        else if(character == '\t')
            ++tabulators;
        else if(character == ' ')
            ++blankSpace;
    }

    printf("salto de linea: %d, tabuladores: %d, espacion en blanco: %d", linebreak, tabulators, blankSpace);
}