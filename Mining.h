#ifndef __MINING_H__
#define __MINING_H__
#include <string>
using namespace std;

class Mining{
    public:
        string command; 
        string address;

        int runBitcoinECC();
        void inputAddress();
        int mining();
};

#endif