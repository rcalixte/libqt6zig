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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KKeySequenceWidget_Tr(const char* s) {
    auto _ret = KKeySequenceWidget::tr(s);
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
    KKeySequenceWidget::connect(self,
                                static_cast<void (KKeySequenceWidget::*)(const QKeySequence&)>(&KKeySequenceWidget::keySequenceChanged),
                                [self, slotFunc](const QKeySequence& seq) {
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
    KKeySequenceWidget::connect(self,
                                static_cast<void (KKeySequenceWidget::*)(const QKeySequence&, QAction*)>(&KKeySequenceWidget::stealShortcut),
                                [self, slotFunc](const QKeySequence& seq, QAction* action) {
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
    KKeySequenceWidget::connect(self,
                                static_cast<void (KKeySequenceWidget::*)()>(&KKeySequenceWidget::recordingChanged),
                                [self, slotFunc]() {
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
    auto _ret = KKeySequenceWidget::tr(s, c);
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
    auto _ret = KKeySequenceWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KKeySequenceWidget_SuperMetaObject(const KKeySequenceWidget* self) {
    return (QMetaObject*)self->KKeySequenceWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetaObject(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_metaobject_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KKeySequenceWidget_SuperMetacast(KKeySequenceWidget* self, const char* param1) {
    return self->KKeySequenceWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetacast(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_metacast_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KKeySequenceWidget_SuperMetacall(KKeySequenceWidget* self, int param1, int param2, void** param3) {
    return self->KKeySequenceWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetacall(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_metacall_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Metacall_Callback>(slot);
}

// Derived class handler implementation
int KKeySequenceWidget_DevType(const KKeySequenceWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KKeySequenceWidget_SuperDevType(const KKeySequenceWidget* self) {
    return self->KKeySequenceWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDevType(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_devtype_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_SetVisible(KKeySequenceWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KKeySequenceWidget_SuperSetVisible(KKeySequenceWidget* self, bool visible) {
    self->KKeySequenceWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSetVisible(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_setvisible_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KKeySequenceWidget_SizeHint(const KKeySequenceWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KKeySequenceWidget_SuperSizeHint(const KKeySequenceWidget* self) {
    return new QSize(self->KKeySequenceWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSizeHint(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_sizehint_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KKeySequenceWidget_MinimumSizeHint(const KKeySequenceWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KKeySequenceWidget_SuperMinimumSizeHint(const KKeySequenceWidget* self) {
    return new QSize(self->KKeySequenceWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMinimumSizeHint(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_minimumsizehint_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KKeySequenceWidget_HeightForWidth(const KKeySequenceWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KKeySequenceWidget_SuperHeightForWidth(const KKeySequenceWidget* self, int param1) {
    return self->KKeySequenceWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHeightForWidth(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_heightforwidth_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceWidget_HasHeightForWidth(const KKeySequenceWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KKeySequenceWidget_SuperHasHeightForWidth(const KKeySequenceWidget* self) {
    return self->KKeySequenceWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHasHeightForWidth(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_hasheightforwidth_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KKeySequenceWidget_PaintEngine(const KKeySequenceWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KKeySequenceWidget_SuperPaintEngine(const KKeySequenceWidget* self) {
    return self->KKeySequenceWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnPaintEngine(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_paintengine_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_MousePressEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperMousePressEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMousePressEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_mousepressevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_MouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperMouseReleaseEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseReleaseEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_mousereleaseevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_MouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperMouseDoubleClickEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseDoubleClickEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_MouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperMouseMoveEvent(KKeySequenceWidget* self, QMouseEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMouseMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_mousemoveevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_WheelEvent(KKeySequenceWidget* self, QWheelEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperWheelEvent(KKeySequenceWidget* self, QWheelEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnWheelEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_wheelevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_KeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperKeyPressEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnKeyPressEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_keypressevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_KeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperKeyReleaseEvent(KKeySequenceWidget* self, QKeyEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnKeyReleaseEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_keyreleaseevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_FocusInEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperFocusInEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusInEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_focusinevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_FocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperFocusOutEvent(KKeySequenceWidget* self, QFocusEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusOutEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_focusoutevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_EnterEvent(KKeySequenceWidget* self, QEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperEnterEvent(KKeySequenceWidget* self, QEnterEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnEnterEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_enterevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_LeaveEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperLeaveEvent(KKeySequenceWidget* self, QEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnLeaveEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_leaveevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_PaintEvent(KKeySequenceWidget* self, QPaintEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperPaintEvent(KKeySequenceWidget* self, QPaintEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnPaintEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_paintevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_MoveEvent(KKeySequenceWidget* self, QMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperMoveEvent(KKeySequenceWidget* self, QMoveEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_moveevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ResizeEvent(KKeySequenceWidget* self, QResizeEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperResizeEvent(KKeySequenceWidget* self, QResizeEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnResizeEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_resizeevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_CloseEvent(KKeySequenceWidget* self, QCloseEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperCloseEvent(KKeySequenceWidget* self, QCloseEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnCloseEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_closeevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperContextMenuEvent(KKeySequenceWidget* self, QContextMenuEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnContextMenuEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_contextmenuevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_TabletEvent(KKeySequenceWidget* self, QTabletEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperTabletEvent(KKeySequenceWidget* self, QTabletEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnTabletEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_tabletevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ActionEvent(KKeySequenceWidget* self, QActionEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperActionEvent(KKeySequenceWidget* self, QActionEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnActionEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_actionevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_DragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperDragEnterEvent(KKeySequenceWidget* self, QDragEnterEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragEnterEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_dragenterevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_DragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperDragMoveEvent(KKeySequenceWidget* self, QDragMoveEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragMoveEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_dragmoveevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_DragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperDragLeaveEvent(KKeySequenceWidget* self, QDragLeaveEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDragLeaveEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_dragleaveevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_DropEvent(KKeySequenceWidget* self, QDropEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperDropEvent(KKeySequenceWidget* self, QDropEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDropEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_dropevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ShowEvent(KKeySequenceWidget* self, QShowEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperShowEvent(KKeySequenceWidget* self, QShowEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnShowEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_showevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_HideEvent(KKeySequenceWidget* self, QHideEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperHideEvent(KKeySequenceWidget* self, QHideEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnHideEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_hideevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceWidget_NativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        return vkkeysequencewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KKeySequenceWidget_SuperNativeEvent(KKeySequenceWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        return vkkeysequencewidget->KKeySequenceWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnNativeEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_nativeevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ChangeEvent(KKeySequenceWidget* self, QEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperChangeEvent(KKeySequenceWidget* self, QEvent* param1) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnChangeEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_changeevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KKeySequenceWidget_Metric(const KKeySequenceWidget* self, int param1) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget) {
        return vkkeysequencewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KKeySequenceWidget_SuperMetric(const KKeySequenceWidget* self, int param1) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->KKeySequenceWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnMetric(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_metric_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_InitPainter(const KKeySequenceWidget* self, QPainter* painter) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget) {
        vkkeysequencewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperInitPainter(const KKeySequenceWidget* self, QPainter* painter) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        vkkeysequencewidget->KKeySequenceWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInitPainter(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_initpainter_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KKeySequenceWidget_Redirected(const KKeySequenceWidget* self, QPoint* offset) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget) {
        return vkkeysequencewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KKeySequenceWidget_SuperRedirected(const KKeySequenceWidget* self, QPoint* offset) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->KKeySequenceWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnRedirected(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_redirected_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KKeySequenceWidget_SharedPainter(const KKeySequenceWidget* self) {
    auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self));
    if (vkkeysequencewidget) {
        return vkkeysequencewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KKeySequenceWidget_SuperSharedPainter(const KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->KKeySequenceWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnSharedPainter(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_sharedpainter_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_InputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperInputMethodEvent(KKeySequenceWidget* self, QInputMethodEvent* param1) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInputMethodEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_inputmethodevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KKeySequenceWidget_InputMethodQuery(const KKeySequenceWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KKeySequenceWidget_SuperInputMethodQuery(const KKeySequenceWidget* self, int param1) {
    return new QVariant(self->KKeySequenceWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnInputMethodQuery(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self)))
        vkkeysequencewidget->kkeysequencewidget_inputmethodquery_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceWidget_FocusNextPrevChild(KKeySequenceWidget* self, bool next) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        return vkkeysequencewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KKeySequenceWidget_SuperFocusNextPrevChild(KKeySequenceWidget* self, bool next) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        return vkkeysequencewidget->KKeySequenceWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnFocusNextPrevChild(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_focusnextprevchild_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KKeySequenceWidget_EventFilter(KKeySequenceWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KKeySequenceWidget_SuperEventFilter(KKeySequenceWidget* self, QObject* watched, QEvent* event) {
    return self->KKeySequenceWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnEventFilter(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_eventfilter_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_TimerEvent(KKeySequenceWidget* self, QTimerEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperTimerEvent(KKeySequenceWidget* self, QTimerEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnTimerEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_timerevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ChildEvent(KKeySequenceWidget* self, QChildEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperChildEvent(KKeySequenceWidget* self, QChildEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnChildEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_childevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_CustomEvent(KKeySequenceWidget* self, QEvent* event) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperCustomEvent(KKeySequenceWidget* self, QEvent* event) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnCustomEvent(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_customevent_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_ConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperConnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnConnectNotify(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_connectnotify_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KKeySequenceWidget_DisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self);
    if (vkkeysequencewidget) {
        vkkeysequencewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KKeySequenceWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KKeySequenceWidget_SuperDisconnectNotify(KKeySequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->KKeySequenceWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KKeySequenceWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KKeySequenceWidget_OnDisconnectNotify(KKeySequenceWidget* self, intptr_t slot) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self))
        vkkeysequencewidget->kkeysequencewidget_disconnectnotify_callback = reinterpret_cast<VirtualKKeySequenceWidget::KKeySequenceWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KKeySequenceWidget_UpdateMicroFocus(KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->VirtualKKeySequenceWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KKeySequenceWidget_Create(KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->VirtualKKeySequenceWidget::create();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KKeySequenceWidget_Destroy(KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        vkkeysequencewidget->VirtualKKeySequenceWidget::destroy();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KKeySequenceWidget_FocusNextChild(KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KKeySequenceWidget_FocusPreviousChild(KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = dynamic_cast<VirtualKKeySequenceWidget*>(self)) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KKeySequenceWidget_Sender(const KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::sender();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KKeySequenceWidget_SenderSignalIndex(const KKeySequenceWidget* self) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KKeySequenceWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KKeySequenceWidget_Receivers(const KKeySequenceWidget* self, const char* signal) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KKeySequenceWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KKeySequenceWidget_IsSignalConnected(const KKeySequenceWidget* self, const QMetaMethod* signal) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KKeySequenceWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KKeySequenceWidget_GetDecodedMetricF(const KKeySequenceWidget* self, int metricA, int metricB) {
    if (auto* vkkeysequencewidget = const_cast<VirtualKKeySequenceWidget*>(dynamic_cast<const VirtualKKeySequenceWidget*>(self))) {
        return vkkeysequencewidget->VirtualKKeySequenceWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KKeySequenceWidget::getDecodedMetricF called without a directly constructed type");
}

void KKeySequenceWidget_Delete(KKeySequenceWidget* self) {
    delete self;
}
