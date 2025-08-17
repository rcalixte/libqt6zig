#include <QDataStream>
#include <QIconEngine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qiconengine.h>
#include "libqiconengine.h"
#include "libqiconengine.hxx"

QIconEngine* QIconEngine_new() {
    return new VirtualQIconEngine();
}

// Derived class handler implementation
void QIconEngine_Paint(QIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        ((VirtualQIconEngine*)self)->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void QIconEngine_QBasePaint(QIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Paint_IsBase(true);
        vqiconengine->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        ((VirtualQIconEngine*)self)->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnPaint(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Paint_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Paint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QIconEngine_ActualSize(QIconEngine* self, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return new QSize(vqiconengine->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualQIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Base class handler implementation
QSize* QIconEngine_QBaseActualSize(QIconEngine* self, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_ActualSize_IsBase(true);
        return new QSize(vqiconengine->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QSize(((VirtualQIconEngine*)self)->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnActualSize(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_ActualSize_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_ActualSize_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QIconEngine_Pixmap(QIconEngine* self, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return new QPixmap(vqiconengine->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualQIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Base class handler implementation
QPixmap* QIconEngine_QBasePixmap(QIconEngine* self, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Pixmap_IsBase(true);
        return new QPixmap(vqiconengine->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    } else {
        return new QPixmap(((VirtualQIconEngine*)self)->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnPixmap(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Pixmap_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Pixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEngine_AddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void QIconEngine_QBaseAddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AddPixmap_IsBase(true);
        vqiconengine->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnAddPixmap(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AddPixmap_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_AddPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEngine_AddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Base class handler implementation
void QIconEngine_QBaseAddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AddFile_IsBase(true);
        vqiconengine->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    } else {
        self->QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnAddFile(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AddFile_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_AddFile_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QIconEngine_Key(const QIconEngine* self) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        QString _ret = vqiconengine->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QIconEngine::key();
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
libqt_string QIconEngine_QBaseKey(const QIconEngine* self) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Key_IsBase(true);
        QString _ret = vqiconengine->key();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QIconEngine::key();
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
void QIconEngine_OnKey(const QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Key_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Key_Callback>(slot));
    }
}

// Derived class handler implementation
QIconEngine* QIconEngine_Clone(const QIconEngine* self) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return vqiconengine->clone();
    } else {
        return ((VirtualQIconEngine*)self)->clone();
    }
}

// Base class handler implementation
QIconEngine* QIconEngine_QBaseClone(const QIconEngine* self) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Clone_IsBase(true);
        return vqiconengine->clone();
    } else {
        return ((VirtualQIconEngine*)self)->clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnClone(const QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Clone_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIconEngine_Read(QIconEngine* self, QDataStream* in) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return vqiconengine->read(*in);
    } else {
        return self->QIconEngine::read(*in);
    }
}

// Base class handler implementation
bool QIconEngine_QBaseRead(QIconEngine* self, QDataStream* in) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Read_IsBase(true);
        return vqiconengine->read(*in);
    } else {
        return self->QIconEngine::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnRead(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Read_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Read_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIconEngine_Write(const QIconEngine* self, QDataStream* out) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return vqiconengine->write(*out);
    } else {
        return self->QIconEngine::write(*out);
    }
}

// Base class handler implementation
bool QIconEngine_QBaseWrite(const QIconEngine* self, QDataStream* out) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Write_IsBase(true);
        return vqiconengine->write(*out);
    } else {
        return self->QIconEngine::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnWrite(const QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self));
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_Write_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_Write_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QSize* */ QIconEngine_AvailableSizes(QIconEngine* self, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        QList<QSize> _ret = vqiconengine->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QSize> _ret = self->QIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
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
libqt_list /* of QSize* */ QIconEngine_QBaseAvailableSizes(QIconEngine* self, int mode, int state) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AvailableSizes_IsBase(true);
        QList<QSize> _ret = vqiconengine->availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QSize(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QSize> _ret = self->QIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
        // Convert QList<> from C++ memory to manually-managed C memory
        QSize** _arr = static_cast<QSize**>(malloc(sizeof(QSize*) * _ret.size()));
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
void QIconEngine_OnAvailableSizes(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_AvailableSizes_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_AvailableSizes_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QIconEngine_IconName(QIconEngine* self) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        QString _ret = vqiconengine->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QIconEngine::iconName();
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
libqt_string QIconEngine_QBaseIconName(QIconEngine* self) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_IconName_IsBase(true);
        QString _ret = vqiconengine->iconName();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QIconEngine::iconName();
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
void QIconEngine_OnIconName(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_IconName_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_IconName_Callback>(slot));
    }
}

// Derived class handler implementation
bool QIconEngine_IsNull(QIconEngine* self) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return vqiconengine->isNull();
    } else {
        return self->QIconEngine::isNull();
    }
}

// Base class handler implementation
bool QIconEngine_QBaseIsNull(QIconEngine* self) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_IsNull_IsBase(true);
        return vqiconengine->isNull();
    } else {
        return self->QIconEngine::isNull();
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnIsNull(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_IsNull_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_IsNull_Callback>(slot));
    }
}

// Derived class handler implementation
QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        return new QPixmap(vqiconengine->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualQIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

// Base class handler implementation
QPixmap* QIconEngine_QBaseScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_ScaledPixmap_IsBase(true);
        return new QPixmap(vqiconengine->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    } else {
        return new QPixmap(((VirtualQIconEngine*)self)->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnScaledPixmap(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_ScaledPixmap_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_ScaledPixmap_Callback>(slot));
    }
}

// Derived class handler implementation
void QIconEngine_VirtualHook(QIconEngine* self, int id, void* data) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void QIconEngine_QBaseVirtualHook(QIconEngine* self, int id, void* data) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_VirtualHook_IsBase(true);
        vqiconengine->virtual_hook(static_cast<int>(id), data);
    } else {
        self->QIconEngine::virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnVirtualHook(QIconEngine* self, intptr_t slot) {
    auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self);
    if (vqiconengine && vqiconengine->isVirtualQIconEngine) {
        vqiconengine->setQIconEngine_VirtualHook_Callback(reinterpret_cast<VirtualQIconEngine::QIconEngine_VirtualHook_Callback>(slot));
    }
}

void QIconEngine_Delete(QIconEngine* self) {
    delete self;
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new(const QIconEngine__ScaledPixmapArgument* param1) {
    return new QIconEngine::ScaledPixmapArgument(*param1);
}

void QIconEngine__ScaledPixmapArgument_OperatorAssign(QIconEngine__ScaledPixmapArgument* self, const QIconEngine__ScaledPixmapArgument* param1) {
    self->operator=(*param1);
}

void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self) {
    delete self;
}
