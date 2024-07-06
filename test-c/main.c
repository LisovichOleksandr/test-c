/* test-c -- git education
Lisovich 06.07.2024
*/

#include <stdio.h>
#define YEAR 1989
#define A 140

int main()
{
    int p = 0;
    for(int i = 1; i < A+1; i++)
    {
        if ((p++)%6 == 0)
            puts("");
        printf("| %4d  age %3d ", YEAR + i, i);
    }

    return 0;
}
