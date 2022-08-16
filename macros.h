#pragma once

#define SWAP(a,b) do { typeof((a)) __swap = (a); (a) = (b); (b) = __swap; } while(0)

#define LEN(a) sizeof((a)) / sizeof((a)[0])

#define MIN(a,b) (((a)<(b))?(a):(b))

#define MAX(a,b) (((a)>(b))?(a):(b))
