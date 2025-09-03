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
#include <QByteArray>
#include <cstring>
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
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualKIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

void KIconEngine_Paint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        ((VirtualKIconEngine*)self)->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

QPixmap* KIconEngine_Pixmap(KIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualKIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

QPixmap* KIconEngine_ScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualKIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

libqt_string KIconEngine_IconName(KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        QString _ret = self->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKIconEngine*)self)->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_list /* of QSize* */ KIconEngine_AvailableSizes(KIconEngine* self, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        QList<QSize> _ret = self->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QSize> _ret = ((VirtualKIconEngine*)self)->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

bool KIconEngine_IsNull(KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return self->isNull();
    } else {
        return ((VirtualKIconEngine*)self)->isNull();
    }
}

libqt_string KIconEngine_Key(const KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<const VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        QString _ret = self->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualKIconEngine*)self)->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

QIconEngine* KIconEngine_Clone(const KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<const VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return self->clone();
    } else {
        return ((VirtualKIconEngine*)self)->clone();
    }
}

bool KIconEngine_Read(KIconEngine* self, QDataStream* in) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return self->read(*in);
    } else {
        return ((VirtualKIconEngine*)self)->read(*in);
    }
}

bool KIconEngine_Write(const KIconEngine* self, QDataStream* out) {
    auto* vkiconengine = dynamic_cast<const VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        return self->write(*out);
    } else {
        return ((VirtualKIconEngine*)self)->write(*out);
    }
}

// Base class handler implementation
QSize* KIconEngine_QBaseActualSize(KIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_ActualSize_IsBase(true);
        return new QSize(vkiconengine->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualKIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnActualSize(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_ActualSize_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_ActualSize_Callback>(slot));
    }
}

// Base class handler implementation
void KIconEngine_QBasePaint(KIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Paint_IsBase(true);
        vkiconengine->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KIconEngine::paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnPaint(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Paint_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Paint_Callback>(slot));
    }
}

// Base class handler implementation
QPixmap* KIconEngine_QBasePixmap(KIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Pixmap_IsBase(true);
        return new QPixmap(vkiconengine->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualKIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnPixmap(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Pixmap_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Pixmap_Callback>(slot));
    }
}

// Base class handler implementation
QPixmap* KIconEngine_QBaseScaledPixmap(KIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_ScaledPixmap_IsBase(true);
        return new QPixmap(vkiconengine->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualKIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnScaledPixmap(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_ScaledPixmap_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_ScaledPixmap_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KIconEngine_QBaseIconName(KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_IconName_IsBase(true);
        QString _ret = vkiconengine->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIconEngine::iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnIconName(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_IconName_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_IconName_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QSize* */ KIconEngine_QBaseAvailableSizes(KIconEngine* self, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AvailableSizes_IsBase(true);
        QList<QSize> _ret = vkiconengine->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QSize> _ret = self->KIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAvailableSizes(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AvailableSizes_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_AvailableSizes_Callback>(slot));
    }
}

// Base class handler implementation
bool KIconEngine_QBaseIsNull(KIconEngine* self) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_IsNull_IsBase(true);
        return vkiconengine->isNull();
    } else {
        return self->KIconEngine::isNull();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnIsNull(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_IsNull_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_IsNull_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string KIconEngine_QBaseKey(const KIconEngine* self) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Key_IsBase(true);
        QString _ret = vkiconengine->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KIconEngine::key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnKey(const KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Key_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Key_Callback>(slot));
    }
}

// Base class handler implementation
QIconEngine* KIconEngine_QBaseClone(const KIconEngine* self) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Clone_IsBase(true);
        return vkiconengine->clone();
    } else {
        return self->KIconEngine::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnClone(const KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Clone_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Clone_Callback>(slot));
    }
}

// Base class handler implementation
bool KIconEngine_QBaseRead(KIconEngine* self, QDataStream* in) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Read_IsBase(true);
        return vkiconengine->read(*in);
    } else {
        return self->KIconEngine::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnRead(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Read_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Read_Callback>(slot));
    }
}

// Base class handler implementation
bool KIconEngine_QBaseWrite(const KIconEngine* self, QDataStream* out) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Write_IsBase(true);
        return vkiconengine->write(*out);
    } else {
        return self->KIconEngine::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnWrite(const KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = const_cast<VirtualKIconEngine*>(dynamic_cast<const VirtualKIconEngine*>(self));
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_Write_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_Write_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconEngine_AddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void KIconEngine_QBaseAddPixmap(KIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AddPixmap_IsBase(true);
        vkiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAddPixmap(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AddPixmap_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_AddPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconEngine_AddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void KIconEngine_QBaseAddFile(KIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AddFile_IsBase(true);
        vkiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnAddFile(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_AddFile_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_AddFile_Callback>(slot));
    }
}

// Derived class handler implementation
void KIconEngine_VirtualHook(KIconEngine* self, int id, void* data) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->KIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KIconEngine_QBaseVirtualHook(KIconEngine* self, int id, void* data) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_VirtualHook_IsBase(true);
        vkiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->KIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KIconEngine_OnVirtualHook(KIconEngine* self, intptr_t slot) {
    auto* vkiconengine = dynamic_cast<VirtualKIconEngine*>(self);
    if (vkiconengine && vkiconengine->isVirtualKIconEngine) {
        vkiconengine->setKIconEngine_VirtualHook_Callback(reinterpret_cast<VirtualKIconEngine::KIconEngine_VirtualHook_Callback>(slot));
    }
}

void KIconEngine_Delete(KIconEngine* self) {
    delete self;
}
