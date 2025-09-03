#include <KIconColors>
#include <KIconEffect>
#include <KIconLoader>
#include <KIconTheme>
#include <QChildEvent>
#include <QEvent>
#include <QIcon>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMovie>
#include <QObject>
#include <QPalette>
#include <QPixmap>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <kiconloader.h>
#include "libkiconloader.h"
#include "libkiconloader.hxx"

KIconLoader* KIconLoader_new() {
    return new VirtualKIconLoader();
}

KIconLoader* KIconLoader_new2(const libqt_string appname) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    return new VirtualKIconLoader(appname_QString);
}

KIconLoader* KIconLoader_new3(const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    QList<QString> extraSearchPaths_QList;
    extraSearchPaths_QList.reserve(extraSearchPaths.len);
    libqt_string* extraSearchPaths_arr = static_cast<libqt_string*>(extraSearchPaths.data);
    for (size_t i = 0; i < extraSearchPaths.len; ++i) {
        QString extraSearchPaths_arr_i_QString = QString::fromUtf8(extraSearchPaths_arr[i].data, extraSearchPaths_arr[i].len);
        extraSearchPaths_QList.push_back(extraSearchPaths_arr_i_QString);
    }
    return new VirtualKIconLoader(appname_QString, extraSearchPaths_QList);
}

KIconLoader* KIconLoader_new4(const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths, QObject* parent) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    QList<QString> extraSearchPaths_QList;
    extraSearchPaths_QList.reserve(extraSearchPaths.len);
    libqt_string* extraSearchPaths_arr = static_cast<libqt_string*>(extraSearchPaths.data);
    for (size_t i = 0; i < extraSearchPaths.len; ++i) {
        QString extraSearchPaths_arr_i_QString = QString::fromUtf8(extraSearchPaths_arr[i].data, extraSearchPaths_arr[i].len);
        extraSearchPaths_QList.push_back(extraSearchPaths_arr_i_QString);
    }
    return new VirtualKIconLoader(appname_QString, extraSearchPaths_QList, parent);
}

QMetaObject* KIconLoader_MetaObject(const KIconLoader* self) {
    return (QMetaObject*)self->metaObject();
}

void* KIconLoader_Metacast(KIconLoader* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KIconLoader_Metacall(KIconLoader* self, int param1, int param2, void** param3) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKIconLoader*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KIconLoader_Tr(const char* s) {
    QString _ret = KIconLoader::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KIconLoader* KIconLoader_Global() {
    return KIconLoader::global();
}

void KIconLoader_AddAppDir(KIconLoader* self, const libqt_string appname) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    self->addAppDir(appname_QString);
}

QPixmap* KIconLoader_LoadIcon(const KIconLoader* self, const libqt_string name, int group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPixmap(self->loadIcon(name_QString, static_cast<KIconLoader::Group>(group)));
}

QPixmap* KIconLoader_LoadMimeTypeIcon(const KIconLoader* self, const libqt_string iconName, int group) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new QPixmap(self->loadMimeTypeIcon(iconName_QString, static_cast<KIconLoader::Group>(group)));
}

libqt_string KIconLoader_IconPath(const KIconLoader* self, const libqt_string name, int group_or_size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->iconPath(name_QString, static_cast<int>(group_or_size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconLoader_IconPath2(const KIconLoader* self, const libqt_string name, int group_or_size, bool canReturnNull, double scale) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->iconPath(name_QString, static_cast<int>(group_or_size), canReturnNull, static_cast<qreal>(scale));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMovie* KIconLoader_LoadMovie(const KIconLoader* self, const libqt_string name, int group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->loadMovie(name_QString, static_cast<KIconLoader::Group>(group));
}

libqt_string KIconLoader_MoviePath(const KIconLoader* self, const libqt_string name, int group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->moviePath(name_QString, static_cast<KIconLoader::Group>(group));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KIconLoader_LoadAnimated(const KIconLoader* self, const libqt_string name, int group) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> _ret = self->loadAnimated(name_QString, static_cast<KIconLoader::Group>(group));
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

libqt_list /* of libqt_string */ KIconLoader_QueryIcons(const KIconLoader* self) {
    QList<QString> _ret = self->queryIcons();
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

libqt_list /* of libqt_string */ KIconLoader_QueryIcons2(const KIconLoader* self, int group_or_size) {
    QList<QString> _ret = self->queryIcons(static_cast<int>(group_or_size));
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

libqt_list /* of libqt_string */ KIconLoader_QueryIconsByContext(const KIconLoader* self, int group_or_size) {
    QList<QString> _ret = self->queryIconsByContext(static_cast<int>(group_or_size));
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

bool KIconLoader_HasContext(const KIconLoader* self, int context) {
    return self->hasContext(static_cast<KIconLoader::Context>(context));
}

libqt_list /* of libqt_string */ KIconLoader_QueryIconsByDir(const KIconLoader* self, const libqt_string iconsDir) {
    QString iconsDir_QString = QString::fromUtf8(iconsDir.data, iconsDir.len);
    QList<QString> _ret = self->queryIconsByDir(iconsDir_QString);
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

libqt_list /* of libqt_string */ KIconLoader_SearchPaths(const KIconLoader* self) {
    QList<QString> _ret = self->searchPaths();
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

int KIconLoader_CurrentSize(const KIconLoader* self, int group) {
    return self->currentSize(static_cast<KIconLoader::Group>(group));
}

KIconTheme* KIconLoader_Theme(const KIconLoader* self) {
    return self->theme();
}

KIconEffect* KIconLoader_IconEffect(const KIconLoader* self) {
    return self->iconEffect();
}

void KIconLoader_Reconfigure(KIconLoader* self, const libqt_string appname) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    self->reconfigure(appname_QString);
}

QPixmap* KIconLoader_Unknown() {
    return new QPixmap(KIconLoader::unknown());
}

void KIconLoader_DrawOverlays(const KIconLoader* self, const libqt_list /* of libqt_string */ overlays, QPixmap* pixmap, int group) {
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    self->drawOverlays(overlays_QList, *pixmap, static_cast<KIconLoader::Group>(group));
}

bool KIconLoader_HasIcon(const KIconLoader* self, const libqt_string iconName) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return self->hasIcon(iconName_QString);
}

void KIconLoader_SetCustomPalette(KIconLoader* self, const QPalette* palette) {
    self->setCustomPalette(*palette);
}

QPalette* KIconLoader_CustomPalette(const KIconLoader* self) {
    return new QPalette(self->customPalette());
}

void KIconLoader_ResetPalette(KIconLoader* self) {
    self->resetPalette();
}

bool KIconLoader_HasCustomPalette(const KIconLoader* self) {
    return self->hasCustomPalette();
}

void KIconLoader_NewIconLoader(KIconLoader* self) {
    self->newIconLoader();
}

void KIconLoader_EmitChange(int group) {
    KIconLoader::emitChange(static_cast<KIconLoader::Group>(group));
}

void KIconLoader_IconLoaderSettingsChanged(KIconLoader* self) {
    self->iconLoaderSettingsChanged();
}

void KIconLoader_Connect_IconLoaderSettingsChanged(KIconLoader* self, intptr_t slot) {
    void (*slotFunc)(KIconLoader*) = reinterpret_cast<void (*)(KIconLoader*)>(slot);
    KIconLoader::connect(self, &KIconLoader::iconLoaderSettingsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KIconLoader_IconChanged(KIconLoader* self, int group) {
    self->iconChanged(static_cast<int>(group));
}

void KIconLoader_Connect_IconChanged(KIconLoader* self, intptr_t slot) {
    void (*slotFunc)(KIconLoader*, int) = reinterpret_cast<void (*)(KIconLoader*, int)>(slot);
    KIconLoader::connect(self, &KIconLoader::iconChanged, [self, slotFunc](int group) {
        int sigval1 = group;
        slotFunc(self, sigval1);
    });
}

libqt_string KIconLoader_Tr2(const char* s, const char* c) {
    QString _ret = KIconLoader::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KIconLoader_Tr3(const char* s, const char* c, int n) {
    QString _ret = KIconLoader::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KIconLoader_AddAppDir2(KIconLoader* self, const libqt_string appname, const libqt_string themeBaseDir) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    QString themeBaseDir_QString = QString::fromUtf8(themeBaseDir.data, themeBaseDir.len);
    self->addAppDir(appname_QString, themeBaseDir_QString);
}

QPixmap* KIconLoader_LoadIcon3(const KIconLoader* self, const libqt_string name, int group, int size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPixmap(self->loadIcon(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size)));
}

QPixmap* KIconLoader_LoadIcon4(const KIconLoader* self, const libqt_string name, int group, int size, int state) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new QPixmap(self->loadIcon(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size), static_cast<int>(state)));
}

QPixmap* KIconLoader_LoadIcon5(const KIconLoader* self, const libqt_string name, int group, int size, int state, const libqt_list /* of libqt_string */ overlays) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new QPixmap(self->loadIcon(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size), static_cast<int>(state), overlays_QList));
}

QPixmap* KIconLoader_LoadMimeTypeIcon3(const KIconLoader* self, const libqt_string iconName, int group, int size) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new QPixmap(self->loadMimeTypeIcon(iconName_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size)));
}

QPixmap* KIconLoader_LoadMimeTypeIcon4(const KIconLoader* self, const libqt_string iconName, int group, int size, int state) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new QPixmap(self->loadMimeTypeIcon(iconName_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size), static_cast<int>(state)));
}

QPixmap* KIconLoader_LoadMimeTypeIcon5(const KIconLoader* self, const libqt_string iconName, int group, int size, int state, const libqt_list /* of libqt_string */ overlays) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new QPixmap(self->loadMimeTypeIcon(iconName_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size), static_cast<int>(state), overlays_QList));
}

libqt_string KIconLoader_IconPath3(const KIconLoader* self, const libqt_string name, int group_or_size, bool canReturnNull) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->iconPath(name_QString, static_cast<int>(group_or_size), canReturnNull);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMovie* KIconLoader_LoadMovie3(const KIconLoader* self, const libqt_string name, int group, int size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->loadMovie(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size));
}

QMovie* KIconLoader_LoadMovie4(const KIconLoader* self, const libqt_string name, int group, int size, QObject* parent) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->loadMovie(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size), parent);
}

libqt_string KIconLoader_MoviePath3(const KIconLoader* self, const libqt_string name, int group, int size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->moviePath(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KIconLoader_LoadAnimated3(const KIconLoader* self, const libqt_string name, int group, int size) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QList<QString> _ret = self->loadAnimated(name_QString, static_cast<KIconLoader::Group>(group), static_cast<int>(size));
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

libqt_list /* of libqt_string */ KIconLoader_QueryIcons22(const KIconLoader* self, int group_or_size, int context) {
    QList<QString> _ret = self->queryIcons(static_cast<int>(group_or_size), static_cast<KIconLoader::Context>(context));
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

libqt_list /* of libqt_string */ KIconLoader_QueryIconsByContext2(const KIconLoader* self, int group_or_size, int context) {
    QList<QString> _ret = self->queryIconsByContext(static_cast<int>(group_or_size), static_cast<KIconLoader::Context>(context));
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

void KIconLoader_Reconfigure2(KIconLoader* self, const libqt_string appname, const libqt_list /* of libqt_string */ extraSearchPaths) {
    QString appname_QString = QString::fromUtf8(appname.data, appname.len);
    QList<QString> extraSearchPaths_QList;
    extraSearchPaths_QList.reserve(extraSearchPaths.len);
    libqt_string* extraSearchPaths_arr = static_cast<libqt_string*>(extraSearchPaths.data);
    for (size_t i = 0; i < extraSearchPaths.len; ++i) {
        QString extraSearchPaths_arr_i_QString = QString::fromUtf8(extraSearchPaths_arr[i].data, extraSearchPaths_arr[i].len);
        extraSearchPaths_QList.push_back(extraSearchPaths_arr_i_QString);
    }
    self->reconfigure(appname_QString, extraSearchPaths_QList);
}

void KIconLoader_DrawOverlays4(const KIconLoader* self, const libqt_list /* of libqt_string */ overlays, QPixmap* pixmap, int group, int state) {
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    self->drawOverlays(overlays_QList, *pixmap, static_cast<KIconLoader::Group>(group), static_cast<int>(state));
}

// Base class handler implementation
int KIconLoader_QBaseMetacall(KIconLoader* self, int param1, int param2, void** param3) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Metacall_IsBase(true);
        return vkiconloader->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KIconLoader::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnMetacall(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Metacall_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconLoader_Event(KIconLoader* self, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->event(event);
    } else {
        return self->KIconLoader::event(event);
    }
}

// Base class handler implementation
bool KIconLoader_QBaseEvent(KIconLoader* self, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Event_IsBase(true);
        return vkiconloader->event(event);
    } else {
        return self->KIconLoader::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnEvent(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Event_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconLoader_EventFilter(KIconLoader* self, QObject* watched, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->eventFilter(watched, event);
    } else {
        return self->KIconLoader::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KIconLoader_QBaseEventFilter(KIconLoader* self, QObject* watched, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_EventFilter_IsBase(true);
        return vkiconloader->eventFilter(watched, event);
    } else {
        return self->KIconLoader::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnEventFilter(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_EventFilter_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconLoader_TimerEvent(KIconLoader* self, QTimerEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->timerEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KIconLoader_QBaseTimerEvent(KIconLoader* self, QTimerEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_TimerEvent_IsBase(true);
        vkiconloader->timerEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnTimerEvent(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_TimerEvent_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconLoader_ChildEvent(KIconLoader* self, QChildEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->childEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KIconLoader_QBaseChildEvent(KIconLoader* self, QChildEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_ChildEvent_IsBase(true);
        vkiconloader->childEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnChildEvent(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_ChildEvent_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconLoader_CustomEvent(KIconLoader* self, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->customEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KIconLoader_QBaseCustomEvent(KIconLoader* self, QEvent* event) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_CustomEvent_IsBase(true);
        vkiconloader->customEvent(event);
    } else {
        ((VirtualKIconLoader*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnCustomEvent(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_CustomEvent_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconLoader_ConnectNotify(KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->connectNotify(*signal);
    } else {
        ((VirtualKIconLoader*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KIconLoader_QBaseConnectNotify(KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_ConnectNotify_IsBase(true);
        vkiconloader->connectNotify(*signal);
    } else {
        ((VirtualKIconLoader*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnConnectNotify(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_ConnectNotify_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconLoader_DisconnectNotify(KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->disconnectNotify(*signal);
    } else {
        ((VirtualKIconLoader*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KIconLoader_QBaseDisconnectNotify(KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_DisconnectNotify_IsBase(true);
        vkiconloader->disconnectNotify(*signal);
    } else {
        ((VirtualKIconLoader*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnDisconnectNotify(KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = dynamic_cast<VirtualKIconLoader*>(self);
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_DisconnectNotify_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KIconLoader_Sender(const KIconLoader* self) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->sender();
    } else {
        return ((VirtualKIconLoader*)self)->sender();
    }
}

// Base class handler implementation
QObject* KIconLoader_QBaseSender(const KIconLoader* self) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Sender_IsBase(true);
        return vkiconloader->sender();
    } else {
        return ((VirtualKIconLoader*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnSender(const KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Sender_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconLoader_SenderSignalIndex(const KIconLoader* self) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->senderSignalIndex();
    } else {
        return ((VirtualKIconLoader*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KIconLoader_QBaseSenderSignalIndex(const KIconLoader* self) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_SenderSignalIndex_IsBase(true);
        return vkiconloader->senderSignalIndex();
    } else {
        return ((VirtualKIconLoader*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnSenderSignalIndex(const KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_SenderSignalIndex_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KIconLoader_Receivers(const KIconLoader* self, const char* signal) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->receivers(signal);
    } else {
        return ((VirtualKIconLoader*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KIconLoader_QBaseReceivers(const KIconLoader* self, const char* signal) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Receivers_IsBase(true);
        return vkiconloader->receivers(signal);
    } else {
        return ((VirtualKIconLoader*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnReceivers(const KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_Receivers_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KIconLoader_IsSignalConnected(const KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        return vkiconloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconLoader*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KIconLoader_QBaseIsSignalConnected(const KIconLoader* self, const QMetaMethod* signal) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_IsSignalConnected_IsBase(true);
        return vkiconloader->isSignalConnected(*signal);
    } else {
        return ((VirtualKIconLoader*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconLoader_OnIsSignalConnected(const KIconLoader* self, intptr_t slot) {
    auto* vkiconloader = const_cast<VirtualKIconLoader*>(dynamic_cast<const VirtualKIconLoader*>(self));
    if (vkiconloader && vkiconloader->isVirtualKIconLoader) {
        vkiconloader->setKIconLoader_IsSignalConnected_Callback(reinterpret_cast<VirtualKIconLoader::KIconLoader_IsSignalConnected_Callback>(slot));
    }
}

void KIconLoader_Delete(KIconLoader* self) {
    delete self;
}

QIcon* KDE_Icon(const libqt_string param1, KIconLoader* param2) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QIcon(KDE::icon(param1_QString, param2));
}

QIcon* KDE_Icon2(const libqt_string param1, const KIconColors* param2, KIconLoader* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    return new QIcon(KDE::icon(param1_QString, *param2, param3));
}

QIcon* KDE_Icon3(const libqt_string param1, const libqt_list /* of libqt_string */ param2, KIconLoader* param3) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    QList<QString> param2_QList;
    param2_QList.reserve(param2.len);
    libqt_string* param2_arr = static_cast<libqt_string*>(param2.data);
    for (size_t i = 0; i < param2.len; ++i) {
        QString param2_arr_i_QString = QString::fromUtf8(param2_arr[i].data, param2_arr[i].len);
        param2_QList.push_back(param2_arr_i_QString);
    }
    return new QIcon(KDE::icon(param1_QString, param2_QList, param3));
}
