#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__AbstractHighlighter
#include <KSyntaxHighlighting/Definition>
#include <KSyntaxHighlighting/FoldingRegion>
#include <KSyntaxHighlighting/Format>
#define WORKAROUND_INNER_CLASS_DEFINITION_KSyntaxHighlighting__SyntaxHighlighter
#include <KSyntaxHighlighting/Theme>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSyntaxHighlighter>
#include <QTextBlock>
#include <QTextBlockUserData>
#include <QTextCharFormat>
#include <QTextDocument>
#include <QTimerEvent>
#include <syntaxhighlighter.h>
#include "libsyntaxhighlighter.h"
#include "libsyntaxhighlighter.hxx"

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new() {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter();
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new2(QTextDocument* document) {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter(document);
}

KSyntaxHighlighting__SyntaxHighlighter* KSyntaxHighlighting__SyntaxHighlighter_new3(QObject* parent) {
    return new VirtualKSyntaxHighlightingSyntaxHighlighter(parent);
}

QMetaObject* KSyntaxHighlighting__SyntaxHighlighter_MetaObject(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    return (QMetaObject*)self->metaObject();
}

void* KSyntaxHighlighting__SyntaxHighlighter_Metacast(KSyntaxHighlighting__SyntaxHighlighter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KSyntaxHighlighting__SyntaxHighlighter_Metacall(KSyntaxHighlighting__SyntaxHighlighter* self, int param1, int param2, void** param3) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr(const char* s) {
    QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KSyntaxHighlighting__SyntaxHighlighter_SetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        self->setDefinition(*def);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setDefinition(*def);
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_SetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        self->setTheme(*theme);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setTheme(*theme);
    }
}

bool KSyntaxHighlighting__SyntaxHighlighter_StartsFoldingRegion(const KSyntaxHighlighting__SyntaxHighlighter* self, const QTextBlock* startBlock) {
    return self->startsFoldingRegion(*startBlock);
}

QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_FindFoldingRegionEnd(const KSyntaxHighlighting__SyntaxHighlighter* self, const QTextBlock* startBlock) {
    return new QTextBlock(self->findFoldingRegionEnd(*startBlock));
}

void KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->highlightBlock(text_QString);
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vksyntaxhighlighting__syntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlighting__syntaxhighlighter && vksyntaxhighlighting__syntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlighting__syntaxhighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    }
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr2(const char* s, const char* c) {
    QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KSyntaxHighlighting__SyntaxHighlighter_Tr3(const char* s, const char* c, int n) {
    QString _ret = KSyntaxHighlighting::SyntaxHighlighter::tr(s, c, static_cast<int>(n));
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
int KSyntaxHighlighting__SyntaxHighlighter_QBaseMetacall(KSyntaxHighlighting__SyntaxHighlighter* self, int param1, int param2, void** param3) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Metacall_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KSyntaxHighlighting::SyntaxHighlighter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnMetacall(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseSetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Definition* def) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetDefinition_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->setDefinition(*def);
    } else {
        self->KSyntaxHighlighting::SyntaxHighlighter::setDefinition(*def);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetDefinition(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetDefinition_Callback>(slot));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseSetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, const KSyntaxHighlighting__Theme* theme) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetTheme_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->setTheme(*theme);
    } else {
        self->KSyntaxHighlighting::SyntaxHighlighter::setTheme(*theme);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetTheme(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetTheme_Callback>(slot));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseHighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, const libqt_string text) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->highlightBlock(text_QString);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->highlightBlock(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnHighlightBlock(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_HighlightBlock_Callback>(slot));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, const KSyntaxHighlighting__Format* format) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->applyFormat(static_cast<int>(offset), static_cast<int>(length), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnApplyFormat(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ApplyFormat_Callback>(slot));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, int offset, int length, KSyntaxHighlighting__FoldingRegion* region) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->applyFolding(static_cast<int>(offset), static_cast<int>(length), *region);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnApplyFolding(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ApplyFolding_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_Event(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->event(event);
    } else {
        return self->KSyntaxHighlighting::SyntaxHighlighter::event(event);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_QBaseEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Event_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->event(event);
    } else {
        return self->KSyntaxHighlighting::SyntaxHighlighter::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Event_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_EventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* watched, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->eventFilter(watched, event);
    } else {
        return self->KSyntaxHighlighting::SyntaxHighlighter::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_QBaseEventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, QObject* watched, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_EventFilter_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->eventFilter(watched, event);
    } else {
        return self->KSyntaxHighlighting::SyntaxHighlighter::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnEventFilter(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_TimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->timerEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseTimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QTimerEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_TimerEvent_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->timerEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnTimerEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_ChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QChildEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->childEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QChildEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ChildEvent_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->childEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnChildEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_CustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->customEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseCustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, QEvent* event) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CustomEvent_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->customEvent(event);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnCustomEvent(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->connectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->connectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnConnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseDisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->disconnectNotify(*signal);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnDisconnectNotify(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseSetFormat(KSyntaxHighlighting__SyntaxHighlighter* self, int start, int count, const QTextCharFormat* format) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetFormat_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setFormat(static_cast<int>(start), static_cast<int>(count), *format);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetFormat(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetFormat_Callback>(slot));
    }
}

// Derived class handler implementation
QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_Format(const KSyntaxHighlighting__SyntaxHighlighter* self, int pos) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return new QTextCharFormat(vksyntaxhighlightingsyntaxhighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Base class handler implementation
QTextCharFormat* KSyntaxHighlighting__SyntaxHighlighter_QBaseFormat(const KSyntaxHighlighting__SyntaxHighlighter* self, int pos) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Format_IsBase(true);
        return new QTextCharFormat(vksyntaxhighlightingsyntaxhighlighter->format(static_cast<int>(pos)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnFormat(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Format_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Format_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->previousBlockState();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->previousBlockState();
    }
}

// Base class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_QBasePreviousBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->previousBlockState();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->previousBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnPreviousBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_PreviousBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->currentBlockState();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->currentBlockState();
    }
}

// Base class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->currentBlockState();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->currentBlockState();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockState(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState(KSyntaxHighlighting__SyntaxHighlighter* self, int newState) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockState(KSyntaxHighlighting__SyntaxHighlighter* self, int newState) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->setCurrentBlockState(static_cast<int>(newState));
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setCurrentBlockState(static_cast<int>(newState));
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockState(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockState_Callback>(slot));
    }
}

// Derived class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData(KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlockUserData* data) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Base class handler implementation
void KSyntaxHighlighting__SyntaxHighlighter_QBaseSetCurrentBlockUserData(KSyntaxHighlighting__SyntaxHighlighter* self, QTextBlockUserData* data) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_IsBase(true);
        vksyntaxhighlightingsyntaxhighlighter->setCurrentBlockUserData(data);
    } else {
        ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->setCurrentBlockUserData(data);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSetCurrentBlockUserData(KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = dynamic_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(self);
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SetCurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->currentBlockUserData();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->currentBlockUserData();
    }
}

// Base class handler implementation
QTextBlockUserData* KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlockUserData(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->currentBlockUserData();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->currentBlockUserData();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlockUserData(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_CurrentBlockUserData_Callback>(slot));
    }
}

// Derived class handler implementation
QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return new QTextBlock(vksyntaxhighlightingsyntaxhighlighter->currentBlock());
    }
    return {};
}

// Base class handler implementation
QTextBlock* KSyntaxHighlighting__SyntaxHighlighter_QBaseCurrentBlock(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_IsBase(true);
        return new QTextBlock(vksyntaxhighlightingsyntaxhighlighter->currentBlock());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnCurrentBlock(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_CurrentBlock_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KSyntaxHighlighting__SyntaxHighlighter_Sender(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->sender();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->sender();
    }
}

// Base class handler implementation
QObject* KSyntaxHighlighting__SyntaxHighlighter_QBaseSender(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Sender_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->sender();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSender(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Sender_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->senderSignalIndex();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_QBaseSenderSignalIndex(const KSyntaxHighlighting__SyntaxHighlighter* self) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->senderSignalIndex();
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnSenderSignalIndex(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_Receivers(const KSyntaxHighlighting__SyntaxHighlighter* self, const char* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->receivers(signal);
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KSyntaxHighlighting__SyntaxHighlighter_QBaseReceivers(const KSyntaxHighlighting__SyntaxHighlighter* self, const char* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Receivers_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->receivers(signal);
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnReceivers(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected(const KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        return vksyntaxhighlightingsyntaxhighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KSyntaxHighlighting__SyntaxHighlighter_QBaseIsSignalConnected(const KSyntaxHighlighting__SyntaxHighlighter* self, const QMetaMethod* signal) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_IsBase(true);
        return vksyntaxhighlightingsyntaxhighlighter->isSignalConnected(*signal);
    } else {
        return ((VirtualKSyntaxHighlightingSyntaxHighlighter*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KSyntaxHighlighting__SyntaxHighlighter_OnIsSignalConnected(const KSyntaxHighlighting__SyntaxHighlighter* self, intptr_t slot) {
    auto* vksyntaxhighlightingsyntaxhighlighter = const_cast<VirtualKSyntaxHighlightingSyntaxHighlighter*>(dynamic_cast<const VirtualKSyntaxHighlightingSyntaxHighlighter*>(self));
    if (vksyntaxhighlightingsyntaxhighlighter && vksyntaxhighlightingsyntaxhighlighter->isVirtualKSyntaxHighlightingSyntaxHighlighter) {
        vksyntaxhighlightingsyntaxhighlighter->setKSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback(reinterpret_cast<VirtualKSyntaxHighlightingSyntaxHighlighter::KSyntaxHighlighting__SyntaxHighlighter_IsSignalConnected_Callback>(slot));
    }
}

void KSyntaxHighlighting__SyntaxHighlighter_Delete(KSyntaxHighlighting__SyntaxHighlighter* self) {
    delete self;
}
