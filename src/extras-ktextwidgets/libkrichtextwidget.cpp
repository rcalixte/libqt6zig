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
#include <QByteArray>
#include <cstring>
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
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKRichTextWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KRichTextWidget_Tr(const char* s) {
    QString _ret = KRichTextWidget::tr(s);
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
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        QList<QAction*> _ret = self->createActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = ((VirtualKRichTextWidget*)self)->createActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
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
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->mouseReleaseEvent(event);
    }
}

libqt_string KRichTextWidget_Tr2(const char* s, const char* c) {
    QString _ret = KRichTextWidget::tr(s, c);
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
    QString _ret = KRichTextWidget::tr(s, c, static_cast<int>(n));
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
int KRichTextWidget_QBaseMetacall(KRichTextWidget* self, int param1, int param2, void** param3) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Metacall_IsBase(true);
        return vkrichtextwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KRichTextWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetacall(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Metacall_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QAction* */ KRichTextWidget_QBaseCreateActions(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateActions_IsBase(true);
        QList<QAction*> _ret = vkrichtextwidget->createActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = self->KRichTextWidget::createActions();
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateActions(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateActions_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateActions_Callback>(slot));
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseMouseReleaseEvent(KRichTextWidget* self, QMouseEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseReleaseEvent_IsBase(true);
        vkrichtextwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseReleaseEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_KeyPressEvent(KRichTextWidget* self, QKeyEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->keyPressEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseKeyPressEvent(KRichTextWidget* self, QKeyEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_KeyPressEvent_IsBase(true);
        vkrichtextwidget->keyPressEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnKeyPressEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SetReadOnly(KRichTextWidget* self, bool readOnly) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setReadOnly(readOnly);
    } else {
        self->KRichTextWidget::setReadOnly(readOnly);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSetReadOnly(KRichTextWidget* self, bool readOnly) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetReadOnly_IsBase(true);
        vkrichtextwidget->setReadOnly(readOnly);
    } else {
        self->KRichTextWidget::setReadOnly(readOnly);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetReadOnly(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetReadOnly_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetReadOnly_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SetCheckSpellingEnabled(KRichTextWidget* self, bool check) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setCheckSpellingEnabled(check);
    } else {
        self->KRichTextWidget::setCheckSpellingEnabled(check);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSetCheckSpellingEnabled(KRichTextWidget* self, bool check) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetCheckSpellingEnabled_IsBase(true);
        vkrichtextwidget->setCheckSpellingEnabled(check);
    } else {
        self->KRichTextWidget::setCheckSpellingEnabled(check);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetCheckSpellingEnabled(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetCheckSpellingEnabled_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetCheckSpellingEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_CheckSpellingEnabled(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->checkSpellingEnabled();
    } else {
        return self->KRichTextWidget::checkSpellingEnabled();
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseCheckSpellingEnabled(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CheckSpellingEnabled_IsBase(true);
        return vkrichtextwidget->checkSpellingEnabled();
    } else {
        return self->KRichTextWidget::checkSpellingEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCheckSpellingEnabled(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CheckSpellingEnabled_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CheckSpellingEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_ShouldBlockBeSpellChecked(const KRichTextWidget* self, const libqt_string block) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    QString block_QString = QString::fromUtf8(block.data, block.len);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->shouldBlockBeSpellChecked(block_QString);
    } else {
        return self->KRichTextWidget::shouldBlockBeSpellChecked(block_QString);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseShouldBlockBeSpellChecked(const KRichTextWidget* self, const libqt_string block) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    QString block_QString = QString::fromUtf8(block.data, block.len);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ShouldBlockBeSpellChecked_IsBase(true);
        return vkrichtextwidget->shouldBlockBeSpellChecked(block_QString);
    } else {
        return self->KRichTextWidget::shouldBlockBeSpellChecked(block_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnShouldBlockBeSpellChecked(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ShouldBlockBeSpellChecked_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ShouldBlockBeSpellChecked_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_CreateHighlighter(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->createHighlighter();
    } else {
        self->KRichTextWidget::createHighlighter();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseCreateHighlighter(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateHighlighter_IsBase(true);
        vkrichtextwidget->createHighlighter();
    } else {
        self->KRichTextWidget::createHighlighter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateHighlighter(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateHighlighter_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateHighlighter_Callback>(slot));
    }
}

// Derived class handler implementation
QMenu* KRichTextWidget_MousePopupMenu(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->mousePopupMenu();
    } else {
        return self->KRichTextWidget::mousePopupMenu();
    }
}

// Base class handler implementation
QMenu* KRichTextWidget_QBaseMousePopupMenu(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MousePopupMenu_IsBase(true);
        return vkrichtextwidget->mousePopupMenu();
    } else {
        return self->KRichTextWidget::mousePopupMenu();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMousePopupMenu(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MousePopupMenu_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MousePopupMenu_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_Event(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->event(param1);
    } else {
        return ((VirtualKRichTextWidget*)self)->event(param1);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseEvent(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Event_IsBase(true);
        return vkrichtextwidget->event(param1);
    } else {
        return ((VirtualKRichTextWidget*)self)->event(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Event_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_FocusInEvent(KRichTextWidget* self, QFocusEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->focusInEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->focusInEvent(param1);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseFocusInEvent(KRichTextWidget* self, QFocusEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusInEvent_IsBase(true);
        vkrichtextwidget->focusInEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->focusInEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusInEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DeleteWordBack(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->deleteWordBack();
    } else {
        ((VirtualKRichTextWidget*)self)->deleteWordBack();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDeleteWordBack(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DeleteWordBack_IsBase(true);
        vkrichtextwidget->deleteWordBack();
    } else {
        ((VirtualKRichTextWidget*)self)->deleteWordBack();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDeleteWordBack(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DeleteWordBack_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DeleteWordBack_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DeleteWordForward(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->deleteWordForward();
    } else {
        ((VirtualKRichTextWidget*)self)->deleteWordForward();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDeleteWordForward(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DeleteWordForward_IsBase(true);
        vkrichtextwidget->deleteWordForward();
    } else {
        ((VirtualKRichTextWidget*)self)->deleteWordForward();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDeleteWordForward(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DeleteWordForward_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DeleteWordForward_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->contextMenuEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseContextMenuEvent(KRichTextWidget* self, QContextMenuEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ContextMenuEvent_IsBase(true);
        vkrichtextwidget->contextMenuEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnContextMenuEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRichTextWidget_LoadResource(KRichTextWidget* self, int typeVal, const QUrl* name) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QVariant(vkrichtextwidget->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKRichTextWidget*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Base class handler implementation
QVariant* KRichTextWidget_QBaseLoadResource(KRichTextWidget* self, int typeVal, const QUrl* name) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_LoadResource_IsBase(true);
        return new QVariant(vkrichtextwidget->loadResource(static_cast<int>(typeVal), *name));
    } else {
        return new QVariant(((VirtualKRichTextWidget*)self)->loadResource(static_cast<int>(typeVal), *name));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnLoadResource(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_LoadResource_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_LoadResource_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KRichTextWidget_InputMethodQuery(const KRichTextWidget* self, int property) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QVariant(vkrichtextwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKRichTextWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Base class handler implementation
QVariant* KRichTextWidget_QBaseInputMethodQuery(const KRichTextWidget* self, int property) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkrichtextwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    } else {
        return new QVariant(((VirtualKRichTextWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(property)));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInputMethodQuery(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_TimerEvent(KRichTextWidget* self, QTimerEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->timerEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseTimerEvent(KRichTextWidget* self, QTimerEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_TimerEvent_IsBase(true);
        vkrichtextwidget->timerEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnTimerEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_TimerEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_KeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->keyReleaseEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseKeyReleaseEvent(KRichTextWidget* self, QKeyEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_KeyReleaseEvent_IsBase(true);
        vkrichtextwidget->keyReleaseEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnKeyReleaseEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ResizeEvent(KRichTextWidget* self, QResizeEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->resizeEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseResizeEvent(KRichTextWidget* self, QResizeEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ResizeEvent_IsBase(true);
        vkrichtextwidget->resizeEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnResizeEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_PaintEvent(KRichTextWidget* self, QPaintEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->paintEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBasePaintEvent(KRichTextWidget* self, QPaintEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_PaintEvent_IsBase(true);
        vkrichtextwidget->paintEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnPaintEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_PaintEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_MousePressEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->mousePressEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseMousePressEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MousePressEvent_IsBase(true);
        vkrichtextwidget->mousePressEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMousePressEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_MouseMoveEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->mouseMoveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseMouseMoveEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseMoveEvent_IsBase(true);
        vkrichtextwidget->mouseMoveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseMoveEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_MouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mouseDoubleClickEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseMouseDoubleClickEvent(KRichTextWidget* self, QMouseEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseDoubleClickEvent_IsBase(true);
        vkrichtextwidget->mouseDoubleClickEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->mouseDoubleClickEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMouseDoubleClickEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_FocusNextPrevChild(KRichTextWidget* self, bool next) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKRichTextWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseFocusNextPrevChild(KRichTextWidget* self, bool next) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusNextPrevChild_IsBase(true);
        return vkrichtextwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKRichTextWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusNextPrevChild(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->dragEnterEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragEnterEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDragEnterEvent(KRichTextWidget* self, QDragEnterEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragEnterEvent_IsBase(true);
        vkrichtextwidget->dragEnterEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragEnterEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragEnterEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->dragLeaveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDragLeaveEvent(KRichTextWidget* self, QDragLeaveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragLeaveEvent_IsBase(true);
        vkrichtextwidget->dragLeaveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragLeaveEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->dragMoveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDragMoveEvent(KRichTextWidget* self, QDragMoveEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragMoveEvent_IsBase(true);
        vkrichtextwidget->dragMoveEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDragMoveEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DropEvent(KRichTextWidget* self, QDropEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->dropEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dropEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDropEvent(KRichTextWidget* self, QDropEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DropEvent_IsBase(true);
        vkrichtextwidget->dropEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->dropEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDropEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DropEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_FocusOutEvent(KRichTextWidget* self, QFocusEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->focusOutEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseFocusOutEvent(KRichTextWidget* self, QFocusEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusOutEvent_IsBase(true);
        vkrichtextwidget->focusOutEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusOutEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ShowEvent(KRichTextWidget* self, QShowEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->showEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseShowEvent(KRichTextWidget* self, QShowEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ShowEvent_IsBase(true);
        vkrichtextwidget->showEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnShowEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ShowEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ChangeEvent(KRichTextWidget* self, QEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->changeEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseChangeEvent(KRichTextWidget* self, QEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ChangeEvent_IsBase(true);
        vkrichtextwidget->changeEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnChangeEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_WheelEvent(KRichTextWidget* self, QWheelEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->wheelEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseWheelEvent(KRichTextWidget* self, QWheelEvent* e) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_WheelEvent_IsBase(true);
        vkrichtextwidget->wheelEvent(e);
    } else {
        ((VirtualKRichTextWidget*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnWheelEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_WheelEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* KRichTextWidget_CreateMimeDataFromSelection(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->createMimeDataFromSelection();
    } else {
        return ((VirtualKRichTextWidget*)self)->createMimeDataFromSelection();
    }
}

// Base class handler implementation
QMimeData* KRichTextWidget_QBaseCreateMimeDataFromSelection(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateMimeDataFromSelection_IsBase(true);
        return vkrichtextwidget->createMimeDataFromSelection();
    } else {
        return ((VirtualKRichTextWidget*)self)->createMimeDataFromSelection();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreateMimeDataFromSelection(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CreateMimeDataFromSelection_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CreateMimeDataFromSelection_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_CanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->canInsertFromMimeData(source);
    } else {
        return ((VirtualKRichTextWidget*)self)->canInsertFromMimeData(source);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseCanInsertFromMimeData(const KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CanInsertFromMimeData_IsBase(true);
        return vkrichtextwidget->canInsertFromMimeData(source);
    } else {
        return ((VirtualKRichTextWidget*)self)->canInsertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCanInsertFromMimeData(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CanInsertFromMimeData_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CanInsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_InsertFromMimeData(KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->insertFromMimeData(source);
    } else {
        ((VirtualKRichTextWidget*)self)->insertFromMimeData(source);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseInsertFromMimeData(KRichTextWidget* self, const QMimeData* source) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InsertFromMimeData_IsBase(true);
        vkrichtextwidget->insertFromMimeData(source);
    } else {
        ((VirtualKRichTextWidget*)self)->insertFromMimeData(source);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInsertFromMimeData(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InsertFromMimeData_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InsertFromMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_InputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseInputMethodEvent(KRichTextWidget* self, QInputMethodEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InputMethodEvent_IsBase(true);
        vkrichtextwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInputMethodEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ScrollContentsBy(KRichTextWidget* self, int dx, int dy) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKRichTextWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseScrollContentsBy(KRichTextWidget* self, int dx, int dy) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ScrollContentsBy_IsBase(true);
        vkrichtextwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualKRichTextWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnScrollContentsBy(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->doSetTextCursor(*cursor);
    } else {
        ((VirtualKRichTextWidget*)self)->doSetTextCursor(*cursor);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDoSetTextCursor(KRichTextWidget* self, const QTextCursor* cursor) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DoSetTextCursor_IsBase(true);
        vkrichtextwidget->doSetTextCursor(*cursor);
    } else {
        ((VirtualKRichTextWidget*)self)->doSetTextCursor(*cursor);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDoSetTextCursor(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DoSetTextCursor_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DoSetTextCursor_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextWidget_MinimumSizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QSize(vkrichtextwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRichTextWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KRichTextWidget_QBaseMinimumSizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkrichtextwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKRichTextWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMinimumSizeHint(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextWidget_SizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QSize(vkrichtextwidget->sizeHint());
    } else {
        return new QSize(((VirtualKRichTextWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KRichTextWidget_QBaseSizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SizeHint_IsBase(true);
        return new QSize(vkrichtextwidget->sizeHint());
    } else {
        return new QSize(((VirtualKRichTextWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSizeHint(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SizeHint_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SetupViewport(KRichTextWidget* self, QWidget* viewport) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setupViewport(viewport);
    } else {
        self->KRichTextWidget::setupViewport(viewport);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSetupViewport(KRichTextWidget* self, QWidget* viewport) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetupViewport_IsBase(true);
        vkrichtextwidget->setupViewport(viewport);
    } else {
        self->KRichTextWidget::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetupViewport(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetupViewport_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_EventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->eventFilter(param1, param2);
    } else {
        return ((VirtualKRichTextWidget*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseEventFilter(KRichTextWidget* self, QObject* param1, QEvent* param2) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_EventFilter_IsBase(true);
        return vkrichtextwidget->eventFilter(param1, param2);
    } else {
        return ((VirtualKRichTextWidget*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEventFilter(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_EventFilter_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_ViewportEvent(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->viewportEvent(param1);
    } else {
        return ((VirtualKRichTextWidget*)self)->viewportEvent(param1);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseViewportEvent(KRichTextWidget* self, QEvent* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportEvent_IsBase(true);
        return vkrichtextwidget->viewportEvent(param1);
    } else {
        return ((VirtualKRichTextWidget*)self)->viewportEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnViewportEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KRichTextWidget_ViewportSizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QSize(vkrichtextwidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* KRichTextWidget_QBaseViewportSizeHint(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vkrichtextwidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnViewportSizeHint(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_InitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->initStyleOption(option);
    } else {
        ((VirtualKRichTextWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseInitStyleOption(const KRichTextWidget* self, QStyleOptionFrame* option) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InitStyleOption_IsBase(true);
        vkrichtextwidget->initStyleOption(option);
    } else {
        ((VirtualKRichTextWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInitStyleOption(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InitStyleOption_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextWidget_DevType(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->devType();
    } else {
        return self->KRichTextWidget::devType();
    }
}

// Base class handler implementation
int KRichTextWidget_QBaseDevType(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DevType_IsBase(true);
        return vkrichtextwidget->devType();
    } else {
        return self->KRichTextWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDevType(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DevType_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SetVisible(KRichTextWidget* self, bool visible) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setVisible(visible);
    } else {
        self->KRichTextWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSetVisible(KRichTextWidget* self, bool visible) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetVisible_IsBase(true);
        vkrichtextwidget->setVisible(visible);
    } else {
        self->KRichTextWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetVisible(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetVisible_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextWidget_HeightForWidth(const KRichTextWidget* self, int param1) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRichTextWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KRichTextWidget_QBaseHeightForWidth(const KRichTextWidget* self, int param1) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HeightForWidth_IsBase(true);
        return vkrichtextwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KRichTextWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHeightForWidth(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_HasHeightForWidth(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->hasHeightForWidth();
    } else {
        return self->KRichTextWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseHasHeightForWidth(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HasHeightForWidth_IsBase(true);
        return vkrichtextwidget->hasHeightForWidth();
    } else {
        return self->KRichTextWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHasHeightForWidth(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KRichTextWidget_PaintEngine(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->paintEngine();
    } else {
        return self->KRichTextWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KRichTextWidget_QBasePaintEngine(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_PaintEngine_IsBase(true);
        return vkrichtextwidget->paintEngine();
    } else {
        return self->KRichTextWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnPaintEngine(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_PaintEngine_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_EnterEvent(KRichTextWidget* self, QEnterEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->enterEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseEnterEvent(KRichTextWidget* self, QEnterEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_EnterEvent_IsBase(true);
        vkrichtextwidget->enterEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnEnterEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_EnterEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_LeaveEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->leaveEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseLeaveEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_LeaveEvent_IsBase(true);
        vkrichtextwidget->leaveEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnLeaveEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_MoveEvent(KRichTextWidget* self, QMoveEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->moveEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseMoveEvent(KRichTextWidget* self, QMoveEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MoveEvent_IsBase(true);
        vkrichtextwidget->moveEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMoveEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_MoveEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_CloseEvent(KRichTextWidget* self, QCloseEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->closeEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseCloseEvent(KRichTextWidget* self, QCloseEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CloseEvent_IsBase(true);
        vkrichtextwidget->closeEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCloseEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CloseEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_TabletEvent(KRichTextWidget* self, QTabletEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->tabletEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseTabletEvent(KRichTextWidget* self, QTabletEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_TabletEvent_IsBase(true);
        vkrichtextwidget->tabletEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnTabletEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_TabletEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ActionEvent(KRichTextWidget* self, QActionEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->actionEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseActionEvent(KRichTextWidget* self, QActionEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ActionEvent_IsBase(true);
        vkrichtextwidget->actionEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnActionEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ActionEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_HideEvent(KRichTextWidget* self, QHideEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->hideEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseHideEvent(KRichTextWidget* self, QHideEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HideEvent_IsBase(true);
        vkrichtextwidget->hideEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnHideEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_HideEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_NativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRichTextWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseNativeEvent(KRichTextWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_NativeEvent_IsBase(true);
        return vkrichtextwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKRichTextWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnNativeEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_NativeEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextWidget_Metric(const KRichTextWidget* self, int param1) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRichTextWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KRichTextWidget_QBaseMetric(const KRichTextWidget* self, int param1) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Metric_IsBase(true);
        return vkrichtextwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKRichTextWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnMetric(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Metric_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_InitPainter(const KRichTextWidget* self, QPainter* painter) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->initPainter(painter);
    } else {
        ((VirtualKRichTextWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseInitPainter(const KRichTextWidget* self, QPainter* painter) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InitPainter_IsBase(true);
        vkrichtextwidget->initPainter(painter);
    } else {
        ((VirtualKRichTextWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnInitPainter(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_InitPainter_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KRichTextWidget_Redirected(const KRichTextWidget* self, QPoint* offset) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->redirected(offset);
    } else {
        return ((VirtualKRichTextWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KRichTextWidget_QBaseRedirected(const KRichTextWidget* self, QPoint* offset) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Redirected_IsBase(true);
        return vkrichtextwidget->redirected(offset);
    } else {
        return ((VirtualKRichTextWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnRedirected(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Redirected_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KRichTextWidget_SharedPainter(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->sharedPainter();
    } else {
        return ((VirtualKRichTextWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KRichTextWidget_QBaseSharedPainter(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SharedPainter_IsBase(true);
        return vkrichtextwidget->sharedPainter();
    } else {
        return ((VirtualKRichTextWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSharedPainter(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SharedPainter_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ChildEvent(KRichTextWidget* self, QChildEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->childEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseChildEvent(KRichTextWidget* self, QChildEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ChildEvent_IsBase(true);
        vkrichtextwidget->childEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnChildEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ChildEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_CustomEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->customEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseCustomEvent(KRichTextWidget* self, QEvent* event) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CustomEvent_IsBase(true);
        vkrichtextwidget->customEvent(event);
    } else {
        ((VirtualKRichTextWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCustomEvent(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_CustomEvent_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ConnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->connectNotify(*signal);
    } else {
        ((VirtualKRichTextWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseConnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ConnectNotify_IsBase(true);
        vkrichtextwidget->connectNotify(*signal);
    } else {
        ((VirtualKRichTextWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnConnectNotify(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKRichTextWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDisconnectNotify(KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DisconnectNotify_IsBase(true);
        vkrichtextwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKRichTextWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDisconnectNotify(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotDoReplace(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotDoReplace();
    } else {
        ((VirtualKRichTextWidget*)self)->slotDoReplace();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotDoReplace(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotDoReplace_IsBase(true);
        vkrichtextwidget->slotDoReplace();
    } else {
        ((VirtualKRichTextWidget*)self)->slotDoReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotDoReplace(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotDoReplace_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotDoReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotReplaceNext(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotReplaceNext();
    } else {
        ((VirtualKRichTextWidget*)self)->slotReplaceNext();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotReplaceNext(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotReplaceNext_IsBase(true);
        vkrichtextwidget->slotReplaceNext();
    } else {
        ((VirtualKRichTextWidget*)self)->slotReplaceNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotReplaceNext(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotReplaceNext_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotReplaceNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotDoFind(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotDoFind();
    } else {
        ((VirtualKRichTextWidget*)self)->slotDoFind();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotDoFind(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotDoFind_IsBase(true);
        vkrichtextwidget->slotDoFind();
    } else {
        ((VirtualKRichTextWidget*)self)->slotDoFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotDoFind(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotDoFind_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotDoFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotFind(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotFind();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFind();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotFind(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFind_IsBase(true);
        vkrichtextwidget->slotFind();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFind();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotFind(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFind_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotFind_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotFindNext(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotFindNext();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFindNext();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotFindNext(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFindNext_IsBase(true);
        vkrichtextwidget->slotFindNext();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFindNext();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotFindNext(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFindNext_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotFindNext_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotFindPrevious(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotFindPrevious();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFindPrevious();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotFindPrevious(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFindPrevious_IsBase(true);
        vkrichtextwidget->slotFindPrevious();
    } else {
        ((VirtualKRichTextWidget*)self)->slotFindPrevious();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotFindPrevious(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotFindPrevious_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotFindPrevious_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotReplace(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotReplace();
    } else {
        ((VirtualKRichTextWidget*)self)->slotReplace();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotReplace(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotReplace_IsBase(true);
        vkrichtextwidget->slotReplace();
    } else {
        ((VirtualKRichTextWidget*)self)->slotReplace();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotReplace(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotReplace_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotReplace_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SlotSpeakText(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->slotSpeakText();
    } else {
        ((VirtualKRichTextWidget*)self)->slotSpeakText();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSlotSpeakText(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotSpeakText_IsBase(true);
        vkrichtextwidget->slotSpeakText();
    } else {
        ((VirtualKRichTextWidget*)self)->slotSpeakText();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSlotSpeakText(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SlotSpeakText_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SlotSpeakText_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_ZoomInF(KRichTextWidget* self, float range) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKRichTextWidget*)self)->zoomInF(static_cast<float>(range));
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseZoomInF(KRichTextWidget* self, float range) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ZoomInF_IsBase(true);
        vkrichtextwidget->zoomInF(static_cast<float>(range));
    } else {
        ((VirtualKRichTextWidget*)self)->zoomInF(static_cast<float>(range));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnZoomInF(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ZoomInF_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ZoomInF_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_SetViewportMargins(KRichTextWidget* self, int left, int top, int right, int bottom) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKRichTextWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseSetViewportMargins(KRichTextWidget* self, int left, int top, int right, int bottom) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetViewportMargins_IsBase(true);
        vkrichtextwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualKRichTextWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSetViewportMargins(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* KRichTextWidget_ViewportMargins(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return new QMargins(vkrichtextwidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* KRichTextWidget_QBaseViewportMargins(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportMargins_IsBase(true);
        return new QMargins(vkrichtextwidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnViewportMargins(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_ViewportMargins_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_DrawFrame(KRichTextWidget* self, QPainter* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->drawFrame(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDrawFrame(KRichTextWidget* self, QPainter* param1) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DrawFrame_IsBase(true);
        vkrichtextwidget->drawFrame(param1);
    } else {
        ((VirtualKRichTextWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDrawFrame(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_DrawFrame_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_UpdateMicroFocus(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->updateMicroFocus();
    } else {
        ((VirtualKRichTextWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseUpdateMicroFocus(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_UpdateMicroFocus_IsBase(true);
        vkrichtextwidget->updateMicroFocus();
    } else {
        ((VirtualKRichTextWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnUpdateMicroFocus(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_Create(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->create();
    } else {
        ((VirtualKRichTextWidget*)self)->create();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseCreate(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Create_IsBase(true);
        vkrichtextwidget->create();
    } else {
        ((VirtualKRichTextWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnCreate(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Create_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KRichTextWidget_Destroy(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->destroy();
    } else {
        ((VirtualKRichTextWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KRichTextWidget_QBaseDestroy(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Destroy_IsBase(true);
        vkrichtextwidget->destroy();
    } else {
        ((VirtualKRichTextWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnDestroy(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Destroy_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_FocusNextChild(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->focusNextChild();
    } else {
        return ((VirtualKRichTextWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseFocusNextChild(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusNextChild_IsBase(true);
        return vkrichtextwidget->focusNextChild();
    } else {
        return ((VirtualKRichTextWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusNextChild(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_FocusPreviousChild(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->focusPreviousChild();
    } else {
        return ((VirtualKRichTextWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseFocusPreviousChild(KRichTextWidget* self) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusPreviousChild_IsBase(true);
        return vkrichtextwidget->focusPreviousChild();
    } else {
        return ((VirtualKRichTextWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnFocusPreviousChild(KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = dynamic_cast<VirtualKRichTextWidget*>(self);
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KRichTextWidget_Sender(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->sender();
    } else {
        return ((VirtualKRichTextWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KRichTextWidget_QBaseSender(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Sender_IsBase(true);
        return vkrichtextwidget->sender();
    } else {
        return ((VirtualKRichTextWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSender(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Sender_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextWidget_SenderSignalIndex(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->senderSignalIndex();
    } else {
        return ((VirtualKRichTextWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KRichTextWidget_QBaseSenderSignalIndex(const KRichTextWidget* self) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SenderSignalIndex_IsBase(true);
        return vkrichtextwidget->senderSignalIndex();
    } else {
        return ((VirtualKRichTextWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnSenderSignalIndex(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KRichTextWidget_Receivers(const KRichTextWidget* self, const char* signal) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->receivers(signal);
    } else {
        return ((VirtualKRichTextWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KRichTextWidget_QBaseReceivers(const KRichTextWidget* self, const char* signal) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Receivers_IsBase(true);
        return vkrichtextwidget->receivers(signal);
    } else {
        return ((VirtualKRichTextWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnReceivers(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_Receivers_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KRichTextWidget_IsSignalConnected(const KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKRichTextWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KRichTextWidget_QBaseIsSignalConnected(const KRichTextWidget* self, const QMetaMethod* signal) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_IsSignalConnected_IsBase(true);
        return vkrichtextwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKRichTextWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnIsSignalConnected(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KRichTextWidget_GetDecodedMetricF(const KRichTextWidget* self, int metricA, int metricB) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        return vkrichtextwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRichTextWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KRichTextWidget_QBaseGetDecodedMetricF(const KRichTextWidget* self, int metricA, int metricB) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_GetDecodedMetricF_IsBase(true);
        return vkrichtextwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKRichTextWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KRichTextWidget_OnGetDecodedMetricF(const KRichTextWidget* self, intptr_t slot) {
    auto* vkrichtextwidget = const_cast<VirtualKRichTextWidget*>(dynamic_cast<const VirtualKRichTextWidget*>(self));
    if (vkrichtextwidget && vkrichtextwidget->isVirtualKRichTextWidget) {
        vkrichtextwidget->setKRichTextWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKRichTextWidget::KRichTextWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void KRichTextWidget_Delete(KRichTextWidget* self) {
    delete self;
}
