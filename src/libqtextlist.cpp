#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextList_Tr(const char* s) {
    auto _ret = QTextList::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    auto _ret = self->itemText(*param1);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    auto _ret = QTextList::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextList_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTextList::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTextList_SuperMetaObject(const QTextList* self) {
    return (QMetaObject*)self->QTextList::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnMetaObject(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self)))
        vqtextlist->qtextlist_metaobject_callback = reinterpret_cast<VirtualQTextList::QTextList_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTextList_SuperMetacast(QTextList* self, const char* param1) {
    return self->QTextList::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnMetacast(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_metacast_callback = reinterpret_cast<VirtualQTextList::QTextList_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTextList_SuperMetacall(QTextList* self, int param1, int param2, void** param3) {
    return self->QTextList::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnMetacall(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_metacall_callback = reinterpret_cast<VirtualQTextList::QTextList_Metacall_Callback>(slot);
}

// Derived class handler implementation
void QTextList_BlockInserted(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->blockInserted(*block);
    } else {
        qFatal("Error: Protected virtual method QTextList::blockInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperBlockInserted(QTextList* self, const QTextBlock* block) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::blockInserted(*block);
    } else
        qFatal("Error: Protected virtual method QTextList::blockInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockInserted(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_blockinserted_callback = reinterpret_cast<VirtualQTextList::QTextList_BlockInserted_Callback>(slot);
}

// Derived class handler implementation
void QTextList_BlockRemoved(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->blockRemoved(*block);
    } else {
        qFatal("Error: Protected virtual method QTextList::blockRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperBlockRemoved(QTextList* self, const QTextBlock* block) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::blockRemoved(*block);
    } else
        qFatal("Error: Protected virtual method QTextList::blockRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockRemoved(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_blockremoved_callback = reinterpret_cast<VirtualQTextList::QTextList_BlockRemoved_Callback>(slot);
}

// Derived class handler implementation
void QTextList_BlockFormatChanged(QTextList* self, const QTextBlock* block) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->blockFormatChanged(*block);
    } else {
        qFatal("Error: Protected virtual method QTextList::blockFormatChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperBlockFormatChanged(QTextList* self, const QTextBlock* block) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::blockFormatChanged(*block);
    } else
        qFatal("Error: Protected virtual method QTextList::blockFormatChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnBlockFormatChanged(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_blockformatchanged_callback = reinterpret_cast<VirtualQTextList::QTextList_BlockFormatChanged_Callback>(slot);
}

// Derived class handler implementation
bool QTextList_Event(QTextList* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTextList_SuperEvent(QTextList* self, QEvent* event) {
    return self->QTextList::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnEvent(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_event_callback = reinterpret_cast<VirtualQTextList::QTextList_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTextList_EventFilter(QTextList* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTextList_SuperEventFilter(QTextList* self, QObject* watched, QEvent* event) {
    return self->QTextList::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnEventFilter(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_eventfilter_callback = reinterpret_cast<VirtualQTextList::QTextList_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTextList_TimerEvent(QTextList* self, QTimerEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextList::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperTimerEvent(QTextList* self, QTimerEvent* event) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextList::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnTimerEvent(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_timerevent_callback = reinterpret_cast<VirtualQTextList::QTextList_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextList_ChildEvent(QTextList* self, QChildEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextList::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperChildEvent(QTextList* self, QChildEvent* event) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextList::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnChildEvent(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_childevent_callback = reinterpret_cast<VirtualQTextList::QTextList_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextList_CustomEvent(QTextList* self, QEvent* event) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextList::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperCustomEvent(QTextList* self, QEvent* event) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextList::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnCustomEvent(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_customevent_callback = reinterpret_cast<VirtualQTextList::QTextList_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextList_ConnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextList::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperConnectNotify(QTextList* self, const QMetaMethod* signal) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextList::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnConnectNotify(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_connectnotify_callback = reinterpret_cast<VirtualQTextList::QTextList_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTextList_DisconnectNotify(QTextList* self, const QMetaMethod* signal) {
    auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self);
    if (vqtextlist) {
        vqtextlist->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextList::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextList_SuperDisconnectNotify(QTextList* self, const QMetaMethod* signal) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self)) {
        vqtextlist->QTextList::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextList::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextList_OnDisconnectNotify(QTextList* self, intptr_t slot) {
    if (auto* vqtextlist = dynamic_cast<VirtualQTextList*>(self))
        vqtextlist->qtextlist_disconnectnotify_callback = reinterpret_cast<VirtualQTextList::QTextList_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
libqt_list /* of QTextBlock* */ QTextList_BlockList(const QTextList* self) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self))) {
        QList<QTextBlock> _ret = vqtextlist->VirtualQTextList::blockList();
        // Convert QList<> from C++ memory to manually-managed C memory
        QTextBlock** _arr = static_cast<QTextBlock**>(malloc(sizeof(QTextBlock*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QTextBlock(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected method QTextList::blockList called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTextList_Sender(const QTextList* self) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self))) {
        return vqtextlist->VirtualQTextList::sender();
    } else
        qFatal("Error: Protected method QTextList::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextList_SenderSignalIndex(const QTextList* self) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self))) {
        return vqtextlist->VirtualQTextList::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTextList::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextList_Receivers(const QTextList* self, const char* signal) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self))) {
        return vqtextlist->VirtualQTextList::receivers(signal);
    } else
        qFatal("Error: Protected method QTextList::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextList_IsSignalConnected(const QTextList* self, const QMetaMethod* signal) {
    if (auto* vqtextlist = const_cast<VirtualQTextList*>(dynamic_cast<const VirtualQTextList*>(self))) {
        return vqtextlist->VirtualQTextList::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTextList::isSignalConnected called without a directly constructed type");
}

void QTextList_Delete(QTextList* self) {
    delete self;
}
