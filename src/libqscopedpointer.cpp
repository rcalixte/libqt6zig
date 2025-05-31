#include <QScopedPointerPodDeleter>
#include <qscopedpointer.h>
#include "libqscopedpointer.h"
#include "libqscopedpointer.hxx"

QScopedPointerPodDeleter* QScopedPointerPodDeleter_new(const QScopedPointerPodDeleter* other) {
    return new QScopedPointerPodDeleter(*other);
}

QScopedPointerPodDeleter* QScopedPointerPodDeleter_new2(QScopedPointerPodDeleter* other) {
    return new QScopedPointerPodDeleter(std::move(*other));
}

void QScopedPointerPodDeleter_CopyAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other) {
    *self = *other;
}

void QScopedPointerPodDeleter_MoveAssign(QScopedPointerPodDeleter* self, QScopedPointerPodDeleter* other) {
    *self = std::move(*other);
}

void QScopedPointerPodDeleter_Cleanup(void* pointer) {
    QScopedPointerPodDeleter::cleanup(pointer);
}

void QScopedPointerPodDeleter_OperatorCall(const QScopedPointerPodDeleter* self, void* pointer) {
    self->operator()(pointer);
}

void QScopedPointerPodDeleter_Delete(QScopedPointerPodDeleter* self) {
    delete self;
}
