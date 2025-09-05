#include <KAboutData>
#include <KBugReport>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kbugreport.h>
#include "libkbugreport.h"
#include "libkbugreport.hxx"

KBugReport* KBugReport_new(const KAboutData* aboutData) {
    return new VirtualKBugReport(*aboutData);
}

KBugReport* KBugReport_new2(const KAboutData* aboutData, QWidget* parent) {
    return new VirtualKBugReport(*aboutData, parent);
}

QMetaObject* KBugReport_MetaObject(const KBugReport* self) {
    return (QMetaObject*)self->metaObject();
}

void* KBugReport_Metacast(KBugReport* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KBugReport_Metacall(KBugReport* self, int param1, int param2, void** param3) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKBugReport*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KBugReport_Tr(const char* s) {
    QString _ret = KBugReport::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KBugReport_Accept(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        self->accept();
    } else {
        ((VirtualKBugReport*)self)->accept();
    }
}

libqt_string KBugReport_Tr2(const char* s, const char* c) {
    QString _ret = KBugReport::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KBugReport_Tr3(const char* s, const char* c, int n) {
    QString _ret = KBugReport::tr(s, c, static_cast<int>(n));
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
int KBugReport_QBaseMetacall(KBugReport* self, int param1, int param2, void** param3) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Metacall_IsBase(true);
        return vkbugreport->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KBugReport::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetacall(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Metacall_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KBugReport_QBaseAccept(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Accept_IsBase(true);
        vkbugreport->accept();
    } else {
        self->KBugReport::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnAccept(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Accept_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_SetVisible(KBugReport* self, bool visible) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setVisible(visible);
    } else {
        self->KBugReport::setVisible(visible);
    }
}

// Base class handler implementation
void KBugReport_QBaseSetVisible(KBugReport* self, bool visible) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SetVisible_IsBase(true);
        vkbugreport->setVisible(visible);
    } else {
        self->KBugReport::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSetVisible(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SetVisible_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBugReport_SizeHint(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return new QSize(vkbugreport->sizeHint());
    } else {
        return new QSize(((VirtualKBugReport*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KBugReport_QBaseSizeHint(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SizeHint_IsBase(true);
        return new QSize(vkbugreport->sizeHint());
    } else {
        return new QSize(((VirtualKBugReport*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSizeHint(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SizeHint_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KBugReport_MinimumSizeHint(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return new QSize(vkbugreport->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBugReport*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KBugReport_QBaseMinimumSizeHint(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MinimumSizeHint_IsBase(true);
        return new QSize(vkbugreport->minimumSizeHint());
    } else {
        return new QSize(((VirtualKBugReport*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMinimumSizeHint(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MinimumSizeHint_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_Open(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->open();
    } else {
        self->KBugReport::open();
    }
}

// Base class handler implementation
void KBugReport_QBaseOpen(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Open_IsBase(true);
        vkbugreport->open();
    } else {
        self->KBugReport::open();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnOpen(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Open_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_Exec(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->exec();
    } else {
        return self->KBugReport::exec();
    }
}

// Base class handler implementation
int KBugReport_QBaseExec(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Exec_IsBase(true);
        return vkbugreport->exec();
    } else {
        return self->KBugReport::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnExec(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Exec_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_Done(KBugReport* self, int param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->done(static_cast<int>(param1));
    } else {
        self->KBugReport::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void KBugReport_QBaseDone(KBugReport* self, int param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Done_IsBase(true);
        vkbugreport->done(static_cast<int>(param1));
    } else {
        self->KBugReport::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDone(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Done_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_Reject(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->reject();
    } else {
        self->KBugReport::reject();
    }
}

// Base class handler implementation
void KBugReport_QBaseReject(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Reject_IsBase(true);
        vkbugreport->reject();
    } else {
        self->KBugReport::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnReject(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Reject_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_KeyPressEvent(KBugReport* self, QKeyEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->keyPressEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseKeyPressEvent(KBugReport* self, QKeyEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_KeyPressEvent_IsBase(true);
        vkbugreport->keyPressEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnKeyPressEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_KeyPressEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_CloseEvent(KBugReport* self, QCloseEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->closeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseCloseEvent(KBugReport* self, QCloseEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_CloseEvent_IsBase(true);
        vkbugreport->closeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnCloseEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_CloseEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ShowEvent(KBugReport* self, QShowEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->showEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseShowEvent(KBugReport* self, QShowEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ShowEvent_IsBase(true);
        vkbugreport->showEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnShowEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ShowEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ResizeEvent(KBugReport* self, QResizeEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->resizeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseResizeEvent(KBugReport* self, QResizeEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ResizeEvent_IsBase(true);
        vkbugreport->resizeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnResizeEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ResizeEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ContextMenuEvent(KBugReport* self, QContextMenuEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->contextMenuEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseContextMenuEvent(KBugReport* self, QContextMenuEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ContextMenuEvent_IsBase(true);
        vkbugreport->contextMenuEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnContextMenuEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ContextMenuEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_EventFilter(KBugReport* self, QObject* param1, QEvent* param2) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->eventFilter(param1, param2);
    } else {
        return ((VirtualKBugReport*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KBugReport_QBaseEventFilter(KBugReport* self, QObject* param1, QEvent* param2) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_EventFilter_IsBase(true);
        return vkbugreport->eventFilter(param1, param2);
    } else {
        return ((VirtualKBugReport*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEventFilter(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_EventFilter_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_DevType(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->devType();
    } else {
        return self->KBugReport::devType();
    }
}

// Base class handler implementation
int KBugReport_QBaseDevType(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DevType_IsBase(true);
        return vkbugreport->devType();
    } else {
        return self->KBugReport::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDevType(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DevType_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_HeightForWidth(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBugReport::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KBugReport_QBaseHeightForWidth(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HeightForWidth_IsBase(true);
        return vkbugreport->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KBugReport::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHeightForWidth(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HeightForWidth_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_HasHeightForWidth(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->hasHeightForWidth();
    } else {
        return self->KBugReport::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KBugReport_QBaseHasHeightForWidth(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HasHeightForWidth_IsBase(true);
        return vkbugreport->hasHeightForWidth();
    } else {
        return self->KBugReport::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHasHeightForWidth(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HasHeightForWidth_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KBugReport_PaintEngine(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->paintEngine();
    } else {
        return self->KBugReport::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KBugReport_QBasePaintEngine(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_PaintEngine_IsBase(true);
        return vkbugreport->paintEngine();
    } else {
        return self->KBugReport::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnPaintEngine(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_PaintEngine_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_Event(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->event(event);
    } else {
        return ((VirtualKBugReport*)self)->event(event);
    }
}

// Base class handler implementation
bool KBugReport_QBaseEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Event_IsBase(true);
        return vkbugreport->event(event);
    } else {
        return ((VirtualKBugReport*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Event_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_MousePressEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->mousePressEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseMousePressEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MousePressEvent_IsBase(true);
        vkbugreport->mousePressEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMousePressEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MousePressEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_MouseReleaseEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->mouseReleaseEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseMouseReleaseEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseReleaseEvent_IsBase(true);
        vkbugreport->mouseReleaseEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseReleaseEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_MouseDoubleClickEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseMouseDoubleClickEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseDoubleClickEvent_IsBase(true);
        vkbugreport->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseDoubleClickEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_MouseMoveEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->mouseMoveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseMouseMoveEvent(KBugReport* self, QMouseEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseMoveEvent_IsBase(true);
        vkbugreport->mouseMoveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMouseMoveEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MouseMoveEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_WheelEvent(KBugReport* self, QWheelEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->wheelEvent(event);
    } else {
        ((VirtualKBugReport*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseWheelEvent(KBugReport* self, QWheelEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_WheelEvent_IsBase(true);
        vkbugreport->wheelEvent(event);
    } else {
        ((VirtualKBugReport*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnWheelEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_WheelEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_KeyReleaseEvent(KBugReport* self, QKeyEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->keyReleaseEvent(event);
    } else {
        ((VirtualKBugReport*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseKeyReleaseEvent(KBugReport* self, QKeyEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_KeyReleaseEvent_IsBase(true);
        vkbugreport->keyReleaseEvent(event);
    } else {
        ((VirtualKBugReport*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnKeyReleaseEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_FocusInEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->focusInEvent(event);
    } else {
        ((VirtualKBugReport*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseFocusInEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusInEvent_IsBase(true);
        vkbugreport->focusInEvent(event);
    } else {
        ((VirtualKBugReport*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusInEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusInEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_FocusOutEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->focusOutEvent(event);
    } else {
        ((VirtualKBugReport*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseFocusOutEvent(KBugReport* self, QFocusEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusOutEvent_IsBase(true);
        vkbugreport->focusOutEvent(event);
    } else {
        ((VirtualKBugReport*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusOutEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusOutEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_EnterEvent(KBugReport* self, QEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->enterEvent(event);
    } else {
        ((VirtualKBugReport*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseEnterEvent(KBugReport* self, QEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_EnterEvent_IsBase(true);
        vkbugreport->enterEvent(event);
    } else {
        ((VirtualKBugReport*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnEnterEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_EnterEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_LeaveEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->leaveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseLeaveEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_LeaveEvent_IsBase(true);
        vkbugreport->leaveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnLeaveEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_LeaveEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_PaintEvent(KBugReport* self, QPaintEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->paintEvent(event);
    } else {
        ((VirtualKBugReport*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBasePaintEvent(KBugReport* self, QPaintEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_PaintEvent_IsBase(true);
        vkbugreport->paintEvent(event);
    } else {
        ((VirtualKBugReport*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnPaintEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_PaintEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_MoveEvent(KBugReport* self, QMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->moveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseMoveEvent(KBugReport* self, QMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MoveEvent_IsBase(true);
        vkbugreport->moveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMoveEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_MoveEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_TabletEvent(KBugReport* self, QTabletEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->tabletEvent(event);
    } else {
        ((VirtualKBugReport*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseTabletEvent(KBugReport* self, QTabletEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_TabletEvent_IsBase(true);
        vkbugreport->tabletEvent(event);
    } else {
        ((VirtualKBugReport*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnTabletEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_TabletEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ActionEvent(KBugReport* self, QActionEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->actionEvent(event);
    } else {
        ((VirtualKBugReport*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseActionEvent(KBugReport* self, QActionEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ActionEvent_IsBase(true);
        vkbugreport->actionEvent(event);
    } else {
        ((VirtualKBugReport*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnActionEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ActionEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_DragEnterEvent(KBugReport* self, QDragEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->dragEnterEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseDragEnterEvent(KBugReport* self, QDragEnterEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragEnterEvent_IsBase(true);
        vkbugreport->dragEnterEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragEnterEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragEnterEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_DragMoveEvent(KBugReport* self, QDragMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->dragMoveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseDragMoveEvent(KBugReport* self, QDragMoveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragMoveEvent_IsBase(true);
        vkbugreport->dragMoveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragMoveEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragMoveEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_DragLeaveEvent(KBugReport* self, QDragLeaveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->dragLeaveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseDragLeaveEvent(KBugReport* self, QDragLeaveEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragLeaveEvent_IsBase(true);
        vkbugreport->dragLeaveEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDragLeaveEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DragLeaveEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_DropEvent(KBugReport* self, QDropEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->dropEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseDropEvent(KBugReport* self, QDropEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DropEvent_IsBase(true);
        vkbugreport->dropEvent(event);
    } else {
        ((VirtualKBugReport*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDropEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DropEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_HideEvent(KBugReport* self, QHideEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->hideEvent(event);
    } else {
        ((VirtualKBugReport*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseHideEvent(KBugReport* self, QHideEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HideEvent_IsBase(true);
        vkbugreport->hideEvent(event);
    } else {
        ((VirtualKBugReport*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnHideEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_HideEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_NativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBugReport*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KBugReport_QBaseNativeEvent(KBugReport* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_NativeEvent_IsBase(true);
        return vkbugreport->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKBugReport*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnNativeEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_NativeEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ChangeEvent(KBugReport* self, QEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->changeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseChangeEvent(KBugReport* self, QEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ChangeEvent_IsBase(true);
        vkbugreport->changeEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnChangeEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ChangeEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_Metric(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBugReport*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KBugReport_QBaseMetric(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Metric_IsBase(true);
        return vkbugreport->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKBugReport*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnMetric(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Metric_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_InitPainter(const KBugReport* self, QPainter* painter) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->initPainter(painter);
    } else {
        ((VirtualKBugReport*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KBugReport_QBaseInitPainter(const KBugReport* self, QPainter* painter) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InitPainter_IsBase(true);
        vkbugreport->initPainter(painter);
    } else {
        ((VirtualKBugReport*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInitPainter(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InitPainter_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KBugReport_Redirected(const KBugReport* self, QPoint* offset) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->redirected(offset);
    } else {
        return ((VirtualKBugReport*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KBugReport_QBaseRedirected(const KBugReport* self, QPoint* offset) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Redirected_IsBase(true);
        return vkbugreport->redirected(offset);
    } else {
        return ((VirtualKBugReport*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnRedirected(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Redirected_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KBugReport_SharedPainter(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->sharedPainter();
    } else {
        return ((VirtualKBugReport*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KBugReport_QBaseSharedPainter(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SharedPainter_IsBase(true);
        return vkbugreport->sharedPainter();
    } else {
        return ((VirtualKBugReport*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSharedPainter(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SharedPainter_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_InputMethodEvent(KBugReport* self, QInputMethodEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->inputMethodEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseInputMethodEvent(KBugReport* self, QInputMethodEvent* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InputMethodEvent_IsBase(true);
        vkbugreport->inputMethodEvent(param1);
    } else {
        ((VirtualKBugReport*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInputMethodEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InputMethodEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KBugReport_InputMethodQuery(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return new QVariant(vkbugreport->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBugReport*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KBugReport_QBaseInputMethodQuery(const KBugReport* self, int param1) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InputMethodQuery_IsBase(true);
        return new QVariant(vkbugreport->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKBugReport*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnInputMethodQuery(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_InputMethodQuery_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_FocusNextPrevChild(KBugReport* self, bool next) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->focusNextPrevChild(next);
    } else {
        return ((VirtualKBugReport*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KBugReport_QBaseFocusNextPrevChild(KBugReport* self, bool next) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusNextPrevChild_IsBase(true);
        return vkbugreport->focusNextPrevChild(next);
    } else {
        return ((VirtualKBugReport*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusNextPrevChild(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_TimerEvent(KBugReport* self, QTimerEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->timerEvent(event);
    } else {
        ((VirtualKBugReport*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseTimerEvent(KBugReport* self, QTimerEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_TimerEvent_IsBase(true);
        vkbugreport->timerEvent(event);
    } else {
        ((VirtualKBugReport*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnTimerEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_TimerEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ChildEvent(KBugReport* self, QChildEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->childEvent(event);
    } else {
        ((VirtualKBugReport*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseChildEvent(KBugReport* self, QChildEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ChildEvent_IsBase(true);
        vkbugreport->childEvent(event);
    } else {
        ((VirtualKBugReport*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnChildEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ChildEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_CustomEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->customEvent(event);
    } else {
        ((VirtualKBugReport*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KBugReport_QBaseCustomEvent(KBugReport* self, QEvent* event) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_CustomEvent_IsBase(true);
        vkbugreport->customEvent(event);
    } else {
        ((VirtualKBugReport*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnCustomEvent(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_CustomEvent_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_ConnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->connectNotify(*signal);
    } else {
        ((VirtualKBugReport*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KBugReport_QBaseConnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ConnectNotify_IsBase(true);
        vkbugreport->connectNotify(*signal);
    } else {
        ((VirtualKBugReport*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnConnectNotify(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_ConnectNotify_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_DisconnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->disconnectNotify(*signal);
    } else {
        ((VirtualKBugReport*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KBugReport_QBaseDisconnectNotify(KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DisconnectNotify_IsBase(true);
        vkbugreport->disconnectNotify(*signal);
    } else {
        ((VirtualKBugReport*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDisconnectNotify(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_DisconnectNotify_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_SendBugReport(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->sendBugReport();
    } else {
        return ((VirtualKBugReport*)self)->sendBugReport();
    }
}

// Base class handler implementation
bool KBugReport_QBaseSendBugReport(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SendBugReport_IsBase(true);
        return vkbugreport->sendBugReport();
    } else {
        return ((VirtualKBugReport*)self)->sendBugReport();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSendBugReport(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SendBugReport_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_SendBugReport_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_AdjustPosition(KBugReport* self, QWidget* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->adjustPosition(param1);
    } else {
        ((VirtualKBugReport*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void KBugReport_QBaseAdjustPosition(KBugReport* self, QWidget* param1) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_AdjustPosition_IsBase(true);
        vkbugreport->adjustPosition(param1);
    } else {
        ((VirtualKBugReport*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnAdjustPosition(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_AdjustPosition_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_UpdateMicroFocus(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->updateMicroFocus();
    } else {
        ((VirtualKBugReport*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KBugReport_QBaseUpdateMicroFocus(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_UpdateMicroFocus_IsBase(true);
        vkbugreport->updateMicroFocus();
    } else {
        ((VirtualKBugReport*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnUpdateMicroFocus(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_Create(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->create();
    } else {
        ((VirtualKBugReport*)self)->create();
    }
}

// Base class handler implementation
void KBugReport_QBaseCreate(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Create_IsBase(true);
        vkbugreport->create();
    } else {
        ((VirtualKBugReport*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnCreate(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Create_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KBugReport_Destroy(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->destroy();
    } else {
        ((VirtualKBugReport*)self)->destroy();
    }
}

// Base class handler implementation
void KBugReport_QBaseDestroy(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Destroy_IsBase(true);
        vkbugreport->destroy();
    } else {
        ((VirtualKBugReport*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnDestroy(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Destroy_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_FocusNextChild(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->focusNextChild();
    } else {
        return ((VirtualKBugReport*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KBugReport_QBaseFocusNextChild(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusNextChild_IsBase(true);
        return vkbugreport->focusNextChild();
    } else {
        return ((VirtualKBugReport*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusNextChild(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusNextChild_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_FocusPreviousChild(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->focusPreviousChild();
    } else {
        return ((VirtualKBugReport*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KBugReport_QBaseFocusPreviousChild(KBugReport* self) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusPreviousChild_IsBase(true);
        return vkbugreport->focusPreviousChild();
    } else {
        return ((VirtualKBugReport*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnFocusPreviousChild(KBugReport* self, intptr_t slot) {
    auto* vkbugreport = dynamic_cast<VirtualKBugReport*>(self);
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_FocusPreviousChild_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KBugReport_Sender(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->sender();
    } else {
        return ((VirtualKBugReport*)self)->sender();
    }
}

// Base class handler implementation
QObject* KBugReport_QBaseSender(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Sender_IsBase(true);
        return vkbugreport->sender();
    } else {
        return ((VirtualKBugReport*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSender(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Sender_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_SenderSignalIndex(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->senderSignalIndex();
    } else {
        return ((VirtualKBugReport*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KBugReport_QBaseSenderSignalIndex(const KBugReport* self) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SenderSignalIndex_IsBase(true);
        return vkbugreport->senderSignalIndex();
    } else {
        return ((VirtualKBugReport*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnSenderSignalIndex(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_SenderSignalIndex_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KBugReport_Receivers(const KBugReport* self, const char* signal) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->receivers(signal);
    } else {
        return ((VirtualKBugReport*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KBugReport_QBaseReceivers(const KBugReport* self, const char* signal) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Receivers_IsBase(true);
        return vkbugreport->receivers(signal);
    } else {
        return ((VirtualKBugReport*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnReceivers(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_Receivers_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KBugReport_IsSignalConnected(const KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->isSignalConnected(*signal);
    } else {
        return ((VirtualKBugReport*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KBugReport_QBaseIsSignalConnected(const KBugReport* self, const QMetaMethod* signal) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_IsSignalConnected_IsBase(true);
        return vkbugreport->isSignalConnected(*signal);
    } else {
        return ((VirtualKBugReport*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnIsSignalConnected(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_IsSignalConnected_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KBugReport_GetDecodedMetricF(const KBugReport* self, int metricA, int metricB) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        return vkbugreport->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBugReport*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KBugReport_QBaseGetDecodedMetricF(const KBugReport* self, int metricA, int metricB) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_GetDecodedMetricF_IsBase(true);
        return vkbugreport->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKBugReport*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KBugReport_OnGetDecodedMetricF(const KBugReport* self, intptr_t slot) {
    auto* vkbugreport = const_cast<VirtualKBugReport*>(dynamic_cast<const VirtualKBugReport*>(self));
    if (vkbugreport && vkbugreport->isVirtualKBugReport) {
        vkbugreport->setKBugReport_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKBugReport::KBugReport_GetDecodedMetricF_Callback>(slot));
    }
}

void KBugReport_Delete(KBugReport* self) {
    delete self;
}
