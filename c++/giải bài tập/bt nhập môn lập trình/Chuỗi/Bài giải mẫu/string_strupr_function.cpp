#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

// char charupr(char &a){
//     if(a >= 'a' && a <= 'z')
//         a = a - 32;
//     return a;
// }
// char* my_strupr(char s[]){
//     char new_s[strlen(s)], *p = new_s;
//     for(int i=0; i<strlen(s); i++)
//         new_s[i] = charupr(s[i]);
//     return p;
// }
void charupr(char &a){
    if(a >= 'a' && a <= 'z')
        a = a - 32;
}
void my_strupr(char s[]){
    for(int i=0; i<strlen(s); i++)
        charupr(s[i]);
}
int main(){
    char s[100], s1[100];
    Cout << "nhap vao 1 chuoi ki tu: ";
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1] = '\0';
    my_strupr(s);
    strcpy(s1, s);
    printf("chuoi goc ban dau %s\nchuoi sau khi xu ly %s\n",s,s1);
}