// Write a program to reverse the given number
# include <iostream>
using namespace std;
int main(){
    int a = 4796;
    int d = 0;
    while (a!=0){
        int c = a%10;
        d = (d*10) + c;
        a = a/10;

    }
    cout << d;
    return 0;
}