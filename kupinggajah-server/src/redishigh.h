/*
    Header redishigh.h
    Written by: Asharudin 'aviezab' Achzab
    First written date: 2019 05 27
    This file is granted without any warranty
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <hiredis.h>

extern int ping_redis();
extern int redis_check(char *key);
extern int put_redis(char *key, char *word);
extern char *get_redis(char *key);