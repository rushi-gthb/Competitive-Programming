#include <bits/stdc++.h>
using namespace std;

// AND
// 0 & 0 = 0
// 1 & 0 = 0
// 0 & 1 = 0
// 1 & 1 = 1
int getAND(int x, int y) {
    return (x & y);
}

// OR
// 0 | 0 = 0
// 1 | 0 = 1
// 0 | 1 = 1
// 1 | 1 = 1
int getOR(int x, int y) {
    return (x | y);
}

// XOR
// 0 ^ 0 = 1
// 1 ^ 0 = 0
// 0 ^ 1 = 0
// 1 ^ 1 = 1
int getXOR(int x, int y) {
    return (x ^ y);
}

// NOT
// ~0 = 1
// ~1 = 0
int getNOT(int x) {
    return (~x);
}

// LEFT SHIFT
// (x << y) = x * (2^y);
int getLEFTSHIFT(int x, int y) {
    return (x << y);
}

// RIGHT SHIFT
// (x >> y) = x / (2^y);
int getRIGHTSHIFT(int x, int y) {
    return (x >> y);
}

int main() {
    getNOT();
    return 0;
}