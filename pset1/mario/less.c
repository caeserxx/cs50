#include <cs50.h>
#include <stdio.h>

void pyramid(int h);

int main(void)
{
    int h = get_int("Height is: ");
    pyramid(h);
}

void pyramid(int r)
{
    for (int i = 0; i < r; i++)
    {
	    for (int c = 0; c < r; c++)
        {
            if (i>=c )

                printf("#");
        }
        printf("\n");
    }
}
