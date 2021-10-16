# include <iostream>

using namespace std;

int main(){

    int n, i;
    cin >> n >> i;

    if(n & (1 << i))
        cout << 1 << endl;
    else cout << 0 << endl;

    return 0;
}