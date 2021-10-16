# include <iostream>
using namespace std;

bool getBit(int n, int pos){
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos){
    return (n | (1 << pos));
}

int main(){

    int arr[] = {11,12,13,11,12,13,14,11,12,13};
    int n = 10;
    int ans = 0;

    for(int i = 0; i < 64; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(getBit(arr[j], i))
                cnt++;
        }
       
        if(cnt % 3 != 0){
            ans = setBit(ans,i);
        }

    }

    cout << ans << endl;

    return 0;

}