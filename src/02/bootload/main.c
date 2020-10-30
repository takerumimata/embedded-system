#include "defines.h"
#include "serial.h"
#include "lib.h"

int main(void) {
    serial_init(SERIAL_DEFAULT_DEVICE); // シリアルデバイスを初期化

    puts("Hello World!\n"); // Hello World!を出力

    putxval(0x10, 0); puts("\n");
    putxval(0xffff, 0); puts("\n");

    while (1)   // 無限ループで停止
        ;
    
    return 0;
}