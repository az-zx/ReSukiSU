#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ReSukiSU/ReSukiSU
#define EXPECTED_SIZE_RESUKISU 0x377
#define EXPECTED_HASH_RESUKISU "d3469712b6214462764a1d8d3e5cbe1d6819a0b629791b9f4101867821f1df64"

#define EXPECTED_SIZE_XINGMENG 0x2B6
#define EXPECTED_HASH_XINGMENG "6f9df068cc63cfbe3ab3563e304101aa37ba0d06f36dbdf87eca7b50580fc8ef"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
