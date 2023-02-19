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

printf("sizeof a  char is : %d byte(s)\n", sizeof(char));
printf("sizeof an int  is : %d byte(s)\n", sizeof(int));
printf("sizeof a  float is : %d byte(s)\n", sizeof(float));
printf("sizeof a  long int is : %d byte(s)\n", sizeof(long int));
printf("sizeof a  long long int is : %d byte(s)\n", sizeof(long long int));
	return (0);

}
