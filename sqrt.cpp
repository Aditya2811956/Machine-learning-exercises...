#include<iostream>
using namespace std;
int main(){
    int x=7;
    if(x==0)return 0;
    for (long i = 1; i <= x; i++) {
        if (i * i == x) {
            cout<< i;
        }
        if (i * i > x) {
            cout<< i - 1;                
            break;
        }
    }
    return -1;
}