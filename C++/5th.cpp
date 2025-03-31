#include <iostream>
using namespace std;
int main(){
    int n = 3000;
    int sum = 0;

    for(int i= 1; i <= n; i++ )
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}