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
#include <QFrame>
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
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qsplitter.h>
#include "libqsplitter.h"
#include "libqsplitter.hxx"

QSplitter* QSplitter_new(QWidget* parent) {
    return new VirtualQSplitter(parent);
}

QSplitter* QSplitter_new2() {
    return new VirtualQSplitter();
}

QSplitter* QSplitter_new3(int param1) {
    return new VirtualQSplitter(static_cast<Qt::Orientation>(param1));
}

QSplitter* QSplitter_new4(int param1, QWidget* parent) {
    return new VirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
}

QMetaObject* QSplitter_MetaObject(const QSplitter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplitter_Metacast(QSplitter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplitter_Metacall(QSplitter* self, int param1, int param2, void** param3) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplitter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplitter_OnMetacall(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Metacall_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplitter_QBaseMetacall(QSplitter* self, int param1, int param2, void** param3) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Metacall_IsBase(true);
        return vqsplitter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplitter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplitter_Tr(const char* s) {
    QString _ret = QSplitter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplitter_AddWidget(QSplitter* self, QWidget* widget) {
    self->addWidget(widget);
}

void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget) {
    self->insertWidget(static_cast<int>(index), widget);
}

QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget) {
    return self->replaceWidget(static_cast<int>(index), widget);
}

void QSplitter_SetOrientation(QSplitter* self, int orientation) {
    self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_Orientation(const QSplitter* self) {
    return static_cast<int>(self->orientation());
}

void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
    self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_ChildrenCollapsible(const QSplitter* self) {
    return self->childrenCollapsible();
}

void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2) {
    self->setCollapsible(static_cast<int>(index), param2);
}

bool QSplitter_IsCollapsible(const QSplitter* self, int index) {
    return self->isCollapsible(static_cast<int>(index));
}

void QSplitter_SetOpaqueResize(QSplitter* self) {
    self->setOpaqueResize();
}

bool QSplitter_OpaqueResize(const QSplitter* self) {
    return self->opaqueResize();
}

void QSplitter_Refresh(QSplitter* self) {
    self->refresh();
}

libqt_list /* of int */ QSplitter_Sizes(const QSplitter* self) {
    QList<int> _ret = self->sizes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QSplitter_SetSizes(QSplitter* self, const libqt_list /* of int */ list) {
    QList<int> list_QList;
    list_QList.reserve(list.len);
    int* list_arr = static_cast<int*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        list_QList.push_back(static_cast<int>(list_arr[i]));
    }
    self->setSizes(list_QList);
}

libqt_string QSplitter_SaveState(const QSplitter* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QSplitter_RestoreState(QSplitter* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

int QSplitter_HandleWidth(const QSplitter* self) {
    return self->handleWidth();
}

void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth) {
    self->setHandleWidth(static_cast<int>(handleWidth));
}

int QSplitter_IndexOf(const QSplitter* self, QWidget* w) {
    return self->indexOf(w);
}

QWidget* QSplitter_Widget(const QSplitter* self, int index) {
    return self->widget(static_cast<int>(index));
}

int QSplitter_Count(const QSplitter* self) {
    return self->count();
}

void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3) {
    self->getRange(static_cast<int>(index), static_cast<int*>(param2), static_cast<int*>(param3));
}

QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index) {
    return self->handle(static_cast<int>(index));
}

void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch) {
    self->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

void QSplitter_SplitterMoved(QSplitter* self, int pos, int index) {
    self->splitterMoved(static_cast<int>(pos), static_cast<int>(index));
}

void QSplitter_Connect_SplitterMoved(QSplitter* self, intptr_t slot) {
    void (*slotFunc)(QSplitter*, int, int) = reinterpret_cast<void (*)(QSplitter*, int, int)>(slot);
    QSplitter::connect(self, &QSplitter::splitterMoved, [self, slotFunc](int pos, int index) {
        int sigval1 = pos;
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

libqt_string QSplitter_Tr2(const char* s, const char* c) {
    QString _ret = QSplitter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplitter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaqueVal) {
    self->setOpaqueResize(opaqueVal);
}

// Derived class handler implementation
QSize* QSplitter_SizeHint(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return new QSize(vqsplitter->sizeHint());
    } else {
        return new QSize(((VirtualQSplitter*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QSplitter_QBaseSizeHint(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SizeHint_IsBase(true);
        return new QSize(vqsplitter->sizeHint());
    } else {
        return new QSize(((VirtualQSplitter*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSizeHint(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return new QSize(vqsplitter->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSplitter*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSplitter_QBaseMinimumSizeHint(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MinimumSizeHint_IsBase(true);
        return new QSize(vqsplitter->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSplitter*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMinimumSizeHint(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSplitterHandle* QSplitter_CreateHandle(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->createHandle();
    } else {
        return ((VirtualQSplitter*)self)->createHandle();
    }
}

// Base class handler implementation
QSplitterHandle* QSplitter_QBaseCreateHandle(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CreateHandle_IsBase(true);
        return vqsplitter->createHandle();
    } else {
        return ((VirtualQSplitter*)self)->createHandle();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreateHandle(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CreateHandle_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CreateHandle_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->childEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->childEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseChildEvent(QSplitter* self, QChildEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ChildEvent_IsBase(true);
        vqsplitter->childEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->childEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChildEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ChildEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_Event(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->event(param1);
    } else {
        return ((VirtualQSplitter*)self)->event(param1);
    }
}

// Base class handler implementation
bool QSplitter_QBaseEvent(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Event_IsBase(true);
        return vqsplitter->event(param1);
    } else {
        return ((VirtualQSplitter*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Event_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->resizeEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseResizeEvent(QSplitter* self, QResizeEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ResizeEvent_IsBase(true);
        vqsplitter->resizeEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnResizeEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->changeEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseChangeEvent(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ChangeEvent_IsBase(true);
        vqsplitter->changeEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChangeEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ChangeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_PaintEvent(QSplitter* self, QPaintEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->paintEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBasePaintEvent(QSplitter* self, QPaintEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_PaintEvent_IsBase(true);
        vqsplitter->paintEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_PaintEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->initStyleOption(option);
    } else {
        ((VirtualQSplitter*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QSplitter_QBaseInitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InitStyleOption_IsBase(true);
        vqsplitter->initStyleOption(option);
    } else {
        ((VirtualQSplitter*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitStyleOption(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InitStyleOption_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_DevType(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->devType();
    } else {
        return self->QSplitter::devType();
    }
}

// Base class handler implementation
int QSplitter_QBaseDevType(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DevType_IsBase(true);
        return vqsplitter->devType();
    } else {
        return self->QSplitter::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDevType(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DevType_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_SetVisible(QSplitter* self, bool visible) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setVisible(visible);
    } else {
        self->QSplitter::setVisible(visible);
    }
}

// Base class handler implementation
void QSplitter_QBaseSetVisible(QSplitter* self, bool visible) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SetVisible_IsBase(true);
        vqsplitter->setVisible(visible);
    } else {
        self->QSplitter::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetVisible(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SetVisible_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_HeightForWidth(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSplitter::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSplitter_QBaseHeightForWidth(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HeightForWidth_IsBase(true);
        return vqsplitter->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSplitter::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHeightForWidth(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HeightForWidth_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_HasHeightForWidth(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->hasHeightForWidth();
    } else {
        return self->QSplitter::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSplitter_QBaseHasHeightForWidth(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HasHeightForWidth_IsBase(true);
        return vqsplitter->hasHeightForWidth();
    } else {
        return self->QSplitter::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHasHeightForWidth(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSplitter_PaintEngine(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->paintEngine();
    } else {
        return self->QSplitter::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSplitter_QBasePaintEngine(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_PaintEngine_IsBase(true);
        return vqsplitter->paintEngine();
    } else {
        return self->QSplitter::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEngine(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_PaintEngine_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MousePressEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->mousePressEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMousePressEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MousePressEvent_IsBase(true);
        vqsplitter->mousePressEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMousePressEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MousePressEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->mouseReleaseEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseReleaseEvent_IsBase(true);
        vqsplitter->mouseReleaseEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseReleaseEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseDoubleClickEvent_IsBase(true);
        vqsplitter->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseDoubleClickEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->mouseMoveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseMoveEvent_IsBase(true);
        vqsplitter->mouseMoveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseMoveEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_WheelEvent(QSplitter* self, QWheelEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->wheelEvent(event);
    } else {
        ((VirtualQSplitter*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseWheelEvent(QSplitter* self, QWheelEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_WheelEvent_IsBase(true);
        vqsplitter->wheelEvent(event);
    } else {
        ((VirtualQSplitter*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnWheelEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_WheelEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_KeyPressEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->keyPressEvent(event);
    } else {
        ((VirtualQSplitter*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseKeyPressEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_KeyPressEvent_IsBase(true);
        vqsplitter->keyPressEvent(event);
    } else {
        ((VirtualQSplitter*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyPressEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_KeyPressEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_KeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->keyReleaseEvent(event);
    } else {
        ((VirtualQSplitter*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseKeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_KeyReleaseEvent_IsBase(true);
        vqsplitter->keyReleaseEvent(event);
    } else {
        ((VirtualQSplitter*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyReleaseEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_FocusInEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->focusInEvent(event);
    } else {
        ((VirtualQSplitter*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseFocusInEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusInEvent_IsBase(true);
        vqsplitter->focusInEvent(event);
    } else {
        ((VirtualQSplitter*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusInEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusInEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_FocusOutEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->focusOutEvent(event);
    } else {
        ((VirtualQSplitter*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseFocusOutEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusOutEvent_IsBase(true);
        vqsplitter->focusOutEvent(event);
    } else {
        ((VirtualQSplitter*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusOutEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusOutEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_EnterEvent(QSplitter* self, QEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->enterEvent(event);
    } else {
        ((VirtualQSplitter*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseEnterEvent(QSplitter* self, QEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_EnterEvent_IsBase(true);
        vqsplitter->enterEvent(event);
    } else {
        ((VirtualQSplitter*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEnterEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_EnterEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_LeaveEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->leaveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseLeaveEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_LeaveEvent_IsBase(true);
        vqsplitter->leaveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnLeaveEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_LeaveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MoveEvent(QSplitter* self, QMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->moveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseMoveEvent(QSplitter* self, QMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MoveEvent_IsBase(true);
        vqsplitter->moveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_CloseEvent(QSplitter* self, QCloseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->closeEvent(event);
    } else {
        ((VirtualQSplitter*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseCloseEvent(QSplitter* self, QCloseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CloseEvent_IsBase(true);
        vqsplitter->closeEvent(event);
    } else {
        ((VirtualQSplitter*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCloseEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CloseEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->contextMenuEvent(event);
    } else {
        ((VirtualQSplitter*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ContextMenuEvent_IsBase(true);
        vqsplitter->contextMenuEvent(event);
    } else {
        ((VirtualQSplitter*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnContextMenuEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_TabletEvent(QSplitter* self, QTabletEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->tabletEvent(event);
    } else {
        ((VirtualQSplitter*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseTabletEvent(QSplitter* self, QTabletEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_TabletEvent_IsBase(true);
        vqsplitter->tabletEvent(event);
    } else {
        ((VirtualQSplitter*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTabletEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_TabletEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ActionEvent(QSplitter* self, QActionEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->actionEvent(event);
    } else {
        ((VirtualQSplitter*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseActionEvent(QSplitter* self, QActionEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ActionEvent_IsBase(true);
        vqsplitter->actionEvent(event);
    } else {
        ((VirtualQSplitter*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnActionEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ActionEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->dragEnterEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragEnterEvent_IsBase(true);
        vqsplitter->dragEnterEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragEnterEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragEnterEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->dragMoveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragMoveEvent_IsBase(true);
        vqsplitter->dragMoveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragMoveEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragMoveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->dragLeaveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragLeaveEvent_IsBase(true);
        vqsplitter->dragLeaveEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragLeaveEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DropEvent(QSplitter* self, QDropEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->dropEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseDropEvent(QSplitter* self, QDropEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DropEvent_IsBase(true);
        vqsplitter->dropEvent(event);
    } else {
        ((VirtualQSplitter*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDropEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DropEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ShowEvent(QSplitter* self, QShowEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->showEvent(event);
    } else {
        ((VirtualQSplitter*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseShowEvent(QSplitter* self, QShowEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ShowEvent_IsBase(true);
        vqsplitter->showEvent(event);
    } else {
        ((VirtualQSplitter*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnShowEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ShowEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_HideEvent(QSplitter* self, QHideEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->hideEvent(event);
    } else {
        ((VirtualQSplitter*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseHideEvent(QSplitter* self, QHideEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HideEvent_IsBase(true);
        vqsplitter->hideEvent(event);
    } else {
        ((VirtualQSplitter*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHideEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_HideEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_NativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSplitter*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSplitter_QBaseNativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_NativeEvent_IsBase(true);
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSplitter*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnNativeEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_NativeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_Metric(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSplitter*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSplitter_QBaseMetric(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Metric_IsBase(true);
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSplitter*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetric(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Metric_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InitPainter(const QSplitter* self, QPainter* painter) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->initPainter(painter);
    } else {
        ((VirtualQSplitter*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSplitter_QBaseInitPainter(const QSplitter* self, QPainter* painter) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InitPainter_IsBase(true);
        vqsplitter->initPainter(painter);
    } else {
        ((VirtualQSplitter*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitPainter(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InitPainter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSplitter_Redirected(const QSplitter* self, QPoint* offset) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->redirected(offset);
    } else {
        return ((VirtualQSplitter*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSplitter_QBaseRedirected(const QSplitter* self, QPoint* offset) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Redirected_IsBase(true);
        return vqsplitter->redirected(offset);
    } else {
        return ((VirtualQSplitter*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnRedirected(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Redirected_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSplitter_SharedPainter(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->sharedPainter();
    } else {
        return ((VirtualQSplitter*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSplitter_QBaseSharedPainter(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SharedPainter_IsBase(true);
        return vqsplitter->sharedPainter();
    } else {
        return ((VirtualQSplitter*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSharedPainter(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SharedPainter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_InputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->inputMethodEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseInputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InputMethodEvent_IsBase(true);
        vqsplitter->inputMethodEvent(param1);
    } else {
        ((VirtualQSplitter*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InputMethodEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSplitter_InputMethodQuery(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return new QVariant(vqsplitter->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSplitter*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSplitter_QBaseInputMethodQuery(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InputMethodQuery_IsBase(true);
        return new QVariant(vqsplitter->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSplitter*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodQuery(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_InputMethodQuery_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusNextPrevChild(QSplitter* self, bool next) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->focusNextPrevChild(next);
    } else {
        return ((VirtualQSplitter*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusNextPrevChild(QSplitter* self, bool next) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusNextPrevChild_IsBase(true);
        return vqsplitter->focusNextPrevChild(next);
    } else {
        return ((VirtualQSplitter*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusNextPrevChild(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_EventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->eventFilter(watched, event);
    } else {
        return self->QSplitter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplitter_QBaseEventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_EventFilter_IsBase(true);
        return vqsplitter->eventFilter(watched, event);
    } else {
        return self->QSplitter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEventFilter(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_EventFilter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_TimerEvent(QSplitter* self, QTimerEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->timerEvent(event);
    } else {
        ((VirtualQSplitter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseTimerEvent(QSplitter* self, QTimerEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_TimerEvent_IsBase(true);
        vqsplitter->timerEvent(event);
    } else {
        ((VirtualQSplitter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTimerEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_TimerEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_CustomEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->customEvent(event);
    } else {
        ((VirtualQSplitter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSplitter_QBaseCustomEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CustomEvent_IsBase(true);
        vqsplitter->customEvent(event);
    } else {
        ((VirtualQSplitter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCustomEvent(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_CustomEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_ConnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->connectNotify(*signal);
    } else {
        ((VirtualQSplitter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitter_QBaseConnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ConnectNotify_IsBase(true);
        vqsplitter->connectNotify(*signal);
    } else {
        ((VirtualQSplitter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnConnectNotify(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ConnectNotify_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DisconnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->disconnectNotify(*signal);
    } else {
        ((VirtualQSplitter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitter_QBaseDisconnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DisconnectNotify_IsBase(true);
        vqsplitter->disconnectNotify(*signal);
    } else {
        ((VirtualQSplitter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDisconnectNotify(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_MoveSplitter(QSplitter* self, int pos, int index) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    } else {
        ((VirtualQSplitter*)self)->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    }
}

// Base class handler implementation
void QSplitter_QBaseMoveSplitter(QSplitter* self, int pos, int index) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MoveSplitter_IsBase(true);
        vqsplitter->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    } else {
        ((VirtualQSplitter*)self)->moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveSplitter(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MoveSplitter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_SetRubberBand(QSplitter* self, int position) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setRubberBand(static_cast<int>(position));
    } else {
        ((VirtualQSplitter*)self)->setRubberBand(static_cast<int>(position));
    }
}

// Base class handler implementation
void QSplitter_QBaseSetRubberBand(QSplitter* self, int position) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SetRubberBand_IsBase(true);
        vqsplitter->setRubberBand(static_cast<int>(position));
    } else {
        ((VirtualQSplitter*)self)->setRubberBand(static_cast<int>(position));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetRubberBand(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SetRubberBand_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SetRubberBand_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    } else {
        return ((VirtualQSplitter*)self)->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    }
}

// Base class handler implementation
int QSplitter_QBaseClosestLegalPosition(QSplitter* self, int param1, int param2) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ClosestLegalPosition_IsBase(true);
        return vqsplitter->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    } else {
        return ((VirtualQSplitter*)self)->closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnClosestLegalPosition(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ClosestLegalPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_DrawFrame(QSplitter* self, QPainter* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->drawFrame(param1);
    } else {
        ((VirtualQSplitter*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QSplitter_QBaseDrawFrame(QSplitter* self, QPainter* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DrawFrame_IsBase(true);
        vqsplitter->drawFrame(param1);
    } else {
        ((VirtualQSplitter*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDrawFrame(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_DrawFrame_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_UpdateMicroFocus(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->updateMicroFocus();
    } else {
        ((VirtualQSplitter*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSplitter_QBaseUpdateMicroFocus(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_UpdateMicroFocus_IsBase(true);
        vqsplitter->updateMicroFocus();
    } else {
        ((VirtualQSplitter*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnUpdateMicroFocus(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_Create(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->create();
    } else {
        ((VirtualQSplitter*)self)->create();
    }
}

// Base class handler implementation
void QSplitter_QBaseCreate(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Create_IsBase(true);
        vqsplitter->create();
    } else {
        ((VirtualQSplitter*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreate(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Create_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitter_Destroy(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->destroy();
    } else {
        ((VirtualQSplitter*)self)->destroy();
    }
}

// Base class handler implementation
void QSplitter_QBaseDestroy(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Destroy_IsBase(true);
        vqsplitter->destroy();
    } else {
        ((VirtualQSplitter*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDestroy(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Destroy_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusNextChild(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->focusNextChild();
    } else {
        return ((VirtualQSplitter*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusNextChild(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusNextChild_IsBase(true);
        return vqsplitter->focusNextChild();
    } else {
        return ((VirtualQSplitter*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusNextChild(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusNextChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_FocusPreviousChild(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->focusPreviousChild();
    } else {
        return ((VirtualQSplitter*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSplitter_QBaseFocusPreviousChild(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusPreviousChild_IsBase(true);
        return vqsplitter->focusPreviousChild();
    } else {
        return ((VirtualQSplitter*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusPreviousChild(QSplitter* self, intptr_t slot) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplitter_Sender(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->sender();
    } else {
        return ((VirtualQSplitter*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSplitter_QBaseSender(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Sender_IsBase(true);
        return vqsplitter->sender();
    } else {
        return ((VirtualQSplitter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSender(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Sender_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_SenderSignalIndex(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->senderSignalIndex();
    } else {
        return ((VirtualQSplitter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplitter_QBaseSenderSignalIndex(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SenderSignalIndex_IsBase(true);
        return vqsplitter->senderSignalIndex();
    } else {
        return ((VirtualQSplitter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSenderSignalIndex(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitter_Receivers(const QSplitter* self, const char* signal) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->receivers(signal);
    } else {
        return ((VirtualQSplitter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSplitter_QBaseReceivers(const QSplitter* self, const char* signal) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Receivers_IsBase(true);
        return vqsplitter->receivers(signal);
    } else {
        return ((VirtualQSplitter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnReceivers(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_Receivers_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitter_IsSignalConnected(const QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplitter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplitter_QBaseIsSignalConnected(const QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_IsSignalConnected_IsBase(true);
        return vqsplitter->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplitter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnIsSignalConnected(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSplitter_GetDecodedMetricF(const QSplitter* self, int metricA, int metricB) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        return vqsplitter->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSplitter*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSplitter_QBaseGetDecodedMetricF(const QSplitter* self, int metricA, int metricB) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_GetDecodedMetricF_IsBase(true);
        return vqsplitter->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSplitter*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnGetDecodedMetricF(const QSplitter* self, intptr_t slot) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter && vqsplitter->isVirtualQSplitter) {
        vqsplitter->setQSplitter_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_GetDecodedMetricF_Callback>(slot));
    }
}

void QSplitter_Delete(QSplitter* self) {
    delete self;
}

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent) {
    return new VirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
}

QMetaObject* QSplitterHandle_MetaObject(const QSplitterHandle* self) {
    return (QMetaObject*)self->metaObject();
}

void* QSplitterHandle_Metacast(QSplitterHandle* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QSplitterHandle_Metacall(QSplitterHandle* self, int param1, int param2, void** param3) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplitterHandle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QSplitterHandle_OnMetacall(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Metacall_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QSplitterHandle_QBaseMetacall(QSplitterHandle* self, int param1, int param2, void** param3) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Metacall_IsBase(true);
        return vqsplitterhandle->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQSplitterHandle*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QSplitterHandle_Tr(const char* s) {
    QString _ret = QSplitterHandle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o) {
    self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_Orientation(const QSplitterHandle* self) {
    return static_cast<int>(self->orientation());
}

bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self) {
    return self->opaqueResize();
}

QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self) {
    return self->splitter();
}

libqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
    QString _ret = QSplitterHandle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
    QString _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return new QSize(vqsplitterhandle->sizeHint());
    } else {
        return new QSize(((VirtualQSplitterHandle*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QSplitterHandle_QBaseSizeHint(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SizeHint_IsBase(true);
        return new QSize(vqsplitterhandle->sizeHint());
    } else {
        return new QSize(((VirtualQSplitterHandle*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSizeHint(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SizeHint_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->paintEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->paintEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBasePaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_PaintEvent_IsBase(true);
        vqsplitterhandle->paintEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->paintEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_PaintEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->mouseMoveEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseMoveEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_IsBase(true);
        vqsplitterhandle->mouseMoveEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseMoveEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseMoveEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->mousePressEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mousePressEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MousePressEvent_IsBase(true);
        vqsplitterhandle->mousePressEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mousePressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMousePressEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MousePressEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->mouseReleaseEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseReleaseEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_IsBase(true);
        vqsplitterhandle->mouseReleaseEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseReleaseEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->resizeEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ResizeEvent_IsBase(true);
        vqsplitterhandle->resizeEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnResizeEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->event(param1);
    } else {
        return ((VirtualQSplitterHandle*)self)->event(param1);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseEvent(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Event_IsBase(true);
        return vqsplitterhandle->event(param1);
    } else {
        return ((VirtualQSplitterHandle*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Event_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Event_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_DevType(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->devType();
    } else {
        return self->QSplitterHandle::devType();
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseDevType(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DevType_IsBase(true);
        return vqsplitterhandle->devType();
    } else {
        return self->QSplitterHandle::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDevType(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DevType_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_SetVisible(QSplitterHandle* self, bool visible) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setVisible(visible);
    } else {
        self->QSplitterHandle::setVisible(visible);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseSetVisible(QSplitterHandle* self, bool visible) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SetVisible_IsBase(true);
        vqsplitterhandle->setVisible(visible);
    } else {
        self->QSplitterHandle::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSetVisible(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SetVisible_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QSplitterHandle_MinimumSizeHint(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return new QSize(vqsplitterhandle->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSplitterHandle*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QSplitterHandle_QBaseMinimumSizeHint(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MinimumSizeHint_IsBase(true);
        return new QSize(vqsplitterhandle->minimumSizeHint());
    } else {
        return new QSize(((VirtualQSplitterHandle*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMinimumSizeHint(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_HeightForWidth(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSplitterHandle::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseHeightForWidth(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HeightForWidth_IsBase(true);
        return vqsplitterhandle->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QSplitterHandle::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHeightForWidth(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HeightForWidth_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_HasHeightForWidth(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->hasHeightForWidth();
    } else {
        return self->QSplitterHandle::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseHasHeightForWidth(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HasHeightForWidth_IsBase(true);
        return vqsplitterhandle->hasHeightForWidth();
    } else {
        return self->QSplitterHandle::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHasHeightForWidth(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HasHeightForWidth_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QSplitterHandle_PaintEngine(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->paintEngine();
    } else {
        return self->QSplitterHandle::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QSplitterHandle_QBasePaintEngine(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_PaintEngine_IsBase(true);
        return vqsplitterhandle->paintEngine();
    } else {
        return self->QSplitterHandle::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEngine(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_PaintEngine_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseDoubleClickEvent_IsBase(true);
        vqsplitterhandle->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseDoubleClickEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_WheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->wheelEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseWheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_WheelEvent_IsBase(true);
        vqsplitterhandle->wheelEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnWheelEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_WheelEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_KeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->keyPressEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseKeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_KeyPressEvent_IsBase(true);
        vqsplitterhandle->keyPressEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyPressEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_KeyPressEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_KeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->keyReleaseEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseKeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_KeyReleaseEvent_IsBase(true);
        vqsplitterhandle->keyReleaseEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_FocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->focusInEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseFocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusInEvent_IsBase(true);
        vqsplitterhandle->focusInEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusInEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusInEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_FocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->focusOutEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseFocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusOutEvent_IsBase(true);
        vqsplitterhandle->focusOutEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusOutEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusOutEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_EnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->enterEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseEnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_EnterEvent_IsBase(true);
        vqsplitterhandle->enterEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEnterEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_EnterEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_LeaveEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->leaveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseLeaveEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_LeaveEvent_IsBase(true);
        vqsplitterhandle->leaveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_LeaveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->moveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MoveEvent_IsBase(true);
        vqsplitterhandle->moveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_CloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->closeEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_CloseEvent_IsBase(true);
        vqsplitterhandle->closeEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCloseEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_CloseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->contextMenuEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ContextMenuEvent_IsBase(true);
        vqsplitterhandle->contextMenuEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnContextMenuEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ContextMenuEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_TabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->tabletEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseTabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_TabletEvent_IsBase(true);
        vqsplitterhandle->tabletEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTabletEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_TabletEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ActionEvent(QSplitterHandle* self, QActionEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->actionEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseActionEvent(QSplitterHandle* self, QActionEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ActionEvent_IsBase(true);
        vqsplitterhandle->actionEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnActionEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ActionEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->dragEnterEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragEnterEvent_IsBase(true);
        vqsplitterhandle->dragEnterEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragEnterEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragEnterEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->dragMoveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragMoveEvent_IsBase(true);
        vqsplitterhandle->dragMoveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragMoveEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragMoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->dragLeaveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragLeaveEvent_IsBase(true);
        vqsplitterhandle->dragLeaveEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DragLeaveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DropEvent(QSplitterHandle* self, QDropEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->dropEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDropEvent(QSplitterHandle* self, QDropEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DropEvent_IsBase(true);
        vqsplitterhandle->dropEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDropEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DropEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ShowEvent(QSplitterHandle* self, QShowEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->showEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseShowEvent(QSplitterHandle* self, QShowEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ShowEvent_IsBase(true);
        vqsplitterhandle->showEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnShowEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ShowEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_HideEvent(QSplitterHandle* self, QHideEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->hideEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseHideEvent(QSplitterHandle* self, QHideEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HideEvent_IsBase(true);
        vqsplitterhandle->hideEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHideEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_HideEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_NativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSplitterHandle*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseNativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_NativeEvent_IsBase(true);
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQSplitterHandle*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnNativeEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_NativeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ChangeEvent(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->changeEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseChangeEvent(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ChangeEvent_IsBase(true);
        vqsplitterhandle->changeEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChangeEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ChangeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_Metric(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSplitterHandle*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseMetric(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Metric_IsBase(true);
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQSplitterHandle*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetric(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Metric_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_InitPainter(const QSplitterHandle* self, QPainter* painter) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->initPainter(painter);
    } else {
        ((VirtualQSplitterHandle*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseInitPainter(const QSplitterHandle* self, QPainter* painter) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InitPainter_IsBase(true);
        vqsplitterhandle->initPainter(painter);
    } else {
        ((VirtualQSplitterHandle*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInitPainter(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InitPainter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QSplitterHandle_Redirected(const QSplitterHandle* self, QPoint* offset) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->redirected(offset);
    } else {
        return ((VirtualQSplitterHandle*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QSplitterHandle_QBaseRedirected(const QSplitterHandle* self, QPoint* offset) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Redirected_IsBase(true);
        return vqsplitterhandle->redirected(offset);
    } else {
        return ((VirtualQSplitterHandle*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnRedirected(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Redirected_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QSplitterHandle_SharedPainter(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->sharedPainter();
    } else {
        return ((VirtualQSplitterHandle*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QSplitterHandle_QBaseSharedPainter(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SharedPainter_IsBase(true);
        return vqsplitterhandle->sharedPainter();
    } else {
        return ((VirtualQSplitterHandle*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSharedPainter(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SharedPainter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_InputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->inputMethodEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseInputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InputMethodEvent_IsBase(true);
        vqsplitterhandle->inputMethodEvent(param1);
    } else {
        ((VirtualQSplitterHandle*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InputMethodEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QSplitterHandle_InputMethodQuery(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return new QVariant(vqsplitterhandle->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSplitterHandle*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QSplitterHandle_QBaseInputMethodQuery(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InputMethodQuery_IsBase(true);
        return new QVariant(vqsplitterhandle->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQSplitterHandle*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodQuery(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_InputMethodQuery_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusNextPrevChild(QSplitterHandle* self, bool next) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->focusNextPrevChild(next);
    } else {
        return ((VirtualQSplitterHandle*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusNextPrevChild(QSplitterHandle* self, bool next) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusNextPrevChild_IsBase(true);
        return vqsplitterhandle->focusNextPrevChild(next);
    } else {
        return ((VirtualQSplitterHandle*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusNextPrevChild(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_EventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->eventFilter(watched, event);
    } else {
        return self->QSplitterHandle::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseEventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_EventFilter_IsBase(true);
        return vqsplitterhandle->eventFilter(watched, event);
    } else {
        return self->QSplitterHandle::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEventFilter(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_EventFilter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_TimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->timerEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseTimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_TimerEvent_IsBase(true);
        vqsplitterhandle->timerEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTimerEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_TimerEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ChildEvent(QSplitterHandle* self, QChildEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->childEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseChildEvent(QSplitterHandle* self, QChildEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ChildEvent_IsBase(true);
        vqsplitterhandle->childEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChildEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ChildEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_CustomEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->customEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCustomEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_CustomEvent_IsBase(true);
        vqsplitterhandle->customEvent(event);
    } else {
        ((VirtualQSplitterHandle*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCustomEvent(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_CustomEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_ConnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->connectNotify(*signal);
    } else {
        ((VirtualQSplitterHandle*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseConnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ConnectNotify_IsBase(true);
        vqsplitterhandle->connectNotify(*signal);
    } else {
        ((VirtualQSplitterHandle*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnConnectNotify(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ConnectNotify_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_DisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->disconnectNotify(*signal);
    } else {
        ((VirtualQSplitterHandle*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DisconnectNotify_IsBase(true);
        vqsplitterhandle->disconnectNotify(*signal);
    } else {
        ((VirtualQSplitterHandle*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDisconnectNotify(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_DisconnectNotify_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    } else {
        ((VirtualQSplitterHandle*)self)->moveSplitter(static_cast<int>(p));
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseMoveSplitter(QSplitterHandle* self, int p) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MoveSplitter_IsBase(true);
        vqsplitterhandle->moveSplitter(static_cast<int>(p));
    } else {
        ((VirtualQSplitterHandle*)self)->moveSplitter(static_cast<int>(p));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveSplitter(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveSplitter_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    } else {
        return ((VirtualQSplitterHandle*)self)->closestLegalPosition(static_cast<int>(p));
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseClosestLegalPosition(QSplitterHandle* self, int p) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_IsBase(true);
        return vqsplitterhandle->closestLegalPosition(static_cast<int>(p));
    } else {
        return ((VirtualQSplitterHandle*)self)->closestLegalPosition(static_cast<int>(p));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnClosestLegalPosition(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ClosestLegalPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_UpdateMicroFocus(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->updateMicroFocus();
    } else {
        ((VirtualQSplitterHandle*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseUpdateMicroFocus(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_UpdateMicroFocus_IsBase(true);
        vqsplitterhandle->updateMicroFocus();
    } else {
        ((VirtualQSplitterHandle*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnUpdateMicroFocus(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_Create(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->create();
    } else {
        ((VirtualQSplitterHandle*)self)->create();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseCreate(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Create_IsBase(true);
        vqsplitterhandle->create();
    } else {
        ((VirtualQSplitterHandle*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCreate(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Create_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QSplitterHandle_Destroy(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->destroy();
    } else {
        ((VirtualQSplitterHandle*)self)->destroy();
    }
}

// Base class handler implementation
void QSplitterHandle_QBaseDestroy(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Destroy_IsBase(true);
        vqsplitterhandle->destroy();
    } else {
        ((VirtualQSplitterHandle*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDestroy(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Destroy_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusNextChild(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->focusNextChild();
    } else {
        return ((VirtualQSplitterHandle*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusNextChild(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusNextChild_IsBase(true);
        return vqsplitterhandle->focusNextChild();
    } else {
        return ((VirtualQSplitterHandle*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusNextChild(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusNextChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_FocusPreviousChild(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->focusPreviousChild();
    } else {
        return ((VirtualQSplitterHandle*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseFocusPreviousChild(QSplitterHandle* self) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusPreviousChild_IsBase(true);
        return vqsplitterhandle->focusPreviousChild();
    } else {
        return ((VirtualQSplitterHandle*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusPreviousChild(QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_FocusPreviousChild_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QSplitterHandle_Sender(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->sender();
    } else {
        return ((VirtualQSplitterHandle*)self)->sender();
    }
}

// Base class handler implementation
QObject* QSplitterHandle_QBaseSender(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Sender_IsBase(true);
        return vqsplitterhandle->sender();
    } else {
        return ((VirtualQSplitterHandle*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSender(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Sender_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_SenderSignalIndex(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->senderSignalIndex();
    } else {
        return ((VirtualQSplitterHandle*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseSenderSignalIndex(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SenderSignalIndex_IsBase(true);
        return vqsplitterhandle->senderSignalIndex();
    } else {
        return ((VirtualQSplitterHandle*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSenderSignalIndex(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_SenderSignalIndex_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QSplitterHandle_Receivers(const QSplitterHandle* self, const char* signal) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->receivers(signal);
    } else {
        return ((VirtualQSplitterHandle*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QSplitterHandle_QBaseReceivers(const QSplitterHandle* self, const char* signal) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Receivers_IsBase(true);
        return vqsplitterhandle->receivers(signal);
    } else {
        return ((VirtualQSplitterHandle*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnReceivers(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_Receivers_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QSplitterHandle_IsSignalConnected(const QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplitterHandle*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QSplitterHandle_QBaseIsSignalConnected(const QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_IsSignalConnected_IsBase(true);
        return vqsplitterhandle->isSignalConnected(*signal);
    } else {
        return ((VirtualQSplitterHandle*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnIsSignalConnected(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_IsSignalConnected_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QSplitterHandle_GetDecodedMetricF(const QSplitterHandle* self, int metricA, int metricB) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        return vqsplitterhandle->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSplitterHandle*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QSplitterHandle_QBaseGetDecodedMetricF(const QSplitterHandle* self, int metricA, int metricB) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_GetDecodedMetricF_IsBase(true);
        return vqsplitterhandle->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQSplitterHandle*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnGetDecodedMetricF(const QSplitterHandle* self, intptr_t slot) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
        vqsplitterhandle->setQSplitterHandle_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_GetDecodedMetricF_Callback>(slot));
    }
}

void QSplitterHandle_Delete(QSplitterHandle* self) {
    delete self;
}
