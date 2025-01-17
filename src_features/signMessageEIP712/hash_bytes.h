#ifndef HASH_BYTES_H_
#define HASH_BYTES_H_

#ifdef HAVE_EIP712_FULL_SUPPORT

#include "cx.h"

void hash_nbytes(const uint8_t *const bytes_ptr, uint8_t n, cx_hash_t *hash_ctx);
void hash_byte(uint8_t byte, cx_hash_t *hash_ctx);

#endif  // HAVE_EIP712_FULL_SUPPORT

#endif  // HASH_BYTES_H_
