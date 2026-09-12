#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ReSukiSU/ReSukiSU
#define EXPECTED_SIZE_RESUKISU 0x377
#define EXPECTED_HASH_RESUKISU "d3469712b6214462764a1d8d3e5cbe1d6819a0b629791b9f4101867821f1df64"

#define EXPECTED_SIZE_XINGMENG 0x4A3
#define EXPECTED_HASH_XINGMENG "3ade0f6004cf58d6cd14accdae5ac08f9c598dba42408f764156461ec4f3b290"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
