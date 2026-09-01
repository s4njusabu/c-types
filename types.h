#ifndef TYPES_H
#define TYPES_H

#include<stdint.h>
#include<stddef.h>

// Signed integers

typedef int8_t  i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

// Unsigned integers
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64; 

// Pointer-sized integers
typedef ptrdiff_t isize;
typedef size_t    usize;

// Floats
typedef _Float32 f32;
typedef _Float64 f64;

// 128-bit signed and unsigned integers
#if defined(__SIZEOF_INT128__)
    typedef __int128_t  i128;
    typedef __uint128_t u128;
    #define TYPES_H_HAS_128 1
#endif

#endif
