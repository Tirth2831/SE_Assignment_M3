/*
2.9 C Program to Check Uppercase or Lowercase or Digit or Special Character.
*/
#include <stdio.h>
main()
{
    char ch;

    printf("\n\n\t Enter a character: ");
    scanf("%c",&ch);

    if (ch>='A' && ch<='Z') 
        printf("\n\n\t Uppercase : %c",ch);
    else if (ch>='a' && ch<='z')
        printf("\n\n\t Lowercase : %c ",ch);
    else if(ch>='0' && ch<='9')
        printf("\n\n\t Digit : %c ",ch);
    else
        printf("\n\n\t Special character : %c ", ch);

}
