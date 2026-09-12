#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

#define EXPECTED_SIZE_XINGMENG 0x363
#define EXPECTED_HASH_XINGMENG "fab76f20b4f2c57f608816aa8f8ddfe6b393ecd794583d0cda66afab78c76f03"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
