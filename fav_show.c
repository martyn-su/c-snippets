/* Nested for loops to compare data values. The program asks you to provide the number of movies you
have watched. It then loops as many times asking for the name of each movie and a corresponding
rating from you. Finally, it reports your favorite and worst movies with their respective ratings */



#include "stdio.h"
#include "string.h"

int main()
{
    int rating, seen, bestR, worstR, count;
    char favorite[40], worst[40], movie[100];

    printf("\n");
    printf("I will rate your movie\n");
    printf("How many movies have you seen this year? ");
    scanf("%d", &seen);
    while (seen < 1)
    {
        printf("You haven't entered a realistic number dude");
        printf("Enter the number of movies again? ");
        scanf("%d", &seen);
    }
    bestR = 0;
    worstR = 10;
    for (count = 0; count < seen; count++)
    {
        printf("\n");
        printf("Enter movie name, short names please: ");
        scanf("%s", movie);
        printf("On a scale of 0-10, how would you rate it?");
        scanf(" %d", &rating);
        printf("\n");

        if (rating > bestR)
        {
            strcpy(favorite, movie);
            bestR = rating;
        }
        if (rating < worstR)
        {
            strcpy(worst, movie);
            worstR = rating;
        }
    }

    printf("Your new favorite movie is %s which you rate at %d.\n", favorite, bestR);
    printf("Your worst movie is %s which you rate at %d.\n", worst, worstR);
    printf("\n");
    return 0;
}