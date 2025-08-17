#include <QString>
#include <QByteArray>
#include <cstring>
#include <qscicommand.h>
#include "libqscicommand.h"
#include "libqscicommand.hxx"

int QsciCommand_Command(const QsciCommand* self) {
    return static_cast<int>(self->command());
}

void QsciCommand_Execute(QsciCommand* self) {
    self->execute();
}

void QsciCommand_SetKey(QsciCommand* self, int key) {
    self->setKey(static_cast<int>(key));
}

void QsciCommand_SetAlternateKey(QsciCommand* self, int altkey) {
    self->setAlternateKey(static_cast<int>(altkey));
}

int QsciCommand_Key(const QsciCommand* self) {
    return self->key();
}

int QsciCommand_AlternateKey(const QsciCommand* self) {
    return self->alternateKey();
}

bool QsciCommand_ValidKey(int key) {
    return QsciCommand::validKey(static_cast<int>(key));
}

libqt_string QsciCommand_Description(const QsciCommand* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciCommand_Delete(QsciCommand* self) {
    delete self;
}
