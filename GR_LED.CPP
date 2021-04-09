/*  Gr_Led.cpp
　　2021/4/9   
    ディジタル出力確認プログラム(STM32F303K8)
*/

#include "mbed.h"

DigitalOut  Grled_(LED1);               // LED1, PB_3, D13
Serial      Pc_(SERIAL_TX,SERIAL_RX);   // TX:SERIAL_TX, PA_2
                                        // RX:SERIAL_RX, PA_15

int main() {
    int cnt = 1;
    while(1) {
        wait(1.0f); 
        Pc_.printf("%d seconds.\r\n",cnt++);
          Grled_ = !Grled_;
    }
}

