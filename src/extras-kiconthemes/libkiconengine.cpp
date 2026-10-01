#include <KIconColors>
#include <KIconEngine>
#include <KIconLoader>
#include <QDataStream>
#include <QIconEngine>
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <kiconengine.h>
#include "libkiconengine.h"
#include "libkiconengine.hxx"

KIconEngine* KIconEngine_new(const libqt_string iconName, KIconLoader* iconLoader, const libqt_list /* of libqt_string */ overlays) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new VirtualKIconEngine(iconName_QString, iconLoader, overlays_QList);
}

KIconEngine* KIconEngine_new2(const libqt_string iconName, KIconLoader* iconLoader) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new VirtualKIconEngine(iconName_QString, iconLoader);
}

KIconEngine* KIconEngine_new3(const libqt_string iconName, const KIconColors* colors, KIconLoader* iconLoader) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    return new VirtualKIconEngine(iconName_QString, *colors, iconLoader);
}

KIconEngine* KIconEngine_new4(const libqt_string iconName, const KIconColors* colors, KIconLoader* iconLoader, const libqt_list /* of libqt_string */ overlays) {
    QString iconName_QString = QString::fromUtf8(iconName.data, iconName.len);
    QList<QString> overlays_QList;
    overlays_QList.reserve(overlays.len);
    libqt_string* overlays_arr = static_cast<libqt_string*>(overlays.data);
    for (size_t i = 0; i < overlays.len; ++i) {
        QString overlays_arr_i_QString = QString::fromUtf8(overlays_arr[i].data, overlays_arr[i].len);
        overlays_QList.push_back(overlays_arr_i_QString);
    }
    return new VirtualKIconEngine(iconName_QString, *colors, iconLoader, overlays_QList);
}

KIconEngine* KIconEngine_new5(const KIconEngine* param1) {
    return new VirtualKIconEngine(*param1);
}

QSize* KIconEngine_ActualSize(KIconEngine* self, const QSize* size, int mode, int state) {
    return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void KIconEngine_Paint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QPixmap* KIconEngine_Pixmap(KIconEngine* self, const QSize* size, int mode, int state) {
    return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* KIconEngine_ScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale) {
    return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

libqt_string KIconEngine_IconName(KIconEngine* self) {
    auto _ret = self->iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QSize* */ KIconEngine_AvailableSizes(KIconEngine* self, int mode, int state) {
    QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool KIconEngine_IsNull(KIconEngine* self) {
    return self->isNull();
}

libqt_string KIconEngine_Key(const KIconEngine* self) {
    auto _ret = self->key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIconEngine* KIconEngine_Clone(const KIconEngine* self) {
    return self->clone();
}

bool KIconEngine_Read(KIconEngine* self, QDataStream* in) {
    return self->read(*in);
}

bool KIconEngine_Write(const KIconEngine* self, QDataStream* out) {
    return self->write(*out);
}

// Base class handler implementation
QSize* KIconEngine_SuperActualSize(KIconEngine* self, const QSize* size, int mode, int state) {
    return new QSize(self->KIconEngine::actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnActualSize(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_actualsize_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_ActualSize_Callback>(slot);
}

// Base class handler implementation
void KIconEngine_SuperPaint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    self->KIconEngine::paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnPaint(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_paint_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Paint_Callback>(slot);
}

// Base class handler implementation
QPixmap* KIconEngine_SuperPixmap(KIconEngine* self, const QSize* size, int mode, int state) {
    return new QPixmap(self->KIconEngine::pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnPixmap(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_pixmap_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Pixmap_Callback>(slot);
}

// Base class handler implementation
QPixmap* KIconEngine_SuperScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale) {
    return new QPixmap(self->KIconEngine::scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnScaledPixmap(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_scaledpixmap_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_ScaledPixmap_Callback>(slot);
}

// Base class handler implementation
libqt_string KIconEngine_SuperIconName(KIconEngine* self) {
    auto _ret = self->KIconEngine::iconName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnIconName(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_iconname_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_IconName_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QSize* */ KIconEngine_SuperAvailableSizes(KIconEngine* self, int mode, int state) {
    QList<QSize> _ret = self->KIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    // Convert QList<> from C++ memory to manually-managed C memory
    QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QSize(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAvailableSizes(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_availablesizes_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_AvailableSizes_Callback>(slot);
}

// Base class handler implementation
bool KIconEngine_SuperIsNull(KIconEngine* self) {
    return self->KIconEngine::isNull();
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnIsNull(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_isnull_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_IsNull_Callback>(slot);
}

// Base class handler implementation
libqt_string KIconEngine_SuperKey(const KIconEngine* self) {
    auto _ret = self->KIconEngine::key();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnKey(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self)))
        vkiconengine->kiconengine_key_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Key_Callback>(slot);
}

// Base class handler implementation
QIconEngine* KIconEngine_SuperClone(const KIconEngine* self) {
    return self->KIconEngine::clone();
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnClone(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self)))
        vkiconengine->kiconengine_clone_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Clone_Callback>(slot);
}

// Base class handler implementation
bool KIconEngine_SuperRead(KIconEngine* self, QDataStream* in) {
    return self->KIconEngine::read(*in);
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnRead(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_read_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Read_Callback>(slot);
}

// Base class handler implementation
bool KIconEngine_SuperWrite(const KIconEngine* self, QDataStream* out) {
    return self->KIconEngine::write(*out);
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnWrite(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self)))
        vkiconengine->kiconengine_write_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_Write_Callback>(slot);
}

// Derived class handler implementation
void KIconEngine_AddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Base class handler implementation
void KIconEngine_SuperAddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    self->KIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAddPixmap(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_addpixmap_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_AddPixmap_Callback>(slot);
}

// Derived class handler implementation
void KIconEngine_AddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Base class handler implementation
void KIconEngine_SuperAddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->KIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAddFile(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_addfile_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_AddFile_Callback>(slot);
}

// Derived class handler implementation
void KIconEngine_VirtualHook(KIconEngine* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

// Base class handler implementation
void KIconEngine_SuperVirtualHook(KIconEngine* self, int id, void* data) {
    self->KIconEngine::virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnVirtualHook(KIconEngine* self, intptr_t slot) {
    if (auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self))
        vkiconengine->kiconengine_virtualhook_callback = reinterpret_cast<VirtualKIconEngine::KIconEngine_VirtualHook_Callback>(slot);
}

void KIconEngine_Delete(KIconEngine* self) {
    delete self;
}
