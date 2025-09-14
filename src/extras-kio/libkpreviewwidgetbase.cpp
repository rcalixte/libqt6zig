#include <KPreviewWidgetBase>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
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
#include <QList>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kpreviewwidgetbase.h>
#include "libkpreviewwidgetbase.h"
#include "libkpreviewwidgetbase.hxx"

KPreviewWidgetBase* KPreviewWidgetBase_new(QWidget* parent) {
    return new VirtualKPreviewWidgetBase(parent);
}

QMetaObject* KPreviewWidgetBase_MetaObject(const KPreviewWidgetBase* self) {
    return (QMetaObject*)self->metaObject();
}

void* KPreviewWidgetBase_Metacast(KPreviewWidgetBase* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KPreviewWidgetBase_Metacall(KPreviewWidgetBase* self, int param1, int param2, void** param3) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KPreviewWidgetBase_Tr(const char* s) {
    QString _ret = KPreviewWidgetBase::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KPreviewWidgetBase_SupportedMimeTypes(const KPreviewWidgetBase* self) {
    QList<QString> _ret = self->supportedMimeTypes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KPreviewWidgetBase_ShowPreview(KPreviewWidgetBase* self, const QUrl* url) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->showPreview(*url);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->showPreview(*url);
    }
}

void KPreviewWidgetBase_ClearPreview(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->clearPreview();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->clearPreview();
    }
}

libqt_string KPreviewWidgetBase_Tr2(const char* s, const char* c) {
    QString _ret = KPreviewWidgetBase::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KPreviewWidgetBase_Tr3(const char* s, const char* c, int n) {
    QString _ret = KPreviewWidgetBase::tr(s, c, static_cast<int>(n));
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
int KPreviewWidgetBase_QBaseMetacall(KPreviewWidgetBase* self, int param1, int param2, void** param3) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Metacall_IsBase(true);
        return vkpreviewwidgetbase->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KPreviewWidgetBase::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetacall(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Metacall_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseShowPreview(KPreviewWidgetBase* self, const QUrl* url) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ShowPreview_IsBase(true);
        vkpreviewwidgetbase->showPreview(*url);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->showPreview(*url);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnShowPreview(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ShowPreview_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ShowPreview_Callback>(slot));
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseClearPreview(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ClearPreview_IsBase(true);
        vkpreviewwidgetbase->clearPreview();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->clearPreview();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnClearPreview(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ClearPreview_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ClearPreview_Callback>(slot));
    }
}

// Derived class handler implementation
int KPreviewWidgetBase_DevType(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->devType();
    } else {
        return self->KPreviewWidgetBase::devType();
    }
}

// Base class handler implementation
int KPreviewWidgetBase_QBaseDevType(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DevType_IsBase(true);
        return vkpreviewwidgetbase->devType();
    } else {
        return self->KPreviewWidgetBase::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDevType(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DevType_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_SetVisible(KPreviewWidgetBase* self, bool visible) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setVisible(visible);
    } else {
        self->KPreviewWidgetBase::setVisible(visible);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseSetVisible(KPreviewWidgetBase* self, bool visible) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SetVisible_IsBase(true);
        vkpreviewwidgetbase->setVisible(visible);
    } else {
        self->KPreviewWidgetBase::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSetVisible(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SetVisible_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPreviewWidgetBase_SizeHint(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return new QSize(vkpreviewwidgetbase->sizeHint());
    } else {
        return new QSize(((VirtualKPreviewWidgetBase*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KPreviewWidgetBase_QBaseSizeHint(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SizeHint_IsBase(true);
        return new QSize(vkpreviewwidgetbase->sizeHint());
    } else {
        return new QSize(((VirtualKPreviewWidgetBase*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSizeHint(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SizeHint_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KPreviewWidgetBase_MinimumSizeHint(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return new QSize(vkpreviewwidgetbase->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPreviewWidgetBase*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KPreviewWidgetBase_QBaseMinimumSizeHint(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MinimumSizeHint_IsBase(true);
        return new QSize(vkpreviewwidgetbase->minimumSizeHint());
    } else {
        return new QSize(((VirtualKPreviewWidgetBase*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMinimumSizeHint(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MinimumSizeHint_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KPreviewWidgetBase_HeightForWidth(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPreviewWidgetBase::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KPreviewWidgetBase_QBaseHeightForWidth(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HeightForWidth_IsBase(true);
        return vkpreviewwidgetbase->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KPreviewWidgetBase::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHeightForWidth(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HeightForWidth_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_HasHeightForWidth(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->hasHeightForWidth();
    } else {
        return self->KPreviewWidgetBase::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseHasHeightForWidth(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HasHeightForWidth_IsBase(true);
        return vkpreviewwidgetbase->hasHeightForWidth();
    } else {
        return self->KPreviewWidgetBase::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHasHeightForWidth(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HasHeightForWidth_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KPreviewWidgetBase_PaintEngine(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->paintEngine();
    } else {
        return self->KPreviewWidgetBase::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KPreviewWidgetBase_QBasePaintEngine(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_PaintEngine_IsBase(true);
        return vkpreviewwidgetbase->paintEngine();
    } else {
        return self->KPreviewWidgetBase::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnPaintEngine(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_PaintEngine_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_Event(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->event(event);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->event(event);
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Event_IsBase(true);
        return vkpreviewwidgetbase->event(event);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Event_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_MousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->mousePressEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseMousePressEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MousePressEvent_IsBase(true);
        vkpreviewwidgetbase->mousePressEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMousePressEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MousePressEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->mouseReleaseEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseMouseReleaseEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseReleaseEvent_IsBase(true);
        vkpreviewwidgetbase->mouseReleaseEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseReleaseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseMouseDoubleClickEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseDoubleClickEvent_IsBase(true);
        vkpreviewwidgetbase->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseDoubleClickEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_MouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->mouseMoveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseMouseMoveEvent(KPreviewWidgetBase* self, QMouseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseMoveEvent_IsBase(true);
        vkpreviewwidgetbase->mouseMoveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMouseMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MouseMoveEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_WheelEvent(KPreviewWidgetBase* self, QWheelEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->wheelEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseWheelEvent(KPreviewWidgetBase* self, QWheelEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_WheelEvent_IsBase(true);
        vkpreviewwidgetbase->wheelEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnWheelEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_WheelEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_KeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->keyPressEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseKeyPressEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_KeyPressEvent_IsBase(true);
        vkpreviewwidgetbase->keyPressEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnKeyPressEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_KeyPressEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_KeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->keyReleaseEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseKeyReleaseEvent(KPreviewWidgetBase* self, QKeyEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_KeyReleaseEvent_IsBase(true);
        vkpreviewwidgetbase->keyReleaseEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnKeyReleaseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_FocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->focusInEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseFocusInEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusInEvent_IsBase(true);
        vkpreviewwidgetbase->focusInEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusInEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusInEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_FocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->focusOutEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseFocusOutEvent(KPreviewWidgetBase* self, QFocusEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusOutEvent_IsBase(true);
        vkpreviewwidgetbase->focusOutEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusOutEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusOutEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_EnterEvent(KPreviewWidgetBase* self, QEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->enterEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseEnterEvent(KPreviewWidgetBase* self, QEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_EnterEvent_IsBase(true);
        vkpreviewwidgetbase->enterEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEnterEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_EnterEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_LeaveEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->leaveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseLeaveEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_LeaveEvent_IsBase(true);
        vkpreviewwidgetbase->leaveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnLeaveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_LeaveEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_PaintEvent(KPreviewWidgetBase* self, QPaintEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->paintEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBasePaintEvent(KPreviewWidgetBase* self, QPaintEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_PaintEvent_IsBase(true);
        vkpreviewwidgetbase->paintEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnPaintEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_PaintEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_MoveEvent(KPreviewWidgetBase* self, QMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->moveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseMoveEvent(KPreviewWidgetBase* self, QMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MoveEvent_IsBase(true);
        vkpreviewwidgetbase->moveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_MoveEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->resizeEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseResizeEvent(KPreviewWidgetBase* self, QResizeEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ResizeEvent_IsBase(true);
        vkpreviewwidgetbase->resizeEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnResizeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ResizeEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_CloseEvent(KPreviewWidgetBase* self, QCloseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->closeEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseCloseEvent(KPreviewWidgetBase* self, QCloseEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_CloseEvent_IsBase(true);
        vkpreviewwidgetbase->closeEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnCloseEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_CloseEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->contextMenuEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseContextMenuEvent(KPreviewWidgetBase* self, QContextMenuEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ContextMenuEvent_IsBase(true);
        vkpreviewwidgetbase->contextMenuEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnContextMenuEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ContextMenuEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_TabletEvent(KPreviewWidgetBase* self, QTabletEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->tabletEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseTabletEvent(KPreviewWidgetBase* self, QTabletEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_TabletEvent_IsBase(true);
        vkpreviewwidgetbase->tabletEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnTabletEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_TabletEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ActionEvent(KPreviewWidgetBase* self, QActionEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->actionEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseActionEvent(KPreviewWidgetBase* self, QActionEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ActionEvent_IsBase(true);
        vkpreviewwidgetbase->actionEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnActionEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ActionEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_DragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->dragEnterEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDragEnterEvent(KPreviewWidgetBase* self, QDragEnterEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragEnterEvent_IsBase(true);
        vkpreviewwidgetbase->dragEnterEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragEnterEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragEnterEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_DragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->dragMoveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDragMoveEvent(KPreviewWidgetBase* self, QDragMoveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragMoveEvent_IsBase(true);
        vkpreviewwidgetbase->dragMoveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragMoveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragMoveEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_DragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->dragLeaveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDragLeaveEvent(KPreviewWidgetBase* self, QDragLeaveEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragLeaveEvent_IsBase(true);
        vkpreviewwidgetbase->dragLeaveEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDragLeaveEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DragLeaveEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_DropEvent(KPreviewWidgetBase* self, QDropEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->dropEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDropEvent(KPreviewWidgetBase* self, QDropEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DropEvent_IsBase(true);
        vkpreviewwidgetbase->dropEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDropEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DropEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ShowEvent(KPreviewWidgetBase* self, QShowEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->showEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseShowEvent(KPreviewWidgetBase* self, QShowEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ShowEvent_IsBase(true);
        vkpreviewwidgetbase->showEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnShowEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ShowEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_HideEvent(KPreviewWidgetBase* self, QHideEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->hideEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseHideEvent(KPreviewWidgetBase* self, QHideEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HideEvent_IsBase(true);
        vkpreviewwidgetbase->hideEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnHideEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_HideEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_NativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseNativeEvent(KPreviewWidgetBase* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_NativeEvent_IsBase(true);
        return vkpreviewwidgetbase->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnNativeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_NativeEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ChangeEvent(KPreviewWidgetBase* self, QEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->changeEvent(param1);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseChangeEvent(KPreviewWidgetBase* self, QEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ChangeEvent_IsBase(true);
        vkpreviewwidgetbase->changeEvent(param1);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnChangeEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ChangeEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KPreviewWidgetBase_Metric(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KPreviewWidgetBase_QBaseMetric(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Metric_IsBase(true);
        return vkpreviewwidgetbase->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnMetric(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Metric_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_InitPainter(const KPreviewWidgetBase* self, QPainter* painter) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->initPainter(painter);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseInitPainter(const KPreviewWidgetBase* self, QPainter* painter) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InitPainter_IsBase(true);
        vkpreviewwidgetbase->initPainter(painter);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInitPainter(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InitPainter_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KPreviewWidgetBase_Redirected(const KPreviewWidgetBase* self, QPoint* offset) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->redirected(offset);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KPreviewWidgetBase_QBaseRedirected(const KPreviewWidgetBase* self, QPoint* offset) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Redirected_IsBase(true);
        return vkpreviewwidgetbase->redirected(offset);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnRedirected(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Redirected_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KPreviewWidgetBase_SharedPainter(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->sharedPainter();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KPreviewWidgetBase_QBaseSharedPainter(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SharedPainter_IsBase(true);
        return vkpreviewwidgetbase->sharedPainter();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSharedPainter(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SharedPainter_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_InputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->inputMethodEvent(param1);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseInputMethodEvent(KPreviewWidgetBase* self, QInputMethodEvent* param1) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InputMethodEvent_IsBase(true);
        vkpreviewwidgetbase->inputMethodEvent(param1);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInputMethodEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InputMethodEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KPreviewWidgetBase_InputMethodQuery(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return new QVariant(vkpreviewwidgetbase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPreviewWidgetBase*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KPreviewWidgetBase_QBaseInputMethodQuery(const KPreviewWidgetBase* self, int param1) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InputMethodQuery_IsBase(true);
        return new QVariant(vkpreviewwidgetbase->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKPreviewWidgetBase*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnInputMethodQuery(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_InputMethodQuery_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_FocusNextPrevChild(KPreviewWidgetBase* self, bool next) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->focusNextPrevChild(next);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseFocusNextPrevChild(KPreviewWidgetBase* self, bool next) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusNextPrevChild_IsBase(true);
        return vkpreviewwidgetbase->focusNextPrevChild(next);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusNextPrevChild(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_EventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->eventFilter(watched, event);
    } else {
        return self->KPreviewWidgetBase::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseEventFilter(KPreviewWidgetBase* self, QObject* watched, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_EventFilter_IsBase(true);
        return vkpreviewwidgetbase->eventFilter(watched, event);
    } else {
        return self->KPreviewWidgetBase::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnEventFilter(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_EventFilter_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_TimerEvent(KPreviewWidgetBase* self, QTimerEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->timerEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseTimerEvent(KPreviewWidgetBase* self, QTimerEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_TimerEvent_IsBase(true);
        vkpreviewwidgetbase->timerEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnTimerEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_TimerEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ChildEvent(KPreviewWidgetBase* self, QChildEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->childEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseChildEvent(KPreviewWidgetBase* self, QChildEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ChildEvent_IsBase(true);
        vkpreviewwidgetbase->childEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnChildEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ChildEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_CustomEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->customEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseCustomEvent(KPreviewWidgetBase* self, QEvent* event) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_CustomEvent_IsBase(true);
        vkpreviewwidgetbase->customEvent(event);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnCustomEvent(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_CustomEvent_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_ConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->connectNotify(*signal);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseConnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ConnectNotify_IsBase(true);
        vkpreviewwidgetbase->connectNotify(*signal);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnConnectNotify(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_ConnectNotify_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_DisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->disconnectNotify(*signal);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDisconnectNotify(KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DisconnectNotify_IsBase(true);
        vkpreviewwidgetbase->disconnectNotify(*signal);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDisconnectNotify(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_DisconnectNotify_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_SetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setSupportedMimeTypes(mimeTypes_QList);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->setSupportedMimeTypes(mimeTypes_QList);
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseSetSupportedMimeTypes(KPreviewWidgetBase* self, const libqt_list /* of libqt_string */ mimeTypes) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    QList<QString> mimeTypes_QList;
    mimeTypes_QList.reserve(mimeTypes.len);
    libqt_string* mimeTypes_arr = static_cast<libqt_string*>(mimeTypes.data);
    for (size_t i = 0; i < mimeTypes.len; ++i) {
        QString mimeTypes_arr_i_QString = QString::fromUtf8(mimeTypes_arr[i].data, mimeTypes_arr[i].len);
        mimeTypes_QList.push_back(mimeTypes_arr_i_QString);
    }
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SetSupportedMimeTypes_IsBase(true);
        vkpreviewwidgetbase->setSupportedMimeTypes(mimeTypes_QList);
    } else {
        ((VirtualKPreviewWidgetBase*)self)->setSupportedMimeTypes(mimeTypes_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSetSupportedMimeTypes(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SetSupportedMimeTypes_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SetSupportedMimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_UpdateMicroFocus(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->updateMicroFocus();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseUpdateMicroFocus(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_UpdateMicroFocus_IsBase(true);
        vkpreviewwidgetbase->updateMicroFocus();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnUpdateMicroFocus(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_Create(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->create();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->create();
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseCreate(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Create_IsBase(true);
        vkpreviewwidgetbase->create();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnCreate(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Create_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KPreviewWidgetBase_Destroy(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->destroy();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->destroy();
    }
}

// Base class handler implementation
void KPreviewWidgetBase_QBaseDestroy(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Destroy_IsBase(true);
        vkpreviewwidgetbase->destroy();
    } else {
        ((VirtualKPreviewWidgetBase*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnDestroy(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Destroy_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_FocusNextChild(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->focusNextChild();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseFocusNextChild(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusNextChild_IsBase(true);
        return vkpreviewwidgetbase->focusNextChild();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusNextChild(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusNextChild_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_FocusPreviousChild(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->focusPreviousChild();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseFocusPreviousChild(KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusPreviousChild_IsBase(true);
        return vkpreviewwidgetbase->focusPreviousChild();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnFocusPreviousChild(KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = dynamic_cast<VirtualKPreviewWidgetBase*>(self);
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_FocusPreviousChild_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KPreviewWidgetBase_Sender(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->sender();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->sender();
    }
}

// Base class handler implementation
QObject* KPreviewWidgetBase_QBaseSender(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Sender_IsBase(true);
        return vkpreviewwidgetbase->sender();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSender(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Sender_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KPreviewWidgetBase_SenderSignalIndex(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->senderSignalIndex();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KPreviewWidgetBase_QBaseSenderSignalIndex(const KPreviewWidgetBase* self) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SenderSignalIndex_IsBase(true);
        return vkpreviewwidgetbase->senderSignalIndex();
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnSenderSignalIndex(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_SenderSignalIndex_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KPreviewWidgetBase_Receivers(const KPreviewWidgetBase* self, const char* signal) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->receivers(signal);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KPreviewWidgetBase_QBaseReceivers(const KPreviewWidgetBase* self, const char* signal) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Receivers_IsBase(true);
        return vkpreviewwidgetbase->receivers(signal);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnReceivers(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_Receivers_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KPreviewWidgetBase_IsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KPreviewWidgetBase_QBaseIsSignalConnected(const KPreviewWidgetBase* self, const QMetaMethod* signal) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_IsSignalConnected_IsBase(true);
        return vkpreviewwidgetbase->isSignalConnected(*signal);
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnIsSignalConnected(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_IsSignalConnected_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KPreviewWidgetBase_GetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        return vkpreviewwidgetbase->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KPreviewWidgetBase_QBaseGetDecodedMetricF(const KPreviewWidgetBase* self, int metricA, int metricB) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_GetDecodedMetricF_IsBase(true);
        return vkpreviewwidgetbase->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKPreviewWidgetBase*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KPreviewWidgetBase_OnGetDecodedMetricF(const KPreviewWidgetBase* self, intptr_t slot) {
    auto* vkpreviewwidgetbase = const_cast<VirtualKPreviewWidgetBase*>(dynamic_cast<const VirtualKPreviewWidgetBase*>(self));
    if (vkpreviewwidgetbase && vkpreviewwidgetbase->isVirtualKPreviewWidgetBase) {
        vkpreviewwidgetbase->setKPreviewWidgetBase_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKPreviewWidgetBase::KPreviewWidgetBase_GetDecodedMetricF_Callback>(slot));
    }
}

void KPreviewWidgetBase_Delete(KPreviewWidgetBase* self) {
    delete self;
}
