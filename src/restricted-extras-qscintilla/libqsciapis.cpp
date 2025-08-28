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
#include <qsciapis.h>
#include "libqsciapis.h"
#include "libqsciapis.hxx"

QsciAPIs* QsciAPIs_new(QsciLexer* lexer) {
    return new VirtualQsciAPIs(lexer);
}

QMetaObject* QsciAPIs_MetaObject(const QsciAPIs* self) {
    return (QMetaObject*)self->metaObject();
}

void* QsciAPIs_Metacast(QsciAPIs* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QsciAPIs_Metacall(QsciAPIs* self, int param1, int param2, void** param3) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQsciAPIs*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QsciAPIs_Tr(const char* s) {
    QString _ret = QsciAPIs::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QsciAPIs_Add(QsciAPIs* self, const libqt_string entry) {
    QString entry_QString = QString::fromUtf8(entry.data, entry.len);
    self->add(entry_QString);
}

void QsciAPIs_Clear(QsciAPIs* self) {
    self->clear();
}

bool QsciAPIs_Load(QsciAPIs* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->load(filename_QString);
}

void QsciAPIs_Remove(QsciAPIs* self, const libqt_string entry) {
    QString entry_QString = QString::fromUtf8(entry.data, entry.len);
    self->remove(entry_QString);
}

void QsciAPIs_Prepare(QsciAPIs* self) {
    self->prepare();
}

void QsciAPIs_CancelPreparation(QsciAPIs* self) {
    self->cancelPreparation();
}

libqt_string QsciAPIs_DefaultPreparedName(const QsciAPIs* self) {
    QString _ret = self->defaultPreparedName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QsciAPIs_IsPrepared(const QsciAPIs* self) {
    return self->isPrepared();
}

bool QsciAPIs_LoadPrepared(QsciAPIs* self) {
    return self->loadPrepared();
}

bool QsciAPIs_SavePrepared(const QsciAPIs* self) {
    return self->savePrepared();
}

void QsciAPIs_UpdateAutoCompletionList(QsciAPIs* self, const libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list) {
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
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        self->updateAutoCompletionList(context_QList, list_QList);
    } else {
        ((VirtualQsciAPIs*)self)->updateAutoCompletionList(context_QList, list_QList);
    }
}

void QsciAPIs_AutoCompletionSelected(QsciAPIs* self, const libqt_string sel) {
    QString sel_QString = QString::fromUtf8(sel.data, sel.len);
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        self->autoCompletionSelected(sel_QString);
    } else {
        ((VirtualQsciAPIs*)self)->autoCompletionSelected(sel_QString);
    }
}

libqt_list /* of libqt_string */ QsciAPIs_CallTips(QsciAPIs* self, const libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts) {
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
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        QList<QString> _ret = self->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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
    } else {
        QList<QString> _ret = ((VirtualQsciAPIs*)self)->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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
}

bool QsciAPIs_Event(QsciAPIs* self, QEvent* e) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return self->event(e);
    } else {
        return ((VirtualQsciAPIs*)self)->event(e);
    }
}

libqt_list /* of libqt_string */ QsciAPIs_InstalledAPIFiles(const QsciAPIs* self) {
    QList<QString> _ret = self->installedAPIFiles();
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

void QsciAPIs_ApiPreparationCancelled(QsciAPIs* self) {
    self->apiPreparationCancelled();
}

void QsciAPIs_Connect_ApiPreparationCancelled(QsciAPIs* self, intptr_t slot) {
    void (*slotFunc)(QsciAPIs*) = reinterpret_cast<void (*)(QsciAPIs*)>(slot);
    QsciAPIs::connect(self, &QsciAPIs::apiPreparationCancelled, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciAPIs_ApiPreparationStarted(QsciAPIs* self) {
    self->apiPreparationStarted();
}

void QsciAPIs_Connect_ApiPreparationStarted(QsciAPIs* self, intptr_t slot) {
    void (*slotFunc)(QsciAPIs*) = reinterpret_cast<void (*)(QsciAPIs*)>(slot);
    QsciAPIs::connect(self, &QsciAPIs::apiPreparationStarted, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QsciAPIs_ApiPreparationFinished(QsciAPIs* self) {
    self->apiPreparationFinished();
}

void QsciAPIs_Connect_ApiPreparationFinished(QsciAPIs* self, intptr_t slot) {
    void (*slotFunc)(QsciAPIs*) = reinterpret_cast<void (*)(QsciAPIs*)>(slot);
    QsciAPIs::connect(self, &QsciAPIs::apiPreparationFinished, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QsciAPIs_Tr2(const char* s, const char* c) {
    QString _ret = QsciAPIs::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QsciAPIs_Tr3(const char* s, const char* c, int n) {
    QString _ret = QsciAPIs::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QsciAPIs_IsPrepared1(const QsciAPIs* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->isPrepared(filename_QString);
}

bool QsciAPIs_LoadPrepared1(QsciAPIs* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->loadPrepared(filename_QString);
}

bool QsciAPIs_SavePrepared1(const QsciAPIs* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    return self->savePrepared(filename_QString);
}

// Base class handler implementation
int QsciAPIs_QBaseMetacall(QsciAPIs* self, int param1, int param2, void** param3) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Metacall_IsBase(true);
        return vqsciapis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QsciAPIs::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnMetacall(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Metacall_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
void QsciAPIs_QBaseUpdateAutoCompletionList(QsciAPIs* self, const libqt_list /* of libqt_string */ context, libqt_list /* of libqt_string */ list) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
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
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_UpdateAutoCompletionList_IsBase(true);
        vqsciapis->updateAutoCompletionList(context_QList, list_QList);
    } else {
        self->QsciAPIs::updateAutoCompletionList(context_QList, list_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnUpdateAutoCompletionList(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_UpdateAutoCompletionList_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_UpdateAutoCompletionList_Callback>(slot));
    }
}

// Base class handler implementation
void QsciAPIs_QBaseAutoCompletionSelected(QsciAPIs* self, const libqt_string sel) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    QString sel_QString = QString::fromUtf8(sel.data, sel.len);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_AutoCompletionSelected_IsBase(true);
        vqsciapis->autoCompletionSelected(sel_QString);
    } else {
        self->QsciAPIs::autoCompletionSelected(sel_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnAutoCompletionSelected(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_AutoCompletionSelected_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_AutoCompletionSelected_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QsciAPIs_QBaseCallTips(QsciAPIs* self, const libqt_list /* of libqt_string */ context, int commas, int style, libqt_list /* of int */ shifts) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
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
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_CallTips_IsBase(true);
        QList<QString> _ret = vqsciapis->callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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
    } else {
        QList<QString> _ret = self->QsciAPIs::callTips(context_QList, static_cast<int>(commas), static_cast<QsciScintilla::CallTipsStyle>(style), shifts_QList);
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
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnCallTips(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_CallTips_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_CallTips_Callback>(slot));
    }
}

// Base class handler implementation
bool QsciAPIs_QBaseEvent(QsciAPIs* self, QEvent* e) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Event_IsBase(true);
        return vqsciapis->event(e);
    } else {
        return self->QsciAPIs::event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnEvent(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Event_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciAPIs_EventFilter(QsciAPIs* self, QObject* watched, QEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return vqsciapis->eventFilter(watched, event);
    } else {
        return self->QsciAPIs::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QsciAPIs_QBaseEventFilter(QsciAPIs* self, QObject* watched, QEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_EventFilter_IsBase(true);
        return vqsciapis->eventFilter(watched, event);
    } else {
        return self->QsciAPIs::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnEventFilter(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_EventFilter_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAPIs_TimerEvent(QsciAPIs* self, QTimerEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->timerEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QsciAPIs_QBaseTimerEvent(QsciAPIs* self, QTimerEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_TimerEvent_IsBase(true);
        vqsciapis->timerEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnTimerEvent(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_TimerEvent_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAPIs_ChildEvent(QsciAPIs* self, QChildEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->childEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QsciAPIs_QBaseChildEvent(QsciAPIs* self, QChildEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_ChildEvent_IsBase(true);
        vqsciapis->childEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnChildEvent(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_ChildEvent_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAPIs_CustomEvent(QsciAPIs* self, QEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->customEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QsciAPIs_QBaseCustomEvent(QsciAPIs* self, QEvent* event) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_CustomEvent_IsBase(true);
        vqsciapis->customEvent(event);
    } else {
        ((VirtualQsciAPIs*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnCustomEvent(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_CustomEvent_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAPIs_ConnectNotify(QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->connectNotify(*signal);
    } else {
        ((VirtualQsciAPIs*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QsciAPIs_QBaseConnectNotify(QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_ConnectNotify_IsBase(true);
        vqsciapis->connectNotify(*signal);
    } else {
        ((VirtualQsciAPIs*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnConnectNotify(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_ConnectNotify_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QsciAPIs_DisconnectNotify(QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->disconnectNotify(*signal);
    } else {
        ((VirtualQsciAPIs*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QsciAPIs_QBaseDisconnectNotify(QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_DisconnectNotify_IsBase(true);
        vqsciapis->disconnectNotify(*signal);
    } else {
        ((VirtualQsciAPIs*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnDisconnectNotify(QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = dynamic_cast<VirtualQsciAPIs*>(self);
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_DisconnectNotify_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QsciAPIs_Sender(const QsciAPIs* self) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return vqsciapis->sender();
    } else {
        return ((VirtualQsciAPIs*)self)->sender();
    }
}

// Base class handler implementation
QObject* QsciAPIs_QBaseSender(const QsciAPIs* self) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Sender_IsBase(true);
        return vqsciapis->sender();
    } else {
        return ((VirtualQsciAPIs*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnSender(const QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Sender_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciAPIs_SenderSignalIndex(const QsciAPIs* self) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return vqsciapis->senderSignalIndex();
    } else {
        return ((VirtualQsciAPIs*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QsciAPIs_QBaseSenderSignalIndex(const QsciAPIs* self) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_SenderSignalIndex_IsBase(true);
        return vqsciapis->senderSignalIndex();
    } else {
        return ((VirtualQsciAPIs*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnSenderSignalIndex(const QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_SenderSignalIndex_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QsciAPIs_Receivers(const QsciAPIs* self, const char* signal) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return vqsciapis->receivers(signal);
    } else {
        return ((VirtualQsciAPIs*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QsciAPIs_QBaseReceivers(const QsciAPIs* self, const char* signal) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Receivers_IsBase(true);
        return vqsciapis->receivers(signal);
    } else {
        return ((VirtualQsciAPIs*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnReceivers(const QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_Receivers_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QsciAPIs_IsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        return vqsciapis->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciAPIs*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QsciAPIs_QBaseIsSignalConnected(const QsciAPIs* self, const QMetaMethod* signal) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_IsSignalConnected_IsBase(true);
        return vqsciapis->isSignalConnected(*signal);
    } else {
        return ((VirtualQsciAPIs*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QsciAPIs_OnIsSignalConnected(const QsciAPIs* self, intptr_t slot) {
    auto* vqsciapis = const_cast<VirtualQsciAPIs*>(dynamic_cast<const VirtualQsciAPIs*>(self));
    if (vqsciapis && vqsciapis->isVirtualQsciAPIs) {
        vqsciapis->setQsciAPIs_IsSignalConnected_Callback(reinterpret_cast<VirtualQsciAPIs::QsciAPIs_IsSignalConnected_Callback>(slot));
    }
}

void QsciAPIs_Delete(QsciAPIs* self) {
    delete self;
}
