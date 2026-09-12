#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

#define EXPECTED_SIZE_XINGMENG 0x4A3
#define EXPECTED_HASH_XINGMENG "3ade0f6004cf58d6cd14accdae5ac08f9c598dba42408f764156461ec4f3b290"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
