#include <KSambaShare>
#include <KSambaShareData>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <ksambashare.h>
#include "libksambashare.h"
#include "libksambashare.hxx"

QMetaObject* KSambaShare_MetaObject(const KSambaShare* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSambaShare_Metacast(KSambaShare* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSambaShare_Metacall(KSambaShare* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KSambaShare_Tr(const char* s) {
    QString _ret = KSambaShare::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KSambaShare* KSambaShare_Instance() {
    return KSambaShare::instance();
}

bool KSambaShare_IsDirectoryShared(const KSambaShare* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    return self->isDirectoryShared(path_QString);
}

libqt_list /* of libqt_string */ KSambaShare_SharedDirectories(const KSambaShare* self) {
    QList<QString> _ret = self->sharedDirectories();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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

bool KSambaShare_IsShareNameAvailable(const KSambaShare* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->isShareNameAvailable(name_QString);
}

libqt_list /* of libqt_string */ KSambaShare_ShareNames(const KSambaShare* self) {
    QList<QString> _ret = self->shareNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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

KSambaShareData* KSambaShare_GetShareByName(const KSambaShare* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new KSambaShareData(self->getShareByName(name_QString));
}

libqt_list /* of KSambaShareData* */ KSambaShare_GetSharesByPath(const KSambaShare* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<KSambaShareData> _ret = self->getSharesByPath(path_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    KSambaShareData** _arr = static_cast<KSambaShareData**>(malloc(sizeof(KSambaShareData*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KSambaShareData(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string KSambaShare_LastSystemErrorString(const KSambaShare* self) {
    QString _ret = self->lastSystemErrorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool KSambaShare_AreGuestsAllowed(const KSambaShare* self) {
    return self->areGuestsAllowed();
}

void KSambaShare_Changed(KSambaShare* self) {
    self->changed();
}

void KSambaShare_Connect_Changed(KSambaShare* self, intptr_t slot) {
    void (*slotFunc)(KSambaShare*) = reinterpret_cast<void (*)(KSambaShare*)>(slot);
    KSambaShare::connect(self, &KSambaShare::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KSambaShare_Tr2(const char* s, const char* c) {
    QString _ret = KSambaShare::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSambaShare_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSambaShare::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSambaShare_Delete(KSambaShare* self) {
    delete self;
}
