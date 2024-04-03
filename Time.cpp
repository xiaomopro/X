#include "Time.h"
#include <iomanip>
#include <iostream>

// 默认构造函数
Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

// 带参数的构造函数
Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

// 设置时间的成员函数
void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

// 显示时间的成员函数
void Time::displayTime() {
    std::cout << "Time: " << std::setw(2) << std::setfill('0') << hour << ":";
    std::cout << std::setw(2) << std::setfill('0') << minute << ":";
    std::cout << std::setw(2) << std::setfill('0') << second << std::endl;
}
