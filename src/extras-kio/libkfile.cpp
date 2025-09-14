#include <KFile>
#include <kfile.h>
#include "libkfile.h"
#include "libkfile.hxx"

KFile* KFile_new(const KFile* other) {
    return new KFile(*other);
}

KFile* KFile_new2(KFile* other) {
    return new KFile(std::move(*other));
}

void KFile_CopyAssign(KFile* self, KFile* other) {
    *self = *other;
}

void KFile_MoveAssign(KFile* self, KFile* other) {
    *self = std::move(*other);
}

bool KFile_IsSortByName(const int* sort) {
    return KFile::isSortByName((const QDir::SortFlags&)(*sort));
}

bool KFile_IsSortBySize(const int* sort) {
    return KFile::isSortBySize((const QDir::SortFlags&)(*sort));
}

bool KFile_IsSortByDate(const int* sort) {
    return KFile::isSortByDate((const QDir::SortFlags&)(*sort));
}

bool KFile_IsSortByType(const int* sort) {
    return KFile::isSortByType((const QDir::SortFlags&)(*sort));
}

bool KFile_IsSortDirsFirst(const int* sort) {
    return KFile::isSortDirsFirst((const QDir::SortFlags&)(*sort));
}

bool KFile_IsSortCaseInsensitive(const int* sort) {
    return KFile::isSortCaseInsensitive((const QDir::SortFlags&)(*sort));
}

bool KFile_IsDefaultView(const int* view) {
    return KFile::isDefaultView((const KFile::FileView&)(*view));
}

bool KFile_IsSimpleView(const int* view) {
    return KFile::isSimpleView((const KFile::FileView&)(*view));
}

bool KFile_IsDetailView(const int* view) {
    return KFile::isDetailView((const KFile::FileView&)(*view));
}

bool KFile_IsSeparateDirs(const int* view) {
    return KFile::isSeparateDirs((const KFile::FileView&)(*view));
}

bool KFile_IsPreviewContents(const int* view) {
    return KFile::isPreviewContents((const KFile::FileView&)(*view));
}

bool KFile_IsPreviewInfo(const int* view) {
    return KFile::isPreviewInfo((const KFile::FileView&)(*view));
}

bool KFile_IsTreeView(const int* view) {
    return KFile::isTreeView((const KFile::FileView&)(*view));
}

bool KFile_IsDetailTreeView(const int* view) {
    return KFile::isDetailTreeView((const KFile::FileView&)(*view));
}

void KFile_Delete(KFile* self) {
    delete self;
}
