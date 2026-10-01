#include <QAbstractAxis>
#include <QBarCategoryAxis>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <qbarcategoryaxis.h>
#include "libqbarcategoryaxis.h"
#include "libqbarcategoryaxis.hxx"

QBarCategoryAxis* QBarCategoryAxis_new() {
    return new VirtualQBarCategoryAxis();
}

QBarCategoryAxis* QBarCategoryAxis_new2(QObject* parent) {
    return new VirtualQBarCategoryAxis(parent);
}

QMetaObject* QBarCategoryAxis_MetaObject(const QBarCategoryAxis* self) {
    return (QMetaObject*)self->metaObject();
}

void* QBarCategoryAxis_Metacast(QBarCategoryAxis* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QBarCategoryAxis_Metacall(QBarCategoryAxis* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QBarCategoryAxis_Tr(const char* s) {
    auto _ret = QBarCategoryAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QBarCategoryAxis_Type(const QBarCategoryAxis* self) {
    return static_cast<int>(self->type());
}

void QBarCategoryAxis_Append(QBarCategoryAxis* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->append(categories_QList);
}

void QBarCategoryAxis_Append2(QBarCategoryAxis* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->append(category_QString);
}

void QBarCategoryAxis_Remove(QBarCategoryAxis* self, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->remove(category_QString);
}

void QBarCategoryAxis_Insert(QBarCategoryAxis* self, int index, const libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->insert(static_cast<int>(index), category_QString);
}

void QBarCategoryAxis_Replace(QBarCategoryAxis* self, const libqt_string oldCategory, const libqt_string newCategory) {
    QString oldCategory_QString = QString::fromUtf8(oldCategory.data, oldCategory.len);
    QString newCategory_QString = QString::fromUtf8(newCategory.data, newCategory.len);
    self->replace(oldCategory_QString, newCategory_QString);
}

void QBarCategoryAxis_Clear(QBarCategoryAxis* self) {
    self->clear();
}

void QBarCategoryAxis_SetCategories(QBarCategoryAxis* self, const libqt_list /* of libqt_string */ categories) {
    QList<QString> categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setCategories(categories_QList);
}

libqt_list /* of libqt_string */ QBarCategoryAxis_Categories(QBarCategoryAxis* self) {
    QList<QString> _ret = self->categories();
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

int QBarCategoryAxis_Count(const QBarCategoryAxis* self) {
    return self->count();
}

libqt_string QBarCategoryAxis_At(const QBarCategoryAxis* self, int index) {
    auto _ret = self->at(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetMin(QBarCategoryAxis* self, const libqt_string minCategory) {
    QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
    self->setMin(minCategory_QString);
}

libqt_string QBarCategoryAxis_Min(const QBarCategoryAxis* self) {
    auto _ret = self->min();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetMax(QBarCategoryAxis* self, const libqt_string maxCategory) {
    QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
    self->setMax(maxCategory_QString);
}

libqt_string QBarCategoryAxis_Max(const QBarCategoryAxis* self) {
    auto _ret = self->max();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetRange(QBarCategoryAxis* self, const libqt_string minCategory, const libqt_string maxCategory) {
    QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
    QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
    self->setRange(minCategory_QString, maxCategory_QString);
}

void QBarCategoryAxis_CategoriesChanged(QBarCategoryAxis* self) {
    self->categoriesChanged();
}

void QBarCategoryAxis_Connect_CategoriesChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self,
                              static_cast<void (QBarCategoryAxis::*)()>(&QBarCategoryAxis::categoriesChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void QBarCategoryAxis_MinChanged(QBarCategoryAxis* self, const libqt_string min) {
    QString min_QString = QString::fromUtf8(min.data, min.len);
    self->minChanged(min_QString);
}

void QBarCategoryAxis_Connect_MinChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*)>(slot);
    QBarCategoryAxis::connect(self,
                              static_cast<void (QBarCategoryAxis::*)(const QString&)>(&QBarCategoryAxis::minChanged),
                              [self, slotFunc](const QString& min) {
                                  const auto min_ret = min;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray min_b = min_ret.toUtf8();
                                  auto min_str_len = min_b.length();
                                  const char* min_str = static_cast<const char*>(malloc(min_str_len + 1));
                                  memcpy((void*)min_str, min_b.data(), min_str_len);
                                  ((char*)min_str)[min_str_len] = '\0';
                                  const char* sigval1 = min_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(min_str);
                              });
}

void QBarCategoryAxis_MaxChanged(QBarCategoryAxis* self, const libqt_string max) {
    QString max_QString = QString::fromUtf8(max.data, max.len);
    self->maxChanged(max_QString);
}

void QBarCategoryAxis_Connect_MaxChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*)>(slot);
    QBarCategoryAxis::connect(self,
                              static_cast<void (QBarCategoryAxis::*)(const QString&)>(&QBarCategoryAxis::maxChanged),
                              [self, slotFunc](const QString& max) {
                                  const auto max_ret = max;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray max_b = max_ret.toUtf8();
                                  auto max_str_len = max_b.length();
                                  const char* max_str = static_cast<const char*>(malloc(max_str_len + 1));
                                  memcpy((void*)max_str, max_b.data(), max_str_len);
                                  ((char*)max_str)[max_str_len] = '\0';
                                  const char* sigval1 = max_str;
                                  slotFunc(self, sigval1);
                                  libqt_free(max_str);
                              });
}

void QBarCategoryAxis_RangeChanged(QBarCategoryAxis* self, const libqt_string min, const libqt_string max) {
    QString min_QString = QString::fromUtf8(min.data, min.len);
    QString max_QString = QString::fromUtf8(max.data, max.len);
    self->rangeChanged(min_QString, max_QString);
}

void QBarCategoryAxis_Connect_RangeChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, const char*, const char*) = reinterpret_cast<void (*)(QBarCategoryAxis*, const char*, const char*)>(slot);
    QBarCategoryAxis::connect(self,
                              static_cast<void (QBarCategoryAxis::*)(const QString&, const QString&)>(&QBarCategoryAxis::rangeChanged),
                              [self, slotFunc](const QString& min, const QString& max) {
                                  const auto min_ret = min;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray min_b = min_ret.toUtf8();
                                  auto min_str_len = min_b.length();
                                  const char* min_str = static_cast<const char*>(malloc(min_str_len + 1));
                                  memcpy((void*)min_str, min_b.data(), min_str_len);
                                  ((char*)min_str)[min_str_len] = '\0';
                                  const char* sigval1 = min_str;
                                  const auto max_ret = max;
                                  // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                  QByteArray max_b = max_ret.toUtf8();
                                  auto max_str_len = max_b.length();
                                  const char* max_str = static_cast<const char*>(malloc(max_str_len + 1));
                                  memcpy((void*)max_str, max_b.data(), max_str_len);
                                  ((char*)max_str)[max_str_len] = '\0';
                                  const char* sigval2 = max_str;
                                  slotFunc(self, sigval1, sigval2);
                                  libqt_free(min_str);
                                  libqt_free(max_str);
                              });
}

void QBarCategoryAxis_CountChanged(QBarCategoryAxis* self) {
    self->countChanged();
}

void QBarCategoryAxis_Connect_CountChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self,
                              static_cast<void (QBarCategoryAxis::*)()>(&QBarCategoryAxis::countChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string QBarCategoryAxis_Tr2(const char* s, const char* c) {
    auto _ret = QBarCategoryAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QBarCategoryAxis_Tr3(const char* s, const char* c, int n) {
    auto _ret = QBarCategoryAxis::tr(s, c, static_cast<int>(n));
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
QMetaObject* QBarCategoryAxis_SuperMetaObject(const QBarCategoryAxis* self) {
    return (QMetaObject*)self->QBarCategoryAxis::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnMetaObject(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self)))
        vqbarcategoryaxis->qbarcategoryaxis_metaobject_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QBarCategoryAxis_SuperMetacast(QBarCategoryAxis* self, const char* param1) {
    return self->QBarCategoryAxis::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnMetacast(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_metacast_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Metacast_Callback>(slot);
}

// Base class handler implementation
int QBarCategoryAxis_SuperMetacall(QBarCategoryAxis* self, int param1, int param2, void** param3) {
    return self->QBarCategoryAxis::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnMetacall(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_metacall_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Metacall_Callback>(slot);
}

// Base class handler implementation
int QBarCategoryAxis_SuperType(const QBarCategoryAxis* self) {
    return static_cast<int>(self->QBarCategoryAxis::type());
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnType(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self)))
        vqbarcategoryaxis->qbarcategoryaxis_type_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Type_Callback>(slot);
}

// Derived class handler implementation
bool QBarCategoryAxis_Event(QBarCategoryAxis* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QBarCategoryAxis_SuperEvent(QBarCategoryAxis* self, QEvent* event) {
    return self->QBarCategoryAxis::event(event);
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_event_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Event_Callback>(slot);
}

// Derived class handler implementation
bool QBarCategoryAxis_EventFilter(QBarCategoryAxis* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QBarCategoryAxis_SuperEventFilter(QBarCategoryAxis* self, QObject* watched, QEvent* event) {
    return self->QBarCategoryAxis::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnEventFilter(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_eventfilter_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QBarCategoryAxis_TimerEvent(QBarCategoryAxis* self, QTimerEvent* event) {
    auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self);
    if (vqbarcategoryaxis) {
        vqbarcategoryaxis->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarCategoryAxis::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarCategoryAxis_SuperTimerEvent(QBarCategoryAxis* self, QTimerEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->QBarCategoryAxis::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarCategoryAxis::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnTimerEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_timerevent_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarCategoryAxis_ChildEvent(QBarCategoryAxis* self, QChildEvent* event) {
    auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self);
    if (vqbarcategoryaxis) {
        vqbarcategoryaxis->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarCategoryAxis::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarCategoryAxis_SuperChildEvent(QBarCategoryAxis* self, QChildEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->QBarCategoryAxis::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarCategoryAxis::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnChildEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_childevent_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarCategoryAxis_CustomEvent(QBarCategoryAxis* self, QEvent* event) {
    auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self);
    if (vqbarcategoryaxis) {
        vqbarcategoryaxis->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QBarCategoryAxis::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarCategoryAxis_SuperCustomEvent(QBarCategoryAxis* self, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->QBarCategoryAxis::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QBarCategoryAxis::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnCustomEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_customevent_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QBarCategoryAxis_ConnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self);
    if (vqbarcategoryaxis) {
        vqbarcategoryaxis->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarCategoryAxis::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarCategoryAxis_SuperConnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->QBarCategoryAxis::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarCategoryAxis::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnConnectNotify(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_connectnotify_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QBarCategoryAxis_DisconnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal) {
    auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self);
    if (vqbarcategoryaxis) {
        vqbarcategoryaxis->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QBarCategoryAxis::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QBarCategoryAxis_SuperDisconnectNotify(QBarCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->QBarCategoryAxis::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QBarCategoryAxis::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnDisconnectNotify(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self))
        vqbarcategoryaxis->qbarcategoryaxis_disconnectnotify_callback = reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QBarCategoryAxis_Sender(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->VirtualQBarCategoryAxis::sender();
    } else
        qFatal("Error: Protected method QBarCategoryAxis::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarCategoryAxis_SenderSignalIndex(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->VirtualQBarCategoryAxis::senderSignalIndex();
    } else
        qFatal("Error: Protected method QBarCategoryAxis::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QBarCategoryAxis_Receivers(const QBarCategoryAxis* self, const char* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->VirtualQBarCategoryAxis::receivers(signal);
    } else
        qFatal("Error: Protected method QBarCategoryAxis::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QBarCategoryAxis_IsSignalConnected(const QBarCategoryAxis* self, const QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->VirtualQBarCategoryAxis::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QBarCategoryAxis::isSignalConnected called without a directly constructed type");
}

void QBarCategoryAxis_Delete(QBarCategoryAxis* self) {
    delete self;
}
