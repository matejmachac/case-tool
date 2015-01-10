#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "CaseTool.h"

void makeLower(char *s)
{
    int i;

        for(i=0; s[i]; i++)
        {
            s[i]=(tolower(s[i]));
        }
}


void makeUpper(char *s)
{
    int i;

        for(i=0; s[i]; i++)
        {
            s[i]=(toupper(s[i]));
        }
}

void makeChange(char *s)
{
    int i;

        for(i = 0; s[i]; i++)
        {
            if (islower(s[i]))
            {
                s[i] = (toupper(s[i]));
            }

            if (isupper(s[i]))
            {
                s[i] = (tolower(s[i]));
            }
        }
}

void makeName(char *s)
{
    int i;


        for(i = 0; s[i]; i++)
        {
            if(i == 0)
            {
                s[i] = (toupper(s[i]));
            }
            else
            {
                s[i] = (tolower(s[i]));
            }
        }
}
