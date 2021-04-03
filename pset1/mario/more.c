#include <cs50.h>
#include <stdio.h>

int get_height(string prompt);
void pyramid(int h);

int main(int argc, string argv[])
{
    int h = get_int("Height is: ");
    pyramid(h);
}

void pyramid(int r)
{
    for (int i = 0; i < r; i++)
    {
       for (int col = 0; col < r * 2 + 2; col++)
        {
            if (col + i < (r - 1))
                printf(" ");
            else if ((col == r || col == r + 1))
                printf(" ");
           else if (col - i >= r + 3)
                printf("");
            else
                printf("#");
        }
        printf("\n");
    }
}
