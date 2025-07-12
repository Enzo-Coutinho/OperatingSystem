#include <stdio.h>
#include <inttypes.h>


uint8_t byte = 0x12;
uint16_t word = 0x1234;
uint32_t dword = 0x12345678;
uint64_t qworx = 0x123456789abcdef;
__uint128_t dqword1 = (__uint128_t)0x123456789abcdef;
__uint128_t dqword2 = (__uint128_t)0x123456789abcdef << 64;

int main()
{
    return 0;
}