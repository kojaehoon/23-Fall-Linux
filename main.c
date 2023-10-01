#include <stdio.h>
#include <string.h>
#include “copy.h”

#define MAXLINE 100
char line[MAXLINE]; // 입력줄
char longest[MAXLINE]; // 가장긴줄

/*입력줄가운데가장긴줄프린트*/
intmain() {
int len;
intmax;
max = 0;
while (fgets(line, MAXLINE, stdin) != NULL) {
len= strlen(line);
if (len> max) {
max = len;
copy(line, longest);
}
}

if (max > 0) // 입력줄이있었다면
printf("%s", longest);
return 0;
}