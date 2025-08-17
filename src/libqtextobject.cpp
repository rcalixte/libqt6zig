#include <QChildEvent>
#include <QEvent>
#include <QGlyphRun>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextBlock__iterator
#include <QTextBlockFormat>
#include <QTextBlockGroup>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextCursor>
#include <QTextDocument>
#include <QTextFormat>
#include <QTextFragment>
#include <QTextFrame>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextFrame__iterator
#include <QTextFrameFormat>
#include <QTextFrameLayoutData>
#include <QTextLayout>
#define WORKAROUND_INNER_CLASS_DEFINITION_QTextLayout__FormatRange
#include <QTextList>
#include <QTextObject>
#include <QTimerEvent>
#include <qtextobject.h>
#include "libqtextobject.h"
#include "libqtextobject.hxx"

QMetaObject* QTextObject_MetaObject(const QTextObject* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextObject_Metacast(QTextObject* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextObject_Metacall(QTextObject* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextObject_Tr(const char* s) {
    QString _ret = QTextObject::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QTextFormat* QTextObject_Format(const QTextObject* self) {
    return new QTextFormat(self->format());
}

int QTextObject_FormatIndex(const QTextObject* self) {
    return self->formatIndex();
}

QTextDocument* QTextObject_Document(const QTextObject* self) {
    return self->document();
}

int QTextObject_ObjectIndex(const QTextObject* self) {
    return self->objectIndex();
}

libqt_string QTextObject_Tr2(const char* s, const char* c) {
    QString _ret = QTextObject::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextObject_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextObject::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QMetaObject* QTextBlockGroup_MetaObject(const QTextBlockGroup* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextBlockGroup_Metacast(QTextBlockGroup* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextBlockGroup_Metacall(QTextBlockGroup* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextBlockGroup_Tr(const char* s) {
    QString _ret = QTextBlockGroup::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextBlockGroup_Tr2(const char* s, const char* c) {
    QString _ret = QTextBlockGroup::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextBlockGroup_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextBlockGroup::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextFrameLayoutData_OperatorAssign(QTextFrameLayoutData* self, const QTextFrameLayoutData* param1) {
    self->operator=(*param1);
}

void QTextFrameLayoutData_Delete(QTextFrameLayoutData* self) {
    delete self;
}

QTextFrame* QTextFrame_new(QTextDocument* doc) {
    return new VirtualQTextFrame(doc);
}

QMetaObject* QTextFrame_MetaObject(const QTextFrame* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextFrame_Metacast(QTextFrame* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextFrame_Metacall(QTextFrame* self, int param1, int param2, void** param3) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextFrame_OnMetacall(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Metacall_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextFrame_QBaseMetacall(QTextFrame* self, int param1, int param2, void** param3) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Metacall_IsBase(true);
        return vqtextframe->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextFrame*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextFrame_Tr(const char* s) {
    QString _ret = QTextFrame::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextFrame_SetFrameFormat(QTextFrame* self, const QTextFrameFormat* format) {
    self->setFrameFormat(*format);
}

QTextFrameFormat* QTextFrame_FrameFormat(const QTextFrame* self) {
    return new QTextFrameFormat(self->frameFormat());
}

QTextCursor* QTextFrame_FirstCursorPosition(const QTextFrame* self) {
    return new QTextCursor(self->firstCursorPosition());
}

QTextCursor* QTextFrame_LastCursorPosition(const QTextFrame* self) {
    return new QTextCursor(self->lastCursorPosition());
}

int QTextFrame_FirstPosition(const QTextFrame* self) {
    return self->firstPosition();
}

int QTextFrame_LastPosition(const QTextFrame* self) {
    return self->lastPosition();
}

QTextFrameLayoutData* QTextFrame_LayoutData(const QTextFrame* self) {
    return self->layoutData();
}

void QTextFrame_SetLayoutData(QTextFrame* self, QTextFrameLayoutData* data) {
    self->setLayoutData(data);
}

libqt_list /* of QTextFrame* */ QTextFrame_ChildFrames(const QTextFrame* self) {
    QList<QTextFrame*> _ret = self->childFrames();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextFrame** _arr = static_cast<QTextFrame**>(malloc(sizeof(QTextFrame*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QTextFrame* QTextFrame_ParentFrame(const QTextFrame* self) {
    return self->parentFrame();
}

QTextFrame__iterator* QTextFrame_Begin(const QTextFrame* self) {
    return new QTextFrame::iterator(self->begin());
}

QTextFrame__iterator* QTextFrame_End(const QTextFrame* self) {
    return new QTextFrame::iterator(self->end());
}

libqt_string QTextFrame_Tr2(const char* s, const char* c) {
    QString _ret = QTextFrame::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextFrame_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextFrame::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
bool QTextFrame_Event(QTextFrame* self, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->event(event);
    } else {
        return self->QTextFrame::event(event);
    }
}

// Base class handler implementation
bool QTextFrame_QBaseEvent(QTextFrame* self, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Event_IsBase(true);
        return vqtextframe->event(event);
    } else {
        return self->QTextFrame::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnEvent(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Event_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextFrame_EventFilter(QTextFrame* self, QObject* watched, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->eventFilter(watched, event);
    } else {
        return self->QTextFrame::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextFrame_QBaseEventFilter(QTextFrame* self, QObject* watched, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_EventFilter_IsBase(true);
        return vqtextframe->eventFilter(watched, event);
    } else {
        return self->QTextFrame::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnEventFilter(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_EventFilter_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_TimerEvent(QTextFrame* self, QTimerEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->timerEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTextFrame_QBaseTimerEvent(QTextFrame* self, QTimerEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_TimerEvent_IsBase(true);
        vqtextframe->timerEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnTimerEvent(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_TimerEvent_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_ChildEvent(QTextFrame* self, QChildEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->childEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextFrame_QBaseChildEvent(QTextFrame* self, QChildEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_ChildEvent_IsBase(true);
        vqtextframe->childEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnChildEvent(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_ChildEvent_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_CustomEvent(QTextFrame* self, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->customEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextFrame_QBaseCustomEvent(QTextFrame* self, QEvent* event) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_CustomEvent_IsBase(true);
        vqtextframe->customEvent(event);
    } else {
        ((VirtualQTextFrame*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnCustomEvent(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_CustomEvent_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_ConnectNotify(QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->connectNotify(*signal);
    } else {
        ((VirtualQTextFrame*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextFrame_QBaseConnectNotify(QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_ConnectNotify_IsBase(true);
        vqtextframe->connectNotify(*signal);
    } else {
        ((VirtualQTextFrame*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnConnectNotify(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_ConnectNotify_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_DisconnectNotify(QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->disconnectNotify(*signal);
    } else {
        ((VirtualQTextFrame*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextFrame_QBaseDisconnectNotify(QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_DisconnectNotify_IsBase(true);
        vqtextframe->disconnectNotify(*signal);
    } else {
        ((VirtualQTextFrame*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnDisconnectNotify(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextFrame_SetFormat(QTextFrame* self, const QTextFormat* format) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setFormat(*format);
    } else {
        ((VirtualQTextFrame*)self)->setFormat(*format);
    }
}

// Base class handler implementation
void QTextFrame_QBaseSetFormat(QTextFrame* self, const QTextFormat* format) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_SetFormat_IsBase(true);
        vqtextframe->setFormat(*format);
    } else {
        ((VirtualQTextFrame*)self)->setFormat(*format);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnSetFormat(QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = dynamic_cast<VirtualQTextFrame*>(self);
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_SetFormat_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_SetFormat_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextFrame_Sender(const QTextFrame* self) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->sender();
    } else {
        return ((VirtualQTextFrame*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextFrame_QBaseSender(const QTextFrame* self) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Sender_IsBase(true);
        return vqtextframe->sender();
    } else {
        return ((VirtualQTextFrame*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnSender(const QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Sender_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextFrame_SenderSignalIndex(const QTextFrame* self) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->senderSignalIndex();
    } else {
        return ((VirtualQTextFrame*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextFrame_QBaseSenderSignalIndex(const QTextFrame* self) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_SenderSignalIndex_IsBase(true);
        return vqtextframe->senderSignalIndex();
    } else {
        return ((VirtualQTextFrame*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnSenderSignalIndex(const QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextFrame_Receivers(const QTextFrame* self, const char* signal) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->receivers(signal);
    } else {
        return ((VirtualQTextFrame*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextFrame_QBaseReceivers(const QTextFrame* self, const char* signal) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Receivers_IsBase(true);
        return vqtextframe->receivers(signal);
    } else {
        return ((VirtualQTextFrame*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnReceivers(const QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_Receivers_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextFrame_IsSignalConnected(const QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        return vqtextframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextFrame*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextFrame_QBaseIsSignalConnected(const QTextFrame* self, const QMetaMethod* signal) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_IsSignalConnected_IsBase(true);
        return vqtextframe->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextFrame*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextFrame_OnIsSignalConnected(const QTextFrame* self, intptr_t slot) {
    auto* vqtextframe = const_cast<VirtualQTextFrame*>(dynamic_cast<const VirtualQTextFrame*>(self));
    if (vqtextframe && vqtextframe->isVirtualQTextFrame) {
        vqtextframe->setQTextFrame_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextFrame::QTextFrame_IsSignalConnected_Callback>(slot));
    }
}

void QTextFrame_Delete(QTextFrame* self) {
    delete self;
}

void QTextBlockUserData_OperatorAssign(QTextBlockUserData* self, const QTextBlockUserData* param1) {
    self->operator=(*param1);
}

void QTextBlockUserData_Delete(QTextBlockUserData* self) {
    delete self;
}

QTextBlock* QTextBlock_new() {
    return new QTextBlock();
}

QTextBlock* QTextBlock_new2(const QTextBlock* o) {
    return new QTextBlock(*o);
}

void QTextBlock_OperatorAssign(QTextBlock* self, const QTextBlock* o) {
    self->operator=(*o);
}

bool QTextBlock_IsValid(const QTextBlock* self) {
    return self->isValid();
}

bool QTextBlock_OperatorEqual(const QTextBlock* self, const QTextBlock* o) {
    return (*self == *o);
}

bool QTextBlock_OperatorNotEqual(const QTextBlock* self, const QTextBlock* o) {
    return (*self != *o);
}

bool QTextBlock_OperatorLesser(const QTextBlock* self, const QTextBlock* o) {
    return (*self < *o);
}

int QTextBlock_Position(const QTextBlock* self) {
    return self->position();
}

int QTextBlock_Length(const QTextBlock* self) {
    return self->length();
}

bool QTextBlock_Contains(const QTextBlock* self, int position) {
    return self->contains(static_cast<int>(position));
}

QTextLayout* QTextBlock_Layout(const QTextBlock* self) {
    return self->layout();
}

void QTextBlock_ClearLayout(QTextBlock* self) {
    self->clearLayout();
}

QTextBlockFormat* QTextBlock_BlockFormat(const QTextBlock* self) {
    return new QTextBlockFormat(self->blockFormat());
}

int QTextBlock_BlockFormatIndex(const QTextBlock* self) {
    return self->blockFormatIndex();
}

QTextCharFormat* QTextBlock_CharFormat(const QTextBlock* self) {
    return new QTextCharFormat(self->charFormat());
}

int QTextBlock_CharFormatIndex(const QTextBlock* self) {
    return self->charFormatIndex();
}

int QTextBlock_TextDirection(const QTextBlock* self) {
    return static_cast<int>(self->textDirection());
}

libqt_string QTextBlock_Text(const QTextBlock* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QTextLayout__FormatRange* */ QTextBlock_TextFormats(const QTextBlock* self) {
    QList<QTextLayout::FormatRange> _ret = self->textFormats();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTextLayout__FormatRange** _arr = static_cast<QTextLayout__FormatRange**>(malloc(sizeof(QTextLayout__FormatRange*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QTextLayout::FormatRange(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QTextDocument* QTextBlock_Document(const QTextBlock* self) {
    return (QTextDocument*)self->document();
}

QTextList* QTextBlock_TextList(const QTextBlock* self) {
    return self->textList();
}

QTextBlockUserData* QTextBlock_UserData(const QTextBlock* self) {
    return self->userData();
}

void QTextBlock_SetUserData(QTextBlock* self, QTextBlockUserData* data) {
    self->setUserData(data);
}

int QTextBlock_UserState(const QTextBlock* self) {
    return self->userState();
}

void QTextBlock_SetUserState(QTextBlock* self, int state) {
    self->setUserState(static_cast<int>(state));
}

int QTextBlock_Revision(const QTextBlock* self) {
    return self->revision();
}

void QTextBlock_SetRevision(QTextBlock* self, int rev) {
    self->setRevision(static_cast<int>(rev));
}

bool QTextBlock_IsVisible(const QTextBlock* self) {
    return self->isVisible();
}

void QTextBlock_SetVisible(QTextBlock* self, bool visible) {
    self->setVisible(visible);
}

int QTextBlock_BlockNumber(const QTextBlock* self) {
    return self->blockNumber();
}

int QTextBlock_FirstLineNumber(const QTextBlock* self) {
    return self->firstLineNumber();
}

void QTextBlock_SetLineCount(QTextBlock* self, int count) {
    self->setLineCount(static_cast<int>(count));
}

int QTextBlock_LineCount(const QTextBlock* self) {
    return self->lineCount();
}

QTextBlock__iterator* QTextBlock_Begin(const QTextBlock* self) {
    return new QTextBlock::iterator(self->begin());
}

QTextBlock__iterator* QTextBlock_End(const QTextBlock* self) {
    return new QTextBlock::iterator(self->end());
}

QTextBlock* QTextBlock_Next(const QTextBlock* self) {
    return new QTextBlock(self->next());
}

QTextBlock* QTextBlock_Previous(const QTextBlock* self) {
    return new QTextBlock(self->previous());
}

int QTextBlock_FragmentIndex(const QTextBlock* self) {
    return self->fragmentIndex();
}

void QTextBlock_Delete(QTextBlock* self) {
    delete self;
}

QTextFragment* QTextFragment_new() {
    return new QTextFragment();
}

QTextFragment* QTextFragment_new2(const QTextFragment* o) {
    return new QTextFragment(*o);
}

void QTextFragment_OperatorAssign(QTextFragment* self, const QTextFragment* o) {
    self->operator=(*o);
}

bool QTextFragment_IsValid(const QTextFragment* self) {
    return self->isValid();
}

bool QTextFragment_OperatorEqual(const QTextFragment* self, const QTextFragment* o) {
    return (*self == *o);
}

bool QTextFragment_OperatorNotEqual(const QTextFragment* self, const QTextFragment* o) {
    return (*self != *o);
}

bool QTextFragment_OperatorLesser(const QTextFragment* self, const QTextFragment* o) {
    return (*self < *o);
}

int QTextFragment_Position(const QTextFragment* self) {
    return self->position();
}

int QTextFragment_Length(const QTextFragment* self) {
    return self->length();
}

bool QTextFragment_Contains(const QTextFragment* self, int position) {
    return self->contains(static_cast<int>(position));
}

QTextCharFormat* QTextFragment_CharFormat(const QTextFragment* self) {
    return new QTextCharFormat(self->charFormat());
}

int QTextFragment_CharFormatIndex(const QTextFragment* self) {
    return self->charFormatIndex();
}

libqt_string QTextFragment_Text(const QTextFragment* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns(const QTextFragment* self) {
    QList<QGlyphRun> _ret = self->glyphRuns();
    // Convert QList<> from C++ memory to manually-managed C memory
    QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGlyphRun(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns1(const QTextFragment* self, int from) {
    QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGlyphRun(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QGlyphRun* */ QTextFragment_GlyphRuns2(const QTextFragment* self, int from, int length) {
    QList<QGlyphRun> _ret = self->glyphRuns(static_cast<int>(from), static_cast<int>(length));
    // Convert QList<> from C++ memory to manually-managed C memory
    QGlyphRun** _arr = static_cast<QGlyphRun**>(malloc(sizeof(QGlyphRun*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QGlyphRun(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QTextFragment_Delete(QTextFragment* self) {
    delete self;
}

QTextFrame__iterator* QTextFrame__iterator_new(const QTextFrame__iterator* other) {
    return new QTextFrame::iterator(*other);
}

QTextFrame__iterator* QTextFrame__iterator_new2(QTextFrame__iterator* other) {
    return new QTextFrame::iterator(std::move(*other));
}

QTextFrame__iterator* QTextFrame__iterator_new3() {
    return new QTextFrame::iterator();
}

QTextFrame__iterator* QTextFrame__iterator_new4(const QTextFrame__iterator* param1) {
    return new QTextFrame::iterator(*param1);
}

void QTextFrame__iterator_CopyAssign(QTextFrame__iterator* self, QTextFrame__iterator* other) {
    *self = *other;
}

void QTextFrame__iterator_MoveAssign(QTextFrame__iterator* self, QTextFrame__iterator* other) {
    *self = std::move(*other);
}

QTextFrame* QTextFrame__iterator_ParentFrame(const QTextFrame__iterator* self) {
    return self->parentFrame();
}

QTextFrame* QTextFrame__iterator_CurrentFrame(const QTextFrame__iterator* self) {
    return self->currentFrame();
}

QTextBlock* QTextFrame__iterator_CurrentBlock(const QTextFrame__iterator* self) {
    return new QTextBlock(self->currentBlock());
}

bool QTextFrame__iterator_AtEnd(const QTextFrame__iterator* self) {
    return self->atEnd();
}

bool QTextFrame__iterator_OperatorEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o) {
    return (*self == *o);
}

bool QTextFrame__iterator_OperatorNotEqual(const QTextFrame__iterator* self, const QTextFrame__iterator* o) {
    return (*self != *o);
}

QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus(QTextFrame__iterator* self) {
    QTextFrame::iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_OperatorPlusPlus2(QTextFrame__iterator* self, int param1) {
    return new QTextFrame::iterator(self->operator++(static_cast<int>(param1)));
}

QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus(QTextFrame__iterator* self) {
    QTextFrame::iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QTextFrame__iterator* QTextFrame__iterator_OperatorMinusMinus2(QTextFrame__iterator* self, int param1) {
    return new QTextFrame::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextFrame__iterator_Delete(QTextFrame__iterator* self) {
    delete self;
}

QTextBlock__iterator* QTextBlock__iterator_new(const QTextBlock__iterator* other) {
    return new QTextBlock::iterator(*other);
}

QTextBlock__iterator* QTextBlock__iterator_new2(QTextBlock__iterator* other) {
    return new QTextBlock::iterator(std::move(*other));
}

QTextBlock__iterator* QTextBlock__iterator_new3() {
    return new QTextBlock::iterator();
}

QTextBlock__iterator* QTextBlock__iterator_new4(const QTextBlock__iterator* param1) {
    return new QTextBlock::iterator(*param1);
}

void QTextBlock__iterator_CopyAssign(QTextBlock__iterator* self, QTextBlock__iterator* other) {
    *self = *other;
}

void QTextBlock__iterator_MoveAssign(QTextBlock__iterator* self, QTextBlock__iterator* other) {
    *self = std::move(*other);
}

QTextFragment* QTextBlock__iterator_Fragment(const QTextBlock__iterator* self) {
    return new QTextFragment(self->fragment());
}

bool QTextBlock__iterator_AtEnd(const QTextBlock__iterator* self) {
    return self->atEnd();
}

bool QTextBlock__iterator_OperatorEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o) {
    return (*self == *o);
}

bool QTextBlock__iterator_OperatorNotEqual(const QTextBlock__iterator* self, const QTextBlock__iterator* o) {
    return (*self != *o);
}

QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus(QTextBlock__iterator* self) {
    QTextBlock::iterator& _ret = self->operator++();
    // Cast returned reference into pointer
    return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_OperatorPlusPlus2(QTextBlock__iterator* self, int param1) {
    return new QTextBlock::iterator(self->operator++(static_cast<int>(param1)));
}

QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus(QTextBlock__iterator* self) {
    QTextBlock::iterator& _ret = self->operator--();
    // Cast returned reference into pointer
    return &_ret;
}

QTextBlock__iterator* QTextBlock__iterator_OperatorMinusMinus2(QTextBlock__iterator* self, int param1) {
    return new QTextBlock::iterator(self->operator--(static_cast<int>(param1)));
}

void QTextBlock__iterator_Delete(QTextBlock__iterator* self) {
    delete self;
}
