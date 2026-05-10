#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteResultJob
#include <grammalecteresultjob.h>
#include "libgrammalecteresultjob.h"
#include "libgrammalecteresultjob.hxx"

TextGrammarCheck__GrammalecteResultJob* TextGrammarCheck__GrammalecteResultJob_new() {
    return new VirtualTextGrammarCheckGrammalecteResultJob();
}

TextGrammarCheck__GrammalecteResultJob* TextGrammarCheck__GrammalecteResultJob_new2(QObject* parent) {
    return new VirtualTextGrammarCheckGrammalecteResultJob(parent);
}

QMetaObject* TextGrammarCheck__GrammalecteResultJob_MetaObject(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheck__grammalecteresultjob = dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheck__grammalecteresultjob && vtextgrammarcheck__grammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammalecteResultJob*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammalecteResultJob_Metacast(TextGrammarCheck__GrammalecteResultJob* self, const char* param1) {
    auto* vtextgrammarcheck__grammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheck__grammalecteresultjob && vtextgrammarcheck__grammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammalecteResultJob_Metacall(TextGrammarCheck__GrammalecteResultJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheck__grammalecteresultjob && vtextgrammarcheck__grammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__GrammalecteResultJob_Start(TextGrammarCheck__GrammalecteResultJob* self) {
    self->start();
}

bool TextGrammarCheck__GrammalecteResultJob_CanStart(TextGrammarCheck__GrammalecteResultJob* self) {
    return self->canStart();
}

libqt_string TextGrammarCheck__GrammalecteResultJob_Text(const TextGrammarCheck__GrammalecteResultJob* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteResultJob_SetText(TextGrammarCheck__GrammalecteResultJob* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

libqt_string TextGrammarCheck__GrammalecteResultJob_PythonPath(const TextGrammarCheck__GrammalecteResultJob* self) {
    QString _ret = self->pythonPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteResultJob_SetPythonPath(TextGrammarCheck__GrammalecteResultJob* self, const libqt_string pythonPath) {
    QString pythonPath_QString = QString::fromUtf8(pythonPath.data, pythonPath.len);
    self->setPythonPath(pythonPath_QString);
}

libqt_string TextGrammarCheck__GrammalecteResultJob_GrammarlecteCliPath(const TextGrammarCheck__GrammalecteResultJob* self) {
    QString _ret = self->grammarlecteCliPath();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void TextGrammarCheck__GrammalecteResultJob_SetGrammarlecteCliPath(TextGrammarCheck__GrammalecteResultJob* self, const libqt_string grammarlecteCliPath) {
    QString grammarlecteCliPath_QString = QString::fromUtf8(grammarlecteCliPath.data, grammarlecteCliPath.len);
    self->setGrammarlecteCliPath(grammarlecteCliPath_QString);
}

libqt_list /* of libqt_string */ TextGrammarCheck__GrammalecteResultJob_Arguments(const TextGrammarCheck__GrammalecteResultJob* self) {
    QList<QString> _ret = self->arguments();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void TextGrammarCheck__GrammalecteResultJob_SetArguments(TextGrammarCheck__GrammalecteResultJob* self, const libqt_list /* of libqt_string */ arguments) {
    QList<QString> arguments_QList;
    arguments_QList.reserve(arguments.len);
    libqt_string* arguments_arr = static_cast<libqt_string*>(arguments.data);
    for (size_t i = 0; i < arguments.len; ++i) {
        QString arguments_arr_i_QString = QString::fromUtf8(arguments_arr[i].data, arguments_arr[i].len);
        arguments_QList.push_back(arguments_arr_i_QString);
    }
    self->setArguments(arguments_QList);
}

void TextGrammarCheck__GrammalecteResultJob_Finished(TextGrammarCheck__GrammalecteResultJob* self, const libqt_string result) {
    QString result_QString = QString::fromUtf8(result.data, result.len);
    self->finished(result_QString);
}

void TextGrammarCheck__GrammalecteResultJob_Connect_Finished(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammalecteResultJob*, const char*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammalecteResultJob*, const char*)>(slot);
    TextGrammarCheck::GrammalecteResultJob::connect(self, &TextGrammarCheck::GrammalecteResultJob::finished, [self, slotFunc](const QString& result) {
        const QString result_ret = result;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray result_b = result_ret.toUtf8();
        auto result_str_len = result_b.length();
        const char* result_str = static_cast<const char*>(malloc(result_str_len + 1));
        memcpy((void*)result_str, result_b.data(), result_str_len);
        ((char*)result_str)[result_str_len] = '\0';
        const char* sigval1 = result_str;
        slotFunc(self, sigval1);
        libqt_free(result_str);
    });
}

void TextGrammarCheck__GrammalecteResultJob_Error(TextGrammarCheck__GrammalecteResultJob* self, int typeVal) {
    self->error(static_cast<TextGrammarCheck::GrammalecteResultJob::ErrorType>(typeVal));
}

void TextGrammarCheck__GrammalecteResultJob_Connect_Error(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammalecteResultJob*, int) = reinterpret_cast<void (*)(TextGrammarCheck__GrammalecteResultJob*, int)>(slot);
    TextGrammarCheck::GrammalecteResultJob::connect(self, &TextGrammarCheck::GrammalecteResultJob::error, [self, slotFunc](TextGrammarCheck::GrammalecteResultJob::ErrorType typeVal) {
        int sigval1 = static_cast<int>(typeVal);
        slotFunc(self, sigval1);
    });
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteResultJob_SuperMetaObject(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalecteresultjob->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteResultJob::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnMetaObject(const TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteResultJob_SuperMetacast(TextGrammarCheck__GrammalecteResultJob* self, const char* param1) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnMetacast(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultJob_SuperMetacall(TextGrammarCheck__GrammalecteResultJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnMetacall(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_Event(TextGrammarCheck__GrammalecteResultJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_SuperEvent(TextGrammarCheck__GrammalecteResultJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Event_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnEvent(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_EventFilter(TextGrammarCheck__GrammalecteResultJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_SuperEventFilter(TextGrammarCheck__GrammalecteResultJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteResultJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnEventFilter(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultJob_TimerEvent(TextGrammarCheck__GrammalecteResultJob* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultJob_SuperTimerEvent(TextGrammarCheck__GrammalecteResultJob* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultjob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnTimerEvent(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultJob_ChildEvent(TextGrammarCheck__GrammalecteResultJob* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultJob_SuperChildEvent(TextGrammarCheck__GrammalecteResultJob* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultjob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnChildEvent(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultJob_CustomEvent(TextGrammarCheck__GrammalecteResultJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultJob_SuperCustomEvent(TextGrammarCheck__GrammalecteResultJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalecteresultjob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnCustomEvent(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultJob_ConnectNotify(TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultJob_SuperConnectNotify(TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteresultjob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnConnectNotify(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteResultJob_DisconnectNotify(TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteResultJob_SuperDisconnectNotify(TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalecteresultjob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnDisconnectNotify(TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(self);
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteResultJob_Sender(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteResultJob_SuperSender(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Sender_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnSender(const TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultJob_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteResultJob* self) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteResultJob_Receivers(const TextGrammarCheck__GrammalecteResultJob* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteResultJob_SuperReceivers(const TextGrammarCheck__GrammalecteResultJob* self, const char* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnReceivers(const TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_IsSignalConnected(const TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        return vtextgrammarcheckgrammalecteresultjob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteResultJob_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteResultJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalecteresultjob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteResultJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteResultJob_OnIsSignalConnected(const TextGrammarCheck__GrammalecteResultJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalecteresultjob = const_cast<VirtualTextGrammarCheckGrammalecteResultJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteResultJob*>(self));
    if (vtextgrammarcheckgrammalecteresultjob && vtextgrammarcheckgrammalecteresultjob->isVirtualTextGrammarCheckGrammalecteResultJob) {
        vtextgrammarcheckgrammalecteresultjob->setTextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteResultJob::TextGrammarCheck__GrammalecteResultJob_IsSignalConnected_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteResultJob_Delete(TextGrammarCheck__GrammalecteResultJob* self) {
    delete self;
}
