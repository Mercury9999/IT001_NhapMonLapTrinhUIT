#include <iostream>
using namespace std;

int candle(int candles, int makeNew) {
    if (candles < makeNew) return candles;
    return candles - (candles % makeNew) + candle((candles / makeNew + candles % makeNew), makeNew);
}

int main() {
    int candles, makeNew;
    cin >> candles >> makeNew;
    cout << candle(candles, makeNew);
}