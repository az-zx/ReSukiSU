#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

#define EXPECTED_SIZE_XINGMENG 0x2B6
#define EXPECTED_HASH_XINGMENG "6f9df068cc63cfbe3ab3563e304101aa37ba0d06f36dbdf87eca7b50580fc8ef"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
