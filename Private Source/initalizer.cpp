#include "initalizer.hpp"

#include "render.hpp"
#include "settings.hpp"

#include "driver.hpp"
#include "vdm_ctx/vdm_ctx.hpp"
#include "drv_image/drv_image.hpp"

#include <Windows.h>
#include <Uxtheme.h>
#include <dwmapi.h>

#include <iostream>
#include <iomanip>
#include <ctime>
#include <thread>

using namespace std;

void cr3_loop()
{
    for (;;)
    {
        mem::fetch_cr3();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
}


bool initialize() {

    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    // initialize dll import hooks
    Star_Mouse();
    // set the process id to Fortnite
    if (FindWindowA_Spoofed(0, "Fortnite  "))
        mem::process_id = mem::find_process("FortniteClient-Win64-Shipping.exe");

    // load our driver
  //  load_driver();

    // check if the driver is found
    if (!mem::find_driver()) 
    {
        SetConsoleTextAttribute(h, 5);
        std::cout << "[";
        SetConsoleTextAttribute(h, 15);
        std::cout << "+";
        SetConsoleTextAttribute(h, 5);
        std::cout << "]";

        SetConsoleTextAttribute(h, 15);
        std::cout << " Driver wasn't found. Contact support in the server for more information." << std::endl;
    }

    // sigma rizz balls
    SetConsoleTextAttribute(h, 5);
    std::cout << "[";
    SetConsoleTextAttribute(h, 15);
    std::cout << "+";
    SetConsoleTextAttribute(h, 5);
    std::cout << "]";

    SetConsoleTextAttribute(h, 15);
    std::cout << " Press ENTER to start cheat initialization. (IN LOBBY)\n";
   // 
    //std::cin.get();
    //cin.get();
    system("pause");

    SetConsoleTextAttribute(h, 5);
    std::cout << "\n[";
    SetConsoleTextAttribute(h, 15);
    std::cout << "+";
    SetConsoleTextAttribute(h, 5);
    std::cout << "]";
    SetConsoleTextAttribute(h, 15);
    std::cout << " Starting cheat initialization.." << std::endl;

    // check if the driver was correctly loaded
   // if (util::get_module_base("mlx4_bus.sys")) 
    {
        while (true)
        {
            uintptr_t base_address = mem::find_image();
         //   uintptr_t cr3 = mem::fetch_cr3();
            std::thread([&]() { for (;;) { cr3_loop(); } }).detach();
            settings::caching::base_address = base_address;

            render();
        }
    }

    system("cls");

    return true;
}