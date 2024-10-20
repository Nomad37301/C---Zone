#include <stdio.h>
int main() {
int text[] = {
'A','K','U','C','I','N','T','A','P','R','A','K','T','I','K'
,'U','M' };
int result[17];
for (int i = 16; i >= 0; i--) {
result[i] = text[16 - i];
}
for (int i = 16; i >= 0; i--) {
printf("-%c", result[i]);
}
return 0;
}

