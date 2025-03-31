#pragma once
#ifndef SRC_NETWORKC_LIBQSSL_H
#define SRC_NETWORKC_LIBQSSL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else

#endif

#ifdef __cplusplus
typedef QSsl::AlertLevel AlertLevel;                             // C++ enum
typedef QSsl::AlertType AlertType;                               // C++ enum
typedef QSsl::AlternativeNameEntryType AlternativeNameEntryType; // C++ enum
typedef QSsl::EncodingFormat EncodingFormat;                     // C++ enum
typedef QSsl::ImplementedClass ImplementedClass;                 // C++ enum
typedef QSsl::KeyAlgorithm KeyAlgorithm;                         // C++ enum
typedef QSsl::KeyType KeyType;                                   // C++ enum
typedef QSsl::SslOption SslOption;                               // C++ enum
typedef QSsl::SslOptions SslOptions;                             // C++ QFlags
typedef QSsl::SslProtocol SslProtocol;                           // C++ enum
typedef QSsl::SupportedFeature SupportedFeature;                 // C++ enum
#else
typedef int AlertLevel;               // C ABI enum
typedef int AlertType;                // C ABI enum
typedef int AlternativeNameEntryType; // C ABI enum
typedef int EncodingFormat;           // C ABI enum
typedef int ImplementedClass;         // C ABI enum
typedef int KeyAlgorithm;             // C ABI enum
typedef int KeyType;                  // C ABI enum
typedef int SslOption;                // C ABI enum
typedef int SslOptions;               // C ABI QFlags
typedef int SslProtocol;              // C ABI enum
typedef int SupportedFeature;         // C ABI enum
#endif

#ifdef __cplusplus
} /* extern C */
#endif

#endif
