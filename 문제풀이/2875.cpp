#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int count = 0;
    for(;;){
        if(n < 2)break;
        if(m < 1)break;
        
        n -= 2;    
        m -= 1;
        count++;
    }
    k -= n + m;
    
    for(;;){
        if(k <= 0)break;
        
        count -= 1;
        k -= 3;
    }
    
    cout << count;
}
