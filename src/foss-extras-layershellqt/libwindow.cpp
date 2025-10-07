#define WORKAROUND_INNER_CLASS_DEFINITION_LayerShellQt__Window
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWindow>
#include <window.h>
#include "libwindow.h"
#include "libwindow.hxx"

QMetaObject* LayerShellQt__Window_MetaObject(const LayerShellQt__Window* self) {
    return (QMetaObject*)self->metaObject();
}

void* LayerShellQt__Window_Metacast(LayerShellQt__Window* self, const char* param1) {
    return self->qt_metacast(param1);
}

int LayerShellQt__Window_Metacall(LayerShellQt__Window* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string LayerShellQt__Window_Tr(const char* s) {
    QString _ret = LayerShellQt::Window::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void LayerShellQt__Window_SetAnchors(LayerShellQt__Window* self, int anchor) {
    self->setAnchors(static_cast<LayerShellQt::Window::Anchors>(anchor));
}

int LayerShellQt__Window_Anchors(const LayerShellQt__Window* self) {
    return static_cast<int>(self->anchors());
}

void LayerShellQt__Window_SetExclusiveZone(LayerShellQt__Window* self, int32_t zone) {
    self->setExclusiveZone(static_cast<int32_t>(zone));
}

int32_t LayerShellQt__Window_ExclusionZone(const LayerShellQt__Window* self) {
    return self->exclusionZone();
}

void LayerShellQt__Window_SetExclusiveEdge(LayerShellQt__Window* self, int edge) {
    self->setExclusiveEdge(static_cast<LayerShellQt::Window::Anchor>(edge));
}

int LayerShellQt__Window_ExclusiveEdge(const LayerShellQt__Window* self) {
    return static_cast<int>(self->exclusiveEdge());
}

void LayerShellQt__Window_SetMargins(LayerShellQt__Window* self, const QMargins* margins) {
    self->setMargins(*margins);
}

QMargins* LayerShellQt__Window_Margins(const LayerShellQt__Window* self) {
    return new QMargins(self->margins());
}

void LayerShellQt__Window_SetKeyboardInteractivity(LayerShellQt__Window* self, int interactivity) {
    self->setKeyboardInteractivity(static_cast<LayerShellQt::Window::KeyboardInteractivity>(interactivity));
}

int LayerShellQt__Window_KeyboardInteractivity(const LayerShellQt__Window* self) {
    return static_cast<int>(self->keyboardInteractivity());
}

void LayerShellQt__Window_SetLayer(LayerShellQt__Window* self, int layer) {
    self->setLayer(static_cast<LayerShellQt::Window::Layer>(layer));
}

int LayerShellQt__Window_Layer(const LayerShellQt__Window* self) {
    return static_cast<int>(self->layer());
}

void LayerShellQt__Window_SetScreenConfiguration(LayerShellQt__Window* self, int screenConfiguration) {
    self->setScreenConfiguration(static_cast<LayerShellQt::Window::ScreenConfiguration>(screenConfiguration));
}

int LayerShellQt__Window_ScreenConfiguration(const LayerShellQt__Window* self) {
    return static_cast<int>(self->screenConfiguration());
}

void LayerShellQt__Window_SetScope(LayerShellQt__Window* self, const libqt_string scope) {
    QString scope_QString = QString::fromUtf8(scope.data, scope.len);
    self->setScope(scope_QString);
}

libqt_string LayerShellQt__Window_Scope(const LayerShellQt__Window* self) {
    QString _ret = self->scope();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void LayerShellQt__Window_SetCloseOnDismissed(LayerShellQt__Window* self, bool close) {
    self->setCloseOnDismissed(close);
}

bool LayerShellQt__Window_CloseOnDismissed(const LayerShellQt__Window* self) {
    return self->closeOnDismissed();
}

LayerShellQt__Window* LayerShellQt__Window_Get(QWindow* window) {
    return LayerShellQt::Window::get(window);
}

LayerShellQt__Window* LayerShellQt__Window_QmlAttachedProperties(QObject* object) {
    return LayerShellQt::Window::qmlAttachedProperties(object);
}

void LayerShellQt__Window_AnchorsChanged(LayerShellQt__Window* self) {
    self->anchorsChanged();
}

void LayerShellQt__Window_Connect_AnchorsChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::anchorsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void LayerShellQt__Window_ExclusionZoneChanged(LayerShellQt__Window* self) {
    self->exclusionZoneChanged();
}

void LayerShellQt__Window_Connect_ExclusionZoneChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::exclusionZoneChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void LayerShellQt__Window_ExclusiveEdgeChanged(LayerShellQt__Window* self) {
    self->exclusiveEdgeChanged();
}

void LayerShellQt__Window_Connect_ExclusiveEdgeChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::exclusiveEdgeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void LayerShellQt__Window_MarginsChanged(LayerShellQt__Window* self) {
    self->marginsChanged();
}

void LayerShellQt__Window_Connect_MarginsChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::marginsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void LayerShellQt__Window_KeyboardInteractivityChanged(LayerShellQt__Window* self) {
    self->keyboardInteractivityChanged();
}

void LayerShellQt__Window_Connect_KeyboardInteractivityChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::keyboardInteractivityChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void LayerShellQt__Window_LayerChanged(LayerShellQt__Window* self) {
    self->layerChanged();
}

void LayerShellQt__Window_Connect_LayerChanged(LayerShellQt__Window* self, intptr_t slot) {
    void (*slotFunc)(LayerShellQt__Window*) = reinterpret_cast<void (*)(LayerShellQt__Window*)>(slot);
    LayerShellQt::Window::connect(self, &LayerShellQt::Window::layerChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string LayerShellQt__Window_Tr2(const char* s, const char* c) {
    QString _ret = LayerShellQt::Window::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string LayerShellQt__Window_Tr3(const char* s, const char* c, int n) {
    QString _ret = LayerShellQt::Window::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void LayerShellQt__Window_Delete(LayerShellQt__Window* self) {
    delete self;
}
