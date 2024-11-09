## Create a dictionary

```
#include <stdio.h>
#include <string.h>

int main() {
    // Define a struct for each dict entry
    struct {
        char word[50];
        char meaning[200];
        char synonyms[100];
        char antonyms[100];
    } dict[10]; 
    char str[50];

    
strcpy(dict[0].word, "happy");
strcpy(dict[0].meaning, "feeling or showing pleasure");
strcpy(dict[0].synonyms, "joyful");
strcpy(dict[0].antonyms, "sad");

strcpy(dict[1].word, "run");
strcpy(dict[1].meaning, "move at a speed faster than a walk");
strcpy(dict[1].synonyms, "sprint");
strcpy(dict[1].antonyms, "stop");

strcpy(dict[2].word, "bright");
strcpy(dict[2].meaning, "giving out or reflecting a lot of light");
strcpy(dict[2].synonyms, "shining");
strcpy(dict[2].antonyms, "dim");

strcpy(dict[3].word, "calm");
strcpy(dict[3].meaning, "not showing or feeling nervousness");
strcpy(dict[3].synonyms, "peaceful");
strcpy(dict[3].antonyms, "agitated");

strcpy(dict[4].word, "strong");
strcpy(dict[4].meaning, "having the power to move heavy weights or perform other physically demanding tasks");
strcpy(dict[4].synonyms, "powerful");
strcpy(dict[4].antonyms, "weak");

strcpy(dict[5].word, "soft");
strcpy(dict[5].meaning, "easy to mold, cut, compress, or fold; not hard or firm to the touch");
strcpy(dict[5].synonyms, "smooth");
strcpy(dict[5].antonyms, "hard");

strcpy(dict[6].word, "quick");
strcpy(dict[6].meaning, "moving fast or doing something in a short time");
strcpy(dict[6].synonyms, "fast");
strcpy(dict[6].antonyms, "slow");

strcpy(dict[7].word, "smart");
strcpy(dict[7].meaning, "having or showing a quick-witted intelligence");
strcpy(dict[7].synonyms, "intelligent");
strcpy(dict[7].antonyms, "dull");

strcpy(dict[8].word, "brave");
strcpy(dict[8].meaning, "ready to face and endure danger or pain");
strcpy(dict[8].synonyms, "courageous");
strcpy(dict[8].antonyms, "cowardly");

strcpy(dict[9].word, "ancient");
strcpy(dict[9].meaning, "belonging to the very distant past and no longer in existence");
strcpy(dict[9].synonyms, "old");
strcpy(dict[9].antonyms, "modern");

    printf("Enter a word to search: ");
    scanf("%s", str);

    int f = 0;  
    for (int i = 0; i < 10; i++) {
        if (strcmp(dict[i].word, str) == 0) {
            printf("Word: %s\n", dict[i].word);
            printf("Meaning: %s\n", dict[i].meaning);
            printf("Synonyms: %s\n", dict[i].synonyms);
            printf("Antonyms: %s\n", dict[i].antonyms);
            f = 1;
            break;
        }
    }

    if (f!=1) {
        printf("Word '%s' not found in dict.\n", str);
    }

    return 0;
}
```
