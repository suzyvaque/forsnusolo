#include <iostream>
#include <stdio.h>
#include "SerialClass.h"	// Library described above
#include <string>

// TODO 1. Get rid of \n
// TODO 2. Re-arrange format

// https://github.com/dmicha16/simple_serial_port

int main(){

    printf("STARTING...\n\n");

    Serial* SP = new Serial("\\\\.\\COM4");    // adjust as needed
    if (SP->IsConnected()){printf("COM CONNECTED.\n\n");}

    char incomingData[256] = "";			// pre-allocate memory
    int dataLength = 255;
    int readResult = 0;

    while(SP->IsConnected()){

        readResult = SP->ReadData(incomingData,dataLength);
        // printf("Bytes read: (0 means no data available) %i\n",readResult);

        incomingData[readResult] = 0;

        if(readResult!=0) {
            printf("%s\n",incomingData);
        }

        // Sleep(500);// deleted for real time connection
    }

    return 0;
}