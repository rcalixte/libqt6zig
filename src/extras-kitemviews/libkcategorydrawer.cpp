#include <KCategorizedView>
#include <KCategoryDrawer>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QMouseEvent>
#include <QObject>
#include <QPainter>
#include <QRect>
#include <QString>
#include <QStyleOption>
#include <QTimerEvent>
#include <kcategorydrawer.h>
#include "libkcategorydrawer.h"
#include "libkcategorydrawer.hxx"

KCategoryDrawer* KCategoryDrawer_new(KCategorizedView* view) {
    return new VirtualKCategoryDrawer(view);
}

QMetaObject* KCategoryDrawer_MetaObject(const KCategoryDrawer* self) {
    return (QMetaObject*)self->metaObject();
}

void* KCategoryDrawer_Metacast(KCategoryDrawer* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KCategoryDrawer_Metacall(KCategoryDrawer* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KCategoryDrawer_Tr(const char* s) {
    auto _ret = KCategoryDrawer::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KCategorizedView* KCategoryDrawer_View(const KCategoryDrawer* self) {
    return self->view();
}

void KCategoryDrawer_DrawCategory(const KCategoryDrawer* self, const QModelIndex* index, int sortRole, const QStyleOption* option, QPainter* painter) {
    self->drawCategory(*index, static_cast<int>(sortRole), *option, painter);
}

int KCategoryDrawer_CategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option) {
    return self->categoryHeight(*index, *option);
}

int KCategoryDrawer_LeftMargin(const KCategoryDrawer* self) {
    return self->leftMargin();
}

int KCategoryDrawer_RightMargin(const KCategoryDrawer* self) {
    return self->rightMargin();
}

void KCategoryDrawer_CollapseOrExpandClicked(KCategoryDrawer* self, const QModelIndex* index) {
    self->collapseOrExpandClicked(*index);
}

void KCategoryDrawer_Connect_CollapseOrExpandClicked(KCategoryDrawer* self, intptr_t slot) {
    void (*slotFunc)(KCategoryDrawer*, QModelIndex*) = reinterpret_cast<void (*)(KCategoryDrawer*, QModelIndex*)>(slot);
    KCategoryDrawer::connect(self,
                             static_cast<void (KCategoryDrawer::*)(const QModelIndex&)>(&KCategoryDrawer::collapseOrExpandClicked),
                             [self, slotFunc](const QModelIndex& index) {
                                 const QModelIndex& index_ret = index;
                                 // Cast returned reference into pointer
                                 QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                                 slotFunc(self, sigval1);
                             });
}

void KCategoryDrawer_ActionRequested(KCategoryDrawer* self, int action, const QModelIndex* index) {
    self->actionRequested(static_cast<int>(action), *index);
}

void KCategoryDrawer_Connect_ActionRequested(KCategoryDrawer* self, intptr_t slot) {
    void (*slotFunc)(KCategoryDrawer*, int, QModelIndex*) = reinterpret_cast<void (*)(KCategoryDrawer*, int, QModelIndex*)>(slot);
    KCategoryDrawer::connect(self,
                             static_cast<void (KCategoryDrawer::*)(int, const QModelIndex&)>(&KCategoryDrawer::actionRequested),
                             [self, slotFunc](int action, const QModelIndex& index) {
                                 int sigval1 = action;
                                 const QModelIndex& index_ret = index;
                                 // Cast returned reference into pointer
                                 QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
                                 slotFunc(self, sigval1, sigval2);
                             });
}

void KCategoryDrawer_MouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->mouseButtonPressed(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->mouseButtonReleased(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->mouseMoved(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->mouseButtonDoubleClicked(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->mouseLeft(*index, *blockRect);
    }
}

libqt_string KCategoryDrawer_Tr2(const char* s, const char* c) {
    auto _ret = KCategoryDrawer::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KCategoryDrawer_Tr3(const char* s, const char* c, int n) {
    auto _ret = KCategoryDrawer::tr(s, c, static_cast<int>(n));
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
QMetaObject* KCategoryDrawer_SuperMetaObject(const KCategoryDrawer* self) {
    return (QMetaObject*)self->KCategoryDrawer::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMetaObject(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self)))
        vkcategorydrawer->kcategorydrawer_metaobject_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KCategoryDrawer_SuperMetacast(KCategoryDrawer* self, const char* param1) {
    return self->KCategoryDrawer::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMetacast(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_metacast_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Metacast_Callback>(slot);
}

// Base class handler implementation
int KCategoryDrawer_SuperMetacall(KCategoryDrawer* self, int param1, int param2, void** param3) {
    return self->KCategoryDrawer::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMetacall(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_metacall_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Metacall_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperDrawCategory(const KCategoryDrawer* self, const QModelIndex* index, int sortRole, const QStyleOption* option, QPainter* painter) {
    self->KCategoryDrawer::drawCategory(*index, static_cast<int>(sortRole), *option, painter);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnDrawCategory(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self)))
        vkcategorydrawer->kcategorydrawer_drawcategory_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_DrawCategory_Callback>(slot);
}

// Base class handler implementation
int KCategoryDrawer_SuperCategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option) {
    return self->KCategoryDrawer::categoryHeight(*index, *option);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnCategoryHeight(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self)))
        vkcategorydrawer->kcategorydrawer_categoryheight_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_CategoryHeight_Callback>(slot);
}

// Base class handler implementation
int KCategoryDrawer_SuperLeftMargin(const KCategoryDrawer* self) {
    return self->KCategoryDrawer::leftMargin();
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnLeftMargin(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self)))
        vkcategorydrawer->kcategorydrawer_leftmargin_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_LeftMargin_Callback>(slot);
}

// Base class handler implementation
int KCategoryDrawer_SuperRightMargin(const KCategoryDrawer* self) {
    return self->KCategoryDrawer::rightMargin();
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnRightMargin(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self)))
        vkcategorydrawer->kcategorydrawer_rightmargin_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_RightMargin_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperMouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::mouseButtonPressed(*index, *blockRect, event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::mouseButtonPressed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMouseButtonPressed(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_mousebuttonpressed_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonPressed_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperMouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::mouseButtonReleased(*index, *blockRect, event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::mouseButtonReleased called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMouseButtonReleased(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_mousebuttonreleased_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonReleased_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperMouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::mouseMoved(*index, *blockRect, event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::mouseMoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMouseMoved(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_mousemoved_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseMoved_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperMouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::mouseButtonDoubleClicked(*index, *blockRect, event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::mouseButtonDoubleClicked called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMouseButtonDoubleClicked(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_mousebuttondoubleclicked_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonDoubleClicked_Callback>(slot);
}

// Base class handler implementation
void KCategoryDrawer_SuperMouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::mouseLeft(*index, *blockRect);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::mouseLeft called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnMouseLeft(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_mouseleft_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseLeft_Callback>(slot);
}

// Derived class handler implementation
bool KCategoryDrawer_Event(KCategoryDrawer* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KCategoryDrawer_SuperEvent(KCategoryDrawer* self, QEvent* event) {
    return self->KCategoryDrawer::event(event);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnEvent(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_event_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Event_Callback>(slot);
}

// Derived class handler implementation
bool KCategoryDrawer_EventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KCategoryDrawer_SuperEventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event) {
    return self->KCategoryDrawer::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnEventFilter(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_eventfilter_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KCategoryDrawer_TimerEvent(KCategoryDrawer* self, QTimerEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategoryDrawer::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategoryDrawer_SuperTimerEvent(KCategoryDrawer* self, QTimerEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnTimerEvent(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_timerevent_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategoryDrawer_ChildEvent(KCategoryDrawer* self, QChildEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategoryDrawer::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategoryDrawer_SuperChildEvent(KCategoryDrawer* self, QChildEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnChildEvent(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_childevent_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategoryDrawer_CustomEvent(KCategoryDrawer* self, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KCategoryDrawer::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategoryDrawer_SuperCustomEvent(KCategoryDrawer* self, QEvent* event) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnCustomEvent(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_customevent_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KCategoryDrawer_ConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategoryDrawer::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategoryDrawer_SuperConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnConnectNotify(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_connectnotify_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KCategoryDrawer_DisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer) {
        vkcategorydrawer->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KCategoryDrawer::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KCategoryDrawer_SuperDisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self)) {
        vkcategorydrawer->KCategoryDrawer::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KCategoryDrawer::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnDisconnectNotify(KCategoryDrawer* self, intptr_t slot) {
    if (auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self))
        vkcategorydrawer->kcategorydrawer_disconnectnotify_callback = reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* KCategoryDrawer_Sender(const KCategoryDrawer* self) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self))) {
        return vkcategorydrawer->VirtualKCategoryDrawer::sender();
    } else
        qFatal("Error: Protected method KCategoryDrawer::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategoryDrawer_SenderSignalIndex(const KCategoryDrawer* self) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self))) {
        return vkcategorydrawer->VirtualKCategoryDrawer::senderSignalIndex();
    } else
        qFatal("Error: Protected method KCategoryDrawer::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KCategoryDrawer_Receivers(const KCategoryDrawer* self, const char* signal) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self))) {
        return vkcategorydrawer->VirtualKCategoryDrawer::receivers(signal);
    } else
        qFatal("Error: Protected method KCategoryDrawer::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KCategoryDrawer_IsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal) {
    if (auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self))) {
        return vkcategorydrawer->VirtualKCategoryDrawer::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KCategoryDrawer::isSignalConnected called without a directly constructed type");
}

void KCategoryDrawer_Delete(KCategoryDrawer* self) {
    delete self;
}
