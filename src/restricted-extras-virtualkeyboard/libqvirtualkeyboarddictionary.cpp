#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QVirtualKeyboardDictionary>
#include <qvirtualkeyboarddictionary.h>
#include "libqvirtualkeyboarddictionary.h"
#include "libqvirtualkeyboarddictionary.hxx"

QMetaObject* QVirtualKeyboardDictionary_MetaObject(const QVirtualKeyboardDictionary* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardDictionary_Metacast(QVirtualKeyboardDictionary* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardDictionary_Metacall(QVirtualKeyboardDictionary* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardDictionary_Tr(const char* s) {
    auto _ret = QVirtualKeyboardDictionary::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardDictionary_Name(const QVirtualKeyboardDictionary* self) {
    auto _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QVirtualKeyboardDictionary_Contents(const QVirtualKeyboardDictionary* self) {
    QList<QString> _ret = self->contents();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QVirtualKeyboardDictionary_SetContents(QVirtualKeyboardDictionary* self, const libqt_list /* of libqt_string */ contents) {
    QList<QString> contents_QList;
    contents_QList.reserve(contents.len);
    libqt_string* contents_arr = static_cast<libqt_string*>(contents.data);
    for (size_t i = 0; i < contents.len; ++i) {
        QString contents_arr_i_QString = QString::fromUtf8(contents_arr[i].data, contents_arr[i].len);
        contents_QList.push_back(contents_arr_i_QString);
    }
    self->setContents(contents_QList);
}

void QVirtualKeyboardDictionary_ResetContents(QVirtualKeyboardDictionary* self) {
    self->resetContents();
}

void QVirtualKeyboardDictionary_ContentsChanged(QVirtualKeyboardDictionary* self) {
    self->contentsChanged();
}

void QVirtualKeyboardDictionary_Connect_ContentsChanged(QVirtualKeyboardDictionary* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardDictionary*) = reinterpret_cast<void (*)(QVirtualKeyboardDictionary*)>(slot);
    QVirtualKeyboardDictionary::connect(self,
                                        static_cast<void (QVirtualKeyboardDictionary::*)()>(&QVirtualKeyboardDictionary::contentsChanged),
                                        [self, slotFunc]() {
                                            slotFunc(self);
                                        });
}

libqt_string QVirtualKeyboardDictionary_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardDictionary::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardDictionary_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardDictionary::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardDictionary_Delete(QVirtualKeyboardDictionary* self) {
    delete self;
}
