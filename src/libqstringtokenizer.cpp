#include <QStringTokenizerBaseBase>
#include <qstringtokenizer.h>
#include "libqstringtokenizer.h"
#include "libqstringtokenizer.hxx"

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new(const QStringTokenizerBaseBase* other) {
    return new QStringTokenizerBaseBase(*other);
}

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new2(const QStringTokenizerBaseBase* param1) {
    return new QStringTokenizerBaseBase(*param1);
}

void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other) {
    *self = *other;
}
