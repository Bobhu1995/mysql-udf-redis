
// Author: bob
// Created Time: Thu 21 Jan 2021 03:59:21 PM CST
#include <mysql.h>

extern "C" long long simple_add(UDF_INIT *initid, UDF_ARGS *args, char *is_null, char *error)
{
    int a = *((long long*)args->args[0]);
    int b = *((long long*)args->args[1]);
    return a + b;
}

extern "C" my_bool simple_add_init(UDF_INIT *initid, UDF_ARGS *args, char *message)
{
    return 0;
}
