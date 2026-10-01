#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qsciabstractapis.h>
#include "libqsciabstractapis.h"
#include "libqsciabstractapis.hxx"

QsciAbstractAPIs* QsciAbstractAPIs_new(QsciLexer* lexer) {
    return new VirtualQsciAbstractAPIs(lexer);
}

QMetaObject* QsciAbstractAPIs_MetaObject(const QsciAbstractAPIs* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciAbstractAPIs_Metacast(QsciAbstractAPIs* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciAbstractAPIs_Metacall(QsciAbstractAPIs* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QsciAbstractAPIs_Tr(const char* s) {
    auto _ret = QsciAbstractAPIs::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QsciLexer* QsciAbstractAPIs_Lexer(const QsciAbstractAPIs* self) {
    return self->lexer();
}

void QsciAbstractAPIs_UpdateAutoCompletionList(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list) {
    QList<QString> context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->updateAutoCompletionList(context_QList, list_QList);
}

void QsciAbstractAPIs_AutoCompletionSelected(QsciAbstractAPIs* self, const libqt_string selection) {
    QString selection_QString = QString::fromUtf8(selection.data, selection.len);
    self->autoCompletionSelected(selection_QString);
}

libqt_list /* of libqt_string */ QsciAbstractAPIs_CallTips(QsciAbstractAPIs* self, const libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts) {
    QList<QString> context_QList;
    context_QList.reserve(context.len);
    libqt_string* context_arr = static_cast<libqt_string*>(context.data);
    for (size_t i = 0; i < context.len; ++i) {
        QString context_arr_i_QString = QString::fromUtf8(context_arr[i].data, context_arr[i].len);
        context_QList.push_back(context_arr_i_QString);
    }
    QList<int> shifts_QList;
    shifts_QList.reserve(shifts.len);
    int* shifts_arr = static_cast<int*>(shifts.data);
    for (size_t i = 0; i < shifts.len; ++i) {
        shifts_QList.push_back(static_cast<int>(shifts_arr[i]));
    }
    QList<QString> _ret = self->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
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

libqt_string QsciAbstractAPIs_Tr2(const char* s, const char* c) {
    auto _ret = QsciAbstractAPIs::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciAbstractAPIs_Tr3(const char* s, const char* c, int n) {
    auto _ret = QsciAbstractAPIs::tr(s, c, static_cast<int>(n));
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
QMetaObject* QsciAbstractAPIs_SuperMetaObject(const QsciAbstractAPIs* self) {
    return (QMetaObject*)self->QsciAbstractAPIs::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnMetaObject(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self)))
        vqsciabstractapis->qsciabstractapis_metaobject_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QsciAbstractAPIs_SuperMetacast(QsciAbstractAPIs* self, const char* param1) {
    return self->QsciAbstractAPIs::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnMetacast(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_metacast_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Metacast_Callback>(slot);
}

// Base class handler implementation
int QsciAbstractAPIs_SuperMetacall(QsciAbstractAPIs* self, int param1, int param2, void** param3) {
    return self->QsciAbstractAPIs::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnMetacall(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_metacall_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnUpdateAutoCompletionList(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_updateautocompletionlist_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_UpdateAutoCompletionList_Callback>(slot);
}

// Base class handler implementation
void QsciAbstractAPIs_SuperAutoCompletionSelected(QsciAbstractAPIs* self, const libqt_string selection) {
    QString selection_QString = QString::fromUtf8(selection.data, selection.len);
    self->QsciAbstractAPIs::autoCompletionSelected(selection_QString);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnAutoCompletionSelected(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_autocompletionselected_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_AutoCompletionSelected_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnCallTips(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_calltips_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_CallTips_Callback>(slot);
}

// Derived class handler implementation
bool QsciAbstractAPIs_Event(QsciAbstractAPIs* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QsciAbstractAPIs_SuperEvent(QsciAbstractAPIs* self, QEvent* event) {
    return self->QsciAbstractAPIs::event(event);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_event_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_Event_Callback>(slot);
}

// Derived class handler implementation
bool QsciAbstractAPIs_EventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QsciAbstractAPIs_SuperEventFilter(QsciAbstractAPIs* self, QObject* watched, QEvent* event) {
    return self->QsciAbstractAPIs::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnEventFilter(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_eventfilter_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QsciAbstractAPIs_TimerEvent(QsciAbstractAPIs* self, QTimerEvent* event) {
    auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self);
    if (vqsciabstractapis) {
        vqsciabstractapis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciAbstractAPIs::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciAbstractAPIs_SuperTimerEvent(QsciAbstractAPIs* self, QTimerEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->QsciAbstractAPIs::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciAbstractAPIs::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnTimerEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_timerevent_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciAbstractAPIs_ChildEvent(QsciAbstractAPIs* self, QChildEvent* event) {
    auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self);
    if (vqsciabstractapis) {
        vqsciabstractapis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciAbstractAPIs::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciAbstractAPIs_SuperChildEvent(QsciAbstractAPIs* self, QChildEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->QsciAbstractAPIs::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciAbstractAPIs::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnChildEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_childevent_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciAbstractAPIs_CustomEvent(QsciAbstractAPIs* self, QEvent* event) {
    auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self);
    if (vqsciabstractapis) {
        vqsciabstractapis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QsciAbstractAPIs::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciAbstractAPIs_SuperCustomEvent(QsciAbstractAPIs* self, QEvent* event) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->QsciAbstractAPIs::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QsciAbstractAPIs::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnCustomEvent(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_customevent_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QsciAbstractAPIs_ConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal) {
    auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self);
    if (vqsciabstractapis) {
        vqsciabstractapis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciAbstractAPIs::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciAbstractAPIs_SuperConnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->QsciAbstractAPIs::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciAbstractAPIs::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnConnectNotify(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_connectnotify_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QsciAbstractAPIs_DisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal) {
    auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self);
    if (vqsciabstractapis) {
        vqsciabstractapis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QsciAbstractAPIs::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QsciAbstractAPIs_SuperDisconnectNotify(QsciAbstractAPIs* self, const QMetaMethod* signal) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self)) {
        vqsciabstractapis->QsciAbstractAPIs::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QsciAbstractAPIs::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QsciAbstractAPIs_OnDisconnectNotify(QsciAbstractAPIs* self, intptr_t slot) {
    if (auto* vqsciabstractapis = dynamic_cast<VirtualQsciAbstractAPIs*>(self))
        vqsciabstractapis->qsciabstractapis_disconnectnotify_callback = reinterpret_cast<VirtualQsciAbstractAPIs::QsciAbstractAPIs_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QsciAbstractAPIs_Sender(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->VirtualQsciAbstractAPIs::sender();
    } else
        qFatal("Error: Protected method QsciAbstractAPIs::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciAbstractAPIs_SenderSignalIndex(const QsciAbstractAPIs* self) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->VirtualQsciAbstractAPIs::senderSignalIndex();
    } else
        qFatal("Error: Protected method QsciAbstractAPIs::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QsciAbstractAPIs_Receivers(const QsciAbstractAPIs* self, const char* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->VirtualQsciAbstractAPIs::receivers(signal);
    } else
        qFatal("Error: Protected method QsciAbstractAPIs::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QsciAbstractAPIs_IsSignalConnected(const QsciAbstractAPIs* self, const QMetaMethod* signal) {
    if (auto* vqsciabstractapis = const_cast<VirtualQsciAbstractAPIs*>(dynamic_cast<const VirtualQsciAbstractAPIs*>(self))) {
        return vqsciabstractapis->VirtualQsciAbstractAPIs::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QsciAbstractAPIs::isSignalConnected called without a directly constructed type");
}

void QsciAbstractAPIs_Delete(QsciAbstractAPIs* self) {
    delete self;
}
