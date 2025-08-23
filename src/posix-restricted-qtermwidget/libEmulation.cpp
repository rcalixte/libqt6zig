#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Emulation
#include <QChildEvent>
#include <QEvent>
#include <QKeyEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <Emulation.h>
#include "libEmulation.h"
#include "libEmulation.hxx"

Konsole__Emulation* Konsole__Emulation_new() {
    return new VirtualKonsoleEmulation();
}

QMetaObject* Konsole__Emulation_MetaObject(const Konsole__Emulation* self) {
    return (QMetaObject*)self->metaObject();
}

void* Konsole__Emulation_Metacast(Konsole__Emulation* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Konsole__Emulation_Metacall(Konsole__Emulation* self, int param1, int param2, void** param3) {
    auto* vkonsole__emulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsole__emulation && vkonsole__emulation->isVirtualKonsoleEmulation) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleEmulation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void Konsole__Emulation_OnMetacall(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsole__emulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsole__emulation && vkonsole__emulation->isVirtualKonsoleEmulation) {
        vkonsole__emulation->setKonsole__Emulation_Metacall_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int Konsole__Emulation_QBaseMetacall(Konsole__Emulation* self, int param1, int param2, void** param3) {
    auto* vkonsole__emulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsole__emulation && vkonsole__emulation->isVirtualKonsoleEmulation) {
        vkonsole__emulation->setKonsole__Emulation_Metacall_IsBase(true);
        return vkonsole__emulation->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKonsoleEmulation*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Konsole__Emulation_Tr(const char* s) {
    QString _ret = Konsole::Emulation::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* Konsole__Emulation_ImageSize(const Konsole__Emulation* self) {
    return new QSize(self->imageSize());
}

int Konsole__Emulation_LineCount(const Konsole__Emulation* self) {
    return self->lineCount();
}

void Konsole__Emulation_ClearHistory(Konsole__Emulation* self) {
    self->clearHistory();
}

void Konsole__Emulation_SetKeyBindings(Konsole__Emulation* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setKeyBindings(name_QString);
}

libqt_string Konsole__Emulation_KeyBindings(const Konsole__Emulation* self) {
    QString _ret = self->keyBindings();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Konsole__Emulation_ProgramUsesMouse(const Konsole__Emulation* self) {
    return self->programUsesMouse();
}

bool Konsole__Emulation_ProgramBracketedPasteMode(const Konsole__Emulation* self) {
    return self->programBracketedPasteMode();
}

void Konsole__Emulation_ReceiveData(Konsole__Emulation* self, const char* buffer, int lenVal) {
    self->receiveData(buffer, static_cast<int>(lenVal));
}

void Konsole__Emulation_SendData(Konsole__Emulation* self, const char* data, int lenVal) {
    self->sendData(data, static_cast<int>(lenVal));
}

void Konsole__Emulation_Connect_SendData(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, const char*, int) = reinterpret_cast<void (*)(Konsole__Emulation*, const char*, int)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::sendData, [self, slotFunc](const char* data, int lenVal) {
        const char* sigval1 = (const char*)data;
        int sigval2 = lenVal;
        slotFunc(self, sigval1, sigval2);
    });
}

void Konsole__Emulation_LockPtyRequest(Konsole__Emulation* self, bool suspendVal) {
    self->lockPtyRequest(suspendVal);
}

void Konsole__Emulation_Connect_LockPtyRequest(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::lockPtyRequest, [self, slotFunc](bool suspendVal) {
        bool sigval1 = suspendVal;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_UseUtf8Request(Konsole__Emulation* self, bool param1) {
    self->useUtf8Request(param1);
}

void Konsole__Emulation_Connect_UseUtf8Request(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::useUtf8Request, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_StateSet(Konsole__Emulation* self, int state) {
    self->stateSet(static_cast<int>(state));
}

void Konsole__Emulation_Connect_StateSet(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int) = reinterpret_cast<void (*)(Konsole__Emulation*, int)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::stateSet, [self, slotFunc](int state) {
        int sigval1 = state;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_ZmodemDetected(Konsole__Emulation* self) {
    self->zmodemDetected();
}

void Konsole__Emulation_Connect_ZmodemDetected(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*) = reinterpret_cast<void (*)(Konsole__Emulation*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::zmodemDetected, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Konsole__Emulation_ChangeTabTextColorRequest(Konsole__Emulation* self, int color) {
    self->changeTabTextColorRequest(static_cast<int>(color));
}

void Konsole__Emulation_Connect_ChangeTabTextColorRequest(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int) = reinterpret_cast<void (*)(Konsole__Emulation*, int)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::changeTabTextColorRequest, [self, slotFunc](int color) {
        int sigval1 = color;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_ProgramUsesMouseChanged(Konsole__Emulation* self, bool usesMouse) {
    self->programUsesMouseChanged(usesMouse);
}

void Konsole__Emulation_Connect_ProgramUsesMouseChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::programUsesMouseChanged, [self, slotFunc](bool usesMouse) {
        bool sigval1 = usesMouse;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_ProgramBracketedPasteModeChanged(Konsole__Emulation* self, bool bracketedPasteMode) {
    self->programBracketedPasteModeChanged(bracketedPasteMode);
}

void Konsole__Emulation_Connect_ProgramBracketedPasteModeChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::programBracketedPasteModeChanged, [self, slotFunc](bool bracketedPasteMode) {
        bool sigval1 = bracketedPasteMode;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_OutputChanged(Konsole__Emulation* self) {
    self->outputChanged();
}

void Konsole__Emulation_Connect_OutputChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*) = reinterpret_cast<void (*)(Konsole__Emulation*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::outputChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Konsole__Emulation_TitleChanged(Konsole__Emulation* self, int title, const libqt_string newTitle) {
    QString newTitle_QString = QString::fromUtf8(newTitle.data, newTitle.len);
    self->titleChanged(static_cast<int>(title), newTitle_QString);
}

void Konsole__Emulation_Connect_TitleChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int, const char*) = reinterpret_cast<void (*)(Konsole__Emulation*, int, const char*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::titleChanged, [self, slotFunc](int title, const QString& newTitle) {
        int sigval1 = title;
        const QString newTitle_ret = newTitle;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newTitle_b = newTitle_ret.toUtf8();
        const char* newTitle_str = static_cast<const char*>(malloc(newTitle_b.length() + 1));
        memcpy((void*)newTitle_str, newTitle_b.data(), newTitle_b.length());
        ((char*)newTitle_str)[newTitle_b.length()] = '\0';
        const char* sigval2 = newTitle_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(newTitle_str);
    });
}

void Konsole__Emulation_ImageSizeChanged(Konsole__Emulation* self, int lineCount, int columnCount) {
    self->imageSizeChanged(static_cast<int>(lineCount), static_cast<int>(columnCount));
}

void Konsole__Emulation_Connect_ImageSizeChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int, int) = reinterpret_cast<void (*)(Konsole__Emulation*, int, int)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::imageSizeChanged, [self, slotFunc](int lineCount, int columnCount) {
        int sigval1 = lineCount;
        int sigval2 = columnCount;
        slotFunc(self, sigval1, sigval2);
    });
}

void Konsole__Emulation_ImageSizeInitialized(Konsole__Emulation* self) {
    self->imageSizeInitialized();
}

void Konsole__Emulation_Connect_ImageSizeInitialized(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*) = reinterpret_cast<void (*)(Konsole__Emulation*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::imageSizeInitialized, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Konsole__Emulation_ImageResizeRequest(Konsole__Emulation* self, const QSize* sizz) {
    self->imageResizeRequest(*sizz);
}

void Konsole__Emulation_Connect_ImageResizeRequest(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, QSize*) = reinterpret_cast<void (*)(Konsole__Emulation*, QSize*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::imageResizeRequest, [self, slotFunc](const QSize& sizz) {
        const QSize& sizz_ret = sizz;
        // Cast returned reference into pointer
        QSize* sigval1 = const_cast<QSize*>(&sizz_ret);
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_ProfileChangeCommandReceived(Konsole__Emulation* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->profileChangeCommandReceived(text_QString);
}

void Konsole__Emulation_Connect_ProfileChangeCommandReceived(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, const char*) = reinterpret_cast<void (*)(Konsole__Emulation*, const char*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::profileChangeCommandReceived, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

void Konsole__Emulation_FlowControlKeyPressed(Konsole__Emulation* self, bool suspendKeyPressed) {
    self->flowControlKeyPressed(suspendKeyPressed);
}

void Konsole__Emulation_Connect_FlowControlKeyPressed(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::flowControlKeyPressed, [self, slotFunc](bool suspendKeyPressed) {
        bool sigval1 = suspendKeyPressed;
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_CursorChanged(Konsole__Emulation* self, int cursorShape, bool blinkingCursorEnabled) {
    self->cursorChanged(static_cast<Konsole::Emulation::KeyboardCursorShape>(cursorShape), blinkingCursorEnabled);
}

void Konsole__Emulation_Connect_CursorChanged(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int, bool) = reinterpret_cast<void (*)(Konsole__Emulation*, int, bool)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::cursorChanged, [self, slotFunc](Konsole::Emulation::KeyboardCursorShape cursorShape, bool blinkingCursorEnabled) {
        int sigval1 = static_cast<int>(cursorShape);
        bool sigval2 = blinkingCursorEnabled;
        slotFunc(self, sigval1, sigval2);
    });
}

void Konsole__Emulation_HandleCommandFromKeyboard(Konsole__Emulation* self, int command) {
    self->handleCommandFromKeyboard(static_cast<Konsole::KeyboardTranslator::Command>(command));
}

void Konsole__Emulation_Connect_HandleCommandFromKeyboard(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*, int) = reinterpret_cast<void (*)(Konsole__Emulation*, int)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::handleCommandFromKeyboard, [self, slotFunc](Konsole::KeyboardTranslator::Command command) {
        int sigval1 = static_cast<int>(command);
        slotFunc(self, sigval1);
    });
}

void Konsole__Emulation_OutputFromKeypressEvent(Konsole__Emulation* self) {
    self->outputFromKeypressEvent();
}

void Konsole__Emulation_Connect_OutputFromKeypressEvent(Konsole__Emulation* self, intptr_t slot) {
    void (*slotFunc)(Konsole__Emulation*) = reinterpret_cast<void (*)(Konsole__Emulation*)>(slot);
    Konsole::Emulation::connect(self, &Konsole::Emulation::outputFromKeypressEvent, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string Konsole__Emulation_Tr2(const char* s, const char* c) {
    QString _ret = Konsole::Emulation::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__Emulation_Tr3(const char* s, const char* c, int n) {
    QString _ret = Konsole::Emulation::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
char Konsole__Emulation_EraseChar(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->eraseChar();
    } else {
        return self->Konsole::Emulation::eraseChar();
    }
}

// Base class handler implementation
char Konsole__Emulation_QBaseEraseChar(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_EraseChar_IsBase(true);
        return vkonsoleemulation->eraseChar();
    } else {
        return self->Konsole::Emulation::eraseChar();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnEraseChar(const Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_EraseChar_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_EraseChar_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_ClearEntireScreen(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->clearEntireScreen();
    } else {
        ((VirtualKonsoleEmulation*)self)->clearEntireScreen();
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseClearEntireScreen(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ClearEntireScreen_IsBase(true);
        vkonsoleemulation->clearEntireScreen();
    } else {
        ((VirtualKonsoleEmulation*)self)->clearEntireScreen();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnClearEntireScreen(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ClearEntireScreen_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_ClearEntireScreen_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_Reset(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->reset();
    } else {
        ((VirtualKonsoleEmulation*)self)->reset();
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseReset(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Reset_IsBase(true);
        vkonsoleemulation->reset();
    } else {
        ((VirtualKonsoleEmulation*)self)->reset();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnReset(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Reset_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SetImageSize(Konsole__Emulation* self, int lines, int columns) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setImageSize(static_cast<int>(lines), static_cast<int>(columns));
    } else {
        self->Konsole::Emulation::setImageSize(static_cast<int>(lines), static_cast<int>(columns));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSetImageSize(Konsole__Emulation* self, int lines, int columns) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetImageSize_IsBase(true);
        vkonsoleemulation->setImageSize(static_cast<int>(lines), static_cast<int>(columns));
    } else {
        self->Konsole::Emulation::setImageSize(static_cast<int>(lines), static_cast<int>(columns));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSetImageSize(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetImageSize_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SetImageSize_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SendText(Konsole__Emulation* self, const libqt_string text) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->sendText(text_QString);
    } else {
        ((VirtualKonsoleEmulation*)self)->sendText(text_QString);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSendText(Konsole__Emulation* self, const libqt_string text) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendText_IsBase(true);
        vkonsoleemulation->sendText(text_QString);
    } else {
        ((VirtualKonsoleEmulation*)self)->sendText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSendText(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendText_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SendText_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->sendKeyEvent(param1, fromPaste);
    } else {
        self->Konsole::Emulation::sendKeyEvent(param1, fromPaste);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSendKeyEvent(Konsole__Emulation* self, QKeyEvent* param1, bool fromPaste) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendKeyEvent_IsBase(true);
        vkonsoleemulation->sendKeyEvent(param1, fromPaste);
    } else {
        self->Konsole::Emulation::sendKeyEvent(param1, fromPaste);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSendKeyEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendKeyEvent_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SendKeyEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));
    } else {
        self->Konsole::Emulation::sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSendMouseEvent(Konsole__Emulation* self, int buttons, int column, int line, int eventType) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendMouseEvent_IsBase(true);
        vkonsoleemulation->sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));
    } else {
        self->Konsole::Emulation::sendMouseEvent(static_cast<int>(buttons), static_cast<int>(column), static_cast<int>(line), static_cast<int>(eventType));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSendMouseEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendMouseEvent_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SendMouseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SendString(Konsole__Emulation* self, const char* stringVal, int length) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->sendString(stringVal, static_cast<int>(length));
    } else {
        ((VirtualKonsoleEmulation*)self)->sendString(stringVal, static_cast<int>(length));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSendString(Konsole__Emulation* self, const char* stringVal, int length) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendString_IsBase(true);
        vkonsoleemulation->sendString(stringVal, static_cast<int>(length));
    } else {
        ((VirtualKonsoleEmulation*)self)->sendString(stringVal, static_cast<int>(length));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSendString(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SendString_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SendString_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SetMode(Konsole__Emulation* self, int mode) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setMode(static_cast<int>(mode));
    } else {
        ((VirtualKonsoleEmulation*)self)->setMode(static_cast<int>(mode));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSetMode(Konsole__Emulation* self, int mode) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetMode_IsBase(true);
        vkonsoleemulation->setMode(static_cast<int>(mode));
    } else {
        ((VirtualKonsoleEmulation*)self)->setMode(static_cast<int>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSetMode(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetMode_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SetMode_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_ResetMode(Konsole__Emulation* self, int mode) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->resetMode(static_cast<int>(mode));
    } else {
        ((VirtualKonsoleEmulation*)self)->resetMode(static_cast<int>(mode));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseResetMode(Konsole__Emulation* self, int mode) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ResetMode_IsBase(true);
        vkonsoleemulation->resetMode(static_cast<int>(mode));
    } else {
        ((VirtualKonsoleEmulation*)self)->resetMode(static_cast<int>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnResetMode(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ResetMode_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_ResetMode_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Emulation_Event(Konsole__Emulation* self, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->event(event);
    } else {
        return self->Konsole::Emulation::event(event);
    }
}

// Base class handler implementation
bool Konsole__Emulation_QBaseEvent(Konsole__Emulation* self, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Event_IsBase(true);
        return vkonsoleemulation->event(event);
    } else {
        return self->Konsole::Emulation::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Event_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Emulation_EventFilter(Konsole__Emulation* self, QObject* watched, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->eventFilter(watched, event);
    } else {
        return self->Konsole::Emulation::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool Konsole__Emulation_QBaseEventFilter(Konsole__Emulation* self, QObject* watched, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_EventFilter_IsBase(true);
        return vkonsoleemulation->eventFilter(watched, event);
    } else {
        return self->Konsole::Emulation::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnEventFilter(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_EventFilter_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_TimerEvent(Konsole__Emulation* self, QTimerEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->timerEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseTimerEvent(Konsole__Emulation* self, QTimerEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_TimerEvent_IsBase(true);
        vkonsoleemulation->timerEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnTimerEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_TimerEvent_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_ChildEvent(Konsole__Emulation* self, QChildEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->childEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseChildEvent(Konsole__Emulation* self, QChildEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ChildEvent_IsBase(true);
        vkonsoleemulation->childEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnChildEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ChildEvent_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_CustomEvent(Konsole__Emulation* self, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->customEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseCustomEvent(Konsole__Emulation* self, QEvent* event) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_CustomEvent_IsBase(true);
        vkonsoleemulation->customEvent(event);
    } else {
        ((VirtualKonsoleEmulation*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnCustomEvent(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_CustomEvent_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_ConnectNotify(Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->connectNotify(*signal);
    } else {
        ((VirtualKonsoleEmulation*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseConnectNotify(Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ConnectNotify_IsBase(true);
        vkonsoleemulation->connectNotify(*signal);
    } else {
        ((VirtualKonsoleEmulation*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnConnectNotify(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_ConnectNotify_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_DisconnectNotify(Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleEmulation*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseDisconnectNotify(Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_DisconnectNotify_IsBase(true);
        vkonsoleemulation->disconnectNotify(*signal);
    } else {
        ((VirtualKonsoleEmulation*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnDisconnectNotify(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_DisconnectNotify_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SetScreen(Konsole__Emulation* self, int index) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setScreen(static_cast<int>(index));
    } else {
        ((VirtualKonsoleEmulation*)self)->setScreen(static_cast<int>(index));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSetScreen(Konsole__Emulation* self, int index) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetScreen_IsBase(true);
        vkonsoleemulation->setScreen(static_cast<int>(index));
    } else {
        ((VirtualKonsoleEmulation*)self)->setScreen(static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSetScreen(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetScreen_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SetScreen_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_SetCodec(Konsole__Emulation* self, int codec) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setCodec(static_cast<VirtualKonsoleEmulation::EmulationCodec>(codec));
    } else {
        ((VirtualKonsoleEmulation*)self)->setCodec(static_cast<VirtualKonsoleEmulation::EmulationCodec>(codec));
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseSetCodec(Konsole__Emulation* self, int codec) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetCodec_IsBase(true);
        vkonsoleemulation->setCodec(static_cast<VirtualKonsoleEmulation::EmulationCodec>(codec));
    } else {
        ((VirtualKonsoleEmulation*)self)->setCodec(static_cast<VirtualKonsoleEmulation::EmulationCodec>(codec));
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSetCodec(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SetCodec_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SetCodec_Callback>(slot));
    }
}

// Derived class handler implementation
void Konsole__Emulation_BufferedUpdate(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->bufferedUpdate();
    } else {
        ((VirtualKonsoleEmulation*)self)->bufferedUpdate();
    }
}

// Base class handler implementation
void Konsole__Emulation_QBaseBufferedUpdate(Konsole__Emulation* self) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_BufferedUpdate_IsBase(true);
        vkonsoleemulation->bufferedUpdate();
    } else {
        ((VirtualKonsoleEmulation*)self)->bufferedUpdate();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnBufferedUpdate(Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = dynamic_cast<VirtualKonsoleEmulation*>(self);
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_BufferedUpdate_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_BufferedUpdate_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Konsole__Emulation_Sender(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->sender();
    } else {
        return ((VirtualKonsoleEmulation*)self)->sender();
    }
}

// Base class handler implementation
QObject* Konsole__Emulation_QBaseSender(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Sender_IsBase(true);
        return vkonsoleemulation->sender();
    } else {
        return ((VirtualKonsoleEmulation*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSender(const Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Sender_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__Emulation_SenderSignalIndex(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->senderSignalIndex();
    } else {
        return ((VirtualKonsoleEmulation*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Konsole__Emulation_QBaseSenderSignalIndex(const Konsole__Emulation* self) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SenderSignalIndex_IsBase(true);
        return vkonsoleemulation->senderSignalIndex();
    } else {
        return ((VirtualKonsoleEmulation*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnSenderSignalIndex(const Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_SenderSignalIndex_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Konsole__Emulation_Receivers(const Konsole__Emulation* self, const char* signal) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->receivers(signal);
    } else {
        return ((VirtualKonsoleEmulation*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Konsole__Emulation_QBaseReceivers(const Konsole__Emulation* self, const char* signal) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Receivers_IsBase(true);
        return vkonsoleemulation->receivers(signal);
    } else {
        return ((VirtualKonsoleEmulation*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnReceivers(const Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_Receivers_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Konsole__Emulation_IsSignalConnected(const Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        return vkonsoleemulation->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleEmulation*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Konsole__Emulation_QBaseIsSignalConnected(const Konsole__Emulation* self, const QMetaMethod* signal) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_IsSignalConnected_IsBase(true);
        return vkonsoleemulation->isSignalConnected(*signal);
    } else {
        return ((VirtualKonsoleEmulation*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Konsole__Emulation_OnIsSignalConnected(const Konsole__Emulation* self, intptr_t slot) {
    auto* vkonsoleemulation = const_cast<VirtualKonsoleEmulation*>(dynamic_cast<const VirtualKonsoleEmulation*>(self));
    if (vkonsoleemulation && vkonsoleemulation->isVirtualKonsoleEmulation) {
        vkonsoleemulation->setKonsole__Emulation_IsSignalConnected_Callback(reinterpret_cast<VirtualKonsoleEmulation::Konsole__Emulation_IsSignalConnected_Callback>(slot));
    }
}

void Konsole__Emulation_Delete(Konsole__Emulation* self) {
    delete self;
}
