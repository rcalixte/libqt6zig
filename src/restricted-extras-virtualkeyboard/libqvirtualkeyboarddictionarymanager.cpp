#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QVirtualKeyboardDictionary>
#include <QVirtualKeyboardDictionaryManager>
#include <qvirtualkeyboarddictionarymanager.h>
#include "libqvirtualkeyboarddictionarymanager.h"
#include "libqvirtualkeyboarddictionarymanager.hxx"

QMetaObject* QVirtualKeyboardDictionaryManager_MetaObject(const QVirtualKeyboardDictionaryManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardDictionaryManager_Metacast(QVirtualKeyboardDictionaryManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardDictionaryManager_Metacall(QVirtualKeyboardDictionaryManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardDictionaryManager_Tr(const char* s) {
    auto _ret = QVirtualKeyboardDictionaryManager::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVirtualKeyboardDictionaryManager* QVirtualKeyboardDictionaryManager_Instance() {
    return QVirtualKeyboardDictionaryManager::instance();
}

libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_AvailableDictionaries(const QVirtualKeyboardDictionaryManager* self) {
    QList<QString> _ret = self->availableDictionaries();
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

libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_BaseDictionaries(const QVirtualKeyboardDictionaryManager* self) {
    QList<QString> _ret = self->baseDictionaries();
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

void QVirtualKeyboardDictionaryManager_SetBaseDictionaries(QVirtualKeyboardDictionaryManager* self, const libqt_list /* of libqt_string */ baseDictionaries) {
    QList<QString> baseDictionaries_QList;
    baseDictionaries_QList.reserve(baseDictionaries.len);
    libqt_string* baseDictionaries_arr = static_cast<libqt_string*>(baseDictionaries.data);
    for (size_t i = 0; i < baseDictionaries.len; ++i) {
        QString baseDictionaries_arr_i_QString = QString::fromUtf8(baseDictionaries_arr[i].data, baseDictionaries_arr[i].len);
        baseDictionaries_QList.push_back(baseDictionaries_arr_i_QString);
    }
    self->setBaseDictionaries(baseDictionaries_QList);
}

libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_ExtraDictionaries(const QVirtualKeyboardDictionaryManager* self) {
    QList<QString> _ret = self->extraDictionaries();
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

void QVirtualKeyboardDictionaryManager_SetExtraDictionaries(QVirtualKeyboardDictionaryManager* self, const libqt_list /* of libqt_string */ extraDictionaries) {
    QList<QString> extraDictionaries_QList;
    extraDictionaries_QList.reserve(extraDictionaries.len);
    libqt_string* extraDictionaries_arr = static_cast<libqt_string*>(extraDictionaries.data);
    for (size_t i = 0; i < extraDictionaries.len; ++i) {
        QString extraDictionaries_arr_i_QString = QString::fromUtf8(extraDictionaries_arr[i].data, extraDictionaries_arr[i].len);
        extraDictionaries_QList.push_back(extraDictionaries_arr_i_QString);
    }
    self->setExtraDictionaries(extraDictionaries_QList);
}

libqt_list /* of libqt_string */ QVirtualKeyboardDictionaryManager_ActiveDictionaries(const QVirtualKeyboardDictionaryManager* self) {
    QList<QString> _ret = self->activeDictionaries();
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

QVirtualKeyboardDictionary* QVirtualKeyboardDictionaryManager_CreateDictionary(QVirtualKeyboardDictionaryManager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->createDictionary(name_QString);
}

QVirtualKeyboardDictionary* QVirtualKeyboardDictionaryManager_Dictionary(const QVirtualKeyboardDictionaryManager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->dictionary(name_QString);
}

void QVirtualKeyboardDictionaryManager_AvailableDictionariesChanged(QVirtualKeyboardDictionaryManager* self) {
    self->availableDictionariesChanged();
}

void QVirtualKeyboardDictionaryManager_Connect_AvailableDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardDictionaryManager*) = reinterpret_cast<void (*)(QVirtualKeyboardDictionaryManager*)>(slot);
    QVirtualKeyboardDictionaryManager::connect(self,
                                               static_cast<void (QVirtualKeyboardDictionaryManager::*)()>(&QVirtualKeyboardDictionaryManager::availableDictionariesChanged),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void QVirtualKeyboardDictionaryManager_BaseDictionariesChanged(QVirtualKeyboardDictionaryManager* self) {
    self->baseDictionariesChanged();
}

void QVirtualKeyboardDictionaryManager_Connect_BaseDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardDictionaryManager*) = reinterpret_cast<void (*)(QVirtualKeyboardDictionaryManager*)>(slot);
    QVirtualKeyboardDictionaryManager::connect(self,
                                               static_cast<void (QVirtualKeyboardDictionaryManager::*)()>(&QVirtualKeyboardDictionaryManager::baseDictionariesChanged),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void QVirtualKeyboardDictionaryManager_ExtraDictionariesChanged(QVirtualKeyboardDictionaryManager* self) {
    self->extraDictionariesChanged();
}

void QVirtualKeyboardDictionaryManager_Connect_ExtraDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardDictionaryManager*) = reinterpret_cast<void (*)(QVirtualKeyboardDictionaryManager*)>(slot);
    QVirtualKeyboardDictionaryManager::connect(self,
                                               static_cast<void (QVirtualKeyboardDictionaryManager::*)()>(&QVirtualKeyboardDictionaryManager::extraDictionariesChanged),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

void QVirtualKeyboardDictionaryManager_ActiveDictionariesChanged(QVirtualKeyboardDictionaryManager* self) {
    self->activeDictionariesChanged();
}

void QVirtualKeyboardDictionaryManager_Connect_ActiveDictionariesChanged(QVirtualKeyboardDictionaryManager* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardDictionaryManager*) = reinterpret_cast<void (*)(QVirtualKeyboardDictionaryManager*)>(slot);
    QVirtualKeyboardDictionaryManager::connect(self,
                                               static_cast<void (QVirtualKeyboardDictionaryManager::*)()>(&QVirtualKeyboardDictionaryManager::activeDictionariesChanged),
                                               [self, slotFunc]() {
                                                   slotFunc(self);
                                               });
}

libqt_string QVirtualKeyboardDictionaryManager_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardDictionaryManager::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardDictionaryManager_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardDictionaryManager::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardDictionaryManager_Delete(QVirtualKeyboardDictionaryManager* self) {
    delete self;
}
