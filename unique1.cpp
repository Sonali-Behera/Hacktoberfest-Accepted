# include <iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,1,2,3};
    int xorSum = 0;

    for(int i = 0; i < 7; i++){
        xorSum = xorSum ^ arr[i];
    }

    cout << xorSum << endl;

    return 0;

}