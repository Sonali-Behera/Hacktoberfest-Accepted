# include <iostream>
# include <cmath>
using namespace std;
int main(){

    int a[] = {1, 2, 3};
    int n = 3;

    for(int i = 0; i < (1 << n); i++){
        for(int j = 0; j < n; j++){
            if(i & (1 << j))
                cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;

}