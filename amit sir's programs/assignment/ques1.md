## Create a dictionary

```
#include <stdio.h>
#include <string.h>

int main() {
    // Define a struct for each dictionary entry
    struct {
        char word[50];
        char meaning[200];
        char synonyms[100];
        char antonyms[100];
    } dictionary[10]; 

    int wordCount = 10; 
    char searchWord[50];
strcpy(dictionary[0].word, "happy");
strcpy(dictionary[0].meaning, "feeling or showing pleasure");
strcpy(dictionary[0].synonyms, "joyful");
strcpy(dictionary[0].antonyms, "sad");

strcpy(dictionary[1].word, "run");
strcpy(dictionary[1].meaning, "move at a speed faster than a walk");
strcpy(dictionary[1].synonyms, "sprint");
strcpy(dictionary[1].antonyms, "stop");

strcpy(dictionary[2].word, "bright");
strcpy(dictionary[2].meaning, "giving out or reflecting a lot of light");
strcpy(dictionary[2].synonyms, "shining");
strcpy(dictionary[2].antonyms, "dim");

strcpy(dictionary[3].word, "calm");
strcpy(dictionary[3].meaning, "not showing or feeling nervousness");
strcpy(dictionary[3].synonyms, "peaceful");
strcpy(dictionary[3].antonyms, "agitated");

strcpy(dictionary[4].word, "strong");
strcpy(dictionary[4].meaning, "having the power to move heavy weights or perform other physically demanding tasks");
strcpy(dictionary[4].synonyms, "powerful");
strcpy(dictionary[4].antonyms, "weak");

strcpy(dictionary[5].word, "soft");
strcpy(dictionary[5].meaning, "easy to mold, cut, compress, or fold; not hard or firm to the touch");
strcpy(dictionary[5].synonyms, "smooth");
strcpy(dictionary[5].antonyms, "hard");

strcpy(dictionary[6].word, "quick");
strcpy(dictionary[6].meaning, "moving fast or doing something in a short time");
strcpy(dictionary[6].synonyms, "fast");
strcpy(dictionary[6].antonyms, "slow");

strcpy(dictionary[7].word, "smart");
strcpy(dictionary[7].meaning, "having or showing a quick-witted intelligence");
strcpy(dictionary[7].synonyms, "intelligent");
strcpy(dictionary[7].antonyms, "dull");

strcpy(dictionary[8].word, "brave");
strcpy(dictionary[8].meaning, "ready to face and endure danger or pain");
strcpy(dictionary[8].synonyms, "courageous");
strcpy(dictionary[8].antonyms, "cowardly");

strcpy(dictionary[9].word, "ancient");
strcpy(dictionary[9].meaning, "belonging to the very distant past and no longer in existence");
strcpy(dictionary[9].synonyms, "old");
strcpy(dictionary[9].antonyms, "modern");

    printf("Enter a word to search: ");
    scanf("%s", searchWord);

    int f = 0;  
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(dictionary[i].word, searchWord) == 0) {
            printf("Word: %s\n", dictionary[i].word);
            printf("Meaning: %s\n", dictionary[i].meaning);
            printf("Synonyms: %s\n", dictionary[i].synonyms);
            printf("Antonyms: %s\n", dictionary[i].antonyms);
            f = 1;
            break;
        }
    }

    if (f!=1) {
        printf("Word '%s' not found in dictionary.\n", searchWord);
    }

    return 0;
}
```
