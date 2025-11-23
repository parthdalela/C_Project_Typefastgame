#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define SENTENCE_COUNT 3
#define MAX_LEN 200

// Function to calculate words typed
int countWords(const char *str) {
    int count = 0;
    int inWord = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }
    return count;
}

int main() 
{
    char sentences[SENTENCE_COUNT][MAX_LEN] = 
    {
        "The quick brown fox jumps over the lazy dog.",
        "Typing speed tests are fun and challenging.",
        "C programming builds logic and problem solving skills.",
        "Speed and accuracy makes a great typist",
        "Debugging is twice as hard as writing the code"
    };

    srand(time(NULL));
    int choice = rand() % SENTENCE_COUNT;

    printf("Type this sentence:\n\n%s\n\n", sentences[choice]);

    char input[MAX_LEN];
    clock_t start, end;

    // Start timer
    start = clock();
    fgets(input, MAX_LEN, stdin);
    end = clock();

    // Calculate time taken
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Accuracy check
    int correct_chars = 0;
    for (int i = 0; i < strlen(sentences[choice]); i++) {
        if (input[i] == sentences[choice][i]) {
            correct_chars++;
        }
    }

    int total_words = countWords(input);
    double wpm = (total_words / time_taken) * 60;

    printf("\nTime taken: %.2f seconds", time_taken);
    printf("\nWords typed: %d", total_words);
    printf("\nSpeed: %.2f WPM", wpm);
    printf("\nAccuracy: %.2f%%\n", (correct_chars * 100.0) / strlen(sentences[choice]));

    return 0;
}