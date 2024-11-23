
#include <stdio.h>
int main() 
{
    char ch; 
    printf("enter character: ");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("\n given character is vowel");
else
    printf("\n given character is consonant");
    

    return 0;
}