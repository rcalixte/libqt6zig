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
#include <QByteArray>
#include <cstring>
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
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCategoryDrawer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMetacall(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Metacall_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCategoryDrawer_QBaseMetacall(KCategoryDrawer* self, int param1, int param2, void** param3) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Metacall_IsBase(true);
        return vkcategorydrawer->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKCategoryDrawer*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KCategoryDrawer_Tr(const char* s) {
    QString _ret = KCategoryDrawer::tr(s);
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
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        self->drawCategory(*index, static_cast<int>(sortRole), *option, painter);
    } else {
        ((VirtualKCategoryDrawer*)self)->drawCategory(*index, static_cast<int>(sortRole), *option, painter);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnDrawCategory(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_DrawCategory_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_DrawCategory_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseDrawCategory(const KCategoryDrawer* self, const QModelIndex* index, int sortRole, const QStyleOption* option, QPainter* painter) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_DrawCategory_IsBase(true);
        vkcategorydrawer->drawCategory(*index, static_cast<int>(sortRole), *option, painter);
    } else {
        ((VirtualKCategoryDrawer*)self)->drawCategory(*index, static_cast<int>(sortRole), *option, painter);
    }
}

int KCategoryDrawer_CategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return self->categoryHeight(*index, *option);
    } else {
        return ((VirtualKCategoryDrawer*)self)->categoryHeight(*index, *option);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnCategoryHeight(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_CategoryHeight_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_CategoryHeight_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCategoryDrawer_QBaseCategoryHeight(const KCategoryDrawer* self, const QModelIndex* index, const QStyleOption* option) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_CategoryHeight_IsBase(true);
        return vkcategorydrawer->categoryHeight(*index, *option);
    } else {
        return ((VirtualKCategoryDrawer*)self)->categoryHeight(*index, *option);
    }
}

int KCategoryDrawer_LeftMargin(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return self->leftMargin();
    } else {
        return ((VirtualKCategoryDrawer*)self)->leftMargin();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnLeftMargin(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_LeftMargin_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_LeftMargin_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCategoryDrawer_QBaseLeftMargin(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_LeftMargin_IsBase(true);
        return vkcategorydrawer->leftMargin();
    } else {
        return ((VirtualKCategoryDrawer*)self)->leftMargin();
    }
}

int KCategoryDrawer_RightMargin(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return self->rightMargin();
    } else {
        return ((VirtualKCategoryDrawer*)self)->rightMargin();
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnRightMargin(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_RightMargin_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_RightMargin_Callback>(slot));
    }
}

// Virtual base class handler implementation
int KCategoryDrawer_QBaseRightMargin(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = dynamic_cast<const VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_RightMargin_IsBase(true);
        return vkcategorydrawer->rightMargin();
    } else {
        return ((VirtualKCategoryDrawer*)self)->rightMargin();
    }
}

void KCategoryDrawer_CollapseOrExpandClicked(KCategoryDrawer* self, const QModelIndex* index) {
    self->collapseOrExpandClicked(*index);
}

void KCategoryDrawer_Connect_CollapseOrExpandClicked(KCategoryDrawer* self, intptr_t slot) {
    void (*slotFunc)(KCategoryDrawer*, QModelIndex*) = reinterpret_cast<void (*)(KCategoryDrawer*, QModelIndex*)>(slot);
    KCategoryDrawer::connect(self, &KCategoryDrawer::collapseOrExpandClicked, [self, slotFunc](const QModelIndex& index) {
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
    KCategoryDrawer::connect(self, &KCategoryDrawer::actionRequested, [self, slotFunc](int action, const QModelIndex& index) {
        int sigval1 = action;
        const QModelIndex& index_ret = index;
        // Cast returned reference into pointer
        QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);
        slotFunc(self, sigval1, sigval2);
    });
}

void KCategoryDrawer_MouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->mouseButtonPressed(*index, *blockRect, event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMouseButtonPressed(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonPressed_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonPressed_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseMouseButtonPressed(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonPressed_IsBase(true);
        vkcategorydrawer->mouseButtonPressed(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->mouseButtonReleased(*index, *blockRect, event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMouseButtonReleased(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonReleased_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonReleased_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseMouseButtonReleased(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonReleased_IsBase(true);
        vkcategorydrawer->mouseButtonReleased(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->mouseMoved(*index, *blockRect, event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMouseMoved(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseMoved_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseMoved_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseMouseMoved(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseMoved_IsBase(true);
        vkcategorydrawer->mouseMoved(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->mouseButtonDoubleClicked(*index, *blockRect, event);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMouseButtonDoubleClicked(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonDoubleClicked_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseButtonDoubleClicked_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseMouseButtonDoubleClicked(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect, QMouseEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseButtonDoubleClicked_IsBase(true);
        vkcategorydrawer->mouseButtonDoubleClicked(*index, *blockRect, event);
    }
}

void KCategoryDrawer_MouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->mouseLeft(*index, *blockRect);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void KCategoryDrawer_OnMouseLeft(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseLeft_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_MouseLeft_Callback>(slot));
    }
}

// Virtual base class handler implementation
void KCategoryDrawer_QBaseMouseLeft(KCategoryDrawer* self, const QModelIndex* index, const QRect* blockRect) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_MouseLeft_IsBase(true);
        vkcategorydrawer->mouseLeft(*index, *blockRect);
    }
}

libqt_string KCategoryDrawer_Tr2(const char* s, const char* c) {
    QString _ret = KCategoryDrawer::tr(s, c);
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
    QString _ret = KCategoryDrawer::tr(s, c, static_cast<int>(n));
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
bool KCategoryDrawer_Event(KCategoryDrawer* self, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->event(event);
    } else {
        return self->KCategoryDrawer::event(event);
    }
}

// Base class handler implementation
bool KCategoryDrawer_QBaseEvent(KCategoryDrawer* self, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Event_IsBase(true);
        return vkcategorydrawer->event(event);
    } else {
        return self->KCategoryDrawer::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnEvent(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Event_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategoryDrawer_EventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->eventFilter(watched, event);
    } else {
        return self->KCategoryDrawer::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KCategoryDrawer_QBaseEventFilter(KCategoryDrawer* self, QObject* watched, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_EventFilter_IsBase(true);
        return vkcategorydrawer->eventFilter(watched, event);
    } else {
        return self->KCategoryDrawer::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnEventFilter(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_EventFilter_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategoryDrawer_TimerEvent(KCategoryDrawer* self, QTimerEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->timerEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KCategoryDrawer_QBaseTimerEvent(KCategoryDrawer* self, QTimerEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_TimerEvent_IsBase(true);
        vkcategorydrawer->timerEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnTimerEvent(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_TimerEvent_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategoryDrawer_ChildEvent(KCategoryDrawer* self, QChildEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->childEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KCategoryDrawer_QBaseChildEvent(KCategoryDrawer* self, QChildEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_ChildEvent_IsBase(true);
        vkcategorydrawer->childEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnChildEvent(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_ChildEvent_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategoryDrawer_CustomEvent(KCategoryDrawer* self, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->customEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KCategoryDrawer_QBaseCustomEvent(KCategoryDrawer* self, QEvent* event) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_CustomEvent_IsBase(true);
        vkcategorydrawer->customEvent(event);
    } else {
        ((VirtualKCategoryDrawer*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnCustomEvent(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_CustomEvent_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategoryDrawer_ConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->connectNotify(*signal);
    } else {
        ((VirtualKCategoryDrawer*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KCategoryDrawer_QBaseConnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_ConnectNotify_IsBase(true);
        vkcategorydrawer->connectNotify(*signal);
    } else {
        ((VirtualKCategoryDrawer*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnConnectNotify(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_ConnectNotify_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KCategoryDrawer_DisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->disconnectNotify(*signal);
    } else {
        ((VirtualKCategoryDrawer*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KCategoryDrawer_QBaseDisconnectNotify(KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_DisconnectNotify_IsBase(true);
        vkcategorydrawer->disconnectNotify(*signal);
    } else {
        ((VirtualKCategoryDrawer*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnDisconnectNotify(KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = dynamic_cast<VirtualKCategoryDrawer*>(self);
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_DisconnectNotify_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KCategoryDrawer_Sender(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->sender();
    } else {
        return ((VirtualKCategoryDrawer*)self)->sender();
    }
}

// Base class handler implementation
QObject* KCategoryDrawer_QBaseSender(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Sender_IsBase(true);
        return vkcategorydrawer->sender();
    } else {
        return ((VirtualKCategoryDrawer*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnSender(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Sender_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategoryDrawer_SenderSignalIndex(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->senderSignalIndex();
    } else {
        return ((VirtualKCategoryDrawer*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KCategoryDrawer_QBaseSenderSignalIndex(const KCategoryDrawer* self) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_SenderSignalIndex_IsBase(true);
        return vkcategorydrawer->senderSignalIndex();
    } else {
        return ((VirtualKCategoryDrawer*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnSenderSignalIndex(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_SenderSignalIndex_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KCategoryDrawer_Receivers(const KCategoryDrawer* self, const char* signal) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->receivers(signal);
    } else {
        return ((VirtualKCategoryDrawer*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KCategoryDrawer_QBaseReceivers(const KCategoryDrawer* self, const char* signal) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Receivers_IsBase(true);
        return vkcategorydrawer->receivers(signal);
    } else {
        return ((VirtualKCategoryDrawer*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnReceivers(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_Receivers_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KCategoryDrawer_IsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        return vkcategorydrawer->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategoryDrawer*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KCategoryDrawer_QBaseIsSignalConnected(const KCategoryDrawer* self, const QMetaMethod* signal) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_IsSignalConnected_IsBase(true);
        return vkcategorydrawer->isSignalConnected(*signal);
    } else {
        return ((VirtualKCategoryDrawer*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KCategoryDrawer_OnIsSignalConnected(const KCategoryDrawer* self, intptr_t slot) {
    auto* vkcategorydrawer = const_cast<VirtualKCategoryDrawer*>(dynamic_cast<const VirtualKCategoryDrawer*>(self));
    if (vkcategorydrawer && vkcategorydrawer->isVirtualKCategoryDrawer) {
        vkcategorydrawer->setKCategoryDrawer_IsSignalConnected_Callback(reinterpret_cast<VirtualKCategoryDrawer::KCategoryDrawer_IsSignalConnected_Callback>(slot));
    }
}

void KCategoryDrawer_Delete(KCategoryDrawer* self) {
    delete self;
}
