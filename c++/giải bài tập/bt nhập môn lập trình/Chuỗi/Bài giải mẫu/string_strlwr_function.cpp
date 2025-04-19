#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
void charlwr(char &a){
    if(a >= 'A' && a <= 'Z')
        a = a + 32;
}
void my_strlwr(char s[]){
    for(int i=0; i<strlen(s); i++)
        charlwr(s[i]);

}
int main(){
    char s[100];
    cout << "nhap vao 1 chuoi ki tu hoa: ";
    fgets(s,sizeof(s),stdin);
    s[strlen(s)-1] = '\0';
    my_strlwr(s);
    cout << "chuoi sau khi bien doi ki tu hoa thanh thuong la: " << s << endl;
    
    return 0;
}