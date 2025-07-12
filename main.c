#include <stdio.h>
#include <inttypes.h>

struct bit_field {
    int data1 : 8;
};

struct bit_field2 {
    int data1 : 8;
    int data2 : 32;
};

struct normal_struct {
    int data1;
    int data2;
    int data3;
    int data4;
};

struct normal_struct ns = {
    .data1 = 0x12345678,
    .data2 = 0x9abcdef0,
    .data3 = 0x12345678,
    .data4 = 0x9abcdef0
};

int i = 0x12345678;

struct bit_field bf = {
    .data1 = 0x12
};

struct bit_field2 bf2 = {
    .data1 = 0x12,
    .data2 = 0x3456,
};

int main()
{
    return 0;
}