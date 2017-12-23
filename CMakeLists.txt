cmake_minimum_required(VERSION 3.8)
project(hello)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c two_func.c platinum.c altnames.c talkback.c pizza.c width.c shose.c wheat.c sizeof.c cypher2.c divisors.c echo.c showchar.c showchar2.c checking.c proto.c recur.c factor.c binary.c swap3.c day_mon1.c day_mon2.c day_mon3.c sum_arr1.c sum_arr2.c pointer/ptr_ops.c pointer/arf.c pointer/zippo1.c pointer/zippo2.c pointer/array2.c pointer/rand0.c pointer/r_driver0.c pointer/diceroll.c pointer/manydice.c pointer/where.c computer/mstore.c computer/main.c computer/exchange.c)
add_executable(hello ${SOURCE_FILES} platinum.c)