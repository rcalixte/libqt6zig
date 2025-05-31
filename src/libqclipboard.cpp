#include <QClipboard>
#include <QImage>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QObject>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qclipboard.h>
#include "libqclipboard.h"
#include "libqclipboard.hxx"

QMetaObject* QClipboard_MetaObject(const QClipboard* self) {
    return (QMetaObject*)self->metaObject();
}

void* QClipboard_Metacast(QClipboard* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QClipboard_Metacall(QClipboard* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QClipboard_Tr(const char* s) {
    QString _ret = QClipboard::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QClipboard_Clear(QClipboard* self) {
    self->clear();
}

bool QClipboard_SupportsSelection(const QClipboard* self) {
    return self->supportsSelection();
}

bool QClipboard_SupportsFindBuffer(const QClipboard* self) {
    return self->supportsFindBuffer();
}

bool QClipboard_OwnsSelection(const QClipboard* self) {
    return self->ownsSelection();
}

bool QClipboard_OwnsClipboard(const QClipboard* self) {
    return self->ownsClipboard();
}

bool QClipboard_OwnsFindBuffer(const QClipboard* self) {
    return self->ownsFindBuffer();
}

libqt_string QClipboard_Text(const QClipboard* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QClipboard_TextWithSubtype(const QClipboard* self, libqt_string subtype) {
    QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
    QString _ret = self->text(subtype_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QClipboard_SetText(QClipboard* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->setText(param1_QString);
}

QMimeData* QClipboard_MimeData(const QClipboard* self) {
    return (QMimeData*)self->mimeData();
}

void QClipboard_SetMimeData(QClipboard* self, QMimeData* data) {
    self->setMimeData(data);
}

QImage* QClipboard_Image(const QClipboard* self) {
    return new QImage(self->image());
}

QPixmap* QClipboard_Pixmap(const QClipboard* self) {
    return new QPixmap(self->pixmap());
}

void QClipboard_SetImage(QClipboard* self, const QImage* param1) {
    self->setImage(*param1);
}

void QClipboard_SetPixmap(QClipboard* self, const QPixmap* param1) {
    self->setPixmap(*param1);
}

void QClipboard_Changed(QClipboard* self, int mode) {
    self->changed(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_Connect_Changed(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*, int) = reinterpret_cast<void (*)(QClipboard*, int)>(slot);
    QClipboard::connect(self, &QClipboard::changed, [self, slotFunc](QClipboard::Mode mode) {
        int sigval1 = static_cast<int>(mode);
        slotFunc(self, sigval1);
    });
}

void QClipboard_SelectionChanged(QClipboard* self) {
    self->selectionChanged();
}

void QClipboard_Connect_SelectionChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::selectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QClipboard_FindBufferChanged(QClipboard* self) {
    self->findBufferChanged();
}

void QClipboard_Connect_FindBufferChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::findBufferChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QClipboard_DataChanged(QClipboard* self) {
    self->dataChanged();
}

void QClipboard_Connect_DataChanged(QClipboard* self, intptr_t slot) {
    void (*slotFunc)(QClipboard*) = reinterpret_cast<void (*)(QClipboard*)>(slot);
    QClipboard::connect(self, &QClipboard::dataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QClipboard_Tr2(const char* s, const char* c) {
    QString _ret = QClipboard::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QClipboard_Tr3(const char* s, const char* c, int n) {
    QString _ret = QClipboard::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QClipboard_Clear1(QClipboard* self, int mode) {
    self->clear(static_cast<QClipboard::Mode>(mode));
}

libqt_string QClipboard_Text1(const QClipboard* self, int mode) {
    QString _ret = self->text(static_cast<QClipboard::Mode>(mode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QClipboard_Text2(const QClipboard* self, libqt_string subtype, int mode) {
    QString subtype_QString = QString::fromUtf8(subtype.data, subtype.len);
    QString _ret = self->text(subtype_QString, static_cast<QClipboard::Mode>(mode));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QClipboard_SetText2(QClipboard* self, const libqt_string param1, int mode) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->setText(param1_QString, static_cast<QClipboard::Mode>(mode));
}

QMimeData* QClipboard_MimeData1(const QClipboard* self, int mode) {
    return (QMimeData*)self->mimeData(static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetMimeData2(QClipboard* self, QMimeData* data, int mode) {
    self->setMimeData(data, static_cast<QClipboard::Mode>(mode));
}

QImage* QClipboard_Image1(const QClipboard* self, int mode) {
    return new QImage(self->image(static_cast<QClipboard::Mode>(mode)));
}

QPixmap* QClipboard_Pixmap1(const QClipboard* self, int mode) {
    return new QPixmap(self->pixmap(static_cast<QClipboard::Mode>(mode)));
}

void QClipboard_SetImage2(QClipboard* self, const QImage* param1, int mode) {
    self->setImage(*param1, static_cast<QClipboard::Mode>(mode));
}

void QClipboard_SetPixmap2(QClipboard* self, const QPixmap* param1, int mode) {
    self->setPixmap(*param1, static_cast<QClipboard::Mode>(mode));
}
