#include <algorithm>
void reverse(char *s) {
    // Your code goes here
    int size = strlen(s);
    for(int i=0; i< size/2; i++)
    swap(s[i], s[size - i -1]);
}