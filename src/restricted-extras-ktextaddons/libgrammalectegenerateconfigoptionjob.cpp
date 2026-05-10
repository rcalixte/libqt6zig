#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVector>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteGenerateConfigOptionJob
#define WORKAROUND_INNER_CLASS_DEFINITION_TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option
#include <grammalectegenerateconfigoptionjob.h>
#include "libgrammalectegenerateconfigoptionjob.h"
#include "libgrammalectegenerateconfigoptionjob.hxx"

TextGrammarCheck__GrammalecteGenerateConfigOptionJob* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_new() {
    return new VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob();
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_new2(QObject* parent) {
    return new VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob(parent);
}

QMetaObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheck__grammalectegenerateconfigoptionjob = dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheck__grammalectegenerateconfigoptionjob && vtextgrammarcheck__grammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->metaObject();
    }
}

void* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* param1) {
    auto* vtextgrammarcheck__grammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheck__grammalectegenerateconfigoptionjob && vtextgrammarcheck__grammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->qt_metacast(param1);
    }
}

int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheck__grammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheck__grammalectegenerateconfigoptionjob && vtextgrammarcheck__grammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Start(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    self->start();
}

bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CanStart(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    return self->canStart();
}

libqt_string TextGrammarCheck__GrammalecteGenerateConfigOptionJob_PythonPath(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
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

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SetPythonPath(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const libqt_string pythonPath) {
    QString pythonPath_QString = QString::fromUtf8(pythonPath.data, pythonPath.len);
    self->setPythonPath(pythonPath_QString);
}

libqt_string TextGrammarCheck__GrammalecteGenerateConfigOptionJob_GrammarlecteCliPath(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
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

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SetGrammarlecteCliPath(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const libqt_string grammarlecteCliPath) {
    QString grammarlecteCliPath_QString = QString::fromUtf8(grammarlecteCliPath.data, grammarlecteCliPath.len);
    self->setGrammarlecteCliPath(grammarlecteCliPath_QString);
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Error(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    self->error();
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Connect_Error(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*) = reinterpret_cast<void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*)>(slot);
    TextGrammarCheck::GrammalecteGenerateConfigOptionJob::connect(self, &TextGrammarCheck::GrammalecteGenerateConfigOptionJob::error, [self, slotFunc]() {
        slotFunc(self);
    });
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Finished(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */ result) {
    QVector<TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option> result_QVector;
    result_QVector.reserve(result.len);
    TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option** result_arr = static_cast<TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option**>(result.data);
    for (size_t i = 0; i < result.len; ++i) {
        result_QVector.push_back(*(result_arr[i]));
    }
    self->finished(result_QVector);
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Connect_Finished(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    void (*slotFunc)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */) = reinterpret_cast<void (*)(TextGrammarCheck__GrammalecteGenerateConfigOptionJob*, libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */)>(slot);
    TextGrammarCheck::GrammalecteGenerateConfigOptionJob::connect(self, &TextGrammarCheck::GrammalecteGenerateConfigOptionJob::finished, [self, slotFunc](const QVector<TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option>& result) {
        const QVector<TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option>& result_ret = result;
        // Convert QVector<> from C++ memory to manually-managed C memory
        TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option** result_arr = static_cast<TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option**>(malloc(sizeof(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option*) * (result_ret.size())));
        for (qsizetype i = 0; i < result_ret.size(); ++i) {
            result_arr[i] = new TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option(result_ret[i]);
        }
        libqt_list result_out;
        result_out.len = result_ret.size();
        result_out.data = static_cast<void*>(result_arr);
        libqt_list /* of TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* */ sigval1 = result_out;
        slotFunc(self, sigval1);
        free(result_arr);
    });
}

// Base class handler implementation
QMetaObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetaObject(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_IsBase(true);
        return (QMetaObject*)vtextgrammarcheckgrammalectegenerateconfigoptionjob->metaObject();
    } else {
        return (QMetaObject*)self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetaObject(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetacast(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* param1) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->qt_metacast(param1);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetacast(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperMetacall(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, int param1, int param2, void** param3) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnMetacall(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::event(event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->event(event);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperEventFilter(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QObject* watched, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->eventFilter(watched, event);
    } else {
        return self->TextGrammarCheck::GrammalecteGenerateConfigOptionJob::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnEventFilter(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperTimerEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QTimerEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_IsBase(true);
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->timerEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnTimerEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->childEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperChildEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QChildEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_IsBase(true);
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->childEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnChildEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->customEvent(event);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperCustomEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, QEvent* event) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_IsBase(true);
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->customEvent(event);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnCustomEvent(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperConnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_IsBase(true);
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->connectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnConnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperDisconnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_IsBase(true);
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->disconnectNotify(*signal);
    } else {
        ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnDisconnectNotify(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = dynamic_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self);
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->sender();
    }
}

// Base class handler implementation
QObject* TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSender(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->sender();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnSender(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperSenderSignalIndex(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->senderSignalIndex();
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnSenderSignalIndex(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->receivers(signal);
    }
}

// Base class handler implementation
int TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperReceivers(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const char* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->receivers(signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnReceivers(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob_SuperIsSignalConnected(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, const QMetaMethod* signal) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_IsBase(true);
        return vtextgrammarcheckgrammalectegenerateconfigoptionjob->isSignalConnected(*signal);
    } else {
        return ((VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_OnIsSignalConnected(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self, intptr_t slot) {
    auto* vtextgrammarcheckgrammalectegenerateconfigoptionjob = const_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(dynamic_cast<const VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob*>(self));
    if (vtextgrammarcheckgrammalectegenerateconfigoptionjob && vtextgrammarcheckgrammalectegenerateconfigoptionjob->isVirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob) {
        vtextgrammarcheckgrammalectegenerateconfigoptionjob->setTextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback(reinterpret_cast<VirtualTextGrammarCheckGrammalecteGenerateConfigOptionJob::TextGrammarCheck__GrammalecteGenerateConfigOptionJob_IsSignalConnected_Callback>(slot));
    }
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob_Delete(TextGrammarCheck__GrammalecteGenerateConfigOptionJob* self) {
    delete self;
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_new(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* param1) {
    return new TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option(*param1);
}

TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_new2() {
    return new TextGrammarCheck::GrammalecteGenerateConfigOptionJob::Option();
}

libqt_string TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_OptionName(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self) {
    QString optionName_ret = self->optionName;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray optionName_b = optionName_ret.toUtf8();
    libqt_string optionName_str;
    optionName_str.len = optionName_b.length();
    optionName_str.data = static_cast<const char*>(malloc(optionName_str.len + 1));
    memcpy((void*)optionName_str.data, optionName_b.data(), optionName_str.len);
    ((char*)optionName_str.data)[optionName_str.len] = '\0';
    return optionName_str;
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetOptionName(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self, libqt_string optionName) {
    QString optionName_QString = QString::fromUtf8(optionName.data, optionName.len);
    self->optionName = optionName_QString;
}

libqt_string TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_Description(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self) {
    QString description_ret = self->description;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray description_b = description_ret.toUtf8();
    libqt_string description_str;
    description_str.len = description_b.length();
    description_str.data = static_cast<const char*>(malloc(description_str.len + 1));
    memcpy((void*)description_str.data, description_b.data(), description_str.len);
    ((char*)description_str.data)[description_str.len] = '\0';
    return description_str;
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetDescription(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self, libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->description = description_QString;
}

bool TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_DefaultValue(const TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self) {
    return self->defaultValue;
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_SetDefaultValue(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self, bool defaultValue) {
    self->defaultValue = defaultValue;
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_OperatorAssign(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self, const TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* param1) {
    self->operator=(*param1);
}

void TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option_Delete(TextGrammarCheck__GrammalecteGenerateConfigOptionJob__Option* self) {
    delete self;
}
