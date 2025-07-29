#include <stdio.h>
int main() {
char ch;
printf("enter ch value");
scanf(" %c", &ch);
if (ch>='A' && ch <= 'Z'){
    printf("the given character is %c", ch+32);

}
else if (ch>= 'a'&& ch<= 'z') {
    printf("the given character is %c", ch-32);
}
else {
    printf("it is not a valid character");
}
return 0;
}
