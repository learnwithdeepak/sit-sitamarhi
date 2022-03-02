#include <stdio.h>
int main() {
    char V;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet character : ");
    scanf("%c", &V);

    // if V is a lowercase vowel
    lowercase_vowel = (V == 'a' || V == 'e' || V == 'i' || V == 'o' || V == 'u');

    // if V is a uppercase vowel
    uppercase_vowel = (V == 'A' || V == 'E' || V == 'I' || V == 'O' || V == 'U');

    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel character.", V);
    else
        printf("%c is a consonant character.", V);
    return 0;
}

// Progrma to check a Character is VOWEL or CONSONANT
// Alll codes written by Deepak an tested in VS CODE
