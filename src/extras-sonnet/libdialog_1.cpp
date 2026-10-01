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
    return (QMetaObject*)self->metaObject();
}

void* Sonnet__Dialog_Metacast(Sonnet__Dialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Sonnet__Dialog_Metacall(Sonnet__Dialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Sonnet__Dialog_Tr(const char* s) {
    auto _ret = Sonnet::Dialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__Dialog_OriginalBuffer(const Sonnet__Dialog* self) {
    auto _ret = self->originalBuffer();
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
    auto _ret = self->buffer();
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&)>(&Sonnet::Dialog::spellCheckDone),
                            [self, slotFunc](const QString& newBuffer) {
                                const auto newBuffer_ret = newBuffer;
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&, int)>(&Sonnet::Dialog::misspelling),
                            [self, slotFunc](const QString& word, int start) {
                                const auto word_ret = word;
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&, int, const QString&)>(&Sonnet::Dialog::replace),
                            [self, slotFunc](const QString& oldWord, int start, const QString& newWord) {
                                const auto oldWord_ret = oldWord;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray oldWord_b = oldWord_ret.toUtf8();
                                auto oldWord_str_len = oldWord_b.length();
                                const char* oldWord_str = static_cast<const char*>(malloc(oldWord_str_len + 1));
                                memcpy((void*)oldWord_str, oldWord_b.data(), oldWord_str_len);
                                ((char*)oldWord_str)[oldWord_str_len] = '\0';
                                const char* sigval1 = oldWord_str;
                                int sigval2 = start;
                                const auto newWord_ret = newWord;
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)()>(&Sonnet::Dialog::stop),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void Sonnet__Dialog_Cancel(Sonnet__Dialog* self) {
    self->cancel();
}

void Sonnet__Dialog_Connect_Cancel(Sonnet__Dialog* self, intptr_t slot) {
    void (*slotFunc)(Sonnet__Dialog*) = reinterpret_cast<void (*)(Sonnet__Dialog*)>(slot);
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)()>(&Sonnet::Dialog::cancel),
                            [self, slotFunc]() {
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&, const QString&)>(&Sonnet::Dialog::autoCorrect),
                            [self, slotFunc](const QString& currentWord, const QString& replaceWord) {
                                const auto currentWord_ret = currentWord;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray currentWord_b = currentWord_ret.toUtf8();
                                auto currentWord_str_len = currentWord_b.length();
                                const char* currentWord_str = static_cast<const char*>(malloc(currentWord_str_len + 1));
                                memcpy((void*)currentWord_str, currentWord_b.data(), currentWord_str_len);
                                ((char*)currentWord_str)[currentWord_str_len] = '\0';
                                const char* sigval1 = currentWord_str;
                                const auto replaceWord_ret = replaceWord;
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&)>(&Sonnet::Dialog::spellCheckStatus),
                            [self, slotFunc](const QString& param1) {
                                const auto param1_ret = param1;
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
    Sonnet::Dialog::connect(self,
                            static_cast<void (Sonnet::Dialog::*)(const QString&)>(&Sonnet::Dialog::languageChanged),
                            [self, slotFunc](const QString& language) {
                                const auto language_ret = language;
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

libqt_string Sonnet__Dialog_Tr2(const char* s, const char* c) {
    auto _ret = Sonnet::Dialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Sonnet__Dialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = Sonnet::Dialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Sonnet__Dialog_ShowProgressDialog1(Sonnet__Dialog* self, int timeout) {
    self->showProgressDialog(static_cast<int>(timeout));
}

void Sonnet__Dialog_ShowSpellCheckCompletionMessage1(Sonnet__Dialog* self, bool b) {
    self->showSpellCheckCompletionMessage(b);
}

// Base class handler implementation
QMetaObject* Sonnet__Dialog_SuperMetaObject(const Sonnet__Dialog* self) {
    return (QMetaObject*)self->Sonnet::Dialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetaObject(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_metaobject_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Sonnet__Dialog_SuperMetacast(Sonnet__Dialog* self, const char* param1) {
    return self->Sonnet::Dialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetacast(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_metacast_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int Sonnet__Dialog_SuperMetacall(Sonnet__Dialog* self, int param1, int param2, void** param3) {
    return self->Sonnet::Dialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetacall(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_metacall_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metacall_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_SetVisible(Sonnet__Dialog* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void Sonnet__Dialog_SuperSetVisible(Sonnet__Dialog* self, bool visible) {
    self->Sonnet::Dialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSetVisible(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_setvisible_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__Dialog_SizeHint(const Sonnet__Dialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* Sonnet__Dialog_SuperSizeHint(const Sonnet__Dialog* self) {
    return new QSize(self->Sonnet::Dialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSizeHint(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_sizehint_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* Sonnet__Dialog_MinimumSizeHint(const Sonnet__Dialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* Sonnet__Dialog_SuperMinimumSizeHint(const Sonnet__Dialog* self) {
    return new QSize(self->Sonnet::Dialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMinimumSizeHint(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_minimumsizehint_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_Open(Sonnet__Dialog* self) {
    self->open();
}

// Base class handler implementation
void Sonnet__Dialog_SuperOpen(Sonnet__Dialog* self) {
    self->Sonnet::Dialog::open();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnOpen(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_open_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Open_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__Dialog_Exec(Sonnet__Dialog* self) {
    return self->exec();
}

// Base class handler implementation
int Sonnet__Dialog_SuperExec(Sonnet__Dialog* self) {
    return self->Sonnet::Dialog::exec();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnExec(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_exec_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_Done(Sonnet__Dialog* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void Sonnet__Dialog_SuperDone(Sonnet__Dialog* self, int param1) {
    self->Sonnet::Dialog::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDone(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_done_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Done_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_Accept(Sonnet__Dialog* self) {
    self->accept();
}

// Base class handler implementation
void Sonnet__Dialog_SuperAccept(Sonnet__Dialog* self) {
    self->Sonnet::Dialog::accept();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnAccept(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_accept_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_Reject(Sonnet__Dialog* self) {
    self->reject();
}

// Base class handler implementation
void Sonnet__Dialog_SuperReject(Sonnet__Dialog* self) {
    self->Sonnet::Dialog::reject();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnReject(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_reject_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_KeyPressEvent(Sonnet__Dialog* self, QKeyEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperKeyPressEvent(Sonnet__Dialog* self, QKeyEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnKeyPressEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_keypressevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_CloseEvent(Sonnet__Dialog* self, QCloseEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperCloseEvent(Sonnet__Dialog* self, QCloseEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnCloseEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_closeevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ShowEvent(Sonnet__Dialog* self, QShowEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperShowEvent(Sonnet__Dialog* self, QShowEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnShowEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_showevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ResizeEvent(Sonnet__Dialog* self, QResizeEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperResizeEvent(Sonnet__Dialog* self, QResizeEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnResizeEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_resizeevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ContextMenuEvent(Sonnet__Dialog* self, QContextMenuEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperContextMenuEvent(Sonnet__Dialog* self, QContextMenuEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnContextMenuEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_contextmenuevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Dialog_EventFilter(Sonnet__Dialog* self, QObject* param1, QEvent* param2) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        return vsonnetdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperEventFilter(Sonnet__Dialog* self, QObject* param1, QEvent* param2) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->Sonnet::Dialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEventFilter(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_eventfilter_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__Dialog_DevType(const Sonnet__Dialog* self) {
    return self->devType();
}

// Base class handler implementation
int Sonnet__Dialog_SuperDevType(const Sonnet__Dialog* self) {
    return self->Sonnet::Dialog::devType();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDevType(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_devtype_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__Dialog_HeightForWidth(const Sonnet__Dialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int Sonnet__Dialog_SuperHeightForWidth(const Sonnet__Dialog* self, int param1) {
    return self->Sonnet::Dialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHeightForWidth(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_heightforwidth_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Dialog_HasHeightForWidth(const Sonnet__Dialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool Sonnet__Dialog_SuperHasHeightForWidth(const Sonnet__Dialog* self) {
    return self->Sonnet::Dialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHasHeightForWidth(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_hasheightforwidth_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* Sonnet__Dialog_PaintEngine(const Sonnet__Dialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* Sonnet__Dialog_SuperPaintEngine(const Sonnet__Dialog* self) {
    return self->Sonnet::Dialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnPaintEngine(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_paintengine_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Dialog_Event(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        return vsonnetdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperEvent(Sonnet__Dialog* self, QEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->Sonnet::Dialog::event(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_event_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Event_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_MousePressEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMousePressEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMousePressEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_mousepressevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_MouseReleaseEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseReleaseEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseReleaseEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_mousereleaseevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_MouseDoubleClickEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseDoubleClickEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseDoubleClickEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_MouseMoveEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMouseMoveEvent(Sonnet__Dialog* self, QMouseEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMouseMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_mousemoveevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_WheelEvent(Sonnet__Dialog* self, QWheelEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperWheelEvent(Sonnet__Dialog* self, QWheelEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnWheelEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_wheelevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_KeyReleaseEvent(Sonnet__Dialog* self, QKeyEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperKeyReleaseEvent(Sonnet__Dialog* self, QKeyEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnKeyReleaseEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_keyreleaseevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_FocusInEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperFocusInEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusInEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_focusinevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_FocusOutEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperFocusOutEvent(Sonnet__Dialog* self, QFocusEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusOutEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_focusoutevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_EnterEvent(Sonnet__Dialog* self, QEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperEnterEvent(Sonnet__Dialog* self, QEnterEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnEnterEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_enterevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_LeaveEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperLeaveEvent(Sonnet__Dialog* self, QEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnLeaveEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_leaveevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_PaintEvent(Sonnet__Dialog* self, QPaintEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperPaintEvent(Sonnet__Dialog* self, QPaintEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnPaintEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_paintevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_MoveEvent(Sonnet__Dialog* self, QMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperMoveEvent(Sonnet__Dialog* self, QMoveEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_moveevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_TabletEvent(Sonnet__Dialog* self, QTabletEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperTabletEvent(Sonnet__Dialog* self, QTabletEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnTabletEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_tabletevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ActionEvent(Sonnet__Dialog* self, QActionEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperActionEvent(Sonnet__Dialog* self, QActionEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnActionEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_actionevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_DragEnterEvent(Sonnet__Dialog* self, QDragEnterEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragEnterEvent(Sonnet__Dialog* self, QDragEnterEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragEnterEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_dragenterevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_DragMoveEvent(Sonnet__Dialog* self, QDragMoveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragMoveEvent(Sonnet__Dialog* self, QDragMoveEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragMoveEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_dragmoveevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_DragLeaveEvent(Sonnet__Dialog* self, QDragLeaveEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDragLeaveEvent(Sonnet__Dialog* self, QDragLeaveEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDragLeaveEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_dragleaveevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_DropEvent(Sonnet__Dialog* self, QDropEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDropEvent(Sonnet__Dialog* self, QDropEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDropEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_dropevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_HideEvent(Sonnet__Dialog* self, QHideEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperHideEvent(Sonnet__Dialog* self, QHideEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnHideEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_hideevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Dialog_NativeEvent(Sonnet__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        return vsonnetdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperNativeEvent(Sonnet__Dialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->Sonnet::Dialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnNativeEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_nativeevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ChangeEvent(Sonnet__Dialog* self, QEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperChangeEvent(Sonnet__Dialog* self, QEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnChangeEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_changeevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int Sonnet__Dialog_Metric(const Sonnet__Dialog* self, int param1) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog) {
        return vsonnetdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int Sonnet__Dialog_SuperMetric(const Sonnet__Dialog* self, int param1) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->Sonnet::Dialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnMetric(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_metric_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_InitPainter(const Sonnet__Dialog* self, QPainter* painter) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog) {
        vsonnetdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperInitPainter(const Sonnet__Dialog* self, QPainter* painter) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        vsonnetdialog->Sonnet::Dialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInitPainter(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_initpainter_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* Sonnet__Dialog_Redirected(const Sonnet__Dialog* self, QPoint* offset) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog) {
        return vsonnetdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* Sonnet__Dialog_SuperRedirected(const Sonnet__Dialog* self, QPoint* offset) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->Sonnet::Dialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnRedirected(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_redirected_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* Sonnet__Dialog_SharedPainter(const Sonnet__Dialog* self) {
    auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self));
    if (vsonnetdialog) {
        return vsonnetdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* Sonnet__Dialog_SuperSharedPainter(const Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->Sonnet::Dialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnSharedPainter(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_sharedpainter_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_InputMethodEvent(Sonnet__Dialog* self, QInputMethodEvent* param1) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperInputMethodEvent(Sonnet__Dialog* self, QInputMethodEvent* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInputMethodEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_inputmethodevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* Sonnet__Dialog_InputMethodQuery(const Sonnet__Dialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* Sonnet__Dialog_SuperInputMethodQuery(const Sonnet__Dialog* self, int param1) {
    return new QVariant(self->Sonnet::Dialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnInputMethodQuery(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self)))
        vsonnetdialog->sonnet__dialog_inputmethodquery_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool Sonnet__Dialog_FocusNextPrevChild(Sonnet__Dialog* self, bool next) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        return vsonnetdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool Sonnet__Dialog_SuperFocusNextPrevChild(Sonnet__Dialog* self, bool next) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->Sonnet::Dialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnFocusNextPrevChild(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_focusnextprevchild_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_TimerEvent(Sonnet__Dialog* self, QTimerEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperTimerEvent(Sonnet__Dialog* self, QTimerEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnTimerEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_timerevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ChildEvent(Sonnet__Dialog* self, QChildEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperChildEvent(Sonnet__Dialog* self, QChildEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnChildEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_childevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_CustomEvent(Sonnet__Dialog* self, QEvent* event) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperCustomEvent(Sonnet__Dialog* self, QEvent* event) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnCustomEvent(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_customevent_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_ConnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperConnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnConnectNotify(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_connectnotify_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Sonnet__Dialog_DisconnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self);
    if (vsonnetdialog) {
        vsonnetdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Sonnet::Dialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Sonnet__Dialog_SuperDisconnectNotify(Sonnet__Dialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->Sonnet::Dialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Sonnet::Dialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Sonnet__Dialog_OnDisconnectNotify(Sonnet__Dialog* self, intptr_t slot) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self))
        vsonnetdialog->sonnet__dialog_disconnectnotify_callback = reinterpret_cast<VirtualSonnetDialog::Sonnet__Dialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void Sonnet__Dialog_AdjustPosition(Sonnet__Dialog* self, QWidget* param1) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->VirtualSonnetDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method Sonnet::Dialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Dialog_UpdateMicroFocus(Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->VirtualSonnetDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Dialog_Create(Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->VirtualSonnetDialog::create();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void Sonnet__Dialog_Destroy(Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        vsonnetdialog->VirtualSonnetDialog::destroy();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__Dialog_FocusNextChild(Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->VirtualSonnetDialog::focusNextChild();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__Dialog_FocusPreviousChild(Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = dynamic_cast<VirtualSonnetDialog*>(self)) {
        return vsonnetdialog->VirtualSonnetDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* Sonnet__Dialog_Sender(const Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->VirtualSonnetDialog::sender();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Dialog_SenderSignalIndex(const Sonnet__Dialog* self) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->VirtualSonnetDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method Sonnet::Dialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Sonnet__Dialog_Receivers(const Sonnet__Dialog* self, const char* signal) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->VirtualSonnetDialog::receivers(signal);
    } else
        qFatal("Error: Protected method Sonnet::Dialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Sonnet__Dialog_IsSignalConnected(const Sonnet__Dialog* self, const QMetaMethod* signal) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->VirtualSonnetDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Sonnet::Dialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double Sonnet__Dialog_GetDecodedMetricF(const Sonnet__Dialog* self, int metricA, int metricB) {
    if (auto* vsonnetdialog = const_cast<VirtualSonnetDialog*>(dynamic_cast<const VirtualSonnetDialog*>(self))) {
        return vsonnetdialog->VirtualSonnetDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method Sonnet::Dialog::getDecodedMetricF called without a directly constructed type");
}

void Sonnet__Dialog_Delete(Sonnet__Dialog* self) {
    delete self;
}
