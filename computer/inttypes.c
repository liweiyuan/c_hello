//
// Created by spark on 17-12-24.
//
#include <inttypes.h>

typedef  unsigned __int128 uint128_t;

void store_uprod(uint128_t *dest,uint64_t x,uint64_t y){
    *dest=x*(uint128_t)y;
}

