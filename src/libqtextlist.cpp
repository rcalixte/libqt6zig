#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextBlock>
#include <QTextBlockGroup>
#include <QTextDocument>
#include <QTextList>
#include <QTextListFormat>
#include <QTextObject>
#include <QTimerEvent>
#include <qtextlist.h>
#include "libqtextlist.h"
#include "libqtextlist.hxx"

QTextList* QTextList_new(QTextDocument* doc) {
    return new VirtualQTextList(doc);
}

QMetaObject* QTextList_MetaObject(const QTextList* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextList_Metacast(QTextList* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextList_Metacall(QTextList* self, int param1, int param2, void** param3) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextList*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTextList_OnMetacall(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Metacall_Callback(reinterpret_cast<VirtualQTextList::QTextList_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTextList_QBaseMetacall(QTextList* self, int param1, int param2, void** param3) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Metacall_IsBase(true);
        return vqtextlist->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextList*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTextList_Tr(const char* s) {
    QString _ret = QTextList::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QTextList_Count(const QTextList* self) {
    return self->count();
}

QTextBlock* QTextList_Item(const QTextList* self, int i) {
    return new QTextBlock(self->item(static_cast<int>(i)));
}

int QTextList_ItemNumber(const QTextList* self, const QTextBlock* param1) {
    return self->itemNumber(*param1);
}

libqt_string QTextList_ItemText(const QTextList* self, const QTextBlock* param1) {
    QString _ret = self->itemText(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QTextList_RemoveItem(QTextList* self, int i) {
    self->removeItem(static_cast<int>(i));
}

void QTextList_Remove(QTextList* self, const QTextBlock* param1) {
    self->remove(*param1);
}

void QTextList_Add(QTextList* self, const QTextBlock* block) {
    self->add(*block);
}

void QTextList_SetFormat(QTextList* self, const QTextListFormat* format) {
    self->setFormat(*format);
}

QTextListFormat* QTextList_Format(const QTextList* self) {
    return new QTextListFormat(self->format());
}

libqt_string QTextList_Tr2(const char* s, const char* c) {
    QString _ret = QTextList::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QTextList_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTextList::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
void QTextList_BlockInserted(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->blockInserted(*block);
    } else {
        ((VirtualQTextList*)self)->blockInserted(*block);
    }
}

// Base class handler implementation
void QTextList_QBaseBlockInserted(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockInserted_IsBase(true);
        vqtextlist->blockInserted(*block);
    } else {
        ((VirtualQTextList*)self)->blockInserted(*block);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockInserted(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockInserted_Callback(reinterpret_cast<VirtualQTextList::QTextList_BlockInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_BlockRemoved(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->blockRemoved(*block);
    } else {
        ((VirtualQTextList*)self)->blockRemoved(*block);
    }
}

// Base class handler implementation
void QTextList_QBaseBlockRemoved(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockRemoved_IsBase(true);
        vqtextlist->blockRemoved(*block);
    } else {
        ((VirtualQTextList*)self)->blockRemoved(*block);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockRemoved(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockRemoved_Callback(reinterpret_cast<VirtualQTextList::QTextList_BlockRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_BlockFormatChanged(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->blockFormatChanged(*block);
    } else {
        ((VirtualQTextList*)self)->blockFormatChanged(*block);
    }
}

// Base class handler implementation
void QTextList_QBaseBlockFormatChanged(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockFormatChanged_IsBase(true);
        vqtextlist->blockFormatChanged(*block);
    } else {
        ((VirtualQTextList*)self)->blockFormatChanged(*block);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockFormatChanged(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockFormatChanged_Callback(reinterpret_cast<VirtualQTextList::QTextList_BlockFormatChanged_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextList_Event(QTextList* self, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->event(event);
    } else {
        return self->QTextList::event(event);
    }
}

// Base class handler implementation
bool QTextList_QBaseEvent(QTextList* self, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Event_IsBase(true);
        return vqtextlist->event(event);
    } else {
        return self->QTextList::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnEvent(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Event_Callback(reinterpret_cast<VirtualQTextList::QTextList_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextList_EventFilter(QTextList* self, QObject* watched, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->eventFilter(watched, event);
    } else {
        return self->QTextList::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextList_QBaseEventFilter(QTextList* self, QObject* watched, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_EventFilter_IsBase(true);
        return vqtextlist->eventFilter(watched, event);
    } else {
        return self->QTextList::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnEventFilter(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_EventFilter_Callback(reinterpret_cast<VirtualQTextList::QTextList_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_TimerEvent(QTextList* self, QTimerEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->timerEvent(event);
    } else {
        ((VirtualQTextList*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTextList_QBaseTimerEvent(QTextList* self, QTimerEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_TimerEvent_IsBase(true);
        vqtextlist->timerEvent(event);
    } else {
        ((VirtualQTextList*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnTimerEvent(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_TimerEvent_Callback(reinterpret_cast<VirtualQTextList::QTextList_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_ChildEvent(QTextList* self, QChildEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->childEvent(event);
    } else {
        ((VirtualQTextList*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextList_QBaseChildEvent(QTextList* self, QChildEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_ChildEvent_IsBase(true);
        vqtextlist->childEvent(event);
    } else {
        ((VirtualQTextList*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnChildEvent(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_ChildEvent_Callback(reinterpret_cast<VirtualQTextList::QTextList_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_CustomEvent(QTextList* self, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->customEvent(event);
    } else {
        ((VirtualQTextList*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextList_QBaseCustomEvent(QTextList* self, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_CustomEvent_IsBase(true);
        vqtextlist->customEvent(event);
    } else {
        ((VirtualQTextList*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnCustomEvent(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_CustomEvent_Callback(reinterpret_cast<VirtualQTextList::QTextList_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_ConnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->connectNotify(*signal);
    } else {
        ((VirtualQTextList*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextList_QBaseConnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_ConnectNotify_IsBase(true);
        vqtextlist->connectNotify(*signal);
    } else {
        ((VirtualQTextList*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnConnectNotify(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_ConnectNotify_Callback(reinterpret_cast<VirtualQTextList::QTextList_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextList_DisconnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->disconnectNotify(*signal);
    } else {
        ((VirtualQTextList*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextList_QBaseDisconnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_DisconnectNotify_IsBase(true);
        vqtextlist->disconnectNotify(*signal);
    } else {
        ((VirtualQTextList*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnDisconnectNotify(QTextList* self, intptr_t slot) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextList::QTextList_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QTextBlock* */ QTextList_BlockList(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        QList<QTextBlock> _ret = vqtextlist->blockList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QTextBlock(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QTextBlock> _ret = ((VirtualQTextList*)self)->blockList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QTextBlock(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QTextBlock* */ QTextList_QBaseBlockList(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockList_IsBase(true);
        QList<QTextBlock> _ret = vqtextlist->blockList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QTextBlock(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QTextBlock> _ret = ((VirtualQTextList*)self)->blockList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * _ret.length()));
        for (size_t i = 0; i < _ret.length(); ++i) {
            _arr[i] = new QTextBlock(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.length();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockList(const QTextList* self, intptr_t slot) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_BlockList_Callback(reinterpret_cast<VirtualQTextList::QTextList_BlockList_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextList_Sender(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->sender();
    } else {
        return ((VirtualQTextList*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextList_QBaseSender(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Sender_IsBase(true);
        return vqtextlist->sender();
    } else {
        return ((VirtualQTextList*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnSender(const QTextList* self, intptr_t slot) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Sender_Callback(reinterpret_cast<VirtualQTextList::QTextList_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextList_SenderSignalIndex(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->senderSignalIndex();
    } else {
        return ((VirtualQTextList*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextList_QBaseSenderSignalIndex(const QTextList* self) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_SenderSignalIndex_IsBase(true);
        return vqtextlist->senderSignalIndex();
    } else {
        return ((VirtualQTextList*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnSenderSignalIndex(const QTextList* self, intptr_t slot) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextList::QTextList_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextList_Receivers(const QTextList* self, const char* signal) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->receivers(signal);
    } else {
        return ((VirtualQTextList*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextList_QBaseReceivers(const QTextList* self, const char* signal) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Receivers_IsBase(true);
        return vqtextlist->receivers(signal);
    } else {
        return ((VirtualQTextList*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnReceivers(const QTextList* self, intptr_t slot) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_Receivers_Callback(reinterpret_cast<VirtualQTextList::QTextList_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextList_IsSignalConnected(const QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        return vqtextlist->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextList*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextList_QBaseIsSignalConnected(const QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_IsSignalConnected_IsBase(true);
        return vqtextlist->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextList*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnIsSignalConnected(const QTextList* self, intptr_t slot) {
    auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self));
    if (vqtextlist && vqtextlist->isVirtualQTextList) {
        vqtextlist->setQTextList_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextList::QTextList_IsSignalConnected_Callback>(slot));
    }
}

void QTextList_Delete(QTextList* self) {
    delete self;
}
