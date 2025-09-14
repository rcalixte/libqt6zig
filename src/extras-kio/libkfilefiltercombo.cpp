#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KFileFilter>
#include <KFileFilterCombo>
#include <QAbstractItemModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QContextMenuEvent>
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
#include <QKeySequence>
#include <QLineEdit>
#include <QList>
#include <QMap>
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
#include <QStyleOptionComboBox>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kfilefiltercombo.h>
#include "libkfilefiltercombo.h"
#include "libkfilefiltercombo.hxx"

KFileFilterCombo* KFileFilterCombo_new(QWidget* parent) {
    return new VirtualKFileFilterCombo(parent);
}

KFileFilterCombo* KFileFilterCombo_new2() {
    return new VirtualKFileFilterCombo();
}

QMetaObject* KFileFilterCombo_MetaObject(const KFileFilterCombo* self) {
    return (QMetaObject*)self->metaObject();
}

void* KFileFilterCombo_Metacast(KFileFilterCombo* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KFileFilterCombo_Metacall(KFileFilterCombo* self, int param1, int param2, void** param3) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKFileFilterCombo*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KFileFilterCombo_Tr(const char* s) {
    QString _ret = KFileFilterCombo::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileFilterCombo_SetFilters(KFileFilterCombo* self, const libqt_list /* of KFileFilter* */ filters) {
    QList<KFileFilter> filters_QList;
    filters_QList.reserve(filters.len);
    KFileFilter** filters_arr = static_cast<KFileFilter**>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        filters_QList.push_back(*(filters_arr[i]));
    }
    self->setFilters(filters_QList);
}

KFileFilter* KFileFilterCombo_CurrentFilter(const KFileFilterCombo* self) {
    return new KFileFilter(self->currentFilter());
}

libqt_list /* of KFileFilter* */ KFileFilterCombo_Filters(const KFileFilterCombo* self) {
    QList<KFileFilter> _ret = self->filters();
    // Convert QList<> from C++ memory to manually-managed C memory
    KFileFilter** _arr = static_cast<KFileFilter**>(malloc(sizeof(KFileFilter*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new KFileFilter(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void KFileFilterCombo_SetDefaultFilter(KFileFilterCombo* self, const KFileFilter* filter) {
    self->setDefaultFilter(*filter);
}

KFileFilter* KFileFilterCombo_DefaultFilter(const KFileFilterCombo* self) {
    return new KFileFilter(self->defaultFilter());
}

void KFileFilterCombo_SetCurrentFilter(KFileFilterCombo* self, const KFileFilter* filter) {
    self->setCurrentFilter(*filter);
}

bool KFileFilterCombo_ShowsAllTypes(const KFileFilterCombo* self) {
    return self->showsAllTypes();
}

bool KFileFilterCombo_EventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->eventFilter(param1, param2);
    }
    return {};
}

void KFileFilterCombo_FilterChanged(KFileFilterCombo* self) {
    self->filterChanged();
}

void KFileFilterCombo_Connect_FilterChanged(KFileFilterCombo* self, intptr_t slot) {
    void (*slotFunc)(KFileFilterCombo*) = reinterpret_cast<void (*)(KFileFilterCombo*)>(slot);
    KFileFilterCombo::connect(self, &KFileFilterCombo::filterChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string KFileFilterCombo_Tr2(const char* s, const char* c) {
    QString _ret = KFileFilterCombo::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KFileFilterCombo_Tr3(const char* s, const char* c, int n) {
    QString _ret = KFileFilterCombo::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KFileFilterCombo_SetFilters2(KFileFilterCombo* self, const libqt_list /* of KFileFilter* */ filters, const KFileFilter* defaultFilter) {
    QList<KFileFilter> filters_QList;
    filters_QList.reserve(filters.len);
    KFileFilter** filters_arr = static_cast<KFileFilter**>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        filters_QList.push_back(*(filters_arr[i]));
    }
    self->setFilters(filters_QList, *defaultFilter);
}

// Base class handler implementation
int KFileFilterCombo_QBaseMetacall(KFileFilterCombo* self, int param1, int param2, void** param3) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Metacall_IsBase(true);
        return vkfilefiltercombo->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KFileFilterCombo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetacall(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Metacall_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseEventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_EventFilter_IsBase(true);
        return vkfilefiltercombo->eventFilter(param1, param2);
    } else {
        return ((VirtualKFileFilterCombo*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEventFilter(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_EventFilter_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetAutoCompletion(KFileFilterCombo* self, bool autocomplete) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setAutoCompletion(autocomplete);
    } else {
        self->KFileFilterCombo::setAutoCompletion(autocomplete);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetAutoCompletion(KFileFilterCombo* self, bool autocomplete) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetAutoCompletion_IsBase(true);
        vkfilefiltercombo->setAutoCompletion(autocomplete);
    } else {
        self->KFileFilterCombo::setAutoCompletion(autocomplete);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetAutoCompletion(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetAutoCompletion_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetAutoCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetLineEdit(KFileFilterCombo* self, QLineEdit* lineEdit) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setLineEdit(lineEdit);
    } else {
        self->KFileFilterCombo::setLineEdit(lineEdit);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetLineEdit(KFileFilterCombo* self, QLineEdit* lineEdit) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetLineEdit_IsBase(true);
        vkfilefiltercombo->setLineEdit(lineEdit);
    } else {
        self->KFileFilterCombo::setLineEdit(lineEdit);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetLineEdit(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetLineEdit_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetLineEdit_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFileFilterCombo_MinimumSizeHint(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return new QSize(vkfilefiltercombo->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileFilterCombo*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KFileFilterCombo_QBaseMinimumSizeHint(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MinimumSizeHint_IsBase(true);
        return new QSize(vkfilefiltercombo->minimumSizeHint());
    } else {
        return new QSize(((VirtualKFileFilterCombo*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMinimumSizeHint(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MinimumSizeHint_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletedText(KFileFilterCombo* self, const libqt_string completedText) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setCompletedText(completedText_QString);
    } else {
        self->KFileFilterCombo::setCompletedText(completedText_QString);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetCompletedText(KFileFilterCombo* self, const libqt_string completedText) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletedText_IsBase(true);
        vkfilefiltercombo->setCompletedText(completedText_QString);
    } else {
        self->KFileFilterCombo::setCompletedText(completedText_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletedText(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletedText_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletedText_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletedItems(KFileFilterCombo* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KFileFilterCombo::setCompletedItems(items_QList, autoSuggest);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetCompletedItems(KFileFilterCombo* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletedItems_IsBase(true);
        vkfilefiltercombo->setCompletedItems(items_QList, autoSuggest);
    } else {
        self->KFileFilterCombo::setCompletedItems(items_QList, autoSuggest);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletedItems(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletedItems_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletedItems_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MakeCompletion(KFileFilterCombo* self, const libqt_string param1) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->makeCompletion(param1_QString);
    } else {
        ((VirtualKFileFilterCombo*)self)->makeCompletion(param1_QString);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMakeCompletion(KFileFilterCombo* self, const libqt_string param1) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MakeCompletion_IsBase(true);
        vkfilefiltercombo->makeCompletion(param1_QString);
    } else {
        ((VirtualKFileFilterCombo*)self)->makeCompletion(param1_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMakeCompletion(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MakeCompletion_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MakeCompletion_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetModel(KFileFilterCombo* self, QAbstractItemModel* model) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setModel(model);
    } else {
        self->KFileFilterCombo::setModel(model);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetModel(KFileFilterCombo* self, QAbstractItemModel* model) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetModel_IsBase(true);
        vkfilefiltercombo->setModel(model);
    } else {
        self->KFileFilterCombo::setModel(model);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetModel(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetModel_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetModel_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KFileFilterCombo_SizeHint(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return new QSize(vkfilefiltercombo->sizeHint());
    } else {
        return new QSize(((VirtualKFileFilterCombo*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KFileFilterCombo_QBaseSizeHint(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SizeHint_IsBase(true);
        return new QSize(vkfilefiltercombo->sizeHint());
    } else {
        return new QSize(((VirtualKFileFilterCombo*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSizeHint(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SizeHint_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ShowPopup(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->showPopup();
    } else {
        self->KFileFilterCombo::showPopup();
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseShowPopup(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ShowPopup_IsBase(true);
        vkfilefiltercombo->showPopup();
    } else {
        self->KFileFilterCombo::showPopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnShowPopup(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ShowPopup_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ShowPopup_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_HidePopup(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->hidePopup();
    } else {
        self->KFileFilterCombo::hidePopup();
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseHidePopup(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HidePopup_IsBase(true);
        vkfilefiltercombo->hidePopup();
    } else {
        self->KFileFilterCombo::hidePopup();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHidePopup(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HidePopup_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HidePopup_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_Event(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->event(event);
    } else {
        return self->KFileFilterCombo::event(event);
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Event_IsBase(true);
        return vkfilefiltercombo->event(event);
    } else {
        return self->KFileFilterCombo::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Event_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Event_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KFileFilterCombo_InputMethodQuery(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return new QVariant(vkfilefiltercombo->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileFilterCombo*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KFileFilterCombo_QBaseInputMethodQuery(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InputMethodQuery_IsBase(true);
        return new QVariant(vkfilefiltercombo->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKFileFilterCombo*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInputMethodQuery(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InputMethodQuery_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_FocusInEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->focusInEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->focusInEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseFocusInEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusInEvent_IsBase(true);
        vkfilefiltercombo->focusInEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->focusInEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusInEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusInEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_FocusOutEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->focusOutEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->focusOutEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseFocusOutEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusOutEvent_IsBase(true);
        vkfilefiltercombo->focusOutEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->focusOutEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusOutEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusOutEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ChangeEvent(KFileFilterCombo* self, QEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->changeEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->changeEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseChangeEvent(KFileFilterCombo* self, QEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ChangeEvent_IsBase(true);
        vkfilefiltercombo->changeEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->changeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnChangeEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ChangeEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ResizeEvent(KFileFilterCombo* self, QResizeEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->resizeEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseResizeEvent(KFileFilterCombo* self, QResizeEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ResizeEvent_IsBase(true);
        vkfilefiltercombo->resizeEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnResizeEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ResizeEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_PaintEvent(KFileFilterCombo* self, QPaintEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->paintEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBasePaintEvent(KFileFilterCombo* self, QPaintEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_PaintEvent_IsBase(true);
        vkfilefiltercombo->paintEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnPaintEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_PaintEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ShowEvent(KFileFilterCombo* self, QShowEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->showEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->showEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseShowEvent(KFileFilterCombo* self, QShowEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ShowEvent_IsBase(true);
        vkfilefiltercombo->showEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->showEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnShowEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ShowEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_HideEvent(KFileFilterCombo* self, QHideEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->hideEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->hideEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseHideEvent(KFileFilterCombo* self, QHideEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HideEvent_IsBase(true);
        vkfilefiltercombo->hideEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->hideEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHideEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HideEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MousePressEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->mousePressEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->mousePressEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMousePressEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MousePressEvent_IsBase(true);
        vkfilefiltercombo->mousePressEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->mousePressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMousePressEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MousePressEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->mouseReleaseEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseReleaseEvent_IsBase(true);
        vkfilefiltercombo->mouseReleaseEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseReleaseEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_KeyPressEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->keyPressEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->keyPressEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseKeyPressEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyPressEvent_IsBase(true);
        vkfilefiltercombo->keyPressEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->keyPressEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnKeyPressEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyPressEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_KeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->keyReleaseEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->keyReleaseEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseKeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyReleaseEvent_IsBase(true);
        vkfilefiltercombo->keyReleaseEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->keyReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnKeyReleaseEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_WheelEvent(KFileFilterCombo* self, QWheelEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->wheelEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseWheelEvent(KFileFilterCombo* self, QWheelEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_WheelEvent_IsBase(true);
        vkfilefiltercombo->wheelEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnWheelEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_WheelEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->contextMenuEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->contextMenuEvent(e);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ContextMenuEvent_IsBase(true);
        vkfilefiltercombo->contextMenuEvent(e);
    } else {
        ((VirtualKFileFilterCombo*)self)->contextMenuEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnContextMenuEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ContextMenuEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_InputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->inputMethodEvent(param1);
    } else {
        ((VirtualKFileFilterCombo*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseInputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InputMethodEvent_IsBase(true);
        vkfilefiltercombo->inputMethodEvent(param1);
    } else {
        ((VirtualKFileFilterCombo*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInputMethodEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InputMethodEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_InitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->initStyleOption(option);
    } else {
        ((VirtualKFileFilterCombo*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseInitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InitStyleOption_IsBase(true);
        vkfilefiltercombo->initStyleOption(option);
    } else {
        ((VirtualKFileFilterCombo*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInitStyleOption(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InitStyleOption_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileFilterCombo_DevType(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->devType();
    } else {
        return self->KFileFilterCombo::devType();
    }
}

// Base class handler implementation
int KFileFilterCombo_QBaseDevType(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DevType_IsBase(true);
        return vkfilefiltercombo->devType();
    } else {
        return self->KFileFilterCombo::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDevType(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DevType_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetVisible(KFileFilterCombo* self, bool visible) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setVisible(visible);
    } else {
        self->KFileFilterCombo::setVisible(visible);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetVisible(KFileFilterCombo* self, bool visible) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetVisible_IsBase(true);
        vkfilefiltercombo->setVisible(visible);
    } else {
        self->KFileFilterCombo::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetVisible(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetVisible_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileFilterCombo_HeightForWidth(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileFilterCombo::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KFileFilterCombo_QBaseHeightForWidth(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HeightForWidth_IsBase(true);
        return vkfilefiltercombo->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KFileFilterCombo::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHeightForWidth(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HeightForWidth_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_HasHeightForWidth(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->hasHeightForWidth();
    } else {
        return self->KFileFilterCombo::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseHasHeightForWidth(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HasHeightForWidth_IsBase(true);
        return vkfilefiltercombo->hasHeightForWidth();
    } else {
        return self->KFileFilterCombo::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHasHeightForWidth(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_HasHeightForWidth_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KFileFilterCombo_PaintEngine(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->paintEngine();
    } else {
        return self->KFileFilterCombo::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KFileFilterCombo_QBasePaintEngine(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_PaintEngine_IsBase(true);
        return vkfilefiltercombo->paintEngine();
    } else {
        return self->KFileFilterCombo::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnPaintEngine(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_PaintEngine_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseDoubleClickEvent_IsBase(true);
        vkfilefiltercombo->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseDoubleClickEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->mouseMoveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseMoveEvent_IsBase(true);
        vkfilefiltercombo->mouseMoveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MouseMoveEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_EnterEvent(KFileFilterCombo* self, QEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->enterEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseEnterEvent(KFileFilterCombo* self, QEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_EnterEvent_IsBase(true);
        vkfilefiltercombo->enterEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEnterEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_EnterEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_LeaveEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->leaveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseLeaveEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_LeaveEvent_IsBase(true);
        vkfilefiltercombo->leaveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnLeaveEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_LeaveEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_MoveEvent(KFileFilterCombo* self, QMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->moveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseMoveEvent(KFileFilterCombo* self, QMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MoveEvent_IsBase(true);
        vkfilefiltercombo->moveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_MoveEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_CloseEvent(KFileFilterCombo* self, QCloseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->closeEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseCloseEvent(KFileFilterCombo* self, QCloseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_CloseEvent_IsBase(true);
        vkfilefiltercombo->closeEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnCloseEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_CloseEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_TabletEvent(KFileFilterCombo* self, QTabletEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->tabletEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseTabletEvent(KFileFilterCombo* self, QTabletEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_TabletEvent_IsBase(true);
        vkfilefiltercombo->tabletEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnTabletEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_TabletEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ActionEvent(KFileFilterCombo* self, QActionEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->actionEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseActionEvent(KFileFilterCombo* self, QActionEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ActionEvent_IsBase(true);
        vkfilefiltercombo->actionEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnActionEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ActionEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_DragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->dragEnterEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragEnterEvent_IsBase(true);
        vkfilefiltercombo->dragEnterEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragEnterEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragEnterEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_DragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->dragMoveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragMoveEvent_IsBase(true);
        vkfilefiltercombo->dragMoveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragMoveEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_DragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->dragLeaveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragLeaveEvent_IsBase(true);
        vkfilefiltercombo->dragLeaveEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragLeaveEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DragLeaveEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_DropEvent(KFileFilterCombo* self, QDropEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->dropEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDropEvent(KFileFilterCombo* self, QDropEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DropEvent_IsBase(true);
        vkfilefiltercombo->dropEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDropEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DropEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_NativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileFilterCombo*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseNativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_NativeEvent_IsBase(true);
        return vkfilefiltercombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKFileFilterCombo*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnNativeEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_NativeEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileFilterCombo_Metric(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileFilterCombo*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KFileFilterCombo_QBaseMetric(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Metric_IsBase(true);
        return vkfilefiltercombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKFileFilterCombo*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetric(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Metric_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_InitPainter(const KFileFilterCombo* self, QPainter* painter) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->initPainter(painter);
    } else {
        ((VirtualKFileFilterCombo*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseInitPainter(const KFileFilterCombo* self, QPainter* painter) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InitPainter_IsBase(true);
        vkfilefiltercombo->initPainter(painter);
    } else {
        ((VirtualKFileFilterCombo*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInitPainter(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_InitPainter_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KFileFilterCombo_Redirected(const KFileFilterCombo* self, QPoint* offset) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->redirected(offset);
    } else {
        return ((VirtualKFileFilterCombo*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KFileFilterCombo_QBaseRedirected(const KFileFilterCombo* self, QPoint* offset) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Redirected_IsBase(true);
        return vkfilefiltercombo->redirected(offset);
    } else {
        return ((VirtualKFileFilterCombo*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnRedirected(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Redirected_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KFileFilterCombo_SharedPainter(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->sharedPainter();
    } else {
        return ((VirtualKFileFilterCombo*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KFileFilterCombo_QBaseSharedPainter(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SharedPainter_IsBase(true);
        return vkfilefiltercombo->sharedPainter();
    } else {
        return ((VirtualKFileFilterCombo*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSharedPainter(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SharedPainter_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_FocusNextPrevChild(KFileFilterCombo* self, bool next) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseFocusNextPrevChild(KFileFilterCombo* self, bool next) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusNextPrevChild_IsBase(true);
        return vkfilefiltercombo->focusNextPrevChild(next);
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusNextPrevChild(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_TimerEvent(KFileFilterCombo* self, QTimerEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->timerEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseTimerEvent(KFileFilterCombo* self, QTimerEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_TimerEvent_IsBase(true);
        vkfilefiltercombo->timerEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnTimerEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_TimerEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ChildEvent(KFileFilterCombo* self, QChildEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->childEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseChildEvent(KFileFilterCombo* self, QChildEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ChildEvent_IsBase(true);
        vkfilefiltercombo->childEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnChildEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ChildEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_CustomEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->customEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseCustomEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_CustomEvent_IsBase(true);
        vkfilefiltercombo->customEvent(event);
    } else {
        ((VirtualKFileFilterCombo*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnCustomEvent(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_CustomEvent_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_ConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->connectNotify(*signal);
    } else {
        ((VirtualKFileFilterCombo*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ConnectNotify_IsBase(true);
        vkfilefiltercombo->connectNotify(*signal);
    } else {
        ((VirtualKFileFilterCombo*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnConnectNotify(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_ConnectNotify_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_DisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->disconnectNotify(*signal);
    } else {
        ((VirtualKFileFilterCombo*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DisconnectNotify_IsBase(true);
        vkfilefiltercombo->disconnectNotify(*signal);
    } else {
        ((VirtualKFileFilterCombo*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDisconnectNotify(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_DisconnectNotify_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletionObject(KFileFilterCombo* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetCompletionObject(KFileFilterCombo* self, KCompletion* completionObject, bool handleSignals) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletionObject_IsBase(true);
        vkfilefiltercombo->setCompletionObject(completionObject, handleSignals);
    } else {
        self->KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletionObject(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletionObject_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletionObject_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetHandleSignals(KFileFilterCombo* self, bool handle) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setHandleSignals(handle);
    } else {
        self->KFileFilterCombo::setHandleSignals(handle);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetHandleSignals(KFileFilterCombo* self, bool handle) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetHandleSignals_IsBase(true);
        vkfilefiltercombo->setHandleSignals(handle);
    } else {
        self->KFileFilterCombo::setHandleSignals(handle);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetHandleSignals(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetHandleSignals_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetHandleSignals_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletionMode(KFileFilterCombo* self, int mode) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KFileFilterCombo::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetCompletionMode(KFileFilterCombo* self, int mode) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletionMode_IsBase(true);
        vkfilefiltercombo->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    } else {
        self->KFileFilterCombo::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletionMode(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetCompletionMode_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletionMode_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_VirtualHook(KFileFilterCombo* self, int id, void* data) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKFileFilterCombo*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseVirtualHook(KFileFilterCombo* self, int id, void* data) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_VirtualHook_IsBase(true);
        vkfilefiltercombo->virtual_hook(static_cast<int>(id), data);
    } else {
        ((VirtualKFileFilterCombo*)self)->virtual_hook(static_cast<int>(id), data);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnVirtualHook(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_VirtualHook_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_VirtualHook_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_UpdateMicroFocus(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->updateMicroFocus();
    } else {
        ((VirtualKFileFilterCombo*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseUpdateMicroFocus(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_UpdateMicroFocus_IsBase(true);
        vkfilefiltercombo->updateMicroFocus();
    } else {
        ((VirtualKFileFilterCombo*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnUpdateMicroFocus(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_Create(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->create();
    } else {
        ((VirtualKFileFilterCombo*)self)->create();
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseCreate(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Create_IsBase(true);
        vkfilefiltercombo->create();
    } else {
        ((VirtualKFileFilterCombo*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnCreate(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Create_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_Destroy(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->destroy();
    } else {
        ((VirtualKFileFilterCombo*)self)->destroy();
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseDestroy(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Destroy_IsBase(true);
        vkfilefiltercombo->destroy();
    } else {
        ((VirtualKFileFilterCombo*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDestroy(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Destroy_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_FocusNextChild(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->focusNextChild();
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseFocusNextChild(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusNextChild_IsBase(true);
        return vkfilefiltercombo->focusNextChild();
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusNextChild(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusNextChild_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_FocusPreviousChild(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->focusPreviousChild();
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseFocusPreviousChild(KFileFilterCombo* self) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusPreviousChild_IsBase(true);
        return vkfilefiltercombo->focusPreviousChild();
    } else {
        return ((VirtualKFileFilterCombo*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusPreviousChild(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_FocusPreviousChild_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KFileFilterCombo_Sender(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->sender();
    } else {
        return ((VirtualKFileFilterCombo*)self)->sender();
    }
}

// Base class handler implementation
QObject* KFileFilterCombo_QBaseSender(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Sender_IsBase(true);
        return vkfilefiltercombo->sender();
    } else {
        return ((VirtualKFileFilterCombo*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSender(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Sender_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileFilterCombo_SenderSignalIndex(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->senderSignalIndex();
    } else {
        return ((VirtualKFileFilterCombo*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KFileFilterCombo_QBaseSenderSignalIndex(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SenderSignalIndex_IsBase(true);
        return vkfilefiltercombo->senderSignalIndex();
    } else {
        return ((VirtualKFileFilterCombo*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSenderSignalIndex(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SenderSignalIndex_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KFileFilterCombo_Receivers(const KFileFilterCombo* self, const char* signal) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->receivers(signal);
    } else {
        return ((VirtualKFileFilterCombo*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KFileFilterCombo_QBaseReceivers(const KFileFilterCombo* self, const char* signal) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Receivers_IsBase(true);
        return vkfilefiltercombo->receivers(signal);
    } else {
        return ((VirtualKFileFilterCombo*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnReceivers(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Receivers_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KFileFilterCombo_IsSignalConnected(const KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileFilterCombo*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KFileFilterCombo_QBaseIsSignalConnected(const KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_IsSignalConnected_IsBase(true);
        return vkfilefiltercombo->isSignalConnected(*signal);
    } else {
        return ((VirtualKFileFilterCombo*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnIsSignalConnected(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_IsSignalConnected_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KFileFilterCombo_GetDecodedMetricF(const KFileFilterCombo* self, int metricA, int metricB) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileFilterCombo*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KFileFilterCombo_QBaseGetDecodedMetricF(const KFileFilterCombo* self, int metricA, int metricB) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_GetDecodedMetricF_IsBase(true);
        return vkfilefiltercombo->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKFileFilterCombo*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnGetDecodedMetricF(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_GetDecodedMetricF_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KFileFilterCombo_KeyBindingMap(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkfilefiltercombo->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKFileFilterCombo*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Base class handler implementation
libqt_map /* of int to libqt_list  of QKeySequence*  */ KFileFilterCombo_QBaseKeyBindingMap(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyBindingMap_IsBase(true);
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkfilefiltercombo->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    } else {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = ((VirtualKFileFilterCombo*)self)->keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size() + 1)));
            for (qsizetype i = 0; i < _mapval_ret.size(); ++i) {
                _mapval_arr[i] = new QKeySequence(_mapval_ret[i]);
            }
            libqt_list _mapval_out;
            _mapval_out.len = _mapval_ret.size();
            _mapval_out.data = static_cast<void*>(_mapval_arr);
            _varr[_ctr] = _mapval_out;
            _ctr++;
        }
        libqt_map _out;
        _out.len = _ret.size();
        _out.keys = static_cast<void*>(_karr);
        _out.values = static_cast<void*>(_varr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnKeyBindingMap(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_KeyBindingMap_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_KeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetKeyBindingMap(KFileFilterCombo* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKFileFilterCombo*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetKeyBindingMap(KFileFilterCombo* self, libqt_map /* of int to libqt_list  of QKeySequence*  */ keyBindingMap) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
    int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
    libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
    for (size_t i = 0; i < keyBindingMap.len; ++i) {
        QList<QKeySequence> keyBindingMap_varr_i_QList;
        keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
        QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
        for (size_t i = 0; i < keyBindingMap_varr[i].len; ++i) {
            keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[i]));
        }
        keyBindingMap_QMap[static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i])] = keyBindingMap_varr_i_QList;
    }
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetKeyBindingMap_IsBase(true);
        vkfilefiltercombo->setKeyBindingMap(keyBindingMap_QMap);
    } else {
        ((VirtualKFileFilterCombo*)self)->setKeyBindingMap(keyBindingMap_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetKeyBindingMap(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetKeyBindingMap_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetKeyBindingMap_Callback>(slot));
    }
}

// Derived class handler implementation
void KFileFilterCombo_SetDelegate(KFileFilterCombo* self, KCompletionBase* delegate) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setDelegate(delegate);
    } else {
        ((VirtualKFileFilterCombo*)self)->setDelegate(delegate);
    }
}

// Base class handler implementation
void KFileFilterCombo_QBaseSetDelegate(KFileFilterCombo* self, KCompletionBase* delegate) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetDelegate_IsBase(true);
        vkfilefiltercombo->setDelegate(delegate);
    } else {
        ((VirtualKFileFilterCombo*)self)->setDelegate(delegate);
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetDelegate(KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_SetDelegate_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetDelegate_Callback>(slot));
    }
}

// Derived class handler implementation
KCompletionBase* KFileFilterCombo_Delegate(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        return vkfilefiltercombo->delegate();
    } else {
        return ((VirtualKFileFilterCombo*)self)->delegate();
    }
}

// Base class handler implementation
KCompletionBase* KFileFilterCombo_QBaseDelegate(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Delegate_IsBase(true);
        return vkfilefiltercombo->delegate();
    } else {
        return ((VirtualKFileFilterCombo*)self)->delegate();
    }
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDelegate(const KFileFilterCombo* self, intptr_t slot) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo && vkfilefiltercombo->isVirtualKFileFilterCombo) {
        vkfilefiltercombo->setKFileFilterCombo_Delegate_Callback(reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Delegate_Callback>(slot));
    }
}

void KFileFilterCombo_Delete(KFileFilterCombo* self) {
    delete self;
}
