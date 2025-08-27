#include <KCountryFlagEmojiIconEngine>
#include <QDataStream>
#include <QFont>
#include <QIconEngine>
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <kcountryflagemojiiconengine.h>
#include "libkcountryflagemojiiconengine.h"
#include "libkcountryflagemojiiconengine.hxx"

KCountryFlagEmojiIconEngine* KCountryFlagEmojiIconEngine_new(const libqt_string regionOrCountry) {
    QString regionOrCountry_QString = QString::fromUtf8(regionOrCountry.data, regionOrCountry.len);
    return new VirtualKCountryFlagEmojiIconEngine(regionOrCountry_QString);
}

void KCountryFlagEmojiIconEngine_SetGlobalDefaultFont(const QFont* font) {
    KCountryFlagEmojiIconEngine::setGlobalDefaultFont(*font);
}

// Derived class handler implementation
QIconEngine* KCountryFlagEmojiIconEngine_Clone(const KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return vkcountryflagemojiiconengine->clone();
    } else {
        return self->KCountryFlagEmojiIconEngine::clone();
    }
}

// Base class handler implementation
QIconEngine* KCountryFlagEmojiIconEngine_QBaseClone(const KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Clone_IsBase(true);
        return vkcountryflagemojiiconengine->clone();
    } else {
        return self->KCountryFlagEmojiIconEngine::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnClone(const KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Clone_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KCountryFlagEmojiIconEngine_Key(const KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        QString _ret = vkcountryflagemojiiconengine->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCountryFlagEmojiIconEngine::key();
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

// Base class handler implementation
libqt_string KCountryFlagEmojiIconEngine_QBaseKey(const KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Key_IsBase(true);
        QString _ret = vkcountryflagemojiiconengine->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCountryFlagEmojiIconEngine::key();
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
void KCountryFlagEmojiIconEngine_OnKey(const KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Key_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Key_Callback>(slot));
    }
}

// Derived class handler implementation
void KCountryFlagEmojiIconEngine_Paint(KCountryFlagEmojiIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void KCountryFlagEmojiIconEngine_QBasePaint(KCountryFlagEmojiIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Paint_IsBase(true);
        vkcountryflagemojiiconengine->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnPaint(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Paint_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* KCountryFlagEmojiIconEngine_Pixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return new QPixmap(vkcountryflagemojiiconengine->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualKCountryFlagEmojiIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Base class handler implementation
QPixmap* KCountryFlagEmojiIconEngine_QBasePixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Pixmap_IsBase(true);
        return new QPixmap(vkcountryflagemojiiconengine->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualKCountryFlagEmojiIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Pixmap_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Pixmap_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* KCountryFlagEmojiIconEngine_ScaledPixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return new QPixmap(vkcountryflagemojiiconengine->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualKCountryFlagEmojiIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

// Base class handler implementation
QPixmap* KCountryFlagEmojiIconEngine_QBaseScaledPixmap(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_ScaledPixmap_IsBase(true);
        return new QPixmap(vkcountryflagemojiiconengine->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualKCountryFlagEmojiIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnScaledPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_ScaledPixmap_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_ScaledPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCountryFlagEmojiIconEngine_IsNull(KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return vkcountryflagemojiiconengine->isNull();
    } else {
        return self->KCountryFlagEmojiIconEngine::isNull();
    }
}

// Base class handler implementation
bool KCountryFlagEmojiIconEngine_QBaseIsNull(KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_IsNull_IsBase(true);
        return vkcountryflagemojiiconengine->isNull();
    } else {
        return self->KCountryFlagEmojiIconEngine::isNull();
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnIsNull(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_IsNull_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_IsNull_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KCountryFlagEmojiIconEngine_ActualSize(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return new QSize(vkcountryflagemojiiconengine->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualKCountryFlagEmojiIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Base class handler implementation
QSize* KCountryFlagEmojiIconEngine_QBaseActualSize(KCountryFlagEmojiIconEngine* self, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_ActualSize_IsBase(true);
        return new QSize(vkcountryflagemojiiconengine->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualKCountryFlagEmojiIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnActualSize(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_ActualSize_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_ActualSize_Callback>(slot));
    }
}

// Derived class handler implementation
void KCountryFlagEmojiIconEngine_AddPixmap(KCountryFlagEmojiIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void KCountryFlagEmojiIconEngine_QBaseAddPixmap(KCountryFlagEmojiIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AddPixmap_IsBase(true);
        vkcountryflagemojiiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnAddPixmap(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AddPixmap_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_AddPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void KCountryFlagEmojiIconEngine_AddFile(KCountryFlagEmojiIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void KCountryFlagEmojiIconEngine_QBaseAddFile(KCountryFlagEmojiIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AddFile_IsBase(true);
        vkcountryflagemojiiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->KCountryFlagEmojiIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnAddFile(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AddFile_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_AddFile_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCountryFlagEmojiIconEngine_Read(KCountryFlagEmojiIconEngine* self, QDataStream* in) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return vkcountryflagemojiiconengine->read(*in);
    } else {
        return self->KCountryFlagEmojiIconEngine::read(*in);
    }
}

// Base class handler implementation
bool KCountryFlagEmojiIconEngine_QBaseRead(KCountryFlagEmojiIconEngine* self, QDataStream* in) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Read_IsBase(true);
        return vkcountryflagemojiiconengine->read(*in);
    } else {
        return self->KCountryFlagEmojiIconEngine::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnRead(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Read_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Read_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCountryFlagEmojiIconEngine_Write(const KCountryFlagEmojiIconEngine* self, QDataStream* out) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        return vkcountryflagemojiiconengine->write(*out);
    } else {
        return self->KCountryFlagEmojiIconEngine::write(*out);
    }
}

// Base class handler implementation
bool KCountryFlagEmojiIconEngine_QBaseWrite(const KCountryFlagEmojiIconEngine* self, QDataStream* out) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Write_IsBase(true);
        return vkcountryflagemojiiconengine->write(*out);
    } else {
        return self->KCountryFlagEmojiIconEngine::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnWrite(const KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = const_cast<VirtualKCountryFlagEmojiIconEngine*>(dynamic_cast<const VirtualKCountryFlagEmojiIconEngine*>(self));
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_Write_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_Write_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QSize* */ KCountryFlagEmojiIconEngine_AvailableSizes(KCountryFlagEmojiIconEngine* self, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        QList<QSize> _ret = vkcountryflagemojiiconengine->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
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
        QList<QSize> _ret = self->KCountryFlagEmojiIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
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

// Base class handler implementation
libqt_list /* of QSize* */ KCountryFlagEmojiIconEngine_QBaseAvailableSizes(KCountryFlagEmojiIconEngine* self, int mode, int state) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AvailableSizes_IsBase(true);
        QList<QSize> _ret = vkcountryflagemojiiconengine->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
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
        QList<QSize> _ret = self->KCountryFlagEmojiIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
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
void KCountryFlagEmojiIconEngine_OnAvailableSizes(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_AvailableSizes_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_AvailableSizes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string KCountryFlagEmojiIconEngine_IconName(KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        QString _ret = vkcountryflagemojiiconengine->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCountryFlagEmojiIconEngine::iconName();
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

// Base class handler implementation
libqt_string KCountryFlagEmojiIconEngine_QBaseIconName(KCountryFlagEmojiIconEngine* self) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_IconName_IsBase(true);
        QString _ret = vkcountryflagemojiiconengine->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->KCountryFlagEmojiIconEngine::iconName();
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
void KCountryFlagEmojiIconEngine_OnIconName(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_IconName_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_IconName_Callback>(slot));
    }
}

// Derived class handler implementation
void KCountryFlagEmojiIconEngine_VirtualHook(KCountryFlagEmojiIconEngine* self, int id, void* data) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->KCountryFlagEmojiIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KCountryFlagEmojiIconEngine_QBaseVirtualHook(KCountryFlagEmojiIconEngine* self, int id, void* data) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_VirtualHook_IsBase(true);
        vkcountryflagemojiiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->KCountryFlagEmojiIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KCountryFlagEmojiIconEngine_OnVirtualHook(KCountryFlagEmojiIconEngine* self, intptr_t slot) {
    auto* vkcountryflagemojiiconengine = dynamic_cast<VirtualKCountryFlagEmojiIconEngine*>(self);
    if (vkcountryflagemojiiconengine && vkcountryflagemojiiconengine->isVirtualKCountryFlagEmojiIconEngine) {
        vkcountryflagemojiiconengine->setKCountryFlagEmojiIconEngine_VirtualHook_Callback(reinterpret_cast<VirtualKCountryFlagEmojiIconEngine::KCountryFlagEmojiIconEngine_VirtualHook_Callback>(slot));
    }
}

void KCountryFlagEmojiIconEngine_Delete(KCountryFlagEmojiIconEngine* self) {
    delete self;
}
