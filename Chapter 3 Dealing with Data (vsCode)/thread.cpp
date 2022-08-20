#include <iostream>
#include <thread>

static bool s_Finished = false;

void doWork()
{
    using namespace std::literals::chrono_literals;

    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

    while (!s_Finished)
    {
        std::cout << "Working...\n";
        std::this_thread::sleep_for(1s);
    }
    
}

int main()
{
    std::thread worker(doWork);

    std::cin.get();
    s_Finished = true;
    
    worker.join();
    
    std::cout << "Thread been finished." << '\n';
    std::cout << "Started thread id = " << std::this_thread::get_id() << std::endl;

    return 0;
}