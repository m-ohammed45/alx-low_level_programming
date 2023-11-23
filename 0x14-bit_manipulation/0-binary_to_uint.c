#include <stdio.h>
#include "main.h"
/**
 *binary_to_uint-convert abinary number to an unsigned int
 * @b: char string
 * Return:converted decimal number or 0
 */

unsigned int binary_to_uint(const char *b) {
        unsigned int akron, power;
        int bex;

if (b == NULL) {
        return 0;
    }
for (bex = 0; b[bex]; bex++)
{
        if(b [bex]!='0'&& b[bex] != '1')
                        return (0);

}

 for(power = 1, akron = 0, bex--; bex >= 0; bex--,power *= 2)
{
        if (b[bex] == '1')
                akron += power;
}

return (akron);

}
