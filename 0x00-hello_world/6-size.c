#include <stdio.h>
/**
 *size off - checker
 *
 *Main entry point
 *
 *Return always 0 (success)
 */

main()

{
	char           ch = ' ';
	int            int_num = 0;
	float          flt_num = 0.0f;
	long int       long_int_num = 0;
	long long int  long_long_int_num = 0;

printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);

}
