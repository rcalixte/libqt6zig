#pragma once
#ifndef QT6C_LIBQT_H
#define QT6C_LIBQT_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

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

// Structs representing Qt-allocated memory

// QString
typedef struct {
    size_t len;
    const char* data;
} libqt_string;

// QList
typedef struct {
    size_t len;
    void* data;
} libqt_list;

// QMap
typedef struct {
    size_t len;
    void* keys;
    void* values;
} libqt_map;

// QPair
typedef struct {
    void* first;
    void* second;
} libqt_pair;

// Generic function to free Qt-allocated memory
static inline void libqt_free(const void* ptr) { free((void*)ptr); }

// Helper functions for common cases

static inline void libqt_string_free(libqt_string* str) {
    if (str && str->data) {
        free((void*)str->data);
        str->data = NULL;
        str->len = 0;
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
