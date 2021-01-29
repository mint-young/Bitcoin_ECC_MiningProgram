/*
Writer : Ha-young Park mintyoungs2@gmail.com
This program is for mining of Bitcoin-ECC.
*/

#include "Mining.h"


int main(int argc, char *argv[]){
    Mining m;
    m.runBitcoinECC();
    m.inputAddress();
    m.mining();
       
    return 0;
}