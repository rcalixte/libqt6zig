#pragma once
#ifndef QT6C_LIBQT_H
#define QT6C_LIBQT_H

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#ifdef _WIN32
typedef int pid_t;
typedef unsigned int dev_t;
typedef unsigned int gid_t;
typedef unsigned int uid_t;
typedef unsigned short mode_t;
#else
#include <unistd.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations
struct libqt_string;
struct libqt_list;
struct libqt_bitarray;
struct libqt_map;
struct libqt_pair;

typedef struct libqt_string libqt_string;
typedef struct libqt_list libqt_list;
typedef struct libqt_bitarray libqt_bitarray;
typedef struct libqt_map libqt_map;
typedef struct libqt_pair libqt_pair;

// Structs representing Qt-allocated memory

// QString
struct libqt_string {
    size_t len;
    const char* data;
};

// QList
struct libqt_list {
    size_t len;
    void* data;
};

// QBitArray
struct libqt_bitarray {
    size_t len;
    uint8_t* data;
};

// QMap
struct libqt_map {
    size_t len;
    void* keys;
    void* values;
};

// QPair
struct libqt_pair {
    void* first;
    void* second;
};

// Generic function to free Qt-allocated memory
static inline void libqt_free(const void* ptr) { free((void*)ptr); }

// Helper functions for common cases

static inline void libqt_string_free(const libqt_string* str) {
    if (str && str->data) {
        free((void*)str->data);
        *(const char**)&str->data = NULL;
        *(size_t*)&str->len = 0;
    }
}

static size_t libqt_strv_length(const char** strv) {
    size_t len = 0;
    if (strv != NULL) {
        while (strv[len] != NULL) {
            len++;
        }
    }
    return len;
}

#ifdef __cplusplus
}
#endif

#endif
