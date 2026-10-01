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
#include <QKeyCombination>
#include <QKeyEvent>
#include <QKeySequence>
#include <QKeySequenceEdit>
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
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qkeysequenceedit.h>
#include "libqkeysequenceedit.h"
#include "libqkeysequenceedit.hxx"

QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent) {
    return new VirtualQKeySequenceEdit(parent);
}

QKeySequenceEdit* QKeySequenceEdit_new2() {
    return new VirtualQKeySequenceEdit();
}

QKeySequenceEdit* QKeySequenceEdit_new3(const QKeySequence* keySequence) {
    return new VirtualQKeySequenceEdit(*keySequence);
}

QKeySequenceEdit* QKeySequenceEdit_new4(const QKeySequence* keySequence, QWidget* parent) {
    return new VirtualQKeySequenceEdit(*keySequence, parent);
}

QMetaObject* QKeySequenceEdit_MetaObject(const QKeySequenceEdit* self) {
    return (QMetaObject*)self->metaObject();
}

void* QKeySequenceEdit_Metacast(QKeySequenceEdit* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QKeySequenceEdit_Metacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QKeySequenceEdit_Tr(const char* s) {
    auto _ret = QKeySequenceEdit::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self) {
    return new QKeySequence(self->keySequence());
}

ptrdiff_t QKeySequenceEdit_MaximumSequenceLength(const QKeySequenceEdit* self) {
    return static_cast<ptrdiff_t>(self->maximumSequenceLength());
}

void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable) {
    self->setClearButtonEnabled(enable);
}

bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self) {
    return self->isClearButtonEnabled();
}

void QKeySequenceEdit_SetFinishingKeyCombinations(QKeySequenceEdit* self, const libqt_list /* of QKeyCombination* */ finishingKeyCombinations) {
    QList<QKeyCombination> finishingKeyCombinations_QList;
    finishingKeyCombinations_QList.reserve(finishingKeyCombinations.len);
    QKeyCombination** finishingKeyCombinations_arr = static_cast<QKeyCombination**>(finishingKeyCombinations.data);
    for (size_t i = 0; i < finishingKeyCombinations.len; ++i) {
        finishingKeyCombinations_QList.push_back(*(finishingKeyCombinations_arr[i]));
    }
    self->setFinishingKeyCombinations(finishingKeyCombinations_QList);
}

libqt_list /* of QKeyCombination* */ QKeySequenceEdit_FinishingKeyCombinations(const QKeySequenceEdit* self) {
    QList<QKeyCombination> _ret = self->finishingKeyCombinations();
    // Convert QList<> from C++ memory to manually-managed C memory
    QKeyCombination** _arr = static_cast<QKeyCombination**>(malloc(sizeof(QKeyCombination*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QKeyCombination(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, const QKeySequence* keySequence) {
    self->setKeySequence(*keySequence);
}

void QKeySequenceEdit_Clear(QKeySequenceEdit* self) {
    self->clear();
}

void QKeySequenceEdit_SetMaximumSequenceLength(QKeySequenceEdit* self, ptrdiff_t count) {
    self->setMaximumSequenceLength((qsizetype)(count));
}

void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self) {
    self->editingFinished();
}

void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*) = reinterpret_cast<void (*)(QKeySequenceEdit*)>(slot);
    QKeySequenceEdit::connect(self,
                              static_cast<void (QKeySequenceEdit::*)()>(&QKeySequenceEdit::editingFinished),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, const QKeySequence* keySequence) {
    self->keySequenceChanged(*keySequence);
}

void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot) {
    void (*slotFunc)(QKeySequenceEdit*, QKeySequence*) = reinterpret_cast<void (*)(QKeySequenceEdit*, QKeySequence*)>(slot);
    QKeySequenceEdit::connect(self,
                              static_cast<void (QKeySequenceEdit::*)(const QKeySequence&)>(&QKeySequenceEdit::keySequenceChanged),
                              [self, slotFunc](const QKeySequence& keySequence) {
                                  const QKeySequence& keySequence_ret = keySequence;
                                  // Cast returned reference into pointer
                                  QKeySequence* sigval1 = const_cast<QKeySequence*>(&keySequence_ret);
                                  slotFunc(self, sigval1);
                              });
}

bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->event(param1);
    }
    qFatal("Error: Protected method QKeySequenceEdit::event called without a directly constructed type");
}

void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->keyPressEvent(param1);
    }
}

void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->keyReleaseEvent(param1);
    }
}

void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->timerEvent(param1);
    }
}

void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->focusOutEvent(param1);
    }
}

libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c) {
    auto _ret = QKeySequenceEdit::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n) {
    auto _ret = QKeySequenceEdit::tr(s, c, static_cast<int>(n));
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
QMetaObject* QKeySequenceEdit_SuperMetaObject(const QKeySequenceEdit* self) {
    return (QMetaObject*)self->QKeySequenceEdit::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetaObject(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_metaobject_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QKeySequenceEdit_SuperMetacast(QKeySequenceEdit* self, const char* param1) {
    return self->QKeySequenceEdit::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetacast(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_metacast_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metacast_Callback>(slot);
}

// Base class handler implementation
int QKeySequenceEdit_SuperMetacall(QKeySequenceEdit* self, int param1, int param2, void** param3) {
    return self->QKeySequenceEdit::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetacall(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_metacall_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QKeySequenceEdit_SuperEvent(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->QKeySequenceEdit::event(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_event_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Event_Callback>(slot);
}

// Base class handler implementation
void QKeySequenceEdit_SuperKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyPressEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_keypressevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QKeySequenceEdit_SuperKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::keyReleaseEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnKeyReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_keyreleaseevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QKeySequenceEdit_SuperTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::timerEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTimerEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_timerevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TimerEvent_Callback>(slot);
}

// Base class handler implementation
void QKeySequenceEdit_SuperFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::focusOutEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusOutEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_focusoutevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
int QKeySequenceEdit_DevType(const QKeySequenceEdit* self) {
    return self->devType();
}

// Base class handler implementation
int QKeySequenceEdit_SuperDevType(const QKeySequenceEdit* self) {
    return self->QKeySequenceEdit::devType();
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDevType(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_devtype_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DevType_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_SetVisible(QKeySequenceEdit* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QKeySequenceEdit_SuperSetVisible(QKeySequenceEdit* self, bool visible) {
    self->QKeySequenceEdit::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSetVisible(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_setvisible_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QKeySequenceEdit_SizeHint(const QKeySequenceEdit* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QKeySequenceEdit_SuperSizeHint(const QKeySequenceEdit* self) {
    return new QSize(self->QKeySequenceEdit::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSizeHint(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_sizehint_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QKeySequenceEdit_MinimumSizeHint(const QKeySequenceEdit* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QKeySequenceEdit_SuperMinimumSizeHint(const QKeySequenceEdit* self) {
    return new QSize(self->QKeySequenceEdit::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMinimumSizeHint(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_minimumsizehint_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QKeySequenceEdit_HeightForWidth(const QKeySequenceEdit* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QKeySequenceEdit_SuperHeightForWidth(const QKeySequenceEdit* self, int param1) {
    return self->QKeySequenceEdit::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHeightForWidth(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_heightforwidth_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QKeySequenceEdit_HasHeightForWidth(const QKeySequenceEdit* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QKeySequenceEdit_SuperHasHeightForWidth(const QKeySequenceEdit* self) {
    return self->QKeySequenceEdit::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHasHeightForWidth(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_hasheightforwidth_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QKeySequenceEdit_PaintEngine(const QKeySequenceEdit* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QKeySequenceEdit_SuperPaintEngine(const QKeySequenceEdit* self) {
    return self->QKeySequenceEdit::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEngine(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_paintengine_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_MousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperMousePressEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMousePressEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_mousepressevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_MouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperMouseReleaseEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseReleaseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_mousereleaseevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_MouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperMouseDoubleClickEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseDoubleClickEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_mousedoubleclickevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_MouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperMouseMoveEvent(QKeySequenceEdit* self, QMouseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMouseMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_mousemoveevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_WheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperWheelEvent(QKeySequenceEdit* self, QWheelEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnWheelEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_wheelevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_FocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperFocusInEvent(QKeySequenceEdit* self, QFocusEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusInEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_focusinevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_EnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperEnterEvent(QKeySequenceEdit* self, QEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_enterevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_LeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperLeaveEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_leaveevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_PaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperPaintEvent(QKeySequenceEdit* self, QPaintEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnPaintEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_paintevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_MoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperMoveEvent(QKeySequenceEdit* self, QMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_moveevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperResizeEvent(QKeySequenceEdit* self, QResizeEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnResizeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_resizeevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_CloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperCloseEvent(QKeySequenceEdit* self, QCloseEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCloseEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_closeevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperContextMenuEvent(QKeySequenceEdit* self, QContextMenuEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnContextMenuEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_contextmenuevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_TabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperTabletEvent(QKeySequenceEdit* self, QTabletEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnTabletEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_tabletevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperActionEvent(QKeySequenceEdit* self, QActionEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnActionEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_actionevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_DragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperDragEnterEvent(QKeySequenceEdit* self, QDragEnterEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragEnterEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_dragenterevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_DragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperDragMoveEvent(QKeySequenceEdit* self, QDragMoveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragMoveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_dragmoveevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_DragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperDragLeaveEvent(QKeySequenceEdit* self, QDragLeaveEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDragLeaveEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_dragleaveevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_DropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperDropEvent(QKeySequenceEdit* self, QDropEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDropEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_dropevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperShowEvent(QKeySequenceEdit* self, QShowEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnShowEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_showevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_HideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperHideEvent(QKeySequenceEdit* self, QHideEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnHideEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_hideevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QKeySequenceEdit_NativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QKeySequenceEdit_SuperNativeEvent(QKeySequenceEdit* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->QKeySequenceEdit::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnNativeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_nativeevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperChangeEvent(QKeySequenceEdit* self, QEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChangeEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_changeevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QKeySequenceEdit_Metric(const QKeySequenceEdit* self, int param1) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QKeySequenceEdit_SuperMetric(const QKeySequenceEdit* self, int param1) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->QKeySequenceEdit::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnMetric(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_metric_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Metric_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_InitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit) {
        vqkeysequenceedit->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperInitPainter(const QKeySequenceEdit* self, QPainter* painter) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        vqkeysequenceedit->QKeySequenceEdit::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInitPainter(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_initpainter_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QKeySequenceEdit_Redirected(const QKeySequenceEdit* self, QPoint* offset) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QKeySequenceEdit_SuperRedirected(const QKeySequenceEdit* self, QPoint* offset) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->QKeySequenceEdit::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnRedirected(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_redirected_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QKeySequenceEdit_SharedPainter(const QKeySequenceEdit* self) {
    auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self));
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QKeySequenceEdit_SuperSharedPainter(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->QKeySequenceEdit::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnSharedPainter(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_sharedpainter_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_InputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperInputMethodEvent(QKeySequenceEdit* self, QInputMethodEvent* param1) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_inputmethodevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QKeySequenceEdit_InputMethodQuery(const QKeySequenceEdit* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QKeySequenceEdit_SuperInputMethodQuery(const QKeySequenceEdit* self, int param1) {
    return new QVariant(self->QKeySequenceEdit::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnInputMethodQuery(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self)))
        vqkeysequenceedit->qkeysequenceedit_inputmethodquery_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QKeySequenceEdit_FocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        return vqkeysequenceedit->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QKeySequenceEdit_SuperFocusNextPrevChild(QKeySequenceEdit* self, bool next) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->QKeySequenceEdit::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnFocusNextPrevChild(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_focusnextprevchild_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QKeySequenceEdit_EventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QKeySequenceEdit_SuperEventFilter(QKeySequenceEdit* self, QObject* watched, QEvent* event) {
    return self->QKeySequenceEdit::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnEventFilter(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_eventfilter_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperChildEvent(QKeySequenceEdit* self, QChildEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnChildEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_childevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_CustomEvent(QKeySequenceEdit* self, QEvent* event) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperCustomEvent(QKeySequenceEdit* self, QEvent* event) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnCustomEvent(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_customevent_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_ConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperConnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnConnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_connectnotify_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QKeySequenceEdit_DisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self);
    if (vqkeysequenceedit) {
        vqkeysequenceedit->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QKeySequenceEdit::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QKeySequenceEdit_SuperDisconnectNotify(QKeySequenceEdit* self, const QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->QKeySequenceEdit::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QKeySequenceEdit::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QKeySequenceEdit_OnDisconnectNotify(QKeySequenceEdit* self, intptr_t slot) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self))
        vqkeysequenceedit->qkeysequenceedit_disconnectnotify_callback = reinterpret_cast<VirtualQKeySequenceEdit::QKeySequenceEdit_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QKeySequenceEdit_UpdateMicroFocus(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->VirtualQKeySequenceEdit::updateMicroFocus();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QKeySequenceEdit_Create(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->VirtualQKeySequenceEdit::create();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QKeySequenceEdit_Destroy(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        vqkeysequenceedit->VirtualQKeySequenceEdit::destroy();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeySequenceEdit_FocusNextChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::focusNextChild();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeySequenceEdit_FocusPreviousChild(QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = dynamic_cast<VirtualQKeySequenceEdit*>(self)) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::focusPreviousChild();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QKeySequenceEdit_Sender(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::sender();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeySequenceEdit_SenderSignalIndex(const QKeySequenceEdit* self) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::senderSignalIndex();
    } else
        qFatal("Error: Protected method QKeySequenceEdit::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QKeySequenceEdit_Receivers(const QKeySequenceEdit* self, const char* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::receivers(signal);
    } else
        qFatal("Error: Protected method QKeySequenceEdit::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QKeySequenceEdit_IsSignalConnected(const QKeySequenceEdit* self, const QMetaMethod* signal) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QKeySequenceEdit::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QKeySequenceEdit_GetDecodedMetricF(const QKeySequenceEdit* self, int metricA, int metricB) {
    if (auto* vqkeysequenceedit = const_cast<VirtualQKeySequenceEdit*>(dynamic_cast<const VirtualQKeySequenceEdit*>(self))) {
        return vqkeysequenceedit->VirtualQKeySequenceEdit::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QKeySequenceEdit::getDecodedMetricF called without a directly constructed type");
}

void QKeySequenceEdit_Delete(QKeySequenceEdit* self) {
    delete self;
}
