#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    float letters = 0;
    float words = 0;
    float sentences = 0;
    string paragraph = get_string("Type a Paragraph:");
    int n = strlen(paragraph);
    for (int i = 0; i < n; i++)
    {
        if ((paragraph[i] >= 'A' && paragraph[i] <= 'Z') ||
            (paragraph[i] >= 'a' && paragraph[i] <= 'z'))
        {
            letters++;
        }
        else if (paragraph[i] == ' ')
        {
            words++;
        }
        else if ((paragraph[i] == '!') || (paragraph[i] == '.') || (paragraph[i] == '?'))
        {
            sentences++;
        }
        else
        {
        }
    }
    words += 1;
    float L = ((letters / words) * 100);
    float S = ((sentences / words) * 100);
    float index = ((0.0588 * L) - (0.296 * S) - (15.8));
    index = round(index);
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
        printf("Grade %d\n", (int) index);
}
