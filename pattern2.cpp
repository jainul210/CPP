# include <iostream>
using namespace std;
int main(){
    int n = 3;
    int num = 1;
    for(int j = 1; j<=n; j++) {

        for (int i = 0; i<n; i++){
            cout << num;
            num++;
        }
        cout << endl;
    }
    
    
    return 0;
}