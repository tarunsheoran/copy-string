
#include <string.h>
int main() {
char s1[] ="Tarun";
char s2[] = "_Sheoran";
char s3[54];

strcpy(s3, strcat(s1, s2));
puts(s3);

return 0;
} 