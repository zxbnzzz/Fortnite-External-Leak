// entrypoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include <Windows.h>
#include <string>
#include <thread>

#include "initalizer.hpp" 
#include "Flux/flux.hpp"


//std::string get_hwid() {
//    DWORD volumeSerialNumber;
//
//    if (!GetVolumeInformation("C:\\", NULL, 0, &volumeSerialNumber, NULL, NULL, NULL, 0)) {
//        throw std::runtime_error("Failed to get HWID");
//    }
//
//    std::string hwid = std::to_string(volumeSerialNumber);
//    return hwid;
//}



int main()
{

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    D3DX11CreateShaderResourceViewFromMemory();
    Sleep(1000);
    std::string license;
    SetConsoleTextAttribute(h, 5);
    std::cout << "[";
    SetConsoleTextAttribute(h, 15);
    std::cout << "+";
    SetConsoleTextAttribute(h, 5);
    std::cout << "]";

    SetConsoleTextAttribute(h, 15);


    initialize();

    return 0;
}