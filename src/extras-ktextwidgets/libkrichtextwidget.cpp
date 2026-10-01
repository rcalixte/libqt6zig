#include <KRichTextEdit>
#include <KRichTextWidget>
#include <KTextEdit>
#include <QAbstractScrollArea>
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
#include <QFrame>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMargins>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
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
#include <QStyleOptionFrame>
#include <QTabletEvent>
#include <QTextCursor>
#include <QTextEdit>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <krichtextwidget.h>
#include "libkrichtextwidget.h"
#include "libkrichtextwidget.hxx"

KRichTextWidget* KRichTextWidget_new(QWidget* parent) {
    return new VirtualKRichTextWidget(parent);
}

KRichTextWidget* KRichTextWidget_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextWidget(text_QString);
}

KRichTextWidget* KRichTextWidget_new3(const libqt_string text, QWidget* parent) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualKRichTextWidget(text_QString, parent);
}

QMetaObject* KRichTextWidget_MetaObject(const KRichTextWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KRichTextWidget_Metacast(KRichTextWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KRichTextWidget_Metacall(KRichTextWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KRichTextWidget_Tr(const char* s) {
    auto _ret = KRichTextWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QAction* */ KRichTextWidget_CreateActions(KRichTextWidget* self) {
    QList<QAction*> _ret = self->createActions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KRichTextWidget_SetRichTextSupport(KRichTextWidget* self, const int* support) {
    self->setRichTextSupport((const KRichTextWidget::RichTextSupport&)(*support));
}

int KRichTextWidget_RichTextSupport(const KRichTextWidget* self) {
    return static_cast<int>(self->richTextSupport());
}

void KRichTextWidget_UpdateActionStates(KRichTextWidget* self) {
    self->updateActionStates();
}

void KRichTextWidget_SetActionsEnabled(KRichTextWidget* self, bool enabled) {
    self->setActionsEnabled(enabled);
}

void KRichTextWidget_MouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->mouseReleaseEvent(event);
    }
}

libqt_string KRichTextWidget_Tr2(const char* s, const char* c) {
    auto _ret = KRichTextWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KRichTextWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KRichTextWidget::tr(s, c, static_cast<int>(n));
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
QMetaObject* KRichTextWidget_SuperMetaObject(const KRichTextWidget* self) {
    return (QMetaObject*)self->KRichTextWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetaObject(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_metaobject_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KRichTextWidget_SuperMetacast(KRichTextWidget* self, const char* param1) {
    return self->KRichTextWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetacast(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_metacast_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KRichTextWidget_SuperMetacall(KRichTextWidget* self, int param1, int param2, void** param3) {
    return self->KRichTextWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetacall(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_metacall_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QAction* */ KRichTextWidget_SuperCreateActions(KRichTextWidget* self) {
    QList<QAction*> _ret = self->KRichTextWidget::createActions();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateActions(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_createactions_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateActions_Callback>(slot);
}

// Base class handler implementation
void KRichTextWidget_SuperMouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseReleaseEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_KeyPressEvent(KRichTextWidget* self, QKeyEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperKeyPressEvent(KRichTextWidget* self, QKeyEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnKeyPressEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_keypressevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_SetReadOnly(KRichTextWidget* self, bool readOnly) {
    self->setReadOnly(readOnly);
}

// Base class handler implementation
void KRichTextWidget_SuperSetReadOnly(KRichTextWidget* self, bool readOnly) {
    self->KRichTextWidget::setReadOnly(readOnly);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetReadOnly(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_setreadonly_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetReadOnly_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_SetCheckSpellingEnabled(KRichTextWidget* self, bool check) {
    self->setCheckSpellingEnabled(check);
}

// Base class handler implementation
void KRichTextWidget_SuperSetCheckSpellingEnabled(KRichTextWidget* self, bool check) {
    self->KRichTextWidget::setCheckSpellingEnabled(check);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetCheckSpellingEnabled(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_setcheckspellingenabled_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetCheckSpellingEnabled_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_CheckSpellingEnabled(const KRichTextWidget* self) {
    return self->checkSpellingEnabled();
}

// Base class handler implementation
bool KRichTextWidget_SuperCheckSpellingEnabled(const KRichTextWidget* self) {
    return self->KRichTextWidget::checkSpellingEnabled();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCheckSpellingEnabled(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_checkspellingenabled_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CheckSpellingEnabled_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_ShouldBlockBeSpellChecked(const KRichTextWidget* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->shouldBlockBeSpellChecked(block_QString);
}

// Base class handler implementation
bool KRichTextWidget_SuperShouldBlockBeSpellChecked(const KRichTextWidget* self, const libqt_string block) {
    QString block_QString = QString::fromUtf8(block.data, block.len);
    return self->KRichTextWidget::shouldBlockBeSpellChecked(block_QString);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnShouldBlockBeSpellChecked(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_shouldblockbespellchecked_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ShouldBlockBeSpellChecked_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_CreateHighlighter(KRichTextWidget* self) {
    self->createHighlighter();
}

// Base class handler implementation
void KRichTextWidget_SuperCreateHighlighter(KRichTextWidget* self) {
    self->KRichTextWidget::createHighlighter();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateHighlighter(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_createhighlighter_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateHighlighter_Callback>(slot);
}

// Derived class handler implementation
QMenu* KRichTextWidget_MousePopupMenu(KRichTextWidget* self) {
    return self->mousePopupMenu();
}

// Base class handler implementation
QMenu* KRichTextWidget_SuperMousePopupMenu(KRichTextWidget* self) {
    return self->KRichTextWidget::mousePopupMenu();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMousePopupMenu(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_mousepopupmenu_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MousePopupMenu_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_Event(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        return vkrichtextwidget->event(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperEvent(KRichTextWidget* self, QEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->KRichTextWidget::event(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_event_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_FocusInEvent(KRichTextWidget* self, QFocusEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->focusInEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperFocusInEvent(KRichTextWidget* self, QFocusEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::focusInEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusInEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_focusinevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DeleteWordBack(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->deleteWordBack();
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::deleteWordBack called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDeleteWordBack(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::deleteWordBack();
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::deleteWordBack called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDeleteWordBack(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_deletewordback_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DeleteWordBack_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DeleteWordForward(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->deleteWordForward();
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::deleteWordForward called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDeleteWordForward(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::deleteWordForward();
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::deleteWordForward called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDeleteWordForward(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_deletewordforward_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DeleteWordForward_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnContextMenuEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_contextmenuevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRichTextWidget_LoadResource(KRichTextWidget* self, int typeVal, const QUrl* name) {
    return new QVariant(self->loadResource(static_cast<int>(typeVal), *name));
}

// Base class handler implementation
QVariant* KRichTextWidget_SuperLoadResource(KRichTextWidget* self, int typeVal, const QUrl* name) {
    return new QVariant(self->KRichTextWidget::loadResource(static_cast<int>(typeVal), *name));
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnLoadResource(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_loadresource_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_LoadResource_Callback>(slot);
}

// Derived class handler implementation
QVariant* KRichTextWidget_InputMethodQuery(const KRichTextWidget* self, int property) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Base class handler implementation
QVariant* KRichTextWidget_SuperInputMethodQuery(const KRichTextWidget* self, int property) {
    return new QVariant(self->KRichTextWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInputMethodQuery(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_inputmethodquery_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_TimerEvent(KRichTextWidget* self, QTimerEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperTimerEvent(KRichTextWidget* self, QTimerEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnTimerEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_timerevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_KeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperKeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnKeyReleaseEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ResizeEvent(KRichTextWidget* self, QResizeEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperResizeEvent(KRichTextWidget* self, QResizeEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnResizeEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_resizeevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_PaintEvent(KRichTextWidget* self, QPaintEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperPaintEvent(KRichTextWidget* self, QPaintEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnPaintEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_paintevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_MousePressEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperMousePressEvent(KRichTextWidget* self, QMouseEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMousePressEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_mousepressevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_MouseMoveEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperMouseMoveEvent(KRichTextWidget* self, QMouseEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseMoveEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_mousemoveevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_MouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->mouseDoubleClickEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperMouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::mouseDoubleClickEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseDoubleClickEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_FocusNextPrevChild(KRichTextWidget* self, bool next) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        return vkrichtextwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperFocusNextPrevChild(KRichTextWidget* self, bool next) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->KRichTextWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusNextPrevChild(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->dragEnterEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragEnterEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_dragenterevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragLeaveEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_dragleaveevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragMoveEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_dragmoveevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DropEvent(KRichTextWidget* self, QDropEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->dropEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDropEvent(KRichTextWidget* self, QDropEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDropEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_dropevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_FocusOutEvent(KRichTextWidget* self, QFocusEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperFocusOutEvent(KRichTextWidget* self, QFocusEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusOutEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_focusoutevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ShowEvent(KRichTextWidget* self, QShowEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperShowEvent(KRichTextWidget* self, QShowEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnShowEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_showevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ChangeEvent(KRichTextWidget* self, QEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperChangeEvent(KRichTextWidget* self, QEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnChangeEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_changeevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_WheelEvent(KRichTextWidget* self, QWheelEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperWheelEvent(KRichTextWidget* self, QWheelEvent* e) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnWheelEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_wheelevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
QMimeData* KRichTextWidget_CreateMimeDataFromSelection(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        return vkrichtextwidget->createMimeDataFromSelection();
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::createMimeDataFromSelection called without a directly constructed type");
    }
}

// Base class handler implementation
QMimeData* KRichTextWidget_SuperCreateMimeDataFromSelection(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->KRichTextWidget::createMimeDataFromSelection();
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::createMimeDataFromSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateMimeDataFromSelection(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_createmimedatafromselection_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateMimeDataFromSelection_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_CanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        return vkrichtextwidget->canInsertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::canInsertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperCanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->KRichTextWidget::canInsertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::canInsertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCanInsertFromMimeData(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_caninsertfrommimedata_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CanInsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_InsertFromMimeData(KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->insertFromMimeData(source);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::insertFromMimeData called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperInsertFromMimeData(KRichTextWidget* self, const QMimeData* source) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::insertFromMimeData(source);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::insertFromMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInsertFromMimeData(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_insertfrommimedata_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InsertFromMimeData_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_InputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperInputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInputMethodEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_inputmethodevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ScrollContentsBy(KRichTextWidget* self, int dx, int dy) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperScrollContentsBy(KRichTextWidget* self, int dx, int dy) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnScrollContentsBy(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_scrollcontentsby_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->doSetTextCursor(*cursor);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::doSetTextCursor called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::doSetTextCursor(*cursor);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::doSetTextCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDoSetTextCursor(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_dosettextcursor_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DoSetTextCursor_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextWidget_MinimumSizeHint(const KRichTextWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KRichTextWidget_SuperMinimumSizeHint(const KRichTextWidget* self) {
    return new QSize(self->KRichTextWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMinimumSizeHint(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_minimumsizehint_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextWidget_SizeHint(const KRichTextWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KRichTextWidget_SuperSizeHint(const KRichTextWidget* self) {
    return new QSize(self->KRichTextWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSizeHint(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_sizehint_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_SetupViewport(KRichTextWidget* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void KRichTextWidget_SuperSetupViewport(KRichTextWidget* self, QWidget* viewport) {
    self->KRichTextWidget::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetupViewport(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_setupviewport_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_EventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        return vkrichtextwidget->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperEventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->KRichTextWidget::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEventFilter(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_eventfilter_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_ViewportEvent(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        return vkrichtextwidget->viewportEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperViewportEvent(KRichTextWidget* self, QEvent* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->KRichTextWidget::viewportEvent(param1);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnViewportEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_viewportevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* KRichTextWidget_ViewportSizeHint(const KRichTextWidget* self) {
    return new QSize((self->*&VirtualKRichTextWidget::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* KRichTextWidget_SuperViewportSizeHint(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        return new QSize(vkrichtextwidget->viewportSizeHint());
    qFatal("Error: Protected virtual method KRichTextWidget::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnViewportSizeHint(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_viewportsizehint_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_InitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        vkrichtextwidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperInitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        vkrichtextwidget->KRichTextWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInitStyleOption(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_initstyleoption_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KRichTextWidget_DevType(const KRichTextWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KRichTextWidget_SuperDevType(const KRichTextWidget* self) {
    return self->KRichTextWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDevType(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_devtype_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_SetVisible(KRichTextWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KRichTextWidget_SuperSetVisible(KRichTextWidget* self, bool visible) {
    self->KRichTextWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetVisible(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_setvisible_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KRichTextWidget_HeightForWidth(const KRichTextWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KRichTextWidget_SuperHeightForWidth(const KRichTextWidget* self, int param1) {
    return self->KRichTextWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHeightForWidth(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_heightforwidth_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_HasHeightForWidth(const KRichTextWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KRichTextWidget_SuperHasHeightForWidth(const KRichTextWidget* self) {
    return self->KRichTextWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHasHeightForWidth(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KRichTextWidget_PaintEngine(const KRichTextWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KRichTextWidget_SuperPaintEngine(const KRichTextWidget* self) {
    return self->KRichTextWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnPaintEngine(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_paintengine_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_EnterEvent(KRichTextWidget* self, QEnterEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperEnterEvent(KRichTextWidget* self, QEnterEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEnterEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_enterevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_LeaveEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperLeaveEvent(KRichTextWidget* self, QEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnLeaveEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_leaveevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_MoveEvent(KRichTextWidget* self, QMoveEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperMoveEvent(KRichTextWidget* self, QMoveEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMoveEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_moveevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_CloseEvent(KRichTextWidget* self, QCloseEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperCloseEvent(KRichTextWidget* self, QCloseEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCloseEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_closeevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_TabletEvent(KRichTextWidget* self, QTabletEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperTabletEvent(KRichTextWidget* self, QTabletEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnTabletEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_tabletevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ActionEvent(KRichTextWidget* self, QActionEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperActionEvent(KRichTextWidget* self, QActionEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnActionEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_actionevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_HideEvent(KRichTextWidget* self, QHideEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperHideEvent(KRichTextWidget* self, QHideEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHideEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_hideevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KRichTextWidget_NativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        return vkrichtextwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KRichTextWidget_SuperNativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->KRichTextWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnNativeEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_nativeevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KRichTextWidget_Metric(const KRichTextWidget* self, int param1) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        return vkrichtextwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KRichTextWidget_SuperMetric(const KRichTextWidget* self, int param1) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->KRichTextWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetric(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_metric_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_InitPainter(const KRichTextWidget* self, QPainter* painter) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        vkrichtextwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperInitPainter(const KRichTextWidget* self, QPainter* painter) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        vkrichtextwidget->KRichTextWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInitPainter(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_initpainter_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KRichTextWidget_Redirected(const KRichTextWidget* self, QPoint* offset) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        return vkrichtextwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KRichTextWidget_SuperRedirected(const KRichTextWidget* self, QPoint* offset) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->KRichTextWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnRedirected(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_redirected_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KRichTextWidget_SharedPainter(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget) {
        return vkrichtextwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KRichTextWidget_SuperSharedPainter(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->KRichTextWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSharedPainter(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        vkrichtextwidget->krichtextwidget_sharedpainter_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ChildEvent(KRichTextWidget* self, QChildEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperChildEvent(KRichTextWidget* self, QChildEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnChildEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_childevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_CustomEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperCustomEvent(KRichTextWidget* self, QEvent* event) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCustomEvent(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_customevent_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_ConnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperConnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnConnectNotify(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_connectnotify_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KRichTextWidget_DisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget) {
        vkrichtextwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KRichTextWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KRichTextWidget_SuperDisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->KRichTextWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KRichTextWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDisconnectNotify(KRichTextWidget* self, intptr_t slot) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self))
        vkrichtextwidget->krichtextwidget_disconnectnotify_callback = reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KRichTextWidget_SlotDoReplace(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotDoReplace();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotDoReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotReplaceNext(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotReplaceNext();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotReplaceNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotDoFind(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotDoFind();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotDoFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotFind(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotFind();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotFind called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotFindNext(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotFindNext();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotFindNext called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotFindPrevious(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotFindPrevious();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotFindPrevious called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotReplace(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotReplace();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotReplace called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SlotSpeakText(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::slotSpeakText();
    } else
        qFatal("Error: Protected method KRichTextWidget::slotSpeakText called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_ZoomInF(KRichTextWidget* self, float range) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::zoomInF(static_cast<float>(range));
    } else
        qFatal("Error: Protected method KRichTextWidget::zoomInF called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_SetViewportMargins(KRichTextWidget* self, int left, int top, int right, int bottom) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method KRichTextWidget::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* KRichTextWidget_ViewportMargins(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self)))
        return new QMargins(vkrichtextwidget->viewportMargins());
    qFatal("Error: Protected method KRichTextWidget::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_DrawFrame(KRichTextWidget* self, QPainter* param1) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method KRichTextWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_UpdateMicroFocus(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KRichTextWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_Create(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::create();
    } else
        qFatal("Error: Protected method KRichTextWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KRichTextWidget_Destroy(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        vkrichtextwidget->VirtualKRichTextWidget::destroy();
    } else
        qFatal("Error: Protected method KRichTextWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextWidget_FocusNextChild(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->VirtualKRichTextWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KRichTextWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextWidget_FocusPreviousChild(KRichTextWidget* self) {
    if (auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self)) {
        return vkrichtextwidget->VirtualKRichTextWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KRichTextWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KRichTextWidget_Sender(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->VirtualKRichTextWidget::sender();
    } else
        qFatal("Error: Protected method KRichTextWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KRichTextWidget_SenderSignalIndex(const KRichTextWidget* self) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->VirtualKRichTextWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KRichTextWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KRichTextWidget_Receivers(const KRichTextWidget* self, const char* signal) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->VirtualKRichTextWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KRichTextWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KRichTextWidget_IsSignalConnected(const KRichTextWidget* self, const QMetaMethod* signal) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->VirtualKRichTextWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KRichTextWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KRichTextWidget_GetDecodedMetricF(const KRichTextWidget* self, int metricA, int metricB) {
    if (auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self))) {
        return vkrichtextwidget->VirtualKRichTextWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KRichTextWidget::getDecodedMetricF called without a directly constructed type");
}

void KRichTextWidget_Delete(KRichTextWidget* self) {
    delete self;
}
