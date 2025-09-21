#include <KNSCore/Entry>
#define WORKAROUND_INNER_CLASS_DEFINITION_KNSCore__Question
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <question.h>
#include "libquestion.h"
#include "libquestion.hxx"

KNSCore__Question* KNSCore__Question_new() {
    return new VirtualKNSCoreQuestion();
}

KNSCore__Question* KNSCore__Question_new2(int param1) {
    return new VirtualKNSCoreQuestion(static_cast<KNSCore::Question::QuestionType>(param1));
}

KNSCore__Question* KNSCore__Question_new3(int param1, QObject* parent) {
    return new VirtualKNSCoreQuestion(static_cast<KNSCore::Question::QuestionType>(param1), parent);
}

QMetaObject* KNSCore__Question_MetaObject(const KNSCore__Question* self) {
    return (QMetaObject*)self->metaObject();
}

void* KNSCore__Question_Metacast(KNSCore__Question* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KNSCore__Question_Metacall(KNSCore__Question* self, int param1, int param2, void** param3) {
    auto* vknscore__question = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscore__question && vknscore__question->isVirtualKNSCoreQuestion) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKNSCoreQuestion*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KNSCore__Question_Tr(const char* s) {
    QString _ret = KNSCore::Question::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KNSCore__Question_Ask(KNSCore__Question* self) {
    return static_cast<int>(self->ask());
}

void KNSCore__Question_SetQuestionType(KNSCore__Question* self) {
    self->setQuestionType();
}

int KNSCore__Question_QuestionType(const KNSCore__Question* self) {
    return static_cast<int>(self->questionType());
}

void KNSCore__Question_SetQuestion(KNSCore__Question* self, const libqt_string newQuestion) {
    QString newQuestion_QString = QString::fromUtf8(newQuestion.data, newQuestion.len);
    self->setQuestion(newQuestion_QString);
}

libqt_string KNSCore__Question_Question(const KNSCore__Question* self) {
    QString _ret = self->question();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Question_SetTitle(KNSCore__Question* self, const libqt_string newTitle) {
    QString newTitle_QString = QString::fromUtf8(newTitle.data, newTitle.len);
    self->setTitle(newTitle_QString);
}

libqt_string KNSCore__Question_Title(const KNSCore__Question* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Question_SetList(KNSCore__Question* self, const libqt_list /* of libqt_string */ newList) {
    QList<QString> newList_QList;
    newList_QList.reserve(newList.len);
    libqt_string* newList_arr = static_cast<libqt_string*>(newList.data);
    for (size_t i = 0; i < newList.len; ++i) {
        QString newList_arr_i_QString = QString::fromUtf8(newList_arr[i].data, newList_arr[i].len);
        newList_QList.push_back(newList_arr_i_QString);
    }
    self->setList(newList_QList);
}

libqt_list /* of libqt_string */ KNSCore__Question_List(const KNSCore__Question* self) {
    QList<QString> _ret = self->list();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
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

void KNSCore__Question_SetEntry(KNSCore__Question* self, const KNSCore__Entry* entry) {
    self->setEntry(*entry);
}

KNSCore__Entry* KNSCore__Question_Entry(const KNSCore__Question* self) {
    return new KNSCore::Entry(self->entry());
}

void KNSCore__Question_SetResponse(KNSCore__Question* self, int response) {
    self->setResponse(static_cast<KNSCore::Question::Response>(response));
}

void KNSCore__Question_SetResponse2(KNSCore__Question* self, const libqt_string response) {
    QString response_QString = QString::fromUtf8(response.data, response.len);
    self->setResponse(response_QString);
}

libqt_string KNSCore__Question_Response(const KNSCore__Question* self) {
    QString _ret = self->response();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Question_Tr2(const char* s, const char* c) {
    QString _ret = KNSCore::Question::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KNSCore__Question_Tr3(const char* s, const char* c, int n) {
    QString _ret = KNSCore::Question::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KNSCore__Question_SetQuestionType1(KNSCore__Question* self, int newType) {
    self->setQuestionType(static_cast<KNSCore::Question::QuestionType>(newType));
}

// Base class handler implementation
int KNSCore__Question_QBaseMetacall(KNSCore__Question* self, int param1, int param2, void** param3) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Metacall_IsBase(true);
        return vknscorequestion->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KNSCore::Question::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnMetacall(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Metacall_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Question_Event(KNSCore__Question* self, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->event(event);
    } else {
        return self->KNSCore::Question::event(event);
    }
}

// Base class handler implementation
bool KNSCore__Question_QBaseEvent(KNSCore__Question* self, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Event_IsBase(true);
        return vknscorequestion->event(event);
    } else {
        return self->KNSCore::Question::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnEvent(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Event_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Question_EventFilter(KNSCore__Question* self, QObject* watched, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->eventFilter(watched, event);
    } else {
        return self->KNSCore::Question::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool KNSCore__Question_QBaseEventFilter(KNSCore__Question* self, QObject* watched, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_EventFilter_IsBase(true);
        return vknscorequestion->eventFilter(watched, event);
    } else {
        return self->KNSCore::Question::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnEventFilter(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_EventFilter_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Question_TimerEvent(KNSCore__Question* self, QTimerEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->timerEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Question_QBaseTimerEvent(KNSCore__Question* self, QTimerEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_TimerEvent_IsBase(true);
        vknscorequestion->timerEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnTimerEvent(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_TimerEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Question_ChildEvent(KNSCore__Question* self, QChildEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->childEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Question_QBaseChildEvent(KNSCore__Question* self, QChildEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_ChildEvent_IsBase(true);
        vknscorequestion->childEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnChildEvent(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_ChildEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Question_CustomEvent(KNSCore__Question* self, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->customEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KNSCore__Question_QBaseCustomEvent(KNSCore__Question* self, QEvent* event) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_CustomEvent_IsBase(true);
        vknscorequestion->customEvent(event);
    } else {
        ((VirtualKNSCoreQuestion*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnCustomEvent(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_CustomEvent_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Question_ConnectNotify(KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestion*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__Question_QBaseConnectNotify(KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_ConnectNotify_IsBase(true);
        vknscorequestion->connectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestion*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnConnectNotify(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_ConnectNotify_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KNSCore__Question_DisconnectNotify(KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestion*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KNSCore__Question_QBaseDisconnectNotify(KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_DisconnectNotify_IsBase(true);
        vknscorequestion->disconnectNotify(*signal);
    } else {
        ((VirtualKNSCoreQuestion*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnDisconnectNotify(KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = dynamic_cast<VirtualKNSCoreQuestion*>(self);
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_DisconnectNotify_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KNSCore__Question_Sender(const KNSCore__Question* self) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->sender();
    } else {
        return ((VirtualKNSCoreQuestion*)self)->sender();
    }
}

// Base class handler implementation
QObject* KNSCore__Question_QBaseSender(const KNSCore__Question* self) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Sender_IsBase(true);
        return vknscorequestion->sender();
    } else {
        return ((VirtualKNSCoreQuestion*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnSender(const KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Sender_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__Question_SenderSignalIndex(const KNSCore__Question* self) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreQuestion*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KNSCore__Question_QBaseSenderSignalIndex(const KNSCore__Question* self) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_SenderSignalIndex_IsBase(true);
        return vknscorequestion->senderSignalIndex();
    } else {
        return ((VirtualKNSCoreQuestion*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnSenderSignalIndex(const KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_SenderSignalIndex_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KNSCore__Question_Receivers(const KNSCore__Question* self, const char* signal) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->receivers(signal);
    } else {
        return ((VirtualKNSCoreQuestion*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KNSCore__Question_QBaseReceivers(const KNSCore__Question* self, const char* signal) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Receivers_IsBase(true);
        return vknscorequestion->receivers(signal);
    } else {
        return ((VirtualKNSCoreQuestion*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnReceivers(const KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_Receivers_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KNSCore__Question_IsSignalConnected(const KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        return vknscorequestion->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreQuestion*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KNSCore__Question_QBaseIsSignalConnected(const KNSCore__Question* self, const QMetaMethod* signal) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_IsSignalConnected_IsBase(true);
        return vknscorequestion->isSignalConnected(*signal);
    } else {
        return ((VirtualKNSCoreQuestion*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KNSCore__Question_OnIsSignalConnected(const KNSCore__Question* self, intptr_t slot) {
    auto* vknscorequestion = const_cast<VirtualKNSCoreQuestion*>(dynamic_cast<const VirtualKNSCoreQuestion*>(self));
    if (vknscorequestion && vknscorequestion->isVirtualKNSCoreQuestion) {
        vknscorequestion->setKNSCore__Question_IsSignalConnected_Callback(reinterpret_cast<VirtualKNSCoreQuestion::KNSCore__Question_IsSignalConnected_Callback>(slot));
    }
}

void KNSCore__Question_Delete(KNSCore__Question* self) {
    delete self;
}
