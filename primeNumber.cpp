// Check if a number is prime or not
# include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number";
    cin >> n;
    int i = 2;
    bool isPrime = true;
    while(i*i<=n) {
        if (n%i==0){
            isPrime = false;
            break;
        }
        i+=1;    

    }
    if (isPrime==true){

            cout << "The given number is Prime number \n";
    }else{
            cout << "The given number is NOT Prime number \n";
         
        }
    return 0;
}