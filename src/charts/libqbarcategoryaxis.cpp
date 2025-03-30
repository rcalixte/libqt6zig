#include <QAbstractAxis>
#include <QAnyStringView>
#include <QBarCategoryAxis>
#include <QBindingStorage>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#define WORKAROUND_INNER_CLASS_DEFINITION_QMetaObject__Connection
#include <QObject>
#include <QPen>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QThread>
#include <QTimerEvent>
#include <QVariant>
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
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QBarCategoryAxis_OnMetacall(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_Metacall_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QBarCategoryAxis_QBaseMetacall(QBarCategoryAxis* self, int param1, int param2, void** param3) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_Metacall_IsBase(true);
        return vqbarcategoryaxis->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QBarCategoryAxis_Tr(const char* s) {
    QString _ret = QBarCategoryAxis::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_Append(QBarCategoryAxis* self, libqt_list /* of libqt_string */ categories) {
    QStringList categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->append(categories_QList);
}

void QBarCategoryAxis_AppendWithCategory(QBarCategoryAxis* self, libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->append(category_QString);
}

void QBarCategoryAxis_Remove(QBarCategoryAxis* self, libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->remove(category_QString);
}

void QBarCategoryAxis_Insert(QBarCategoryAxis* self, int index, libqt_string category) {
    QString category_QString = QString::fromUtf8(category.data, category.len);
    self->insert(static_cast<int>(index), category_QString);
}

void QBarCategoryAxis_Replace(QBarCategoryAxis* self, libqt_string oldCategory, libqt_string newCategory) {
    QString oldCategory_QString = QString::fromUtf8(oldCategory.data, oldCategory.len);
    QString newCategory_QString = QString::fromUtf8(newCategory.data, newCategory.len);
    self->replace(oldCategory_QString, newCategory_QString);
}

void QBarCategoryAxis_Clear(QBarCategoryAxis* self) {
    self->clear();
}

void QBarCategoryAxis_SetCategories(QBarCategoryAxis* self, libqt_list /* of libqt_string */ categories) {
    QStringList categories_QList;
    categories_QList.reserve(categories.len);
    libqt_string* categories_arr = static_cast<libqt_string*>(categories.data);
    for (size_t i = 0; i < categories.len; ++i) {
        QString categories_arr_i_QString = QString::fromUtf8(categories_arr[i].data, categories_arr[i].len);
        categories_QList.push_back(categories_arr_i_QString);
    }
    self->setCategories(categories_QList);
}

libqt_list /* of libqt_string */ QBarCategoryAxis_Categories(QBarCategoryAxis* self) {
    QStringList _ret = self->categories();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QBarCategoryAxis_Count(const QBarCategoryAxis* self) {
    return self->count();
}

libqt_string QBarCategoryAxis_At(const QBarCategoryAxis* self, int index) {
    QString _ret = self->at(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetMin(QBarCategoryAxis* self, libqt_string minCategory) {
    QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
    self->setMin(minCategory_QString);
}

libqt_string QBarCategoryAxis_Min(const QBarCategoryAxis* self) {
    QString _ret = self->min();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetMax(QBarCategoryAxis* self, libqt_string maxCategory) {
    QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
    self->setMax(maxCategory_QString);
}

libqt_string QBarCategoryAxis_Max(const QBarCategoryAxis* self) {
    QString _ret = self->max();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QBarCategoryAxis_SetRange(QBarCategoryAxis* self, libqt_string minCategory, libqt_string maxCategory) {
    QString minCategory_QString = QString::fromUtf8(minCategory.data, minCategory.len);
    QString maxCategory_QString = QString::fromUtf8(maxCategory.data, maxCategory.len);
    self->setRange(minCategory_QString, maxCategory_QString);
}

void QBarCategoryAxis_CategoriesChanged(QBarCategoryAxis* self) {
    self->categoriesChanged();
}

void QBarCategoryAxis_Connect_CategoriesChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::categoriesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QBarCategoryAxis_MinChanged(QBarCategoryAxis* self, libqt_string min) {
    QString min_QString = QString::fromUtf8(min.data, min.len);
    self->minChanged(min_QString);
}

void QBarCategoryAxis_Connect_MinChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, libqt_string) = reinterpret_cast<void (*)(QBarCategoryAxis*, libqt_string)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::minChanged, [self, slotFunc](const QString& min) {
        const QString min_ret = min;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray min_b = min_ret.toUtf8();
        libqt_string min_str;
        min_str.len = min_b.length();
        min_str.data = static_cast<char*>(malloc((min_str.len + 1) * sizeof(char)));
        memcpy(min_str.data, min_b.data(), min_str.len);
        min_str.data[min_str.len] = '\0';
        libqt_string sigval1 = min_str;
        slotFunc(self, sigval1);
    });
}

void QBarCategoryAxis_MaxChanged(QBarCategoryAxis* self, libqt_string max) {
    QString max_QString = QString::fromUtf8(max.data, max.len);
    self->maxChanged(max_QString);
}

void QBarCategoryAxis_Connect_MaxChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, libqt_string) = reinterpret_cast<void (*)(QBarCategoryAxis*, libqt_string)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::maxChanged, [self, slotFunc](const QString& max) {
        const QString max_ret = max;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray max_b = max_ret.toUtf8();
        libqt_string max_str;
        max_str.len = max_b.length();
        max_str.data = static_cast<char*>(malloc((max_str.len + 1) * sizeof(char)));
        memcpy(max_str.data, max_b.data(), max_str.len);
        max_str.data[max_str.len] = '\0';
        libqt_string sigval1 = max_str;
        slotFunc(self, sigval1);
    });
}

void QBarCategoryAxis_RangeChanged(QBarCategoryAxis* self, libqt_string min, libqt_string max) {
    QString min_QString = QString::fromUtf8(min.data, min.len);
    QString max_QString = QString::fromUtf8(max.data, max.len);
    self->rangeChanged(min_QString, max_QString);
}

void QBarCategoryAxis_Connect_RangeChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*, libqt_string, libqt_string) = reinterpret_cast<void (*)(QBarCategoryAxis*, libqt_string, libqt_string)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::rangeChanged, [self, slotFunc](const QString& min, const QString& max) {
        const QString min_ret = min;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray min_b = min_ret.toUtf8();
        libqt_string min_str;
        min_str.len = min_b.length();
        min_str.data = static_cast<char*>(malloc((min_str.len + 1) * sizeof(char)));
        memcpy(min_str.data, min_b.data(), min_str.len);
        min_str.data[min_str.len] = '\0';
        libqt_string sigval1 = min_str;
        const QString max_ret = max;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray max_b = max_ret.toUtf8();
        libqt_string max_str;
        max_str.len = max_b.length();
        max_str.data = static_cast<char*>(malloc((max_str.len + 1) * sizeof(char)));
        memcpy(max_str.data, max_b.data(), max_str.len);
        max_str.data[max_str.len] = '\0';
        libqt_string sigval2 = max_str;
        slotFunc(self, sigval1, sigval2);
    });
}

void QBarCategoryAxis_CountChanged(QBarCategoryAxis* self) {
    self->countChanged();
}

void QBarCategoryAxis_Connect_CountChanged(QBarCategoryAxis* self, intptr_t slot) {
    void (*slotFunc)(QBarCategoryAxis*) = reinterpret_cast<void (*)(QBarCategoryAxis*)>(slot);
    QBarCategoryAxis::connect(self, &QBarCategoryAxis::countChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QBarCategoryAxis_Tr2(const char* s, const char* c) {
    QString _ret = QBarCategoryAxis::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QBarCategoryAxis_Tr3(const char* s, const char* c, int n) {
    QString _ret = QBarCategoryAxis::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
int QBarCategoryAxis_Type(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return static_cast<int>(vqbarcategoryaxis->type());
    } else {
        return static_cast<int>(vqbarcategoryaxis->type());
    }
}

// Base class handler implementation
int QBarCategoryAxis_QBaseType(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Type_IsBase(true);
        return static_cast<int>(vqbarcategoryaxis->type());
    } else {
        return static_cast<int>(vqbarcategoryaxis->type());
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnType(const QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Type_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Type_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarCategoryAxis_Event(QBarCategoryAxis* self, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        return vqbarcategoryaxis->event(event);
    } else {
        return vqbarcategoryaxis->event(event);
    }
}

// Base class handler implementation
bool QBarCategoryAxis_QBaseEvent(QBarCategoryAxis* self, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_Event_IsBase(true);
        return vqbarcategoryaxis->event(event);
    } else {
        return vqbarcategoryaxis->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_Event_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarCategoryAxis_EventFilter(QBarCategoryAxis* self, QObject* watched, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        return vqbarcategoryaxis->eventFilter(watched, event);
    } else {
        return vqbarcategoryaxis->eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QBarCategoryAxis_QBaseEventFilter(QBarCategoryAxis* self, QObject* watched, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_EventFilter_IsBase(true);
        return vqbarcategoryaxis->eventFilter(watched, event);
    } else {
        return vqbarcategoryaxis->eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnEventFilter(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_EventFilter_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarCategoryAxis_TimerEvent(QBarCategoryAxis* self, QTimerEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->timerEvent(event);
    } else {
        vqbarcategoryaxis->timerEvent(event);
    }
}

// Base class handler implementation
void QBarCategoryAxis_QBaseTimerEvent(QBarCategoryAxis* self, QTimerEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_TimerEvent_IsBase(true);
        vqbarcategoryaxis->timerEvent(event);
    } else {
        vqbarcategoryaxis->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnTimerEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_TimerEvent_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarCategoryAxis_ChildEvent(QBarCategoryAxis* self, QChildEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->childEvent(event);
    } else {
        vqbarcategoryaxis->childEvent(event);
    }
}

// Base class handler implementation
void QBarCategoryAxis_QBaseChildEvent(QBarCategoryAxis* self, QChildEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_ChildEvent_IsBase(true);
        vqbarcategoryaxis->childEvent(event);
    } else {
        vqbarcategoryaxis->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnChildEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_ChildEvent_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarCategoryAxis_CustomEvent(QBarCategoryAxis* self, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->customEvent(event);
    } else {
        vqbarcategoryaxis->customEvent(event);
    }
}

// Base class handler implementation
void QBarCategoryAxis_QBaseCustomEvent(QBarCategoryAxis* self, QEvent* event) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_CustomEvent_IsBase(true);
        vqbarcategoryaxis->customEvent(event);
    } else {
        vqbarcategoryaxis->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnCustomEvent(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_CustomEvent_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarCategoryAxis_ConnectNotify(QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->connectNotify(*signal);
    } else {
        vqbarcategoryaxis->connectNotify(*signal);
    }
}

// Base class handler implementation
void QBarCategoryAxis_QBaseConnectNotify(QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_ConnectNotify_IsBase(true);
        vqbarcategoryaxis->connectNotify(*signal);
    } else {
        vqbarcategoryaxis->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnConnectNotify(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_ConnectNotify_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QBarCategoryAxis_DisconnectNotify(QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->disconnectNotify(*signal);
    } else {
        vqbarcategoryaxis->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QBarCategoryAxis_QBaseDisconnectNotify(QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_DisconnectNotify_IsBase(true);
        vqbarcategoryaxis->disconnectNotify(*signal);
    } else {
        vqbarcategoryaxis->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnDisconnectNotify(QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = dynamic_cast<VirtualQBarCategoryAxis*>(self)) {
        vqbarcategoryaxis->setQBarCategoryAxis_DisconnectNotify_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QBarCategoryAxis_Sender(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->sender();
    } else {
        return vqbarcategoryaxis->sender();
    }
}

// Base class handler implementation
QObject* QBarCategoryAxis_QBaseSender(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Sender_IsBase(true);
        return vqbarcategoryaxis->sender();
    } else {
        return vqbarcategoryaxis->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnSender(const QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Sender_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarCategoryAxis_SenderSignalIndex(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->senderSignalIndex();
    } else {
        return vqbarcategoryaxis->senderSignalIndex();
    }
}

// Base class handler implementation
int QBarCategoryAxis_QBaseSenderSignalIndex(const QBarCategoryAxis* self) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_SenderSignalIndex_IsBase(true);
        return vqbarcategoryaxis->senderSignalIndex();
    } else {
        return vqbarcategoryaxis->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnSenderSignalIndex(const QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_SenderSignalIndex_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QBarCategoryAxis_Receivers(const QBarCategoryAxis* self, const char* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->receivers(signal);
    } else {
        return vqbarcategoryaxis->receivers(signal);
    }
}

// Base class handler implementation
int QBarCategoryAxis_QBaseReceivers(const QBarCategoryAxis* self, const char* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Receivers_IsBase(true);
        return vqbarcategoryaxis->receivers(signal);
    } else {
        return vqbarcategoryaxis->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnReceivers(const QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_Receivers_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QBarCategoryAxis_IsSignalConnected(const QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        return vqbarcategoryaxis->isSignalConnected(*signal);
    } else {
        return vqbarcategoryaxis->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QBarCategoryAxis_QBaseIsSignalConnected(const QBarCategoryAxis* self, QMetaMethod* signal) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_IsSignalConnected_IsBase(true);
        return vqbarcategoryaxis->isSignalConnected(*signal);
    } else {
        return vqbarcategoryaxis->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QBarCategoryAxis_OnIsSignalConnected(const QBarCategoryAxis* self, intptr_t slot) {
    if (auto* vqbarcategoryaxis = const_cast<VirtualQBarCategoryAxis*>(dynamic_cast<const VirtualQBarCategoryAxis*>(self))) {
        vqbarcategoryaxis->setQBarCategoryAxis_IsSignalConnected_Callback(reinterpret_cast<VirtualQBarCategoryAxis::QBarCategoryAxis_IsSignalConnected_Callback>(slot));
    }
}

void QBarCategoryAxis_Delete(QBarCategoryAxis* self) {
    delete self;
}
