#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "CaseTool.h"


int main(int argc, char *argv[])
{

    char s[100];

    while(fgets(s,100,stdin)!= 0)
    {
        if (argc != 2)
        {

            makeUpper(s);

        }else{

            switch(argv[1][1])
            {
            case 'u' :
            case 'U' :
                makeUpper(s);
                break;

            case 'l' :
            case 'L' :
                makeLower(s);
                break;

            case 'c' :
            case 'C' :
                makeChange(s);
                break;

            case 'n' :
            case 'N' :
                makeName(s);
                break;
            default :
                makeUpper(s);
                break;

            }

        }

        printf("%s",s);
    }

    return 0;
}
