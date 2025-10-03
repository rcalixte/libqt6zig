#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__AnnotationModel
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <annotationinterface.h>
#include "libannotationinterface.h"
#include "libannotationinterface.hxx"

QMetaObject* KTextEditor__AnnotationModel_MetaObject(const KTextEditor__AnnotationModel* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__AnnotationModel_Metacast(KTextEditor__AnnotationModel* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__AnnotationModel_Metacall(KTextEditor__AnnotationModel* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KTextEditor__AnnotationModel_Tr(const char* s) {
    QString _ret = KTextEditor::AnnotationModel::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVariant* KTextEditor__AnnotationModel_Data(const KTextEditor__AnnotationModel* self, int line, int role) {
    return new QVariant(self->data(static_cast<int>(line), static_cast<Qt::ItemDataRole>(role)));
}

void KTextEditor__AnnotationModel_Reset(KTextEditor__AnnotationModel* self) {
    self->reset();
}

void KTextEditor__AnnotationModel_Connect_Reset(KTextEditor__AnnotationModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__AnnotationModel*) = reinterpret_cast<void (*)(KTextEditor__AnnotationModel*)>(slot);
    KTextEditor::AnnotationModel::connect(self, &KTextEditor::AnnotationModel::reset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KTextEditor__AnnotationModel_LineChanged(KTextEditor__AnnotationModel* self, int line) {
    self->lineChanged(static_cast<int>(line));
}

void KTextEditor__AnnotationModel_Connect_LineChanged(KTextEditor__AnnotationModel* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__AnnotationModel*, int) = reinterpret_cast<void (*)(KTextEditor__AnnotationModel*, int)>(slot);
    KTextEditor::AnnotationModel::connect(self, &KTextEditor::AnnotationModel::lineChanged, [self, slotFunc](int line) {
        int sigval1 = line;
        slotFunc(self, sigval1);
    });
}

libqt_string KTextEditor__AnnotationModel_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::AnnotationModel::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__AnnotationModel_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::AnnotationModel::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KTextEditor__AnnotationModel_Delete(KTextEditor__AnnotationModel* self) {
    delete self;
}
