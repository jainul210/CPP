// write a program to find the largest number from the given array
#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,5,56,47,84,8,497,43};
    int length = sizeof(arr) / sizeof(arr[0]);
   int max_val = arr[0];
    
    for (int i = 1; i < length; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
        cout << "The largest number is: " << max_val << endl;
    
    return 0;
}