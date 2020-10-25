#include "defines.h"
#include "serial.h"
#include "lib.h"

// メモリを特定のパターンで埋める
void *memset(void *b, int c, long len){
    char *p;
    for( p = b; len > 0; len--){
        *(p++) = c;
    }
    return b;
}

// 1文字送信
int putc(unsigned char c) {
    if(c == '\n')
        serial_send_byte(SERIAL_DEFAULT_DEVICE, '\r');
    return serial_send_byte(SERIAL_DEFAULT_DEVICE, c);
}

// 文字列送信
int puts(unsigned char *str) {
    while (*str)
    {
        putc(*(str++));
    }
    return 0;
    
}
