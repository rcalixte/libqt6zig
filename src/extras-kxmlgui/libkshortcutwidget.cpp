#include <KActionCollection>
#include <KShortcutWidget>
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
#include <QKeySequence>
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
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kshortcutwidget.h>
#include "libkshortcutwidget.h"
#include "libkshortcutwidget.hxx"

KShortcutWidget* KShortcutWidget_new(QWidget* parent) {
    return new VirtualKShortcutWidget(parent);
}

KShortcutWidget* KShortcutWidget_new2() {
    return new VirtualKShortcutWidget();
}

QMetaObject* KShortcutWidget_MetaObject(const KShortcutWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KShortcutWidget_Metacast(KShortcutWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KShortcutWidget_Metacall(KShortcutWidget* self, int param1, int param2, void** param3) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKShortcutWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KShortcutWidget_Tr(const char* s) {
    QString _ret = KShortcutWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KShortcutWidget_SetModifierlessAllowed(KShortcutWidget* self, bool allow) {
    self->setModifierlessAllowed(allow);
}

bool KShortcutWidget_IsModifierlessAllowed(KShortcutWidget* self) {
    return self->isModifierlessAllowed();
}

void KShortcutWidget_SetClearButtonsShown(KShortcutWidget* self, bool show) {
    self->setClearButtonsShown(show);
}

libqt_list /* of QKeySequence* */ KShortcutWidget_Shortcut(const KShortcutWidget* self) {
    QList<QKeySequence> _ret = self->shortcut();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeySequence** _arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeySequence(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KShortcutWidget_SetCheckActionCollections(KShortcutWidget* self, const libqt_list /* of KActionCollection* */ actionCollections) {
    QList<KActionCollection*> actionCollections_QList;
    actionCollections_QList.reserve(actionCollections.len);
    KActionCollection** actionCollections_arr = static_cast<KActionCollection**>(actionCollections.data);
    for (size_t i = 0; i < actionCollections.len; ++i) {
        actionCollections_QList.push_back(actionCollections_arr[i]);
    }
    self->setCheckActionCollections(actionCollections_QList);
}

void KShortcutWidget_ShortcutChanged(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut) {
    QList<QKeySequence> cut_QList;
    cut_QList.reserve(cut.len);
    QKeySequence** cut_arr = static_cast<QKeySequence**>(cut.data);
    for (size_t i = 0; i < cut.len; ++i) {
        cut_QList.push_back(*(cut_arr[i]));
    }
    self->shortcutChanged(cut_QList);
}

void KShortcutWidget_Connect_ShortcutChanged(KShortcutWidget* self, intptr_t slot) {
    void (*slotFunc)(KShortcutWidget*, QKeySequence**) = reinterpret_cast<void (*)(KShortcutWidget*, QKeySequence**)>(slot);
    KShortcutWidget::connect(self, &KShortcutWidget::shortcutChanged, [self, slotFunc](const QList<QKeySequence>& cut) {
        const QList<QKeySequence>& cut_ret = cut;
        // Convert QList<> from C++ memory to manually-managed C memory
        QKeySequence** cut_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (cut_ret.size() + 1)));
        for (qsizetype i = 0; i < cut_ret.size(); ++i) {
            cut_arr[i] = new QKeySequence(cut_ret[i]);
        }
        // Append sentinel value to the list
        cut_arr[cut_ret.size()] = nullptr;
        QKeySequence** sigval1 = cut_arr;
        slotFunc(self, sigval1);
        free(cut_arr);
    });
}

void KShortcutWidget_SetShortcut(KShortcutWidget* self, const libqt_list /* of QKeySequence* */ cut) {
    QList<QKeySequence> cut_QList;
    cut_QList.reserve(cut.len);
    QKeySequence** cut_arr = static_cast<QKeySequence**>(cut.data);
    for (size_t i = 0; i < cut.len; ++i) {
        cut_QList.push_back(*(cut_arr[i]));
    }
    self->setShortcut(cut_QList);
}

void KShortcutWidget_ClearShortcut(KShortcutWidget* self) {
    self->clearShortcut();
}

void KShortcutWidget_ApplyStealShortcut(KShortcutWidget* self) {
    self->applyStealShortcut();
}

libqt_string KShortcutWidget_Tr2(const char* s, const char* c) {
    QString _ret = KShortcutWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KShortcutWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KShortcutWidget::tr(s, c, static_cast<int>(n));
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
int KShortcutWidget_QBaseMetacall(KShortcutWidget* self, int param1, int param2, void** param3) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Metacall_IsBase(true);
        return vkshortcutwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KShortcutWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetacall(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Metacall_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutWidget_DevType(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->devType();
    } else {
        return self->KShortcutWidget::devType();
    }
}

// Base class handler implementation
int KShortcutWidget_QBaseDevType(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DevType_IsBase(true);
        return vkshortcutwidget->devType();
    } else {
        return self->KShortcutWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDevType(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DevType_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_SetVisible(KShortcutWidget* self, bool visible) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setVisible(visible);
    } else {
        self->KShortcutWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseSetVisible(KShortcutWidget* self, bool visible) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SetVisible_IsBase(true);
        vkshortcutwidget->setVisible(visible);
    } else {
        self->KShortcutWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSetVisible(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SetVisible_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KShortcutWidget_SizeHint(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return new QSize(vkshortcutwidget->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KShortcutWidget_QBaseSizeHint(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SizeHint_IsBase(true);
        return new QSize(vkshortcutwidget->sizeHint());
    } else {
        return new QSize(((VirtualKShortcutWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSizeHint(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SizeHint_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KShortcutWidget_MinimumSizeHint(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return new QSize(vkshortcutwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KShortcutWidget_QBaseMinimumSizeHint(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkshortcutwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKShortcutWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMinimumSizeHint(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutWidget_HeightForWidth(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KShortcutWidget_QBaseHeightForWidth(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HeightForWidth_IsBase(true);
        return vkshortcutwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KShortcutWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHeightForWidth(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_HasHeightForWidth(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->hasHeightForWidth();
    } else {
        return self->KShortcutWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseHasHeightForWidth(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HasHeightForWidth_IsBase(true);
        return vkshortcutwidget->hasHeightForWidth();
    } else {
        return self->KShortcutWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHasHeightForWidth(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KShortcutWidget_PaintEngine(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->paintEngine();
    } else {
        return self->KShortcutWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KShortcutWidget_QBasePaintEngine(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_PaintEngine_IsBase(true);
        return vkshortcutwidget->paintEngine();
    } else {
        return self->KShortcutWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnPaintEngine(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_PaintEngine_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_Event(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->event(event);
    } else {
        return ((VirtualKShortcutWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Event_IsBase(true);
        return vkshortcutwidget->event(event);
    } else {
        return ((VirtualKShortcutWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Event_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_MousePressEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->mousePressEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseMousePressEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MousePressEvent_IsBase(true);
        vkshortcutwidget->mousePressEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMousePressEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_MouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseMouseReleaseEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseReleaseEvent_IsBase(true);
        vkshortcutwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseReleaseEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_MouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseMouseDoubleClickEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseDoubleClickEvent_IsBase(true);
        vkshortcutwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseDoubleClickEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_MouseMoveEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseMouseMoveEvent(KShortcutWidget* self, QMouseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseMoveEvent_IsBase(true);
        vkshortcutwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMouseMoveEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_WheelEvent(KShortcutWidget* self, QWheelEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->wheelEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseWheelEvent(KShortcutWidget* self, QWheelEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_WheelEvent_IsBase(true);
        vkshortcutwidget->wheelEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnWheelEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_WheelEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_KeyPressEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->keyPressEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseKeyPressEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_KeyPressEvent_IsBase(true);
        vkshortcutwidget->keyPressEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnKeyPressEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_KeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseKeyReleaseEvent(KShortcutWidget* self, QKeyEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_KeyReleaseEvent_IsBase(true);
        vkshortcutwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnKeyReleaseEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_FocusInEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->focusInEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseFocusInEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusInEvent_IsBase(true);
        vkshortcutwidget->focusInEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusInEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_FocusOutEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->focusOutEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseFocusOutEvent(KShortcutWidget* self, QFocusEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusOutEvent_IsBase(true);
        vkshortcutwidget->focusOutEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusOutEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_EnterEvent(KShortcutWidget* self, QEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->enterEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseEnterEvent(KShortcutWidget* self, QEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_EnterEvent_IsBase(true);
        vkshortcutwidget->enterEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEnterEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_EnterEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_LeaveEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->leaveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseLeaveEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_LeaveEvent_IsBase(true);
        vkshortcutwidget->leaveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnLeaveEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_PaintEvent(KShortcutWidget* self, QPaintEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->paintEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBasePaintEvent(KShortcutWidget* self, QPaintEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_PaintEvent_IsBase(true);
        vkshortcutwidget->paintEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnPaintEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_PaintEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_MoveEvent(KShortcutWidget* self, QMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->moveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseMoveEvent(KShortcutWidget* self, QMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MoveEvent_IsBase(true);
        vkshortcutwidget->moveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMoveEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_MoveEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ResizeEvent(KShortcutWidget* self, QResizeEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->resizeEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseResizeEvent(KShortcutWidget* self, QResizeEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ResizeEvent_IsBase(true);
        vkshortcutwidget->resizeEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnResizeEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_CloseEvent(KShortcutWidget* self, QCloseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->closeEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseCloseEvent(KShortcutWidget* self, QCloseEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_CloseEvent_IsBase(true);
        vkshortcutwidget->closeEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnCloseEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_CloseEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->contextMenuEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseContextMenuEvent(KShortcutWidget* self, QContextMenuEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ContextMenuEvent_IsBase(true);
        vkshortcutwidget->contextMenuEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnContextMenuEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_TabletEvent(KShortcutWidget* self, QTabletEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->tabletEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseTabletEvent(KShortcutWidget* self, QTabletEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_TabletEvent_IsBase(true);
        vkshortcutwidget->tabletEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnTabletEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_TabletEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ActionEvent(KShortcutWidget* self, QActionEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->actionEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseActionEvent(KShortcutWidget* self, QActionEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ActionEvent_IsBase(true);
        vkshortcutwidget->actionEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnActionEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ActionEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_DragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDragEnterEvent(KShortcutWidget* self, QDragEnterEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragEnterEvent_IsBase(true);
        vkshortcutwidget->dragEnterEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragEnterEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_DragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDragMoveEvent(KShortcutWidget* self, QDragMoveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragMoveEvent_IsBase(true);
        vkshortcutwidget->dragMoveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragMoveEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_DragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDragLeaveEvent(KShortcutWidget* self, QDragLeaveEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragLeaveEvent_IsBase(true);
        vkshortcutwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDragLeaveEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_DropEvent(KShortcutWidget* self, QDropEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->dropEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDropEvent(KShortcutWidget* self, QDropEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DropEvent_IsBase(true);
        vkshortcutwidget->dropEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDropEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DropEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ShowEvent(KShortcutWidget* self, QShowEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->showEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseShowEvent(KShortcutWidget* self, QShowEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ShowEvent_IsBase(true);
        vkshortcutwidget->showEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnShowEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ShowEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_HideEvent(KShortcutWidget* self, QHideEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->hideEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseHideEvent(KShortcutWidget* self, QHideEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HideEvent_IsBase(true);
        vkshortcutwidget->hideEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnHideEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_HideEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_NativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseNativeEvent(KShortcutWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_NativeEvent_IsBase(true);
        return vkshortcutwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKShortcutWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnNativeEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_NativeEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ChangeEvent(KShortcutWidget* self, QEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->changeEvent(param1);
    } else {
        ((VirtualKShortcutWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseChangeEvent(KShortcutWidget* self, QEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ChangeEvent_IsBase(true);
        vkshortcutwidget->changeEvent(param1);
    } else {
        ((VirtualKShortcutWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnChangeEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutWidget_Metric(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KShortcutWidget_QBaseMetric(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Metric_IsBase(true);
        return vkshortcutwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKShortcutWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnMetric(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Metric_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_InitPainter(const KShortcutWidget* self, QPainter* painter) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->initPainter(painter);
    } else {
        ((VirtualKShortcutWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseInitPainter(const KShortcutWidget* self, QPainter* painter) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InitPainter_IsBase(true);
        vkshortcutwidget->initPainter(painter);
    } else {
        ((VirtualKShortcutWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInitPainter(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InitPainter_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KShortcutWidget_Redirected(const KShortcutWidget* self, QPoint* offset) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->redirected(offset);
    } else {
        return ((VirtualKShortcutWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KShortcutWidget_QBaseRedirected(const KShortcutWidget* self, QPoint* offset) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Redirected_IsBase(true);
        return vkshortcutwidget->redirected(offset);
    } else {
        return ((VirtualKShortcutWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnRedirected(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Redirected_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KShortcutWidget_SharedPainter(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->sharedPainter();
    } else {
        return ((VirtualKShortcutWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KShortcutWidget_QBaseSharedPainter(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SharedPainter_IsBase(true);
        return vkshortcutwidget->sharedPainter();
    } else {
        return ((VirtualKShortcutWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSharedPainter(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SharedPainter_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_InputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseInputMethodEvent(KShortcutWidget* self, QInputMethodEvent* param1) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InputMethodEvent_IsBase(true);
        vkshortcutwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKShortcutWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInputMethodEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KShortcutWidget_InputMethodQuery(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return new QVariant(vkshortcutwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KShortcutWidget_QBaseInputMethodQuery(const KShortcutWidget* self, int param1) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkshortcutwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKShortcutWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnInputMethodQuery(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_FocusNextPrevChild(KShortcutWidget* self, bool next) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseFocusNextPrevChild(KShortcutWidget* self, bool next) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusNextPrevChild_IsBase(true);
        return vkshortcutwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKShortcutWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusNextPrevChild(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_EventFilter(KShortcutWidget* self, QObject* watched, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->eventFilter(watched, event);
    } else {
        return self->KShortcutWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseEventFilter(KShortcutWidget* self, QObject* watched, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_EventFilter_IsBase(true);
        return vkshortcutwidget->eventFilter(watched, event);
    } else {
        return self->KShortcutWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnEventFilter(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_EventFilter_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_TimerEvent(KShortcutWidget* self, QTimerEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->timerEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseTimerEvent(KShortcutWidget* self, QTimerEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_TimerEvent_IsBase(true);
        vkshortcutwidget->timerEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnTimerEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_TimerEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ChildEvent(KShortcutWidget* self, QChildEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->childEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseChildEvent(KShortcutWidget* self, QChildEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ChildEvent_IsBase(true);
        vkshortcutwidget->childEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnChildEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ChildEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_CustomEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->customEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseCustomEvent(KShortcutWidget* self, QEvent* event) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_CustomEvent_IsBase(true);
        vkshortcutwidget->customEvent(event);
    } else {
        ((VirtualKShortcutWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnCustomEvent(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_CustomEvent_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_ConnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->connectNotify(*signal);
    } else {
        ((VirtualKShortcutWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseConnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ConnectNotify_IsBase(true);
        vkshortcutwidget->connectNotify(*signal);
    } else {
        ((VirtualKShortcutWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnConnectNotify(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_DisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDisconnectNotify(KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DisconnectNotify_IsBase(true);
        vkshortcutwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKShortcutWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDisconnectNotify(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_UpdateMicroFocus(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->updateMicroFocus();
    } else {
        ((VirtualKShortcutWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseUpdateMicroFocus(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_UpdateMicroFocus_IsBase(true);
        vkshortcutwidget->updateMicroFocus();
    } else {
        ((VirtualKShortcutWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnUpdateMicroFocus(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_Create(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->create();
    } else {
        ((VirtualKShortcutWidget*)self)->create();
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseCreate(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Create_IsBase(true);
        vkshortcutwidget->create();
    } else {
        ((VirtualKShortcutWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnCreate(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Create_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KShortcutWidget_Destroy(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->destroy();
    } else {
        ((VirtualKShortcutWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KShortcutWidget_QBaseDestroy(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Destroy_IsBase(true);
        vkshortcutwidget->destroy();
    } else {
        ((VirtualKShortcutWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnDestroy(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Destroy_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_FocusNextChild(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->focusNextChild();
    } else {
        return ((VirtualKShortcutWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseFocusNextChild(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusNextChild_IsBase(true);
        return vkshortcutwidget->focusNextChild();
    } else {
        return ((VirtualKShortcutWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusNextChild(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_FocusPreviousChild(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->focusPreviousChild();
    } else {
        return ((VirtualKShortcutWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseFocusPreviousChild(KShortcutWidget* self) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusPreviousChild_IsBase(true);
        return vkshortcutwidget->focusPreviousChild();
    } else {
        return ((VirtualKShortcutWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnFocusPreviousChild(KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = dynamic_cast<VirtualKShortcutWidget*>(self);
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KShortcutWidget_Sender(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->sender();
    } else {
        return ((VirtualKShortcutWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KShortcutWidget_QBaseSender(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Sender_IsBase(true);
        return vkshortcutwidget->sender();
    } else {
        return ((VirtualKShortcutWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSender(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Sender_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutWidget_SenderSignalIndex(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->senderSignalIndex();
    } else {
        return ((VirtualKShortcutWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KShortcutWidget_QBaseSenderSignalIndex(const KShortcutWidget* self) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SenderSignalIndex_IsBase(true);
        return vkshortcutwidget->senderSignalIndex();
    } else {
        return ((VirtualKShortcutWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnSenderSignalIndex(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KShortcutWidget_Receivers(const KShortcutWidget* self, const char* signal) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->receivers(signal);
    } else {
        return ((VirtualKShortcutWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KShortcutWidget_QBaseReceivers(const KShortcutWidget* self, const char* signal) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Receivers_IsBase(true);
        return vkshortcutwidget->receivers(signal);
    } else {
        return ((VirtualKShortcutWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnReceivers(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_Receivers_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KShortcutWidget_IsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KShortcutWidget_QBaseIsSignalConnected(const KShortcutWidget* self, const QMetaMethod* signal) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_IsSignalConnected_IsBase(true);
        return vkshortcutwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKShortcutWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnIsSignalConnected(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KShortcutWidget_GetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        return vkshortcutwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KShortcutWidget_QBaseGetDecodedMetricF(const KShortcutWidget* self, int metricA, int metricB) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_GetDecodedMetricF_IsBase(true);
        return vkshortcutwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKShortcutWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KShortcutWidget_OnGetDecodedMetricF(const KShortcutWidget* self, intptr_t slot) {
    auto* vkshortcutwidget = const_cast<VirtualKShortcutWidget*>(dynamic_cast<const VirtualKShortcutWidget*>(self));
    if (vkshortcutwidget && vkshortcutwidget->isVirtualKShortcutWidget) {
        vkshortcutwidget->setKShortcutWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKShortcutWidget::KShortcutWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KShortcutWidget_Delete(KShortcutWidget* self) {
    delete self;
}
