#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // mutex for critical section
bool isCountUpDone = false; // flag to indicate when counting up is done

void countUp() {
    for (int i = 0; i <= 20; ++i) {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Count Up: " << i << std::endl;
    }
    isCountUpDone = true; // set the flag to true after counting up
}

void countDown() {
    while (!isCountUpDone); // busy-wait until counting up is done

    for (int i = 20; i >= 0; --i) {
        std::lock_guard<std::mutex> lock(mtx);
        std::cout << "Count Down: " << i << std::endl;
    }
}

int main() {
    std::thread t1(countUp);
    std::thread t2(countDown);

    t1.join();
    t2.join();

    return 0;
}
