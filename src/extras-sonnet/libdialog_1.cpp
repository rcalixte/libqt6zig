#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
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
#include <Sonnet/BackgroundChecker>
#include <Sonnet/Dialog>
#include <dialog.h>
#include "libdialog_1.h"
#include "libdialog_1.hxx"

Sonnet__Dialog* Sonnet__Dialog_new(Sonnet__BackgroundChecker* checker, QWidget* parent) {
    return new VirtualSonnetDialog(checker, parent);
}

QMetaObject* Sonnet__Dialog_MetaObject(const Sonnet__Dialog* self) {
    auto* vsonnet__dialog = dynamic_cast<const VirtualSonnetDialog*>(self);
    if (vsonnet__dialog && vsonnet__dialog->isVirtualSonnetDialog) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualSonnetDialog*)self)->metaObject();
    }
}

void* Sonnet__Dialog_Metacast(Sonnet__Dialog* self, const char* param1) {
    auto* vsonnet__dialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnet__dialog && vsonnet__dialog->isVirtualSonnetDialog) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualSonnetDialog*)self)->qt_metacast(param1);
    }
}

int Sonnet__Dialog_Metacall(Sonnet__Dialog* self, int param1, int param2, void** param3) {
    auto* vsonnet__dialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnet__dialog && vsonnet__dialog->isVirtualSonnetDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualSonnetDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string Sonnet__Dialog_OriginalBuffer(const Sonnet__Dialog* self) {
    QString _ret = self->originalBuffer();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__Dialog_Buffer(const Sonnet__Dialog* self) {
    QString _ret = self->buffer();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Dialog_Show(Sonnet__Dialog* self) {
    self->show();
}

void Sonnet__Dialog_ActiveAutoCorrect(Sonnet__Dialog* self, bool _active) {
    self->activeAutoCorrect(_active);
}

void Sonnet__Dialog_ShowProgressDialog(Sonnet__Dialog* self) {
    self->showProgressDialog();
}

void Sonnet__Dialog_ShowSpellCheckCompletionMessage(Sonnet__Dialog* self) {
    self->showSpellCheckCompletionMessage();
}

void Sonnet__Dialog_SetSpellCheckContinuedAfterReplacement(Sonnet__Dialog* self, bool b) {
    self->setSpellCheckContinuedAfterReplacement(b);
}

void Sonnet__Dialog_SetBuffer(Sonnet__Dialog* self, const libqt_string buffer) {
    QString buffer_QString = QString::fromUtf8(buffer.data, buffer.len);
    self->setBuffer(buffer_QString);
}

void Sonnet__Dialog_SpellCheckDone(Sonnet__Dialog* self, const libqt_string newBuffer) {
    QString newBuffer_QString = QString::fromUtf8(newBuffer.data, newBuffer.len);
    self->spellCheckDone(newBuffer_QString);
}

void Sonnet__Dialog_Connect_SpellCheckDone(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::spellCheckDone, [self, slotFunc](const QString& newBuffer) {
        const QString newBuffer_ret = newBuffer;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newBuffer_b = newBuffer_ret.toUtf8();
        auto newBuffer_str_len = newBuffer_b.length();
        const char* newBuffer_str = static_cast<const char*>(malloc(newBuffer_str_len + 1));
        memcpy((void*)newBuffer_str, newBuffer_b.data(), newBuffer_str_len);
        ((char*)newBuffer_str)[newBuffer_str_len] = '\0';
        const char* sigval1 = newBuffer_str;
        slotFunc(self, sigval1);
        libqt_free(newBuffer_str);
    });
}

void Sonnet__Dialog_Misspelling(Sonnet__Dialog* self, const libqt_string word, int start) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->misspelling(word_QString, static_cast<int>(start));
}

void Sonnet__Dialog_Connect_Misspelling(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*, int) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*, int)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::misspelling, [self, slotFunc](const QString& word, int start) {
        const QString word_ret = word;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray word_b = word_ret.toUtf8();
        auto word_str_len = word_b.length();
        const char* word_str = static_cast<const char*>(malloc(word_str_len + 1));
        memcpy((void*)word_str, word_b.data(), word_str_len);
        ((char*)word_str)[word_str_len] = '\0';
        const char* sigval1 = word_str;
        int sigval2 = start;
        slotFunc(self, sigval1, sigval2);
        libqt_free(word_str);
    });
}

void Sonnet__Dialog_Replace(Sonnet__Dialog* self, const libqt_string oldWord, int start, const libqt_string newWord) {
    QString oldWord_QString = QString::fromUtf8(oldWord.data, oldWord.len);
    QString newWord_QString = QString::fromUtf8(newWord.data, newWord.len);
    self->replace(oldWord_QString, static_cast<int>(start), newWord_QString);
}

void Sonnet__Dialog_Connect_Replace(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*, int, const char*) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*, int, const char*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::replace, [self, slotFunc](const QString& oldWord, int start, const QString& newWord) {
        const QString oldWord_ret = oldWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray oldWord_b = oldWord_ret.toUtf8();
        auto oldWord_str_len = oldWord_b.length();
        const char* oldWord_str = static_cast<const char*>(malloc(oldWord_str_len + 1));
        memcpy((void*)oldWord_str, oldWord_b.data(), oldWord_str_len);
        ((char*)oldWord_str)[oldWord_str_len] = '\0';
        const char* sigval1 = oldWord_str;
        int sigval2 = start;
        const QString newWord_ret = newWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray newWord_b = newWord_ret.toUtf8();
        auto newWord_str_len = newWord_b.length();
        const char* newWord_str = static_cast<const char*>(malloc(newWord_str_len + 1));
        memcpy((void*)newWord_str, newWord_b.data(), newWord_str_len);
        ((char*)newWord_str)[newWord_str_len] = '\0';
        const char* sigval3 = newWord_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(oldWord_str);
        libqt_free(newWord_str);
    });
}

void Sonnet__Dialog_Stop(Sonnet__Dialog* self) {
    self->stop();
}

void Sonnet__Dialog_Connect_Stop(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*) = reinterpret_cast<void (*)(Sonnet__Dialog*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::stop, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Dialog_Cancel(Sonnet__Dialog* self) {
    self->cancel();
}

void Sonnet__Dialog_Connect_Cancel(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*) = reinterpret_cast<void (*)(Sonnet__Dialog*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::cancel, [self, slotFunc]() {
        slotFunc(self);
    });
}

void Sonnet__Dialog_AutoCorrect(Sonnet__Dialog* self, const libqt_string currentWord, const libqt_string replaceWord) {
    QString currentWord_QString = QString::fromUtf8(currentWord.data, currentWord.len);
    QString replaceWord_QString = QString::fromUtf8(replaceWord.data, replaceWord.len);
    self->autoCorrect(currentWord_QString, replaceWord_QString);
}

void Sonnet__Dialog_Connect_AutoCorrect(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*, const char*) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*, const char*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::autoCorrect, [self, slotFunc](const QString& currentWord, const QString& replaceWord) {
        const QString currentWord_ret = currentWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray currentWord_b = currentWord_ret.toUtf8();
        auto currentWord_str_len = currentWord_b.length();
        const char* currentWord_str = static_cast<const char*>(malloc(currentWord_str_len + 1));
        memcpy((void*)currentWord_str, currentWord_b.data(), currentWord_str_len);
        ((char*)currentWord_str)[currentWord_str_len] = '\0';
        const char* sigval1 = currentWord_str;
        const QString replaceWord_ret = replaceWord;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray replaceWord_b = replaceWord_ret.toUtf8();
        auto replaceWord_str_len = replaceWord_b.length();
        const char* replaceWord_str = static_cast<const char*>(malloc(replaceWord_str_len + 1));
        memcpy((void*)replaceWord_str, replaceWord_b.data(), replaceWord_str_len);
        ((char*)replaceWord_str)[replaceWord_str_len] = '\0';
        const char* sigval2 = replaceWord_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(currentWord_str);
        libqt_free(replaceWord_str);
    });
}

void Sonnet__Dialog_SpellCheckStatus(Sonnet__Dialog* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->spellCheckStatus(param1_QString);
}

void Sonnet__Dialog_Connect_SpellCheckStatus(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::spellCheckStatus, [self, slotFunc](const QString& param1) {
        const QString param1_ret = param1;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray param1_b = param1_ret.toUtf8();
        auto param1_str_len = param1_b.length();
        const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
        memcpy((void*)param1_str, param1_b.data(), param1_str_len);
        ((char*)param1_str)[param1_str_len] = '\0';
        const char* sigval1 = param1_str;
        slotFunc(self, sigval1);
        libqt_free(param1_str);
    });
}

void Sonnet__Dialog_LanguageChanged(Sonnet__Dialog* self, const libqt_string language) {
    QString language_QString = QString::fromUtf8(language.data, language.len);
    self->languageChanged(language_QString);
}

void Sonnet__Dialog_Connect_LanguageChanged(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*, const char*) = reinterpret_cast<void (*)(Sonnet__Dialog*, const char*)>(slot);
    Sonnet::Dialog::connect(self, &Sonnet::Dialog::languageChanged, [self, slotFunc](const QString& language) {
        const QString language_ret = language;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray language_b = language_ret.toUtf8();
        auto language_str_len = language_b.length();
        const char* language_str = static_cast<const char*>(malloc(language_str_len + 1));
        memcpy((void*)language_str, language_b.data(), language_str_len);
        ((char*)language_str)[language_str_len] = '\0';
        const char* sigval1 = language_str;
        slotFunc(self, sigval1);
        libqt_free(language_str);
    });
}

void Sonnet__Dialog_ShowProgressDialog1(Sonnet__Dialog* self, int timeout) {
    self->showProgressDialog(static_cast<int>(timeout));
}

void Sonnet__Dialog_ShowSpellCheckCompletionMessage1(Sonnet__Dialog* self, bool b) {
    self->showSpellCheckCompletionMessage(b);
}

// Base class handler implementation
QMetaObject* Sonnet__Dialog_SuperMetaObject(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MetaObject_IsBase(true);
        return (QMetaObject*)vsonnetdialog->metaObject();
    } else {
        return (QMetaObject*)self->Sonnet::Dialog::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetaObject(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MetaObject_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* Sonnet__Dialog_SuperMetacast(Sonnet__Dialog* self, const char* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metacast_IsBase(true);
        return vsonnetdialog->qt_metacast(param1);
    } else {
        return self->Sonnet::Dialog::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetacast(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metacast_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperMetacall(Sonnet__Dialog* self, int param1, int param2, void** param3) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metacall_IsBase(true);
        return vsonnetdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->Sonnet::Dialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetacall(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metacall_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_SetVisible(Sonnet__Dialog* self, bool visible) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setVisible(visible);
    } else {
        self->Sonnet::Dialog::setVisible(visible);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperSetVisible(Sonnet__Dialog* self, bool visible) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SetVisible_IsBase(true);
        vsonnetdialog->setVisible(visible);
    } else {
        self->Sonnet::Dialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSetVisible(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SetVisible_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__Dialog_SizeHint(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return new QSize(vsonnetdialog->sizeHint());
    } else {
        return new QSize(((VirtualSonnetDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__Dialog_SuperSizeHint(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SizeHint_IsBase(true);
        return new QSize(vsonnetdialog->sizeHint());
    } else {
        return new QSize(((VirtualSonnetDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSizeHint(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SizeHint_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* Sonnet__Dialog_MinimumSizeHint(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return new QSize(vsonnetdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* Sonnet__Dialog_SuperMinimumSizeHint(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MinimumSizeHint_IsBase(true);
        return new QSize(vsonnetdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualSonnetDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMinimumSizeHint(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Open(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->open();
    } else {
        self->Sonnet::Dialog::open();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperOpen(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Open_IsBase(true);
        vsonnetdialog->open();
    } else {
        self->Sonnet::Dialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnOpen(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Open_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_Exec(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->exec();
    } else {
        return self->Sonnet::Dialog::exec();
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperExec(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Exec_IsBase(true);
        return vsonnetdialog->exec();
    } else {
        return self->Sonnet::Dialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnExec(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Exec_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Done(Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->done(static_cast<int>(param1));
    } else {
        self->Sonnet::Dialog::done(static_cast<int>(param1));
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDone(Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Done_IsBase(true);
        vsonnetdialog->done(static_cast<int>(param1));
    } else {
        self->Sonnet::Dialog::done(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDone(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Done_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Accept(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->accept();
    } else {
        self->Sonnet::Dialog::accept();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperAccept(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Accept_IsBase(true);
        vsonnetdialog->accept();
    } else {
        self->Sonnet::Dialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnAccept(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Accept_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Reject(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->reject();
    } else {
        self->Sonnet::Dialog::reject();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperReject(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Reject_IsBase(true);
        vsonnetdialog->reject();
    } else {
        self->Sonnet::Dialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnReject(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Reject_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_KeyPressEvent(Sonnet__Dialog* self, QKeyEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->keyPressEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperKeyPressEvent(Sonnet__Dialog* self, QKeyEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_KeyPressEvent_IsBase(true);
        vsonnetdialog->keyPressEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnKeyPressEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_KeyPressEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_CloseEvent(Sonnet__Dialog* self, QCloseEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->closeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperCloseEvent(Sonnet__Dialog* self, QCloseEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_CloseEvent_IsBase(true);
        vsonnetdialog->closeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnCloseEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_CloseEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ShowEvent(Sonnet__Dialog* self, QShowEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->showEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperShowEvent(Sonnet__Dialog* self, QShowEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ShowEvent_IsBase(true);
        vsonnetdialog->showEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnShowEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ShowEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ResizeEvent(Sonnet__Dialog* self, QResizeEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->resizeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperResizeEvent(Sonnet__Dialog* self, QResizeEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ResizeEvent_IsBase(true);
        vsonnetdialog->resizeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnResizeEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ResizeEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ContextMenuEvent(Sonnet__Dialog* self, QContextMenuEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->contextMenuEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperContextMenuEvent(Sonnet__Dialog* self, QContextMenuEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ContextMenuEvent_IsBase(true);
        vsonnetdialog->contextMenuEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnContextMenuEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_EventFilter(Sonnet__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualSonnetDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperEventFilter(Sonnet__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_EventFilter_IsBase(true);
        return vsonnetdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualSonnetDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEventFilter(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_EventFilter_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_DevType(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->devType();
    } else {
        return self->Sonnet::Dialog::devType();
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperDevType(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DevType_IsBase(true);
        return vsonnetdialog->devType();
    } else {
        return self->Sonnet::Dialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDevType(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DevType_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_HeightForWidth(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::Dialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperHeightForWidth(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HeightForWidth_IsBase(true);
        return vsonnetdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->Sonnet::Dialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHeightForWidth(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HeightForWidth_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_HasHeightForWidth(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->hasHeightForWidth();
    } else {
        return self->Sonnet::Dialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperHasHeightForWidth(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HasHeightForWidth_IsBase(true);
        return vsonnetdialog->hasHeightForWidth();
    } else {
        return self->Sonnet::Dialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHasHeightForWidth(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* Sonnet__Dialog_PaintEngine(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->paintEngine();
    } else {
        return self->Sonnet::Dialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* Sonnet__Dialog_SuperPaintEngine(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_PaintEngine_IsBase(true);
        return vsonnetdialog->paintEngine();
    } else {
        return self->Sonnet::Dialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnPaintEngine(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_PaintEngine_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_Event(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->event(event);
    } else {
        return ((VirtualSonnetDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Event_IsBase(true);
        return vsonnetdialog->event(event);
    } else {
        return ((VirtualSonnetDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Event_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_MousePressEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->mousePressEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMousePressEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MousePressEvent_IsBase(true);
        vsonnetdialog->mousePressEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMousePressEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MousePressEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_MouseReleaseEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseReleaseEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseReleaseEvent_IsBase(true);
        vsonnetdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseReleaseEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_MouseDoubleClickEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseDoubleClickEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseDoubleClickEvent_IsBase(true);
        vsonnetdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseDoubleClickEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_MouseMoveEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseMoveEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseMoveEvent_IsBase(true);
        vsonnetdialog->mouseMoveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_WheelEvent(Sonnet__Dialog* self, QWheelEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->wheelEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperWheelEvent(Sonnet__Dialog* self, QWheelEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_WheelEvent_IsBase(true);
        vsonnetdialog->wheelEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnWheelEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_WheelEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_KeyReleaseEvent(Sonnet__Dialog* self, QKeyEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperKeyReleaseEvent(Sonnet__Dialog* self, QKeyEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_KeyReleaseEvent_IsBase(true);
        vsonnetdialog->keyReleaseEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnKeyReleaseEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_FocusInEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->focusInEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperFocusInEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusInEvent_IsBase(true);
        vsonnetdialog->focusInEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusInEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusInEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_FocusOutEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->focusOutEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperFocusOutEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusOutEvent_IsBase(true);
        vsonnetdialog->focusOutEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusOutEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusOutEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_EnterEvent(Sonnet__Dialog* self, QEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->enterEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperEnterEvent(Sonnet__Dialog* self, QEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_EnterEvent_IsBase(true);
        vsonnetdialog->enterEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEnterEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_EnterEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_LeaveEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->leaveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperLeaveEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_LeaveEvent_IsBase(true);
        vsonnetdialog->leaveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnLeaveEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_LeaveEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_PaintEvent(Sonnet__Dialog* self, QPaintEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->paintEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperPaintEvent(Sonnet__Dialog* self, QPaintEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_PaintEvent_IsBase(true);
        vsonnetdialog->paintEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnPaintEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_PaintEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_MoveEvent(Sonnet__Dialog* self, QMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->moveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMoveEvent(Sonnet__Dialog* self, QMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MoveEvent_IsBase(true);
        vsonnetdialog->moveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_MoveEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_TabletEvent(Sonnet__Dialog* self, QTabletEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->tabletEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperTabletEvent(Sonnet__Dialog* self, QTabletEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_TabletEvent_IsBase(true);
        vsonnetdialog->tabletEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnTabletEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_TabletEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ActionEvent(Sonnet__Dialog* self, QActionEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->actionEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperActionEvent(Sonnet__Dialog* self, QActionEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ActionEvent_IsBase(true);
        vsonnetdialog->actionEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnActionEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ActionEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_DragEnterEvent(Sonnet__Dialog* self, QDragEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->dragEnterEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragEnterEvent(Sonnet__Dialog* self, QDragEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragEnterEvent_IsBase(true);
        vsonnetdialog->dragEnterEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragEnterEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragEnterEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_DragMoveEvent(Sonnet__Dialog* self, QDragMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->dragMoveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragMoveEvent(Sonnet__Dialog* self, QDragMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragMoveEvent_IsBase(true);
        vsonnetdialog->dragMoveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragMoveEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_DragLeaveEvent(Sonnet__Dialog* self, QDragLeaveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragLeaveEvent(Sonnet__Dialog* self, QDragLeaveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragLeaveEvent_IsBase(true);
        vsonnetdialog->dragLeaveEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragLeaveEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_DropEvent(Sonnet__Dialog* self, QDropEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->dropEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDropEvent(Sonnet__Dialog* self, QDropEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DropEvent_IsBase(true);
        vsonnetdialog->dropEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDropEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DropEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_HideEvent(Sonnet__Dialog* self, QHideEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->hideEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperHideEvent(Sonnet__Dialog* self, QHideEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HideEvent_IsBase(true);
        vsonnetdialog->hideEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHideEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_HideEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_NativeEvent(Sonnet__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperNativeEvent(Sonnet__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_NativeEvent_IsBase(true);
        return vsonnetdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualSonnetDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnNativeEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_NativeEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ChangeEvent(Sonnet__Dialog* self, QEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->changeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperChangeEvent(Sonnet__Dialog* self, QEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ChangeEvent_IsBase(true);
        vsonnetdialog->changeEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnChangeEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ChangeEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_Metric(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperMetric(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metric_IsBase(true);
        return vsonnetdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualSonnetDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetric(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Metric_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_InitPainter(const Sonnet__Dialog* self, QPainter* painter) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->initPainter(painter);
    } else {
        ((VirtualSonnetDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperInitPainter(const Sonnet__Dialog* self, QPainter* painter) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InitPainter_IsBase(true);
        vsonnetdialog->initPainter(painter);
    } else {
        ((VirtualSonnetDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInitPainter(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InitPainter_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* Sonnet__Dialog_Redirected(const Sonnet__Dialog* self, QPoint* offset) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->redirected(offset);
    } else {
        return ((VirtualSonnetDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__Dialog_SuperRedirected(const Sonnet__Dialog* self, QPoint* offset) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Redirected_IsBase(true);
        return vsonnetdialog->redirected(offset);
    } else {
        return ((VirtualSonnetDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnRedirected(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Redirected_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* Sonnet__Dialog_SharedPainter(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->sharedPainter();
    } else {
        return ((VirtualSonnetDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* Sonnet__Dialog_SuperSharedPainter(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SharedPainter_IsBase(true);
        return vsonnetdialog->sharedPainter();
    } else {
        return ((VirtualSonnetDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSharedPainter(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SharedPainter_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_InputMethodEvent(Sonnet__Dialog* self, QInputMethodEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperInputMethodEvent(Sonnet__Dialog* self, QInputMethodEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InputMethodEvent_IsBase(true);
        vsonnetdialog->inputMethodEvent(param1);
    } else {
        ((VirtualSonnetDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInputMethodEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InputMethodEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* Sonnet__Dialog_InputMethodQuery(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return new QVariant(vsonnetdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* Sonnet__Dialog_SuperInputMethodQuery(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InputMethodQuery_IsBase(true);
        return new QVariant(vsonnetdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualSonnetDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInputMethodQuery(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_InputMethodQuery_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_FocusNextPrevChild(Sonnet__Dialog* self, bool next) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperFocusNextPrevChild(Sonnet__Dialog* self, bool next) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusNextPrevChild_IsBase(true);
        return vsonnetdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualSonnetDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusNextPrevChild(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_TimerEvent(Sonnet__Dialog* self, QTimerEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->timerEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperTimerEvent(Sonnet__Dialog* self, QTimerEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_TimerEvent_IsBase(true);
        vsonnetdialog->timerEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnTimerEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_TimerEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ChildEvent(Sonnet__Dialog* self, QChildEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->childEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperChildEvent(Sonnet__Dialog* self, QChildEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ChildEvent_IsBase(true);
        vsonnetdialog->childEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnChildEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ChildEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_CustomEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->customEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperCustomEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_CustomEvent_IsBase(true);
        vsonnetdialog->customEvent(event);
    } else {
        ((VirtualSonnetDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnCustomEvent(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_CustomEvent_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_ConnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->connectNotify(*signal);
    } else {
        ((VirtualSonnetDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperConnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ConnectNotify_IsBase(true);
        vsonnetdialog->connectNotify(*signal);
    } else {
        ((VirtualSonnetDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnConnectNotify(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_ConnectNotify_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_DisconnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDisconnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DisconnectNotify_IsBase(true);
        vsonnetdialog->disconnectNotify(*signal);
    } else {
        ((VirtualSonnetDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDisconnectNotify(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_DisconnectNotify_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_AdjustPosition(Sonnet__Dialog* self, QWidget* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->adjustPosition(param1);
    } else {
        ((VirtualSonnetDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperAdjustPosition(Sonnet__Dialog* self, QWidget* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_AdjustPosition_IsBase(true);
        vsonnetdialog->adjustPosition(param1);
    } else {
        ((VirtualSonnetDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnAdjustPosition(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_AdjustPosition_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_UpdateMicroFocus(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->updateMicroFocus();
    } else {
        ((VirtualSonnetDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperUpdateMicroFocus(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_UpdateMicroFocus_IsBase(true);
        vsonnetdialog->updateMicroFocus();
    } else {
        ((VirtualSonnetDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnUpdateMicroFocus(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Create(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->create();
    } else {
        ((VirtualSonnetDialog*)self)->create();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperCreate(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Create_IsBase(true);
        vsonnetdialog->create();
    } else {
        ((VirtualSonnetDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnCreate(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Create_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void Sonnet__Dialog_Destroy(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->destroy();
    } else {
        ((VirtualSonnetDialog*)self)->destroy();
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDestroy(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Destroy_IsBase(true);
        vsonnetdialog->destroy();
    } else {
        ((VirtualSonnetDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDestroy(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Destroy_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_FocusNextChild(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->focusNextChild();
    } else {
        return ((VirtualSonnetDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperFocusNextChild(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusNextChild_IsBase(true);
        return vsonnetdialog->focusNextChild();
    } else {
        return ((VirtualSonnetDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusNextChild(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusNextChild_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_FocusPreviousChild(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->focusPreviousChild();
    } else {
        return ((VirtualSonnetDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperFocusPreviousChild(Sonnet__Dialog* self) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusPreviousChild_IsBase(true);
        return vsonnetdialog->focusPreviousChild();
    } else {
        return ((VirtualSonnetDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusPreviousChild(Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* Sonnet__Dialog_Sender(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->sender();
    } else {
        return ((VirtualSonnetDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* Sonnet__Dialog_SuperSender(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Sender_IsBase(true);
        return vsonnetdialog->sender();
    } else {
        return ((VirtualSonnetDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSender(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Sender_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_SenderSignalIndex(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->senderSignalIndex();
    } else {
        return ((VirtualSonnetDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperSenderSignalIndex(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SenderSignalIndex_IsBase(true);
        return vsonnetdialog->senderSignalIndex();
    } else {
        return ((VirtualSonnetDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSenderSignalIndex(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int Sonnet__Dialog_Receivers(const Sonnet__Dialog* self, const char* signal) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->receivers(signal);
    } else {
        return ((VirtualSonnetDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperReceivers(const Sonnet__Dialog* self, const char* signal) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Receivers_IsBase(true);
        return vsonnetdialog->receivers(signal);
    } else {
        return ((VirtualSonnetDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnReceivers(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_Receivers_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool Sonnet__Dialog_IsSignalConnected(const Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperIsSignalConnected(const Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_IsSignalConnected_IsBase(true);
        return vsonnetdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualSonnetDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnIsSignalConnected(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_IsSignalConnected_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double Sonnet__Dialog_GetDecodedMetricF(const Sonnet__Dialog* self, int metricA, int metricB) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        return vsonnetdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double Sonnet__Dialog_SuperGetDecodedMetricF(const Sonnet__Dialog* self, int metricA, int metricB) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_GetDecodedMetricF_IsBase(true);
        return vsonnetdialog->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualSonnetDialog*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnGetDecodedMetricF(const Sonnet__Dialog* self, intptr_t slot) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog && vsonnetdialog->isVirtualSonnetDialog) {
        vsonnetdialog->setSonnet__Dialog_GetDecodedMetricF_Callback(reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_GetDecodedMetricF_Callback>(slot));
    }
}

void Sonnet__Dialog_Delete(Sonnet__Dialog* self) {
    delete self;
}
