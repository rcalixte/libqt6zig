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

void KTextEditor__AnnotationModel_Delete(KTextEditor__AnnotationModel* self) {
    delete self;
}
