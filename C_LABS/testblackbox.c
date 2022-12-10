
#include <stdio.h>
#include <string.h>


int main()
{

char* StrWord="racecar1";
int wordLength = strlen(StrWord);
for (int i=0;i<(wordLength/2);i++) {
    if (StrWord[i] != StrWord[wordLength-i-1]) {

        printf("Shit! This is not pelindrome string!\n");


        return 0;
    }
}
printf("Wow! This is pelindrome string!\n");

return 1;

}


