#include <QDataStream>
#include <QIconEngine>
#define WORKAROUND_INNER_CLASS_DEFINITION_QIconEngine__ScaledPixmapArgument
#include <QList>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <qiconengine.h>
#include "libqiconengine.h"
#include "libqiconengine.hxx"

QIconEngine* QIconEngine_new() {
    return new VirtualQIconEngine();
}

void QIconEngine_Paint(QIconEngine* self, QPainter* painter, const QRect* rect, int mode, int state) {
    self->paint(painter, *rect, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

QSize* QIconEngine_ActualSize(QIconEngine* self, const QSize* size, int mode, int state) {
    return new QSize(self->actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

QPixmap* QIconEngine_Pixmap(QIconEngine* self, const QSize* size, int mode, int state) {
    return new QPixmap(self->pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

void QIconEngine_AddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    self->addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

void QIconEngine_AddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

libqt_string QIconEngine_Key(const QIconEngine* self) {
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

QIconEngine* QIconEngine_Clone(const QIconEngine* self) {
    return self->clone();
}

bool QIconEngine_Read(QIconEngine* self, QDataStream* in) {
    return self->read(*in);
}

bool QIconEngine_Write(const QIconEngine* self, QDataStream* out) {
    return self->write(*out);
}

libqt_list /* of QSize* */ QIconEngine_AvailableSizes(QIconEngine* self, int mode, int state) {
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

libqt_string QIconEngine_IconName(QIconEngine* self) {
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

bool QIconEngine_IsNull(QIconEngine* self) {
    return self->isNull();
}

QPixmap* QIconEngine_ScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale) {
    return new QPixmap(self->scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

void QIconEngine_VirtualHook(QIconEngine* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnPaint(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_paint_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Paint_Callback>(slot);
}

// Base class handler implementation
QSize* QIconEngine_SuperActualSize(QIconEngine* self, const QSize* size, int mode, int state) {
    return new QSize(self->QIconEngine::actualSize(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnActualSize(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_actualsize_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_ActualSize_Callback>(slot);
}

// Base class handler implementation
QPixmap* QIconEngine_SuperPixmap(QIconEngine* self, const QSize* size, int mode, int state) {
    return new QPixmap(self->QIconEngine::pixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state)));
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnPixmap(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_pixmap_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Pixmap_Callback>(slot);
}

// Base class handler implementation
void QIconEngine_SuperAddPixmap(QIconEngine* self, const QPixmap* pixmap, int mode, int state) {
    self->QIconEngine::addPixmap(*pixmap, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnAddPixmap(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_addpixmap_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_AddPixmap_Callback>(slot);
}

// Base class handler implementation
void QIconEngine_SuperAddFile(QIconEngine* self, const libqt_string fileName, const QSize* size, int mode, int state) {
    QString fileName_QString = QString::fromUtf8(fileName.data, fileName.len);
    self->QIconEngine::addFile(fileName_QString, *size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnAddFile(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_addfile_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_AddFile_Callback>(slot);
}

// Base class handler implementation
libqt_string QIconEngine_SuperKey(const QIconEngine* self) {
    auto _ret = self->QIconEngine::key();
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
void QIconEngine_OnKey(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self)))
        vqiconengine->qiconengine_key_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Key_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnClone(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self)))
        vqiconengine->qiconengine_clone_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Clone_Callback>(slot);
}

// Base class handler implementation
bool QIconEngine_SuperRead(QIconEngine* self, QDataStream* in) {
    return self->QIconEngine::read(*in);
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnRead(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_read_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Read_Callback>(slot);
}

// Base class handler implementation
bool QIconEngine_SuperWrite(const QIconEngine* self, QDataStream* out) {
    return self->QIconEngine::write(*out);
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnWrite(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = const_cast<VirtualQIconEngine*>(dynamic_cast<const VirtualQIconEngine*>(self)))
        vqiconengine->qiconengine_write_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_Write_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QSize* */ QIconEngine_SuperAvailableSizes(QIconEngine* self, int mode, int state) {
    QList<QSize> _ret = self->QIconEngine::availableSizes(static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state));
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
void QIconEngine_OnAvailableSizes(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_availablesizes_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_AvailableSizes_Callback>(slot);
}

// Base class handler implementation
libqt_string QIconEngine_SuperIconName(QIconEngine* self) {
    auto _ret = self->QIconEngine::iconName();
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
void QIconEngine_OnIconName(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_iconname_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_IconName_Callback>(slot);
}

// Base class handler implementation
bool QIconEngine_SuperIsNull(QIconEngine* self) {
    return self->QIconEngine::isNull();
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnIsNull(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_isnull_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_IsNull_Callback>(slot);
}

// Base class handler implementation
QPixmap* QIconEngine_SuperScaledPixmap(QIconEngine* self, const QSize* size, int mode, int state, double scale) {
    return new QPixmap(self->QIconEngine::scaledPixmap(*size, static_cast<QIcon::Mode>(mode), static_cast<QIcon::State>(state), static_cast<qreal>(scale)));
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnScaledPixmap(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_scaledpixmap_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_ScaledPixmap_Callback>(slot);
}

// Base class handler implementation
void QIconEngine_SuperVirtualHook(QIconEngine* self, int id, void* data) {
    self->QIconEngine::virtual_hook(static_cast<int>(id), data);
}

// Auxiliary method to allow providing re-implementation
void QIconEngine_OnVirtualHook(QIconEngine* self, intptr_t slot) {
    if (auto* vqiconengine = dynamic_cast<VirtualQIconEngine*>(self))
        vqiconengine->qiconengine_virtualhook_callback = reinterpret_cast<VirtualQIconEngine::QIconEngine_VirtualHook_Callback>(slot);
}

void QIconEngine_Delete(QIconEngine* self) {
    delete self;
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new() {
    return new QIconEngine::ScaledPixmapArgument();
}

QIconEngine__ScaledPixmapArgument* QIconEngine__ScaledPixmapArgument_new2(const QIconEngine__ScaledPixmapArgument* param1) {
    return new QIconEngine::ScaledPixmapArgument(*param1);
}

QSize* QIconEngine__ScaledPixmapArgument_Size(const QIconEngine__ScaledPixmapArgument* self) {
    return new QSize(self->size);
}

void QIconEngine__ScaledPixmapArgument_SetSize(QIconEngine__ScaledPixmapArgument* self, QSize* size) {
    self->size = *size;
}

int QIconEngine__ScaledPixmapArgument_Mode(const QIconEngine__ScaledPixmapArgument* self) {
    return static_cast<int>(self->mode);
}

void QIconEngine__ScaledPixmapArgument_SetMode(QIconEngine__ScaledPixmapArgument* self, int mode) {
    self->mode = static_cast<QIcon::Mode>(mode);
}

int QIconEngine__ScaledPixmapArgument_State(const QIconEngine__ScaledPixmapArgument* self) {
    return static_cast<int>(self->state);
}

void QIconEngine__ScaledPixmapArgument_SetState(QIconEngine__ScaledPixmapArgument* self, int state) {
    self->state = static_cast<QIcon::State>(state);
}

double QIconEngine__ScaledPixmapArgument_Scale(const QIconEngine__ScaledPixmapArgument* self) {
    return self->scale;
}

void QIconEngine__ScaledPixmapArgument_SetScale(QIconEngine__ScaledPixmapArgument* self, double scale) {
    self->scale = static_cast<double>(scale);
}

QPixmap* QIconEngine__ScaledPixmapArgument_Pixmap(const QIconEngine__ScaledPixmapArgument* self) {
    return new QPixmap(self->pixmap);
}

void QIconEngine__ScaledPixmapArgument_SetPixmap(QIconEngine__ScaledPixmapArgument* self, QPixmap* pixmap) {
    self->pixmap = *pixmap;
}

void QIconEngine__ScaledPixmapArgument_OperatorAssign(QIconEngine__ScaledPixmapArgument* self, const QIconEngine__ScaledPixmapArgument* param1) {
    self->operator=(*param1);
}

void QIconEngine__ScaledPixmapArgument_Delete(QIconEngine__ScaledPixmapArgument* self) {
    delete self;
}
