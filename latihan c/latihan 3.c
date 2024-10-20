#include <stdio.h>
char text[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
'I', 'J'};
int i = 10;
int main() {
while (--i) {
if (i % 2)
printf("%c", text[i]);
else
printf("%c", text[i + 1]);
}
}

