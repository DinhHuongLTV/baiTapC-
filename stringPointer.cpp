// ? con trỏ với xâu ký tự

#include <iostream>
#include <string.h>

int main(void) {
    // TH1:
    char s[20] = "hello";
    char *t = s;

    // TH2: s1 và t1 sử dụng chung bộ nhớ chứa từ "hello"
    char *s1, *t1;
    strcpy(s1, "hello");
    t1 = s;

    // TH3: s2 được cấp phát 1 vùng nhớ riêng, do đó t2 và s2 sẽ không dùng chung vùng nhớ nữa 
    // nên phải cấp phát cho t2 riêng 
    char *s2 = new char[20], *t2;
    strcpy(s2, "hello");
    t2 = new char[20];
    strcpy(t2, s2);
    
    return 0;
}