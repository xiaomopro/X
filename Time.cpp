#include "Time.h"
#include <iomanip>
#include <iostream>

// Ĭ�Ϲ��캯��
Time::Time() {
    hour = 0;
    minute = 0;
    second = 0;
}

// �������Ĺ��캯��
Time::Time(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

// ����ʱ��ĳ�Ա����
void Time::setTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

// ��ʾʱ��ĳ�Ա����
void Time::displayTime() {
    std::cout << "Time: " << std::setw(2) << std::setfill('0') << hour << ":";
    std::cout << std::setw(2) << std::setfill('0') << minute << ":";
    std::cout << std::setw(2) << std::setfill('0') << second << std::endl;
}
