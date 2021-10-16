# include <iostream>
using namespace std;

int main(){

    int n, pos, value;
    cin >> n >> pos >> value;

    int mask = ~(1 << pos);
    n = n & mask;

    cout << (n | (value << pos)) << endl;

    return 0;
}