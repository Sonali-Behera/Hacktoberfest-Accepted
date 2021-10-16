# include <iostream>
using namespace std;

bool setBitCheck(int n, int pos){

    return ((n & (1 << pos)) != 0);

}

int main(){

    int arr[] = {2, 4, 6, 7, 4, 5, 6, 2};

    int xorsum = 0;

    for(int i = 0; i < 8; i++)
        xorsum = xorsum ^ arr[i];
    
    int setBit = 0;
    int pos = -1;
    int tempxor = xorsum;

    while(setBit != 1){

        setBit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;

    }
    
    int newxor = 0;

    for(int i = 0; i < 8; i++){
        if(setBitCheck(arr[i], pos)){
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << endl;

    cout << (tempxor ^ newxor) << endl;

    return 0;

}