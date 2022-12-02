#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
        unsigned int len, result;
        int i, base2;

        if (b == NULL)
                return (0);

	len = 0;
	while (b[len])
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		len++;
	}

        base2 = 1;
        result = 0;
        i = len - 1;
        while (i >= 0)
        {
                if (b[i] == '1')
                {
                        result += base2;
                }
                base2 *= 2;
                i--;
        }
        return (result);
}
