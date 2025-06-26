#include <stdio.h>


int main()
{
int i = 0;
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
while (str[i]){
	i++;
}
printf("Length of the string is: %d\n", i);
printf("String is: %s\n", str);
return 0;
}