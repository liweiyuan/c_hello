cmake_minimum_required(VERSION 3.8)
project(hello)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c two_func.c platinum.c altnames.c talkback.c pizza.c width.c shose.c wheat.c sizeof.c cypher2.c divisors.c echo.c showchar.c showchar2.c checking.c proto.c recur.c factor.c binary.c swap3.c day_mon1.c day_mon2.c day_mon3.c sum_arr1.c sum_arr2.c)
add_executable(hello ${SOURCE_FILES} platinum.c)