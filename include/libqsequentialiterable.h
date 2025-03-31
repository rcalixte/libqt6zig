#pragma once
#ifndef SRCC_LIBQSEQUENTIALITERABLE_H
#define SRCC_LIBQSEQUENTIALITERABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"
#include "libqvariant.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

#ifdef __cplusplus
typedef QSequentialConstIterator::pointer pointer;                                  // C++ QFlags
typedef QSequentialConstIterator::reference reference;                              // C++ QFlags
typedef QSequentialConstIterator::value_type value_type;                            // C++ QFlags
typedef QSequentialIterable::BidirectionalConstIterator BidirectionalConstIterator; // C++ QFlags
typedef QSequentialIterable::BidirectionalIterator BidirectionalIterator;           // C++ QFlags
typedef QSequentialIterable::ForwardConstIterator ForwardConstIterator;             // C++ QFlags
typedef QSequentialIterable::ForwardIterator ForwardIterator;                       // C++ QFlags
typedef QSequentialIterable::InputConstIterator InputConstIterator;                 // C++ QFlags
typedef QSequentialIterable::InputIterator InputIterator;                           // C++ QFlags
typedef QSequentialIterable::Position Position;                                     // C++ enum
typedef QSequentialIterable::RandomAccessConstIterator RandomAccessConstIterator;   // C++ QFlags
typedef QSequentialIterable::RandomAccessIterator RandomAccessIterator;             // C++ QFlags
typedef QSequentialIterable::iterator iterator;                                     // C++ QFlags
#else
typedef QVariantConstPointer* pointer; // C ABI QFlags
typedef int Position;                  // C ABI enum
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#endif
