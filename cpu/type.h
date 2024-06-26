#ifndef KERNEL_CPU_TYPE_H
#define KERNEL_CPU_TYPE_H

/* Instead of using 'chars' to allocate non-character bytes,
 * we will use these new type with no semantic meaning */
typedef unsigned int   u32;
typedef          int   s32;
typedef unsigned short u16;
typedef          short s16;
typedef unsigned char  u8;
typedef          char  s8;

typedef __SIZE_TYPE__  size_t;

#define low_16(address)  (u16)(((address)      ) & 0xFFFF)
#define high_16(address) (u16)(((address) >> 16) & 0xFFFF)

#define NULL 0

#endif /* KERNEL_CPU_TYPE_H */