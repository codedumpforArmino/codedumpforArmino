#include <stdio.h>
#include <string>
#include <algorithm>

int main()
{
    int CorrectLetters;
    int similarity;
    int inputWord;
    bool isValid[17]; std::fill_n(isValid, 17, true); //set all values in isValid to true
    char Valid_Words[17][8] = {
    "VICTIMS",
    "DEALING",
    "REALIZE",
    "DECLINE",
    "REFUSES",
    "SEALING",
    "VEGGIES",
    "FISHING",
    "FEARING",
    "RATIONS",
    "PILLOWS",
    "DOLLARS",
    "HEALING",
    "REMAINS",
    "COUSINS",
    "HELPING",
    "OFFLINE"
    };

    
    do
    {
        //display
        printf("Word Selection:\n");
        for (int x = 0; x < 17; x++)
        {
            if (isValid[x] == true)
                printf("[%d] %s \n", x, Valid_Words[x]);
        }
            
        printf("Selected Word: ");
        scanf("%d", &inputWord);
        printf("Correct letters: ");
        scanf("%d", &CorrectLetters);

        //process
        for (int x = 0; x < 17; x++)
        {
            similarity = 0; //reset similarity for each
            //check similarity
            for (int indexLetter = 0; indexLetter < 7; indexLetter++)
            {
                if (Valid_Words[x][indexLetter] == Valid_Words[inputWord][indexLetter]) //compare each letter with all words
                    similarity++;
            }
            if (similarity != CorrectLetters)
                isValid[x] = false;
        }

    } while (CorrectLetters != 7);
    
}