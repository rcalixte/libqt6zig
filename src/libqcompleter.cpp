#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QChildEvent>
#include <QCompleter>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QTimerEvent>
#include <QWidget>
#include <qcompleter.h>
#include "libqcompleter.h"
#include "libqcompleter.hxx"

QCompleter* QCompleter_new() {
    return new VirtualQCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
    return new VirtualQCompleter(model);
}

QCompleter* QCompleter_new3(const libqt_list /* of libqt_string */ completions) {
    QList<QString> completions_QList;
    completions_QList.reserve(completions.len);
    libqt_string* completions_arr = static_cast<libqt_string*>(completions.data);
    for (size_t i = 0; i < completions.len; ++i) {
        QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
        completions_QList.push_back(completions_arr_i_QString);
    }
    return new VirtualQCompleter(completions_QList);
}

QCompleter* QCompleter_new4(QObject* parent) {
    return new VirtualQCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
    return new VirtualQCompleter(model, parent);
}

QCompleter* QCompleter_new6(const libqt_list /* of libqt_string */ completions, QObject* parent) {
    QList<QString> completions_QList;
    completions_QList.reserve(completions.len);
    libqt_string* completions_arr = static_cast<libqt_string*>(completions.data);
    for (size_t i = 0; i < completions.len; ++i) {
        QString completions_arr_i_QString = QString::fromUtf8(completions_arr[i].data, completions_arr[i].len);
        completions_QList.push_back(completions_arr_i_QString);
    }
    return new VirtualQCompleter(completions_QList, parent);
}

QMetaObject* QCompleter_MetaObject(const QCompleter* self) {
    return (QMetaObject*)self->metaObject();
}

void* QCompleter_Metacast(QCompleter* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QCompleter_Metacall(QCompleter* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QCompleter_Tr(const char* s) {
    auto _ret = QCompleter::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
    self->setWidget(widget);
}

QWidget* QCompleter_Widget(const QCompleter* self) {
    return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
    self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(const QCompleter* self) {
    return self->model();
}

void QCompleter_SetCompletionMode(QCompleter* self, int mode) {
    self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_CompletionMode(const QCompleter* self) {
    return static_cast<int>(self->completionMode());
}

void QCompleter_SetFilterMode(QCompleter* self, int filterMode) {
    self->setFilterMode(static_cast<Qt::MatchFlags>(filterMode));
}

int QCompleter_FilterMode(const QCompleter* self) {
    return static_cast<int>(self->filterMode());
}

QAbstractItemView* QCompleter_Popup(const QCompleter* self) {
    return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
    self->setPopup(popup);
}

void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity) {
    self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_CaseSensitivity(const QCompleter* self) {
    return static_cast<int>(self->caseSensitivity());
}

void QCompleter_SetModelSorting(QCompleter* self, int sorting) {
    self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_ModelSorting(const QCompleter* self) {
    return static_cast<int>(self->modelSorting());
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
    self->setCompletionColumn(static_cast<int>(column));
}

int QCompleter_CompletionColumn(const QCompleter* self) {
    return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
    self->setCompletionRole(static_cast<int>(role));
}

int QCompleter_CompletionRole(const QCompleter* self) {
    return self->completionRole();
}

bool QCompleter_WrapAround(const QCompleter* self) {
    return self->wrapAround();
}

int QCompleter_MaxVisibleItems(const QCompleter* self) {
    return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
    self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QCompleter_CompletionCount(const QCompleter* self) {
    return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
    return self->setCurrentRow(static_cast<int>(row));
}

int QCompleter_CurrentRow(const QCompleter* self) {
    return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(const QCompleter* self) {
    return new QModelIndex(self->currentIndex());
}

libqt_string QCompleter_CurrentCompletion(const QCompleter* self) {
    auto _ret = self->currentCompletion();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self) {
    return self->completionModel();
}

libqt_string QCompleter_CompletionPrefix(const QCompleter* self) {
    auto _ret = self->completionPrefix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCompleter_SetCompletionPrefix(QCompleter* self, const libqt_string prefix) {
    QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);
    self->setCompletionPrefix(prefix_QString);
}

void QCompleter_Complete(QCompleter* self) {
    self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
    self->setWrapAround(wrap);
}

libqt_string QCompleter_PathFromIndex(const QCompleter* self, const QModelIndex* index) {
    auto _ret = self->pathFromIndex(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QCompleter_SplitPath(const QCompleter* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> _ret = self->splitPath(path_QString);
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

bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        return vqcompleter->eventFilter(o, e);
    }
    qFatal("Error: Protected method QCompleter::eventFilter called without a directly constructed type");
}

bool QCompleter_Event(QCompleter* self, QEvent* param1) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        return vqcompleter->event(param1);
    }
    qFatal("Error: Protected method QCompleter::event called without a directly constructed type");
}

void QCompleter_Activated(QCompleter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->activated(text_QString);
}

void QCompleter_Connect_Activated(QCompleter* self, intptr_t slot) {
    void (*slotFunc)(QCompleter*, const char*) = reinterpret_cast<void (*)(QCompleter*, const char*)>(slot);
    QCompleter::connect(self,
                        static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::activated),
                        [self, slotFunc](const QString& text) {
                            const auto text_ret = text;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray text_b = text_ret.toUtf8();
                            auto text_str_len = text_b.length();
                            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                            memcpy((void*)text_str, text_b.data(), text_str_len);
                            ((char*)text_str)[text_str_len] = '\0';
                            const char* sigval1 = text_str;
                            slotFunc(self, sigval1);
                            libqt_free(text_str);
                        });
}

void QCompleter_Activated2(QCompleter* self, const QModelIndex* index) {
    self->activated(*index);
}

void QCompleter_Connect_Activated2(QCompleter* self, intptr_t slot) {
    void (*slotFunc)(QCompleter*, QModelIndex*) = reinterpret_cast<void (*)(QCompleter*, QModelIndex*)>(slot);
    QCompleter::connect(self,
                        static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::activated),
                        [self, slotFunc](const QModelIndex& index) {
                            const QModelIndex& index_ret = index;
                            // Cast returned reference into pointer
                            QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                            slotFunc(self, sigval1);
                        });
}

void QCompleter_Highlighted(QCompleter* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->highlighted(text_QString);
}

void QCompleter_Connect_Highlighted(QCompleter* self, intptr_t slot) {
    void (*slotFunc)(QCompleter*, const char*) = reinterpret_cast<void (*)(QCompleter*, const char*)>(slot);
    QCompleter::connect(self,
                        static_cast<void (QCompleter::*)(const QString&)>(&QCompleter::highlighted),
                        [self, slotFunc](const QString& text) {
                            const auto text_ret = text;
                            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                            QByteArray text_b = text_ret.toUtf8();
                            auto text_str_len = text_b.length();
                            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
                            memcpy((void*)text_str, text_b.data(), text_str_len);
                            ((char*)text_str)[text_str_len] = '\0';
                            const char* sigval1 = text_str;
                            slotFunc(self, sigval1);
                            libqt_free(text_str);
                        });
}

void QCompleter_Highlighted2(QCompleter* self, const QModelIndex* index) {
    self->highlighted(*index);
}

void QCompleter_Connect_Highlighted2(QCompleter* self, intptr_t slot) {
    void (*slotFunc)(QCompleter*, QModelIndex*) = reinterpret_cast<void (*)(QCompleter*, QModelIndex*)>(slot);
    QCompleter::connect(self,
                        static_cast<void (QCompleter::*)(const QModelIndex&)>(&QCompleter::highlighted),
                        [self, slotFunc](const QModelIndex& index) {
                            const QModelIndex& index_ret = index;
                            // Cast returned reference into pointer
                            QModelIndex* sigval1 = const_cast<QModelIndex*>(&index_ret);
                            slotFunc(self, sigval1);
                        });
}

libqt_string QCompleter_Tr2(const char* s, const char* c) {
    auto _ret = QCompleter::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QCompleter_Tr3(const char* s, const char* c, int n) {
    auto _ret = QCompleter::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QCompleter_Complete1(QCompleter* self, const QRect* rect) {
    self->complete(*rect);
}

// Base class handler implementation
QMetaObject* QCompleter_SuperMetaObject(const QCompleter* self) {
    return (QMetaObject*)self->QCompleter::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnMetaObject(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self)))
        vqcompleter->qcompleter_metaobject_callback = reinterpret_cast<VirtualQCompleter::QCompleter_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QCompleter_SuperMetacast(QCompleter* self, const char* param1) {
    return self->QCompleter::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnMetacast(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_metacast_callback = reinterpret_cast<VirtualQCompleter::QCompleter_Metacast_Callback>(slot);
}

// Base class handler implementation
int QCompleter_SuperMetacall(QCompleter* self, int param1, int param2, void** param3) {
    return self->QCompleter::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnMetacall(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_metacall_callback = reinterpret_cast<VirtualQCompleter::QCompleter_Metacall_Callback>(slot);
}

// Base class handler implementation
libqt_string QCompleter_SuperPathFromIndex(const QCompleter* self, const QModelIndex* index) {
    auto _ret = self->QCompleter::pathFromIndex(*index);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnPathFromIndex(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self)))
        vqcompleter->qcompleter_pathfromindex_callback = reinterpret_cast<VirtualQCompleter::QCompleter_PathFromIndex_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QCompleter_SuperSplitPath(const QCompleter* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    QList<QString> _ret = self->QCompleter::splitPath(path_QString);
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

// Auxiliary method to allow providing re-implementation
void QCompleter_OnSplitPath(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self)))
        vqcompleter->qcompleter_splitpath_callback = reinterpret_cast<VirtualQCompleter::QCompleter_SplitPath_Callback>(slot);
}

// Base class handler implementation
bool QCompleter_SuperEventFilter(QCompleter* self, QObject* o, QEvent* e) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        return vqcompleter->QCompleter::eventFilter(o, e);
    } else
        qFatal("Error: Protected virtual method QCompleter::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEventFilter(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_eventfilter_callback = reinterpret_cast<VirtualQCompleter::QCompleter_EventFilter_Callback>(slot);
}

// Base class handler implementation
bool QCompleter_SuperEvent(QCompleter* self, QEvent* param1) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        return vqcompleter->QCompleter::event(param1);
    } else
        qFatal("Error: Protected virtual method QCompleter::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_event_callback = reinterpret_cast<VirtualQCompleter::QCompleter_Event_Callback>(slot);
}

// Derived class handler implementation
void QCompleter_TimerEvent(QCompleter* self, QTimerEvent* event) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        vqcompleter->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCompleter::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCompleter_SuperTimerEvent(QCompleter* self, QTimerEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->QCompleter::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QCompleter::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnTimerEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_timerevent_callback = reinterpret_cast<VirtualQCompleter::QCompleter_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QCompleter_ChildEvent(QCompleter* self, QChildEvent* event) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        vqcompleter->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCompleter::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCompleter_SuperChildEvent(QCompleter* self, QChildEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->QCompleter::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QCompleter::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnChildEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_childevent_callback = reinterpret_cast<VirtualQCompleter::QCompleter_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QCompleter_CustomEvent(QCompleter* self, QEvent* event) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        vqcompleter->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QCompleter::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QCompleter_SuperCustomEvent(QCompleter* self, QEvent* event) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->QCompleter::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QCompleter::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnCustomEvent(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_customevent_callback = reinterpret_cast<VirtualQCompleter::QCompleter_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QCompleter_ConnectNotify(QCompleter* self, const QMetaMethod* signal) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        vqcompleter->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCompleter::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCompleter_SuperConnectNotify(QCompleter* self, const QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->QCompleter::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCompleter::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnConnectNotify(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_connectnotify_callback = reinterpret_cast<VirtualQCompleter::QCompleter_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QCompleter_DisconnectNotify(QCompleter* self, const QMetaMethod* signal) {
    auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
    if (vqcompleter) {
        vqcompleter->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QCompleter::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QCompleter_SuperDisconnectNotify(QCompleter* self, const QMetaMethod* signal) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self)) {
        vqcompleter->QCompleter::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QCompleter::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnDisconnectNotify(QCompleter* self, intptr_t slot) {
    if (auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self))
        vqcompleter->qcompleter_disconnectnotify_callback = reinterpret_cast<VirtualQCompleter::QCompleter_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QCompleter_Sender(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->VirtualQCompleter::sender();
    } else
        qFatal("Error: Protected method QCompleter::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QCompleter_SenderSignalIndex(const QCompleter* self) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->VirtualQCompleter::senderSignalIndex();
    } else
        qFatal("Error: Protected method QCompleter::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QCompleter_Receivers(const QCompleter* self, const char* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->VirtualQCompleter::receivers(signal);
    } else
        qFatal("Error: Protected method QCompleter::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QCompleter_IsSignalConnected(const QCompleter* self, const QMetaMethod* signal) {
    if (auto* vqcompleter = const_cast<VirtualQCompleter*>(dynamic_cast<const VirtualQCompleter*>(self))) {
        return vqcompleter->VirtualQCompleter::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QCompleter::isSignalConnected called without a directly constructed type");
}

void QCompleter_Delete(QCompleter* self) {
    delete self;
}
