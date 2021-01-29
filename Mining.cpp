#include <iostream>
#include <unistd.h> 
#include <string>
#include "Mining.h"


int Mining::runBitcoinECC(){
    system("cd ~");
    system("bitcoind -txindex -daemon");

    cout<<"Wait for loading blocks."<<endl;
    sleep(20); 

}

void Mining::inputAddress(){
try
    {
        cout<<"Enter the address to get reward coins"<<endl;
        cin>>address;

        

        if(address.length() != 34 || address.empty()){
            throw -1;
        }
        
    }
    catch(...)
    {
        cout<<"Enter valid address."<<endl;
        Mining::inputAddress();
    }
}

int Mining::mining(){
    cout<<"Start mining."<<endl; 
    cout<<"If you want to stop mining, then enter ctrl + z."<<endl;
    command = "bitcoin-cli generatetoaddress 1 ";
    string temp = command + address;

    try{
        while(true){
            system(temp.c_str());

        }

        throw -1;
    }catch(...){
        cout<<"Error occurs."<<endl;
        cout<<"Mining is stopped."<<endl;
        return 0;
       
    }

}



