#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNote
#define WORKAROUND_INNER_CLASS_DEFINITION_KTextEditor__InlineNoteProvider
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPainter>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <inlinenoteprovider.h>
#include "libinlinenoteprovider.h"
#include "libinlinenoteprovider.hxx"

KTextEditor__InlineNoteProvider* KTextEditor__InlineNoteProvider_new() {
    return new VirtualKTextEditorInlineNoteProvider();
}

QMetaObject* KTextEditor__InlineNoteProvider_MetaObject(const KTextEditor__InlineNoteProvider* self) {
    return (QMetaObject*)self->metaObject();
}

void* KTextEditor__InlineNoteProvider_Metacast(KTextEditor__InlineNoteProvider* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KTextEditor__InlineNoteProvider_Metacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KTextEditor__InlineNoteProvider_Tr(const char* s) {
    QString _ret = KTextEditor::InlineNoteProvider::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of int */ KTextEditor__InlineNoteProvider_InlineNotes(const KTextEditor__InlineNoteProvider* self, int line) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        QList<int> _ret = vktexteditor__inlinenoteprovider->inlineNotes(static_cast<int>(line));
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNotes(static_cast<int>(line));
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

QSize* KTextEditor__InlineNoteProvider_InlineNoteSize(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return new QSize(vktexteditor__inlinenoteprovider->inlineNoteSize(*note));
    } else {
        return new QSize(((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteSize(*note));
    }
}

void KTextEditor__InlineNoteProvider_PaintInlineNote(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, QPainter* painter, int direction) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditor__inlinenoteprovider->paintInlineNote(*note, *painter, static_cast<Qt::LayoutDirection>(direction));
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->paintInlineNote(*note, *painter, static_cast<Qt::LayoutDirection>(direction));
    }
}

void KTextEditor__InlineNoteProvider_InlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        self->inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
    }
}

void KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        self->inlineNoteFocusInEvent(*note, *globalPos);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteFocusInEvent(*note, *globalPos);
    }
}

void KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        self->inlineNoteFocusOutEvent(*note);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteFocusOutEvent(*note);
    }
}

void KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    auto* vktexteditor__inlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditor__inlinenoteprovider && vktexteditor__inlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        self->inlineNoteMouseMoveEvent(*note, *globalPos);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteMouseMoveEvent(*note, *globalPos);
    }
}

void KTextEditor__InlineNoteProvider_InlineNotesReset(KTextEditor__InlineNoteProvider* self) {
    self->inlineNotesReset();
}

void KTextEditor__InlineNoteProvider_Connect_InlineNotesReset(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__InlineNoteProvider*) = reinterpret_cast<void (*)(KTextEditor__InlineNoteProvider*)>(slot);
    KTextEditor::InlineNoteProvider::connect(self, &KTextEditor::InlineNoteProvider::inlineNotesReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KTextEditor__InlineNoteProvider_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, int line) {
    self->inlineNotesChanged(static_cast<int>(line));
}

void KTextEditor__InlineNoteProvider_Connect_InlineNotesChanged(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    void (*slotFunc)(KTextEditor__InlineNoteProvider*, int) = reinterpret_cast<void (*)(KTextEditor__InlineNoteProvider*, int)>(slot);
    KTextEditor::InlineNoteProvider::connect(self, &KTextEditor::InlineNoteProvider::inlineNotesChanged, [self, slotFunc](int line) {
        int sigval1 = line;
        slotFunc(self, sigval1);
    });
}

libqt_string KTextEditor__InlineNoteProvider_Tr2(const char* s, const char* c) {
    QString _ret = KTextEditor::InlineNoteProvider::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KTextEditor__InlineNoteProvider_Tr3(const char* s, const char* c, int n) {
    QString _ret = KTextEditor::InlineNoteProvider::tr(s, c, static_cast<int>(n));
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
int KTextEditor__InlineNoteProvider_QBaseMetacall(KTextEditor__InlineNoteProvider* self, int param1, int param2, void** param3) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Metacall_IsBase(true);
        return vktexteditorinlinenoteprovider->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KTextEditor::InlineNoteProvider::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnMetacall(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Metacall_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of int */ KTextEditor__InlineNoteProvider_QBaseInlineNotes(const KTextEditor__InlineNoteProvider* self, int line) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNotes_IsBase(true);
        QList<int> _ret = vktexteditorinlinenoteprovider->inlineNotes(static_cast<int>(line));
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<int> _ret = ((VirtualKTextEditorInlineNoteProvider*)self)->inlineNotes(static_cast<int>(line));
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size() + 1)));
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
void KTextEditor__InlineNoteProvider_OnInlineNotes(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNotes_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNotes_Callback>(slot));
    }
}

// Base class handler implementation
QSize* KTextEditor__InlineNoteProvider_QBaseInlineNoteSize(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteSize_IsBase(true);
        return new QSize(vktexteditorinlinenoteprovider->inlineNoteSize(*note));
    } else {
        return new QSize(((VirtualKTextEditorInlineNoteProvider*)self)->inlineNoteSize(*note));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteSize(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteSize_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteSize_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBasePaintInlineNote(const KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, QPainter* painter, int direction) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_PaintInlineNote_IsBase(true);
        vktexteditorinlinenoteprovider->paintInlineNote(*note, *painter, static_cast<Qt::LayoutDirection>(direction));
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->paintInlineNote(*note, *painter, static_cast<Qt::LayoutDirection>(direction));
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnPaintInlineNote(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_PaintInlineNote_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_PaintInlineNote_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseInlineNoteActivated(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, int buttons, const QPoint* globalPos) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteActivated_IsBase(true);
        vktexteditorinlinenoteprovider->inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
    } else {
        self->KTextEditor::InlineNoteProvider::inlineNoteActivated(*note, static_cast<Qt::MouseButtons>(buttons), *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteActivated(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteActivated_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteActivated_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_IsBase(true);
        vktexteditorinlinenoteprovider->inlineNoteFocusInEvent(*note, *globalPos);
    } else {
        self->KTextEditor::InlineNoteProvider::inlineNoteFocusInEvent(*note, *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusInEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteFocusInEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_IsBase(true);
        vktexteditorinlinenoteprovider->inlineNoteFocusOutEvent(*note);
    } else {
        self->KTextEditor::InlineNoteProvider::inlineNoteFocusOutEvent(*note);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteFocusOutEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteFocusOutEvent_Callback>(slot));
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, const KTextEditor__InlineNote* note, const QPoint* globalPos) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_IsBase(true);
        vktexteditorinlinenoteprovider->inlineNoteMouseMoveEvent(*note, *globalPos);
    } else {
        self->KTextEditor::InlineNoteProvider::inlineNoteMouseMoveEvent(*note, *globalPos);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnInlineNoteMouseMoveEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_InlineNoteMouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__InlineNoteProvider_Event(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->event(event);
    } else {
        return self->KTextEditor::InlineNoteProvider::event(event);
    }
}

// Base class handler implementation
bool KTextEditor__InlineNoteProvider_QBaseEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Event_IsBase(true);
        return vktexteditorinlinenoteprovider->event(event);
    } else {
        return self->KTextEditor::InlineNoteProvider::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Event_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__InlineNoteProvider_EventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->eventFilter(watched, event);
    } else {
        return self->KTextEditor::InlineNoteProvider::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KTextEditor__InlineNoteProvider_QBaseEventFilter(KTextEditor__InlineNoteProvider* self, QObject* watched, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_EventFilter_IsBase(true);
        return vktexteditorinlinenoteprovider->eventFilter(watched, event);
    } else {
        return self->KTextEditor::InlineNoteProvider::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnEventFilter(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_EventFilter_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_TimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->timerEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseTimerEvent(KTextEditor__InlineNoteProvider* self, QTimerEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_TimerEvent_IsBase(true);
        vktexteditorinlinenoteprovider->timerEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnTimerEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_TimerEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_ChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->childEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseChildEvent(KTextEditor__InlineNoteProvider* self, QChildEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_ChildEvent_IsBase(true);
        vktexteditorinlinenoteprovider->childEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnChildEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_ChildEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_CustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->customEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseCustomEvent(KTextEditor__InlineNoteProvider* self, QEvent* event) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_CustomEvent_IsBase(true);
        vktexteditorinlinenoteprovider->customEvent(event);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnCustomEvent(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_CustomEvent_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_ConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseConnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_ConnectNotify_IsBase(true);
        vktexteditorinlinenoteprovider->connectNotify(*signal);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnConnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_ConnectNotify_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KTextEditor__InlineNoteProvider_DisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KTextEditor__InlineNoteProvider_QBaseDisconnectNotify(KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_DisconnectNotify_IsBase(true);
        vktexteditorinlinenoteprovider->disconnectNotify(*signal);
    } else {
        ((VirtualKTextEditorInlineNoteProvider*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnDisconnectNotify(KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = dynamic_cast<VirtualKTextEditorInlineNoteProvider*>(self);
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_DisconnectNotify_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KTextEditor__InlineNoteProvider_Sender(const KTextEditor__InlineNoteProvider* self) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->sender();
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->sender();
    }
}

// Base class handler implementation
QObject* KTextEditor__InlineNoteProvider_QBaseSender(const KTextEditor__InlineNoteProvider* self) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Sender_IsBase(true);
        return vktexteditorinlinenoteprovider->sender();
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnSender(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Sender_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__InlineNoteProvider_SenderSignalIndex(const KTextEditor__InlineNoteProvider* self) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KTextEditor__InlineNoteProvider_QBaseSenderSignalIndex(const KTextEditor__InlineNoteProvider* self) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_SenderSignalIndex_IsBase(true);
        return vktexteditorinlinenoteprovider->senderSignalIndex();
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnSenderSignalIndex(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_SenderSignalIndex_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KTextEditor__InlineNoteProvider_Receivers(const KTextEditor__InlineNoteProvider* self, const char* signal) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->receivers(signal);
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KTextEditor__InlineNoteProvider_QBaseReceivers(const KTextEditor__InlineNoteProvider* self, const char* signal) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Receivers_IsBase(true);
        return vktexteditorinlinenoteprovider->receivers(signal);
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnReceivers(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_Receivers_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KTextEditor__InlineNoteProvider_IsSignalConnected(const KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        return vktexteditorinlinenoteprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KTextEditor__InlineNoteProvider_QBaseIsSignalConnected(const KTextEditor__InlineNoteProvider* self, const QMetaMethod* signal) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_IsSignalConnected_IsBase(true);
        return vktexteditorinlinenoteprovider->isSignalConnected(*signal);
    } else {
        return ((VirtualKTextEditorInlineNoteProvider*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KTextEditor__InlineNoteProvider_OnIsSignalConnected(const KTextEditor__InlineNoteProvider* self, intptr_t slot) {
    auto* vktexteditorinlinenoteprovider = const_cast<VirtualKTextEditorInlineNoteProvider*>(dynamic_cast<const VirtualKTextEditorInlineNoteProvider*>(self));
    if (vktexteditorinlinenoteprovider && vktexteditorinlinenoteprovider->isVirtualKTextEditorInlineNoteProvider) {
        vktexteditorinlinenoteprovider->setKTextEditor__InlineNoteProvider_IsSignalConnected_Callback(reinterpret_cast<VirtualKTextEditorInlineNoteProvider::KTextEditor__InlineNoteProvider_IsSignalConnected_Callback>(slot));
    }
}

void KTextEditor__InlineNoteProvider_Delete(KTextEditor__InlineNoteProvider* self) {
    delete self;
}
