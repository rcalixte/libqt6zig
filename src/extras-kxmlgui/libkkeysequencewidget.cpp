#include <KActionCollection>
#include <KKeySequenceWidget>
#include <QAction>
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
#include <kkeysequencewidget.h>
#include "libkkeysequencewidget.h"
#include "libkkeysequencewidget.hxx"

KKeySequenceWidget* KKeySequenceWidget_new(QWidget* parent) {
    return new VirtualKKeySequenceWidget(parent);
}

KKeySequenceWidget* KKeySequenceWidget_new2() {
    return new VirtualKKeySequenceWidget();
}

QMetaObject* KKeySequenceWidget_MetaObject(const KKeySequenceWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KKeySequenceWidget_Metacast(KKeySequenceWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KKeySequenceWidget_Metacall(KKeySequenceWidget* self, int param1, int param2, void** param3) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KKeySequenceWidget_Tr(const char* s) {
    QString _ret = KKeySequenceWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KKeySequenceWidget_SetCheckForConflictsAgainst(KKeySequenceWidget* self, int types) {
    self->setCheckForConflictsAgainst(static_cast<KKeySequenceWidget::ShortcutTypes>(types));
}

int KKeySequenceWidget_CheckForConflictsAgainst(const KKeySequenceWidget* self) {
    return static_cast<int>(self->checkForConflictsAgainst());
}

void KKeySequenceWidget_SetMultiKeyShortcutsAllowed(KKeySequenceWidget* self, bool multiKeyShortcutsAllowed) {
    self->setMultiKeyShortcutsAllowed(multiKeyShortcutsAllowed);
}

bool KKeySequenceWidget_MultiKeyShortcutsAllowed(const KKeySequenceWidget* self) {
    return self->multiKeyShortcutsAllowed();
}

void KKeySequenceWidget_SetModifierlessAllowed(KKeySequenceWidget* self, bool allow) {
    self->setModifierlessAllowed(allow);
}

bool KKeySequenceWidget_IsModifierlessAllowed(KKeySequenceWidget* self) {
    return self->isModifierlessAllowed();
}

void KKeySequenceWidget_SetModifierOnlyAllowed(KKeySequenceWidget* self, bool allow) {
    self->setModifierOnlyAllowed(allow);
}

bool KKeySequenceWidget_ModifierOnlyAllowed(const KKeySequenceWidget* self) {
    return self->modifierOnlyAllowed();
}

void KKeySequenceWidget_SetClearButtonShown(KKeySequenceWidget* self, bool show) {
    self->setClearButtonShown(show);
}

bool KKeySequenceWidget_IsKeySequenceAvailable(const KKeySequenceWidget* self, const QKeySequence* seq) {
    return self->isKeySequenceAvailable(*seq);
}

QKeySequence* KKeySequenceWidget_KeySequence(const KKeySequenceWidget* self) {
    return new QKeySequence(self->keySequence());
}

void KKeySequenceWidget_SetCheckActionCollections(KKeySequenceWidget* self, const libqt_list /* of KActionCollection* */ actionCollections) {
    QList<KActionCollection*> actionCollections_QList;
    actionCollections_QList.reserve(actionCollections.len);
    KActionCollection** actionCollections_arr = static_cast<KActionCollection**>(actionCollections.data);
    for (size_t i = 0; i < actionCollections.len; ++i) {
        actionCollections_QList.push_back(actionCollections_arr[i]);
    }
    self->setCheckActionCollections(actionCollections_QList);
}

void KKeySequenceWidget_SetComponentName(KKeySequenceWidget* self, const libqt_string componentName) {
    QString componentName_QString = QString::fromUtf8(componentName.data, componentName.len);
    self->setComponentName(componentName_QString);
}

bool KKeySequenceWidget_IsRecording(const KKeySequenceWidget* self) {
    return self->isRecording();
}

void KKeySequenceWidget_SetPatterns(KKeySequenceWidget* self, int patterns) {
    self->setPatterns(static_cast<KKeySequenceRecorder::Patterns>(patterns));
}

int KKeySequenceWidget_Patterns(const KKeySequenceWidget* self) {
    return static_cast<int>(self->patterns());
}

void KKeySequenceWidget_KeySequenceChanged(KKeySequenceWidget* self, const QKeySequence* seq) {
    self->keySequenceChanged(*seq);
}

void KKeySequenceWidget_Connect_KeySequenceChanged(KKeySequenceWidget* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceWidget*, QKeySequence*) = reinterpret_cast<void (*)(KKeySequenceWidget*, QKeySequence*)>(slot);
    KKeySequenceWidget::connect(self, &KKeySequenceWidget::keySequenceChanged, [self, slotFunc](const QKeySequence& seq) {
        const QKeySequence& seq_ret = seq;
        // Cast returned reference into pointer
        QKeySequence* sigval1 = const_cast<QKeySequence*>(&seq_ret);
        slotFunc(self, sigval1);
    });
}

void KKeySequenceWidget_StealShortcut(KKeySequenceWidget* self, const QKeySequence* seq, QAction* action) {
    self->stealShortcut(*seq, action);
}

void KKeySequenceWidget_Connect_StealShortcut(KKeySequenceWidget* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceWidget*, QKeySequence*, QAction*) = reinterpret_cast<void (*)(KKeySequenceWidget*, QKeySequence*, QAction*)>(slot);
    KKeySequenceWidget::connect(self, &KKeySequenceWidget::stealShortcut, [self, slotFunc](const QKeySequence& seq, QAction* action) {
        const QKeySequence& seq_ret = seq;
        // Cast returned reference into pointer
        QKeySequence* sigval1 = const_cast<QKeySequence*>(&seq_ret);
        QAction* sigval2 = action;
        slotFunc(self, sigval1, sigval2);
    });
}

void KKeySequenceWidget_RecordingChanged(KKeySequenceWidget* self) {
    self->recordingChanged();
}

void KKeySequenceWidget_Connect_RecordingChanged(KKeySequenceWidget* self, intptr_t slot) {
    void (*slotFunc)(KKeySequenceWidget*) = reinterpret_cast<void (*)(KKeySequenceWidget*)>(slot);
    KKeySequenceWidget::connect(self, &KKeySequenceWidget::recordingChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KKeySequenceWidget_CaptureKeySequence(KKeySequenceWidget* self) {
    self->captureKeySequence();
}

void KKeySequenceWidget_SetKeySequence(KKeySequenceWidget* self, const QKeySequence* seq) {
    self->setKeySequence(*seq);
}

void KKeySequenceWidget_ClearKeySequence(KKeySequenceWidget* self) {
    self->clearKeySequence();
}

void KKeySequenceWidget_ApplyStealShortcut(KKeySequenceWidget* self) {
    self->applyStealShortcut();
}

libqt_string KKeySequenceWidget_Tr2(const char* s, const char* c) {
    QString _ret = KKeySequenceWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KKeySequenceWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = KKeySequenceWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KKeySequenceWidget_SetKeySequence2(KKeySequenceWidget* self, const QKeySequence* seq, int val) {
    self->setKeySequence(*seq, static_cast<KKeySequenceWidget::Validation>(val));
}

// Base class handler implementation
int KKeySequenceWidget_QBaseMetacall(KKeySequenceWidget* self, int param1, int param2, void** param3) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Metacall_IsBase(true);
        return vkkeysequencewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KKeySequenceWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetacall(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Metacall_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceWidget_DevType(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->devType();
    } else {
        return self->KKeySequenceWidget::devType();
    }
}

// Base class handler implementation
int KKeySequenceWidget_QBaseDevType(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DevType_IsBase(true);
        return vkkeysequencewidget->devType();
    } else {
        return self->KKeySequenceWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDevType(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DevType_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_SetVisible(KKeySequenceWidget* self, bool visible) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setVisible(visible);
    } else {
        self->KKeySequenceWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseSetVisible(KKeySequenceWidget* self, bool visible) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SetVisible_IsBase(true);
        vkkeysequencewidget->setVisible(visible);
    } else {
        self->KKeySequenceWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSetVisible(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SetVisible_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KKeySequenceWidget_SizeHint(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return new QSize(vkkeysequencewidget->sizeHint());
    } else {
        return new QSize(((VirtualKKeySequenceWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KKeySequenceWidget_QBaseSizeHint(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SizeHint_IsBase(true);
        return new QSize(vkkeysequencewidget->sizeHint());
    } else {
        return new QSize(((VirtualKKeySequenceWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSizeHint(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SizeHint_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KKeySequenceWidget_MinimumSizeHint(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return new QSize(vkkeysequencewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKKeySequenceWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KKeySequenceWidget_QBaseMinimumSizeHint(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkkeysequencewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKKeySequenceWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMinimumSizeHint(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceWidget_HeightForWidth(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KKeySequenceWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KKeySequenceWidget_QBaseHeightForWidth(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HeightForWidth_IsBase(true);
        return vkkeysequencewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KKeySequenceWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHeightForWidth(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_HasHeightForWidth(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->hasHeightForWidth();
    } else {
        return self->KKeySequenceWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseHasHeightForWidth(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HasHeightForWidth_IsBase(true);
        return vkkeysequencewidget->hasHeightForWidth();
    } else {
        return self->KKeySequenceWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHasHeightForWidth(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KKeySequenceWidget_PaintEngine(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->paintEngine();
    } else {
        return self->KKeySequenceWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KKeySequenceWidget_QBasePaintEngine(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_PaintEngine_IsBase(true);
        return vkkeysequencewidget->paintEngine();
    } else {
        return self->KKeySequenceWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnPaintEngine(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_PaintEngine_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_MousePressEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->mousePressEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseMousePressEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MousePressEvent_IsBase(true);
        vkkeysequencewidget->mousePressEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMousePressEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_MouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseMouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseReleaseEvent_IsBase(true);
        vkkeysequencewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseReleaseEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_MouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseMouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseDoubleClickEvent_IsBase(true);
        vkkeysequencewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseDoubleClickEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_MouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseMouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseMoveEvent_IsBase(true);
        vkkeysequencewidget->mouseMoveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_WheelEvent(KKeySequenceWidget* self, QWheelEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->wheelEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseWheelEvent(KKeySequenceWidget* self, QWheelEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_WheelEvent_IsBase(true);
        vkkeysequencewidget->wheelEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnWheelEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_WheelEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_KeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->keyPressEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseKeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_KeyPressEvent_IsBase(true);
        vkkeysequencewidget->keyPressEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnKeyPressEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_KeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseKeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_KeyReleaseEvent_IsBase(true);
        vkkeysequencewidget->keyReleaseEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnKeyReleaseEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_FocusInEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->focusInEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseFocusInEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusInEvent_IsBase(true);
        vkkeysequencewidget->focusInEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusInEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_FocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->focusOutEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseFocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusOutEvent_IsBase(true);
        vkkeysequencewidget->focusOutEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusOutEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_EnterEvent(KKeySequenceWidget* self, QEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->enterEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseEnterEvent(KKeySequenceWidget* self, QEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_EnterEvent_IsBase(true);
        vkkeysequencewidget->enterEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnEnterEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_EnterEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_LeaveEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->leaveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseLeaveEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_LeaveEvent_IsBase(true);
        vkkeysequencewidget->leaveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnLeaveEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_PaintEvent(KKeySequenceWidget* self, QPaintEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->paintEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBasePaintEvent(KKeySequenceWidget* self, QPaintEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_PaintEvent_IsBase(true);
        vkkeysequencewidget->paintEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnPaintEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_PaintEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_MoveEvent(KKeySequenceWidget* self, QMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->moveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseMoveEvent(KKeySequenceWidget* self, QMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MoveEvent_IsBase(true);
        vkkeysequencewidget->moveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_MoveEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ResizeEvent(KKeySequenceWidget* self, QResizeEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->resizeEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseResizeEvent(KKeySequenceWidget* self, QResizeEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ResizeEvent_IsBase(true);
        vkkeysequencewidget->resizeEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnResizeEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_CloseEvent(KKeySequenceWidget* self, QCloseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->closeEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseCloseEvent(KKeySequenceWidget* self, QCloseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_CloseEvent_IsBase(true);
        vkkeysequencewidget->closeEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnCloseEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_CloseEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->contextMenuEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ContextMenuEvent_IsBase(true);
        vkkeysequencewidget->contextMenuEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnContextMenuEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_TabletEvent(KKeySequenceWidget* self, QTabletEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->tabletEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseTabletEvent(KKeySequenceWidget* self, QTabletEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_TabletEvent_IsBase(true);
        vkkeysequencewidget->tabletEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnTabletEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_TabletEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ActionEvent(KKeySequenceWidget* self, QActionEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->actionEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseActionEvent(KKeySequenceWidget* self, QActionEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ActionEvent_IsBase(true);
        vkkeysequencewidget->actionEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnActionEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ActionEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_DragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->dragEnterEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragEnterEvent_IsBase(true);
        vkkeysequencewidget->dragEnterEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragEnterEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_DragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->dragMoveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragMoveEvent_IsBase(true);
        vkkeysequencewidget->dragMoveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_DragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragLeaveEvent_IsBase(true);
        vkkeysequencewidget->dragLeaveEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragLeaveEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_DropEvent(KKeySequenceWidget* self, QDropEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->dropEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDropEvent(KKeySequenceWidget* self, QDropEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DropEvent_IsBase(true);
        vkkeysequencewidget->dropEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDropEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DropEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ShowEvent(KKeySequenceWidget* self, QShowEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->showEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseShowEvent(KKeySequenceWidget* self, QShowEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ShowEvent_IsBase(true);
        vkkeysequencewidget->showEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnShowEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ShowEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_HideEvent(KKeySequenceWidget* self, QHideEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->hideEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseHideEvent(KKeySequenceWidget* self, QHideEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HideEvent_IsBase(true);
        vkkeysequencewidget->hideEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHideEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_HideEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_NativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseNativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_NativeEvent_IsBase(true);
        return vkkeysequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnNativeEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_NativeEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ChangeEvent(KKeySequenceWidget* self, QEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->changeEvent(param1);
    } else {
        ((VirtualKKeySequenceWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseChangeEvent(KKeySequenceWidget* self, QEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ChangeEvent_IsBase(true);
        vkkeysequencewidget->changeEvent(param1);
    } else {
        ((VirtualKKeySequenceWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnChangeEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceWidget_Metric(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KKeySequenceWidget_QBaseMetric(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Metric_IsBase(true);
        return vkkeysequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetric(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Metric_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_InitPainter(const KKeySequenceWidget* self, QPainter* painter) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->initPainter(painter);
    } else {
        ((VirtualKKeySequenceWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseInitPainter(const KKeySequenceWidget* self, QPainter* painter) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InitPainter_IsBase(true);
        vkkeysequencewidget->initPainter(painter);
    } else {
        ((VirtualKKeySequenceWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInitPainter(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InitPainter_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KKeySequenceWidget_Redirected(const KKeySequenceWidget* self, QPoint* offset) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->redirected(offset);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KKeySequenceWidget_QBaseRedirected(const KKeySequenceWidget* self, QPoint* offset) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Redirected_IsBase(true);
        return vkkeysequencewidget->redirected(offset);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnRedirected(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Redirected_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KKeySequenceWidget_SharedPainter(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->sharedPainter();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KKeySequenceWidget_QBaseSharedPainter(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SharedPainter_IsBase(true);
        return vkkeysequencewidget->sharedPainter();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSharedPainter(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SharedPainter_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_InputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKKeySequenceWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseInputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InputMethodEvent_IsBase(true);
        vkkeysequencewidget->inputMethodEvent(param1);
    } else {
        ((VirtualKKeySequenceWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInputMethodEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KKeySequenceWidget_InputMethodQuery(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return new QVariant(vkkeysequencewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKKeySequenceWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KKeySequenceWidget_QBaseInputMethodQuery(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkkeysequencewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKKeySequenceWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInputMethodQuery(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_FocusNextPrevChild(KKeySequenceWidget* self, bool next) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseFocusNextPrevChild(KKeySequenceWidget* self, bool next) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusNextPrevChild_IsBase(true);
        return vkkeysequencewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusNextPrevChild(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_EventFilter(KKeySequenceWidget* self, QObject* watched, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->eventFilter(watched, event);
    } else {
        return self->KKeySequenceWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseEventFilter(KKeySequenceWidget* self, QObject* watched, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_EventFilter_IsBase(true);
        return vkkeysequencewidget->eventFilter(watched, event);
    } else {
        return self->KKeySequenceWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnEventFilter(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_EventFilter_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_TimerEvent(KKeySequenceWidget* self, QTimerEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->timerEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseTimerEvent(KKeySequenceWidget* self, QTimerEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_TimerEvent_IsBase(true);
        vkkeysequencewidget->timerEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnTimerEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_TimerEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ChildEvent(KKeySequenceWidget* self, QChildEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->childEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseChildEvent(KKeySequenceWidget* self, QChildEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ChildEvent_IsBase(true);
        vkkeysequencewidget->childEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnChildEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ChildEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_CustomEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->customEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseCustomEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_CustomEvent_IsBase(true);
        vkkeysequencewidget->customEvent(event);
    } else {
        ((VirtualKKeySequenceWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnCustomEvent(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_CustomEvent_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_ConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->connectNotify(*signal);
    } else {
        ((VirtualKKeySequenceWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ConnectNotify_IsBase(true);
        vkkeysequencewidget->connectNotify(*signal);
    } else {
        ((VirtualKKeySequenceWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnConnectNotify(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_DisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKKeySequenceWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DisconnectNotify_IsBase(true);
        vkkeysequencewidget->disconnectNotify(*signal);
    } else {
        ((VirtualKKeySequenceWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDisconnectNotify(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_UpdateMicroFocus(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->updateMicroFocus();
    } else {
        ((VirtualKKeySequenceWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseUpdateMicroFocus(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_UpdateMicroFocus_IsBase(true);
        vkkeysequencewidget->updateMicroFocus();
    } else {
        ((VirtualKKeySequenceWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnUpdateMicroFocus(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_Create(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->create();
    } else {
        ((VirtualKKeySequenceWidget*)self)->create();
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseCreate(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Create_IsBase(true);
        vkkeysequencewidget->create();
    } else {
        ((VirtualKKeySequenceWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnCreate(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Create_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KKeySequenceWidget_Destroy(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->destroy();
    } else {
        ((VirtualKKeySequenceWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KKeySequenceWidget_QBaseDestroy(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Destroy_IsBase(true);
        vkkeysequencewidget->destroy();
    } else {
        ((VirtualKKeySequenceWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDestroy(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Destroy_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_FocusNextChild(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->focusNextChild();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseFocusNextChild(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusNextChild_IsBase(true);
        return vkkeysequencewidget->focusNextChild();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusNextChild(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_FocusPreviousChild(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->focusPreviousChild();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseFocusPreviousChild(KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusPreviousChild_IsBase(true);
        return vkkeysequencewidget->focusPreviousChild();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusPreviousChild(KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KKeySequenceWidget_Sender(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->sender();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KKeySequenceWidget_QBaseSender(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Sender_IsBase(true);
        return vkkeysequencewidget->sender();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSender(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Sender_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceWidget_SenderSignalIndex(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->senderSignalIndex();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KKeySequenceWidget_QBaseSenderSignalIndex(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SenderSignalIndex_IsBase(true);
        return vkkeysequencewidget->senderSignalIndex();
    } else {
        return ((VirtualKKeySequenceWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSenderSignalIndex(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KKeySequenceWidget_Receivers(const KKeySequenceWidget* self, const char* signal) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->receivers(signal);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KKeySequenceWidget_QBaseReceivers(const KKeySequenceWidget* self, const char* signal) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Receivers_IsBase(true);
        return vkkeysequencewidget->receivers(signal);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnReceivers(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_Receivers_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KKeySequenceWidget_IsSignalConnected(const KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KKeySequenceWidget_QBaseIsSignalConnected(const KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_IsSignalConnected_IsBase(true);
        return vkkeysequencewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKKeySequenceWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnIsSignalConnected(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KKeySequenceWidget_GetDecodedMetricF(const KKeySequenceWidget* self, int metricA, int metricB) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        return vkkeysequencewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KKeySequenceWidget_QBaseGetDecodedMetricF(const KKeySequenceWidget* self, int metricA, int metricB) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_GetDecodedMetricF_IsBase(true);
        return vkkeysequencewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKKeySequenceWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnGetDecodedMetricF(const KKeySequenceWidget* self, intptr_t slot) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget && vkkeysequencewidget->isVirtualKKeySequenceWidget) {
        vkkeysequencewidget->setKKeySequenceWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KKeySequenceWidget_Delete(KKeySequenceWidget* self) {
    delete self;
}
