#include <iostream>

using namespace std;

int main() {
    int money, coin = 100, count = 0;
    cin >> money;
    money = 1000 - money;
    while(money != 0){
        if(money >= coin * 5){
            count++;
            money -= coin * 5;
        }
        count += money / coin;
        money = money % coin;
        coin /= 10;
    }
    
    cout << count;
}
