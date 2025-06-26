#include <unistd.h>

int main (int arc, char argv)
{
if(int arc != 2)
{
write(1, "a\n", 2)
return (0);
}
char str = argv[1];
while(str)
{
if(str == 'a')
{
write(1, "a\n", 2);
return (0);
}
str ++;
}
write(1, "a\n", 2);
return (0);
}
