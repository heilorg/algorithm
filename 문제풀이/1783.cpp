#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int y, x;
    cin >> y >> x;
    
    if(x >= 7 && y >= 3){
        cout << (x - 2); // 5¹ø ÀÌ»ó
    }else if(y >= 3){
        cout << min(4, x);
    }else if(y == 2){
        cout << min(4, (x + 1) / 2);
    }else if(x == 1 || y == 1){
        cout << 1;
    }
    
}
