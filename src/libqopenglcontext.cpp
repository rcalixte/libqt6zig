#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QOpenGLContext>
#include <QOpenGLContextGroup>
#include <QOpenGLExtraFunctions>
#include <QOpenGLFunctions>
#include <QScreen>
#include <QSet>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTimerEvent>
#include <qopenglcontext.h>
#include "libqopenglcontext.h"
#include "libqopenglcontext.hxx"

QMetaObject* QOpenGLContextGroup_MetaObject(const QOpenGLContextGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLContextGroup_Metacast(QOpenGLContextGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLContextGroup_Metacall(QOpenGLContextGroup* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QOpenGLContextGroup_Tr(const char* s) {
    QString _ret = QOpenGLContextGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QOpenGLContext* */ QOpenGLContextGroup_Shares(const QOpenGLContextGroup* self) {
    QList<QOpenGLContext*> _ret = self->shares();
    // Convert QList<> from C++ memory to manually-managed C memory
    QOpenGLContext** _arr = static_cast<QOpenGLContext**>(malloc(sizeof(QOpenGLContext*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QOpenGLContextGroup* QOpenGLContextGroup_CurrentContextGroup() {
    return QOpenGLContextGroup::currentContextGroup();
}

libqt_string QOpenGLContextGroup_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLContextGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLContextGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLContextGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLContextGroup_Delete(QOpenGLContextGroup* self) {
    delete self;
}

QOpenGLContext* QOpenGLContext_new() {
    return new VirtualQOpenGLContext();
}

QOpenGLContext* QOpenGLContext_new2(QObject* parent) {
    return new VirtualQOpenGLContext(parent);
}

QMetaObject* QOpenGLContext_MetaObject(const QOpenGLContext* self) {
    return (QMetaObject*)self->metaObject();
}

void* QOpenGLContext_Metacast(QOpenGLContext* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QOpenGLContext_Metacall(QOpenGLContext* self, int param1, int param2, void** param3) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQOpenGLContext*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QOpenGLContext_Tr(const char* s) {
    QString _ret = QOpenGLContext::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QOpenGLContext_SetFormat(QOpenGLContext* self, const QSurfaceFormat* format) {
    self->setFormat(*format);
}

void QOpenGLContext_SetShareContext(QOpenGLContext* self, QOpenGLContext* shareContext) {
    self->setShareContext(shareContext);
}

void QOpenGLContext_SetScreen(QOpenGLContext* self, QScreen* screen) {
    self->setScreen(screen);
}

bool QOpenGLContext_Create(QOpenGLContext* self) {
    return self->create();
}

bool QOpenGLContext_IsValid(const QOpenGLContext* self) {
    return self->isValid();
}

QSurfaceFormat* QOpenGLContext_Format(const QOpenGLContext* self) {
    return new QSurfaceFormat(self->format());
}

QOpenGLContext* QOpenGLContext_ShareContext(const QOpenGLContext* self) {
    return self->shareContext();
}

QOpenGLContextGroup* QOpenGLContext_ShareGroup(const QOpenGLContext* self) {
    return self->shareGroup();
}

QScreen* QOpenGLContext_Screen(const QOpenGLContext* self) {
    return self->screen();
}

uint32_t QOpenGLContext_DefaultFramebufferObject(const QOpenGLContext* self) {
    return self->defaultFramebufferObject();
}

bool QOpenGLContext_MakeCurrent(QOpenGLContext* self, QSurface* surface) {
    return self->makeCurrent(surface);
}

void QOpenGLContext_DoneCurrent(QOpenGLContext* self) {
    self->doneCurrent();
}

void QOpenGLContext_SwapBuffers(QOpenGLContext* self, QSurface* surface) {
    self->swapBuffers(surface);
}

QSurface* QOpenGLContext_Surface(const QOpenGLContext* self) {
    return self->surface();
}

QOpenGLContext* QOpenGLContext_CurrentContext() {
    return QOpenGLContext::currentContext();
}

bool QOpenGLContext_AreSharing(QOpenGLContext* first, QOpenGLContext* second) {
    return QOpenGLContext::areSharing(first, second);
}

QOpenGLFunctions* QOpenGLContext_Functions(const QOpenGLContext* self) {
    return self->functions();
}

QOpenGLExtraFunctions* QOpenGLContext_ExtraFunctions(const QOpenGLContext* self) {
    return self->extraFunctions();
}

libqt_list /* set of libqt_string */ QOpenGLContext_Extensions(const QOpenGLContext* self) {
    QSet<QByteArray> _ret = self->extensions();
    // Convert QSet<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
    int _ctr = 0;
    QSetIterator<QByteArray> _itr(_ret);
    while (_itr.hasNext()) {
        QByteArray _sv_qb = _itr.next();
        libqt_string _sv_str;
        _sv_str.len = _sv_qb.length();
        _sv_str.data = static_cast<const char*>(malloc(_sv_str.len + 1));
        memcpy((void*)_sv_str.data, _sv_qb.data(), _sv_str.len);
        ((char*)_sv_str.data)[_sv_str.len] = '\0';
        _arr[_ctr++] = _sv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QOpenGLContext_HasExtension(const QOpenGLContext* self, const libqt_string extension) {
    QByteArray extension_QByteArray(extension.data, extension.len);
    return self->hasExtension(extension_QByteArray);
}

int QOpenGLContext_OpenGLModuleType() {
    return static_cast<int>(QOpenGLContext::openGLModuleType());
}

bool QOpenGLContext_IsOpenGLES(const QOpenGLContext* self) {
    return self->isOpenGLES();
}

bool QOpenGLContext_SupportsThreadedOpenGL() {
    return QOpenGLContext::supportsThreadedOpenGL();
}

QOpenGLContext* QOpenGLContext_GlobalShareContext() {
    return QOpenGLContext::globalShareContext();
}

void QOpenGLContext_AboutToBeDestroyed(QOpenGLContext* self) {
    self->aboutToBeDestroyed();
}

void QOpenGLContext_Connect_AboutToBeDestroyed(QOpenGLContext* self, intptr_t slot) {
    void (*slotFunc)(QOpenGLContext*) = reinterpret_cast<void (*)(QOpenGLContext*)>(slot);
    QOpenGLContext::connect(self, &QOpenGLContext::aboutToBeDestroyed, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QOpenGLContext_Tr2(const char* s, const char* c) {
    QString _ret = QOpenGLContext::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QOpenGLContext_Tr3(const char* s, const char* c, int n) {
    QString _ret = QOpenGLContext::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
int QOpenGLContext_QBaseMetacall(QOpenGLContext* self, int param1, int param2, void** param3) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Metacall_IsBase(true);
        return vqopenglcontext->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QOpenGLContext::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnMetacall(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Metacall_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLContext_Event(QOpenGLContext* self, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->event(event);
    } else {
        return self->QOpenGLContext::event(event);
    }
}

// Base class handler implementation
bool QOpenGLContext_QBaseEvent(QOpenGLContext* self, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Event_IsBase(true);
        return vqopenglcontext->event(event);
    } else {
        return self->QOpenGLContext::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnEvent(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Event_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLContext_EventFilter(QOpenGLContext* self, QObject* watched, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->eventFilter(watched, event);
    } else {
        return self->QOpenGLContext::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QOpenGLContext_QBaseEventFilter(QOpenGLContext* self, QObject* watched, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_EventFilter_IsBase(true);
        return vqopenglcontext->eventFilter(watched, event);
    } else {
        return self->QOpenGLContext::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnEventFilter(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_EventFilter_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLContext_TimerEvent(QOpenGLContext* self, QTimerEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->timerEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QOpenGLContext_QBaseTimerEvent(QOpenGLContext* self, QTimerEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_TimerEvent_IsBase(true);
        vqopenglcontext->timerEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnTimerEvent(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_TimerEvent_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLContext_ChildEvent(QOpenGLContext* self, QChildEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->childEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QOpenGLContext_QBaseChildEvent(QOpenGLContext* self, QChildEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ChildEvent_IsBase(true);
        vqopenglcontext->childEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnChildEvent(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ChildEvent_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLContext_CustomEvent(QOpenGLContext* self, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->customEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QOpenGLContext_QBaseCustomEvent(QOpenGLContext* self, QEvent* event) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_CustomEvent_IsBase(true);
        vqopenglcontext->customEvent(event);
    } else {
        ((VirtualQOpenGLContext*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnCustomEvent(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_CustomEvent_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLContext_ConnectNotify(QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLContext*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLContext_QBaseConnectNotify(QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ConnectNotify_IsBase(true);
        vqopenglcontext->connectNotify(*signal);
    } else {
        ((VirtualQOpenGLContext*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnConnectNotify(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ConnectNotify_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QOpenGLContext_DisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLContext*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QOpenGLContext_QBaseDisconnectNotify(QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_DisconnectNotify_IsBase(true);
        vqopenglcontext->disconnectNotify(*signal);
    } else {
        ((VirtualQOpenGLContext*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnDisconnectNotify(QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = dynamic_cast<VirtualQOpenGLContext*>(self);
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_DisconnectNotify_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void* QOpenGLContext_ResolveInterface(const QOpenGLContext* self, const char* name, int revision) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOpenGLContext*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Base class handler implementation
void* QOpenGLContext_QBaseResolveInterface(const QOpenGLContext* self, const char* name, int revision) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ResolveInterface_IsBase(true);
        return vqopenglcontext->resolveInterface(name, static_cast<int>(revision));
    } else {
        return ((VirtualQOpenGLContext*)self)->resolveInterface(name, static_cast<int>(revision));
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnResolveInterface(const QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_ResolveInterface_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_ResolveInterface_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QOpenGLContext_Sender(const QOpenGLContext* self) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->sender();
    } else {
        return ((VirtualQOpenGLContext*)self)->sender();
    }
}

// Base class handler implementation
QObject* QOpenGLContext_QBaseSender(const QOpenGLContext* self) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Sender_IsBase(true);
        return vqopenglcontext->sender();
    } else {
        return ((VirtualQOpenGLContext*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnSender(const QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Sender_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLContext_SenderSignalIndex(const QOpenGLContext* self) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLContext*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QOpenGLContext_QBaseSenderSignalIndex(const QOpenGLContext* self) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_SenderSignalIndex_IsBase(true);
        return vqopenglcontext->senderSignalIndex();
    } else {
        return ((VirtualQOpenGLContext*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnSenderSignalIndex(const QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_SenderSignalIndex_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QOpenGLContext_Receivers(const QOpenGLContext* self, const char* signal) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->receivers(signal);
    } else {
        return ((VirtualQOpenGLContext*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QOpenGLContext_QBaseReceivers(const QOpenGLContext* self, const char* signal) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Receivers_IsBase(true);
        return vqopenglcontext->receivers(signal);
    } else {
        return ((VirtualQOpenGLContext*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnReceivers(const QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_Receivers_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QOpenGLContext_IsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        return vqopenglcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLContext*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QOpenGLContext_QBaseIsSignalConnected(const QOpenGLContext* self, const QMetaMethod* signal) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_IsSignalConnected_IsBase(true);
        return vqopenglcontext->isSignalConnected(*signal);
    } else {
        return ((VirtualQOpenGLContext*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QOpenGLContext_OnIsSignalConnected(const QOpenGLContext* self, intptr_t slot) {
    auto* vqopenglcontext = const_cast<VirtualQOpenGLContext*>(dynamic_cast<const VirtualQOpenGLContext*>(self));
    if (vqopenglcontext && vqopenglcontext->isVirtualQOpenGLContext) {
        vqopenglcontext->setQOpenGLContext_IsSignalConnected_Callback(reinterpret_cast<VirtualQOpenGLContext::QOpenGLContext_IsSignalConnected_Callback>(slot));
    }
}

void QOpenGLContext_Delete(QOpenGLContext* self) {
    delete self;
}
