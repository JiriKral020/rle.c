#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int main(){
 char str[MAX];
 printf("Enter a String to Compress");
 gets(str);

 char current=str[0]; int count=1;
 for(int i=1; str[i]!='\0';i++)
 {
    if(str[i]==current)
        count++;
    else{
        printf("%c%d",current,count);
        current=str[i];
        count=1;
    }
 }
printf("%c%d",current,count);
return 0;
}
