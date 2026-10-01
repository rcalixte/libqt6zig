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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSplitter_Tr(const char* s) {
    auto _ret = QSplitter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QSize* QSplitter_SizeHint(const QSplitter* self) {
    return new QSize(self->sizeHint());
}

QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
    return new QSize(self->minimumSizeHint());
}

libqt_list /* of int */ QSplitter_Sizes(const QSplitter* self) {
    QList<int> _ret = self->sizes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
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
    QSplitter::connect(self,
                       static_cast<void (QSplitter::*)(int, int)>(&QSplitter::splitterMoved),
                       [self, slotFunc](int pos, int index) {
                           int sigval1 = pos;
                           int sigval2 = index;
                           slotFunc(self, sigval1, sigval2);
                       });
}

QSplitterHandle* QSplitter_CreateHandle(QSplitter* self) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        return vqsplitter->createHandle();
    }
    qFatal("Error: Protected method QSplitter::createHandle called without a directly constructed type");
}

void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->childEvent(param1);
    }
}

bool QSplitter_Event(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        return vqsplitter->event(param1);
    }
    qFatal("Error: Protected method QSplitter::event called without a directly constructed type");
}

void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->resizeEvent(param1);
    }
}

void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->changeEvent(param1);
    }
}

libqt_string QSplitter_Tr2(const char* s, const char* c) {
    auto _ret = QSplitter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSplitter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaqueVal) {
    self->setOpaqueResize(opaqueVal);
}

// Base class handler implementation
QMetaObject* QSplitter_SuperMetaObject(const QSplitter* self) {
    return (QMetaObject*)self->QSplitter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetaObject(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_metaobject_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSplitter_SuperMetacast(QSplitter* self, const char* param1) {
    return self->QSplitter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetacast(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_metacast_callback = reinterpret_cast<VirtualQSplitter::QSplitter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSplitter_SuperMetacall(QSplitter* self, int param1, int param2, void** param3) {
    return self->QSplitter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetacall(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_metacall_callback = reinterpret_cast<VirtualQSplitter::QSplitter_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QSplitter_SuperSizeHint(const QSplitter* self) {
    return new QSize(self->QSplitter::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSizeHint(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_sizehint_callback = reinterpret_cast<VirtualQSplitter::QSplitter_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QSplitter_SuperMinimumSizeHint(const QSplitter* self) {
    return new QSize(self->QSplitter::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMinimumSizeHint(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_minimumsizehint_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSplitterHandle* QSplitter_SuperCreateHandle(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->QSplitter::createHandle();
    } else
        qFatal("Error: Protected virtual method QSplitter::createHandle called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreateHandle(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_createhandle_callback = reinterpret_cast<VirtualQSplitter::QSplitter_CreateHandle_Callback>(slot);
}

// Base class handler implementation
void QSplitter_SuperChildEvent(QSplitter* self, QChildEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::childEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChildEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_childevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ChildEvent_Callback>(slot);
}

// Base class handler implementation
bool QSplitter_SuperEvent(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->QSplitter::event(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_event_callback = reinterpret_cast<VirtualQSplitter::QSplitter_Event_Callback>(slot);
}

// Base class handler implementation
void QSplitter_SuperResizeEvent(QSplitter* self, QResizeEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnResizeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_resizeevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QSplitter_SuperChangeEvent(QSplitter* self, QEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChangeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_changeevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_PaintEvent(QSplitter* self, QPaintEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->paintEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplitter::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperPaintEvent(QSplitter* self, QPaintEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_paintevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_InitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter) {
        vqsplitter->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QSplitter::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperInitStyleOption(const QSplitter* self, QStyleOptionFrame* option) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->QSplitter::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QSplitter::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitStyleOption(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_initstyleoption_callback = reinterpret_cast<VirtualQSplitter::QSplitter_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QSplitter_DevType(const QSplitter* self) {
    return self->devType();
}

// Base class handler implementation
int QSplitter_SuperDevType(const QSplitter* self) {
    return self->QSplitter::devType();
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDevType(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_devtype_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_SetVisible(QSplitter* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSplitter_SuperSetVisible(QSplitter* self, bool visible) {
    self->QSplitter::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetVisible(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_setvisible_callback = reinterpret_cast<VirtualQSplitter::QSplitter_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QSplitter_HeightForWidth(const QSplitter* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSplitter_SuperHeightForWidth(const QSplitter* self, int param1) {
    return self->QSplitter::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHeightForWidth(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_heightforwidth_callback = reinterpret_cast<VirtualQSplitter::QSplitter_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSplitter_HasHeightForWidth(const QSplitter* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSplitter_SuperHasHeightForWidth(const QSplitter* self) {
    return self->QSplitter::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHasHeightForWidth(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_hasheightforwidth_callback = reinterpret_cast<VirtualQSplitter::QSplitter_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSplitter_PaintEngine(const QSplitter* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSplitter_SuperPaintEngine(const QSplitter* self) {
    return self->QSplitter::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnPaintEngine(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_paintengine_callback = reinterpret_cast<VirtualQSplitter::QSplitter_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_MousePressEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperMousePressEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMousePressEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_mousepressevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_MouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperMouseReleaseEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseReleaseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_mousereleaseevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_MouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperMouseDoubleClickEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseDoubleClickEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_MouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperMouseMoveEvent(QSplitter* self, QMouseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMouseMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_mousemoveevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_WheelEvent(QSplitter* self, QWheelEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperWheelEvent(QSplitter* self, QWheelEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnWheelEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_wheelevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_KeyPressEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperKeyPressEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyPressEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_keypressevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_KeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperKeyReleaseEvent(QSplitter* self, QKeyEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnKeyReleaseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_keyreleaseevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_FocusInEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperFocusInEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusInEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_focusinevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_FocusOutEvent(QSplitter* self, QFocusEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperFocusOutEvent(QSplitter* self, QFocusEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusOutEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_focusoutevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_EnterEvent(QSplitter* self, QEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperEnterEvent(QSplitter* self, QEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEnterEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_enterevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_LeaveEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperLeaveEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnLeaveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_leaveevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_MoveEvent(QSplitter* self, QMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperMoveEvent(QSplitter* self, QMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_moveevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_CloseEvent(QSplitter* self, QCloseEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperCloseEvent(QSplitter* self, QCloseEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCloseEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_closeevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_ContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperContextMenuEvent(QSplitter* self, QContextMenuEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnContextMenuEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_contextmenuevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_TabletEvent(QSplitter* self, QTabletEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperTabletEvent(QSplitter* self, QTabletEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTabletEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_tabletevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_ActionEvent(QSplitter* self, QActionEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperActionEvent(QSplitter* self, QActionEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnActionEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_actionevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_DragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperDragEnterEvent(QSplitter* self, QDragEnterEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragEnterEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_dragenterevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_DragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperDragMoveEvent(QSplitter* self, QDragMoveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragMoveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_dragmoveevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_DragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperDragLeaveEvent(QSplitter* self, QDragLeaveEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDragLeaveEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_dragleaveevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_DropEvent(QSplitter* self, QDropEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperDropEvent(QSplitter* self, QDropEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDropEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_dropevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_ShowEvent(QSplitter* self, QShowEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperShowEvent(QSplitter* self, QShowEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnShowEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_showevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_HideEvent(QSplitter* self, QHideEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperHideEvent(QSplitter* self, QHideEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnHideEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_hideevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSplitter_NativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        return vqsplitter->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSplitter::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplitter_SuperNativeEvent(QSplitter* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->QSplitter::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSplitter::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnNativeEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_nativeevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSplitter_Metric(const QSplitter* self, int param1) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter) {
        return vqsplitter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSplitter::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSplitter_SuperMetric(const QSplitter* self, int param1) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->QSplitter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSplitter::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMetric(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_metric_callback = reinterpret_cast<VirtualQSplitter::QSplitter_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_InitPainter(const QSplitter* self, QPainter* painter) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter) {
        vqsplitter->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSplitter::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperInitPainter(const QSplitter* self, QPainter* painter) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        vqsplitter->QSplitter::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSplitter::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInitPainter(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_initpainter_callback = reinterpret_cast<VirtualQSplitter::QSplitter_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSplitter_Redirected(const QSplitter* self, QPoint* offset) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter) {
        return vqsplitter->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSplitter::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSplitter_SuperRedirected(const QSplitter* self, QPoint* offset) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->QSplitter::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSplitter::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnRedirected(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_redirected_callback = reinterpret_cast<VirtualQSplitter::QSplitter_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSplitter_SharedPainter(const QSplitter* self) {
    auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self));
    if (vqsplitter) {
        return vqsplitter->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSplitter::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSplitter_SuperSharedPainter(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->QSplitter::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSplitter::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSharedPainter(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_sharedpainter_callback = reinterpret_cast<VirtualQSplitter::QSplitter_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_InputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplitter::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperInputMethodEvent(QSplitter* self, QInputMethodEvent* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitter::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_inputmethodevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSplitter_InputMethodQuery(const QSplitter* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSplitter_SuperInputMethodQuery(const QSplitter* self, int param1) {
    return new QVariant(self->QSplitter::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnInputMethodQuery(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self)))
        vqsplitter->qsplitter_inputmethodquery_callback = reinterpret_cast<VirtualQSplitter::QSplitter_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSplitter_FocusNextPrevChild(QSplitter* self, bool next) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        return vqsplitter->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSplitter::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplitter_SuperFocusNextPrevChild(QSplitter* self, bool next) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->QSplitter::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSplitter::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnFocusNextPrevChild(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_focusnextprevchild_callback = reinterpret_cast<VirtualQSplitter::QSplitter_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSplitter_EventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSplitter_SuperEventFilter(QSplitter* self, QObject* watched, QEvent* event) {
    return self->QSplitter::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEventFilter(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_eventfilter_callback = reinterpret_cast<VirtualQSplitter::QSplitter_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_TimerEvent(QSplitter* self, QTimerEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperTimerEvent(QSplitter* self, QTimerEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnTimerEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_timerevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_CustomEvent(QSplitter* self, QEvent* event) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperCustomEvent(QSplitter* self, QEvent* event) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCustomEvent(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_customevent_callback = reinterpret_cast<VirtualQSplitter::QSplitter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_ConnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplitter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperConnectNotify(QSplitter* self, const QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplitter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnConnectNotify(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_connectnotify_callback = reinterpret_cast<VirtualQSplitter::QSplitter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSplitter_DisconnectNotify(QSplitter* self, const QMetaMethod* signal) {
    auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
    if (vqsplitter) {
        vqsplitter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplitter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitter_SuperDisconnectNotify(QSplitter* self, const QMetaMethod* signal) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->QSplitter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplitter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnDisconnectNotify(QSplitter* self, intptr_t slot) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self))
        vqsplitter->qsplitter_disconnectnotify_callback = reinterpret_cast<VirtualQSplitter::QSplitter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSplitter_MoveSplitter(QSplitter* self, int pos, int index) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::moveSplitter(static_cast<int>(pos), static_cast<int>(index));
    } else
        qFatal("Error: Protected method QSplitter::moveSplitter called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitter_SetRubberBand(QSplitter* self, int position) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::setRubberBand(static_cast<int>(position));
    } else
        qFatal("Error: Protected method QSplitter::setRubberBand called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->VirtualQSplitter::closestLegalPosition(static_cast<int>(param1), static_cast<int>(param2));
    } else
        qFatal("Error: Protected method QSplitter::closestLegalPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitter_DrawFrame(QSplitter* self, QPainter* param1) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::drawFrame(param1);
    } else
        qFatal("Error: Protected method QSplitter::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitter_UpdateMicroFocus(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSplitter::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitter_Create(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::create();
    } else
        qFatal("Error: Protected method QSplitter::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitter_Destroy(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        vqsplitter->VirtualQSplitter::destroy();
    } else
        qFatal("Error: Protected method QSplitter::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitter_FocusNextChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->VirtualQSplitter::focusNextChild();
    } else
        qFatal("Error: Protected method QSplitter::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitter_FocusPreviousChild(QSplitter* self) {
    if (auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self)) {
        return vqsplitter->VirtualQSplitter::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSplitter::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSplitter_Sender(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->VirtualQSplitter::sender();
    } else
        qFatal("Error: Protected method QSplitter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitter_SenderSignalIndex(const QSplitter* self) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->VirtualQSplitter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSplitter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitter_Receivers(const QSplitter* self, const char* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->VirtualQSplitter::receivers(signal);
    } else
        qFatal("Error: Protected method QSplitter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitter_IsSignalConnected(const QSplitter* self, const QMetaMethod* signal) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->VirtualQSplitter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSplitter::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSplitter_GetDecodedMetricF(const QSplitter* self, int metricA, int metricB) {
    if (auto* vqsplitter = const_cast<VirtualQSplitter*>(dynamic_cast<const VirtualQSplitter*>(self))) {
        return vqsplitter->VirtualQSplitter::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSplitter::getDecodedMetricF called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QSplitterHandle_Tr(const char* s) {
    auto _ret = QSplitterHandle::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
    return new QSize(self->sizeHint());
}

void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->paintEvent(param1);
    }
}

void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->mouseMoveEvent(param1);
    }
}

void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->mousePressEvent(param1);
    }
}

void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->mouseReleaseEvent(param1);
    }
}

void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->resizeEvent(param1);
    }
}

bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        return vqsplitterhandle->event(param1);
    }
    qFatal("Error: Protected method QSplitterHandle::event called without a directly constructed type");
}

libqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
    auto _ret = QSplitterHandle::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
    auto _ret = QSplitterHandle::tr(s, c, static_cast<int>(n));
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
QMetaObject* QSplitterHandle_SuperMetaObject(const QSplitterHandle* self) {
    return (QMetaObject*)self->QSplitterHandle::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetaObject(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_metaobject_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QSplitterHandle_SuperMetacast(QSplitterHandle* self, const char* param1) {
    return self->QSplitterHandle::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetacast(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_metacast_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metacast_Callback>(slot);
}

// Base class handler implementation
int QSplitterHandle_SuperMetacall(QSplitterHandle* self, int param1, int param2, void** param3) {
    return self->QSplitterHandle::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetacall(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_metacall_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QSplitterHandle_SuperSizeHint(const QSplitterHandle* self) {
    return new QSize(self->QSplitterHandle::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSizeHint(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_sizehint_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QSplitterHandle_SuperPaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::paintEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_paintevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QSplitterHandle_SuperMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::mouseMoveEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_mousemoveevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QSplitterHandle_SuperMousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::mousePressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMousePressEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_mousepressevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QSplitterHandle_SuperMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::mouseReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_mousereleaseevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QSplitterHandle_SuperResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnResizeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_resizeevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
bool QSplitterHandle_SuperEvent(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->QSplitterHandle::event(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_event_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Event_Callback>(slot);
}

// Derived class handler implementation
int QSplitterHandle_DevType(const QSplitterHandle* self) {
    return self->devType();
}

// Base class handler implementation
int QSplitterHandle_SuperDevType(const QSplitterHandle* self) {
    return self->QSplitterHandle::devType();
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDevType(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_devtype_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DevType_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_SetVisible(QSplitterHandle* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QSplitterHandle_SuperSetVisible(QSplitterHandle* self, bool visible) {
    self->QSplitterHandle::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSetVisible(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_setvisible_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QSplitterHandle_MinimumSizeHint(const QSplitterHandle* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QSplitterHandle_SuperMinimumSizeHint(const QSplitterHandle* self) {
    return new QSize(self->QSplitterHandle::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMinimumSizeHint(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_minimumsizehint_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QSplitterHandle_HeightForWidth(const QSplitterHandle* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QSplitterHandle_SuperHeightForWidth(const QSplitterHandle* self, int param1) {
    return self->QSplitterHandle::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHeightForWidth(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_heightforwidth_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QSplitterHandle_HasHeightForWidth(const QSplitterHandle* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QSplitterHandle_SuperHasHeightForWidth(const QSplitterHandle* self) {
    return self->QSplitterHandle::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHasHeightForWidth(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_hasheightforwidth_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QSplitterHandle_PaintEngine(const QSplitterHandle* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QSplitterHandle_SuperPaintEngine(const QSplitterHandle* self) {
    return self->QSplitterHandle::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEngine(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_paintengine_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_MouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperMouseDoubleClickEvent(QSplitterHandle* self, QMouseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseDoubleClickEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_mousedoubleclickevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_WheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperWheelEvent(QSplitterHandle* self, QWheelEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnWheelEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_wheelevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_KeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperKeyPressEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyPressEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_keypressevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_KeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperKeyReleaseEvent(QSplitterHandle* self, QKeyEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnKeyReleaseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_keyreleaseevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_FocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperFocusInEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusInEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_focusinevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_FocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperFocusOutEvent(QSplitterHandle* self, QFocusEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusOutEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_focusoutevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_EnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperEnterEvent(QSplitterHandle* self, QEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEnterEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_enterevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_LeaveEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperLeaveEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_leaveevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_MoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperMoveEvent(QSplitterHandle* self, QMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_moveevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_CloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperCloseEvent(QSplitterHandle* self, QCloseEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCloseEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_closeevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperContextMenuEvent(QSplitterHandle* self, QContextMenuEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnContextMenuEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_contextmenuevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_TabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperTabletEvent(QSplitterHandle* self, QTabletEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTabletEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_tabletevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ActionEvent(QSplitterHandle* self, QActionEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperActionEvent(QSplitterHandle* self, QActionEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnActionEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_actionevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_DragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperDragEnterEvent(QSplitterHandle* self, QDragEnterEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragEnterEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_dragenterevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_DragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperDragMoveEvent(QSplitterHandle* self, QDragMoveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragMoveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_dragmoveevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_DragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperDragLeaveEvent(QSplitterHandle* self, QDragLeaveEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDragLeaveEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_dragleaveevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_DropEvent(QSplitterHandle* self, QDropEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperDropEvent(QSplitterHandle* self, QDropEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDropEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_dropevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ShowEvent(QSplitterHandle* self, QShowEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperShowEvent(QSplitterHandle* self, QShowEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnShowEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_showevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_HideEvent(QSplitterHandle* self, QHideEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperHideEvent(QSplitterHandle* self, QHideEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnHideEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_hideevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QSplitterHandle_NativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        return vqsplitterhandle->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplitterHandle_SuperNativeEvent(QSplitterHandle* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->QSplitterHandle::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnNativeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_nativeevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ChangeEvent(QSplitterHandle* self, QEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperChangeEvent(QSplitterHandle* self, QEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChangeEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_changeevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QSplitterHandle_Metric(const QSplitterHandle* self, int param1) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle) {
        return vqsplitterhandle->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QSplitterHandle_SuperMetric(const QSplitterHandle* self, int param1) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->QSplitterHandle::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMetric(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_metric_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Metric_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_InitPainter(const QSplitterHandle* self, QPainter* painter) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle) {
        vqsplitterhandle->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperInitPainter(const QSplitterHandle* self, QPainter* painter) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        vqsplitterhandle->QSplitterHandle::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInitPainter(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_initpainter_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QSplitterHandle_Redirected(const QSplitterHandle* self, QPoint* offset) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle) {
        return vqsplitterhandle->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QSplitterHandle_SuperRedirected(const QSplitterHandle* self, QPoint* offset) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->QSplitterHandle::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnRedirected(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_redirected_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QSplitterHandle_SharedPainter(const QSplitterHandle* self) {
    auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self));
    if (vqsplitterhandle) {
        return vqsplitterhandle->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QSplitterHandle_SuperSharedPainter(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->QSplitterHandle::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSharedPainter(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_sharedpainter_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_InputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperInputMethodEvent(QSplitterHandle* self, QInputMethodEvent* param1) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_inputmethodevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QSplitterHandle_InputMethodQuery(const QSplitterHandle* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QSplitterHandle_SuperInputMethodQuery(const QSplitterHandle* self, int param1) {
    return new QVariant(self->QSplitterHandle::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnInputMethodQuery(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self)))
        vqsplitterhandle->qsplitterhandle_inputmethodquery_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QSplitterHandle_FocusNextPrevChild(QSplitterHandle* self, bool next) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        return vqsplitterhandle->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QSplitterHandle_SuperFocusNextPrevChild(QSplitterHandle* self, bool next) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->QSplitterHandle::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnFocusNextPrevChild(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_focusnextprevchild_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QSplitterHandle_EventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QSplitterHandle_SuperEventFilter(QSplitterHandle* self, QObject* watched, QEvent* event) {
    return self->QSplitterHandle::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEventFilter(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_eventfilter_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_TimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperTimerEvent(QSplitterHandle* self, QTimerEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnTimerEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_timerevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ChildEvent(QSplitterHandle* self, QChildEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperChildEvent(QSplitterHandle* self, QChildEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnChildEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_childevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_CustomEvent(QSplitterHandle* self, QEvent* event) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperCustomEvent(QSplitterHandle* self, QEvent* event) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnCustomEvent(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_customevent_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_ConnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperConnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnConnectNotify(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_connectnotify_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QSplitterHandle_DisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
    if (vqsplitterhandle) {
        vqsplitterhandle->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QSplitterHandle::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QSplitterHandle_SuperDisconnectNotify(QSplitterHandle* self, const QMetaMethod* signal) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->QSplitterHandle::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QSplitterHandle::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnDisconnectNotify(QSplitterHandle* self, intptr_t slot) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self))
        vqsplitterhandle->qsplitterhandle_disconnectnotify_callback = reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->VirtualQSplitterHandle::moveSplitter(static_cast<int>(p));
    } else
        qFatal("Error: Protected method QSplitterHandle::moveSplitter called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->VirtualQSplitterHandle::closestLegalPosition(static_cast<int>(p));
    } else
        qFatal("Error: Protected method QSplitterHandle::closestLegalPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitterHandle_UpdateMicroFocus(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->VirtualQSplitterHandle::updateMicroFocus();
    } else
        qFatal("Error: Protected method QSplitterHandle::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitterHandle_Create(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->VirtualQSplitterHandle::create();
    } else
        qFatal("Error: Protected method QSplitterHandle::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QSplitterHandle_Destroy(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        vqsplitterhandle->VirtualQSplitterHandle::destroy();
    } else
        qFatal("Error: Protected method QSplitterHandle::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitterHandle_FocusNextChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->VirtualQSplitterHandle::focusNextChild();
    } else
        qFatal("Error: Protected method QSplitterHandle::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitterHandle_FocusPreviousChild(QSplitterHandle* self) {
    if (auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self)) {
        return vqsplitterhandle->VirtualQSplitterHandle::focusPreviousChild();
    } else
        qFatal("Error: Protected method QSplitterHandle::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QSplitterHandle_Sender(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->VirtualQSplitterHandle::sender();
    } else
        qFatal("Error: Protected method QSplitterHandle::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitterHandle_SenderSignalIndex(const QSplitterHandle* self) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->VirtualQSplitterHandle::senderSignalIndex();
    } else
        qFatal("Error: Protected method QSplitterHandle::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QSplitterHandle_Receivers(const QSplitterHandle* self, const char* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->VirtualQSplitterHandle::receivers(signal);
    } else
        qFatal("Error: Protected method QSplitterHandle::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QSplitterHandle_IsSignalConnected(const QSplitterHandle* self, const QMetaMethod* signal) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->VirtualQSplitterHandle::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QSplitterHandle::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QSplitterHandle_GetDecodedMetricF(const QSplitterHandle* self, int metricA, int metricB) {
    if (auto* vqsplitterhandle = const_cast<VirtualQSplitterHandle*>(dynamic_cast<const VirtualQSplitterHandle*>(self))) {
        return vqsplitterhandle->VirtualQSplitterHandle::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QSplitterHandle::getDecodedMetricF called without a directly constructed type");
}

void QSplitterHandle_Delete(QSplitterHandle* self) {
    delete self;
}
