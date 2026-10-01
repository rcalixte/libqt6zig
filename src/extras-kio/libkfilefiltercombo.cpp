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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KFileFilterCombo_Tr(const char* s) {
    auto _ret = KFileFilterCombo::tr(s);
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
    KFileFilter** _arr = static_cast<KFileFilter**>(malloc(sizeof(KFileFilter*) * (_ret.size())));
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
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->eventFilter(param1, param2);
    }
    qFatal("Error: Protected method KFileFilterCombo::eventFilter called without a directly constructed type");
}

void KFileFilterCombo_FilterChanged(KFileFilterCombo* self) {
    self->filterChanged();
}

void KFileFilterCombo_Connect_FilterChanged(KFileFilterCombo* self, intptr_t slot) {
    void (*slotFunc)(KFileFilterCombo*) = reinterpret_cast<void (*)(KFileFilterCombo*)>(slot);
    KFileFilterCombo::connect(self,
                              static_cast<void (KFileFilterCombo::*)()>(&KFileFilterCombo::filterChanged),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

libqt_string KFileFilterCombo_Tr2(const char* s, const char* c) {
    auto _ret = KFileFilterCombo::tr(s, c);
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
    auto _ret = KFileFilterCombo::tr(s, c, static_cast<int>(n));
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
QMetaObject* KFileFilterCombo_SuperMetaObject(const KFileFilterCombo* self) {
    return (QMetaObject*)self->KFileFilterCombo::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetaObject(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_metaobject_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KFileFilterCombo_SuperMetacast(KFileFilterCombo* self, const char* param1) {
    return self->KFileFilterCombo::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetacast(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_metacast_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Metacast_Callback>(slot);
}

// Base class handler implementation
int KFileFilterCombo_SuperMetacall(KFileFilterCombo* self, int param1, int param2, void** param3) {
    return self->KFileFilterCombo::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetacall(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_metacall_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KFileFilterCombo_SuperEventFilter(KFileFilterCombo* self, QObject* param1, QEvent* param2) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        return vkfilefiltercombo->KFileFilterCombo::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEventFilter(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_eventfilter_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetAutoCompletion(KFileFilterCombo* self, bool autocomplete) {
    self->setAutoCompletion(autocomplete);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetAutoCompletion(KFileFilterCombo* self, bool autocomplete) {
    self->KFileFilterCombo::setAutoCompletion(autocomplete);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetAutoCompletion(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setautocompletion_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetAutoCompletion_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetLineEdit(KFileFilterCombo* self, QLineEdit* lineEdit) {
    self->setLineEdit(lineEdit);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetLineEdit(KFileFilterCombo* self, QLineEdit* lineEdit) {
    self->KFileFilterCombo::setLineEdit(lineEdit);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetLineEdit(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setlineedit_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetLineEdit_Callback>(slot);
}

// Derived class handler implementation
QSize* KFileFilterCombo_MinimumSizeHint(const KFileFilterCombo* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KFileFilterCombo_SuperMinimumSizeHint(const KFileFilterCombo* self) {
    return new QSize(self->KFileFilterCombo::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMinimumSizeHint(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_minimumsizehint_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletedText(KFileFilterCombo* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->setCompletedText(completedText_QString);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetCompletedText(KFileFilterCombo* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->KFileFilterCombo::setCompletedText(completedText_QString);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletedText(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setcompletedtext_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletedText_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletedItems(KFileFilterCombo* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setCompletedItems(items_QList, autoSuggest);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetCompletedItems(KFileFilterCombo* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->KFileFilterCombo::setCompletedItems(items_QList, autoSuggest);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletedItems(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setcompleteditems_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletedItems_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MakeCompletion(KFileFilterCombo* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->makeCompletion(param1_QString);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::makeCompletion called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMakeCompletion(KFileFilterCombo* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::makeCompletion(param1_QString);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::makeCompletion called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMakeCompletion(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_makecompletion_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MakeCompletion_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetModel(KFileFilterCombo* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetModel(KFileFilterCombo* self, QAbstractItemModel* model) {
    self->KFileFilterCombo::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetModel(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setmodel_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KFileFilterCombo_SizeHint(const KFileFilterCombo* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KFileFilterCombo_SuperSizeHint(const KFileFilterCombo* self) {
    return new QSize(self->KFileFilterCombo::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSizeHint(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_sizehint_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ShowPopup(KFileFilterCombo* self) {
    self->showPopup();
}

// Base class handler implementation
void KFileFilterCombo_SuperShowPopup(KFileFilterCombo* self) {
    self->KFileFilterCombo::showPopup();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnShowPopup(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_showpopup_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_HidePopup(KFileFilterCombo* self) {
    self->hidePopup();
}

// Base class handler implementation
void KFileFilterCombo_SuperHidePopup(KFileFilterCombo* self) {
    self->KFileFilterCombo::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHidePopup(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_hidepopup_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool KFileFilterCombo_Event(KFileFilterCombo* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KFileFilterCombo_SuperEvent(KFileFilterCombo* self, QEvent* event) {
    return self->KFileFilterCombo::event(event);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_event_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KFileFilterCombo_InputMethodQuery(const KFileFilterCombo* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KFileFilterCombo_SuperInputMethodQuery(const KFileFilterCombo* self, int param1) {
    return new QVariant(self->KFileFilterCombo::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInputMethodQuery(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_inputmethodquery_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_FocusInEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperFocusInEvent(KFileFilterCombo* self, QFocusEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusInEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_focusinevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_FocusOutEvent(KFileFilterCombo* self, QFocusEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperFocusOutEvent(KFileFilterCombo* self, QFocusEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusOutEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_focusoutevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ChangeEvent(KFileFilterCombo* self, QEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperChangeEvent(KFileFilterCombo* self, QEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnChangeEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_changeevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ResizeEvent(KFileFilterCombo* self, QResizeEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperResizeEvent(KFileFilterCombo* self, QResizeEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnResizeEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_resizeevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_PaintEvent(KFileFilterCombo* self, QPaintEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperPaintEvent(KFileFilterCombo* self, QPaintEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnPaintEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_paintevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ShowEvent(KFileFilterCombo* self, QShowEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperShowEvent(KFileFilterCombo* self, QShowEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnShowEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_showevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_HideEvent(KFileFilterCombo* self, QHideEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperHideEvent(KFileFilterCombo* self, QHideEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHideEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_hideevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MousePressEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMousePressEvent(KFileFilterCombo* self, QMouseEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMousePressEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_mousepressevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMouseReleaseEvent(KFileFilterCombo* self, QMouseEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseReleaseEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_mousereleaseevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_KeyPressEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperKeyPressEvent(KFileFilterCombo* self, QKeyEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnKeyPressEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_keypressevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_KeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperKeyReleaseEvent(KFileFilterCombo* self, QKeyEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnKeyReleaseEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_keyreleaseevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_WheelEvent(KFileFilterCombo* self, QWheelEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperWheelEvent(KFileFilterCombo* self, QWheelEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnWheelEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_wheelevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperContextMenuEvent(KFileFilterCombo* self, QContextMenuEvent* e) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnContextMenuEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_contextmenuevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_InputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperInputMethodEvent(KFileFilterCombo* self, QInputMethodEvent* param1) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInputMethodEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_inputmethodevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_InitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo) {
        vkfilefiltercombo->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperInitStyleOption(const KFileFilterCombo* self, QStyleOptionComboBox* option) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        vkfilefiltercombo->KFileFilterCombo::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInitStyleOption(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_initstyleoption_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KFileFilterCombo_DevType(const KFileFilterCombo* self) {
    return self->devType();
}

// Base class handler implementation
int KFileFilterCombo_SuperDevType(const KFileFilterCombo* self) {
    return self->KFileFilterCombo::devType();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDevType(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_devtype_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DevType_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetVisible(KFileFilterCombo* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetVisible(KFileFilterCombo* self, bool visible) {
    self->KFileFilterCombo::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetVisible(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setvisible_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KFileFilterCombo_HeightForWidth(const KFileFilterCombo* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KFileFilterCombo_SuperHeightForWidth(const KFileFilterCombo* self, int param1) {
    return self->KFileFilterCombo::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHeightForWidth(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_heightforwidth_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KFileFilterCombo_HasHeightForWidth(const KFileFilterCombo* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KFileFilterCombo_SuperHasHeightForWidth(const KFileFilterCombo* self) {
    return self->KFileFilterCombo::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnHasHeightForWidth(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_hasheightforwidth_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KFileFilterCombo_PaintEngine(const KFileFilterCombo* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KFileFilterCombo_SuperPaintEngine(const KFileFilterCombo* self) {
    return self->KFileFilterCombo::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnPaintEngine(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_paintengine_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMouseDoubleClickEvent(KFileFilterCombo* self, QMouseEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseDoubleClickEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_mousedoubleclickevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMouseMoveEvent(KFileFilterCombo* self, QMouseEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMouseMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_mousemoveevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_EnterEvent(KFileFilterCombo* self, QEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperEnterEvent(KFileFilterCombo* self, QEnterEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnEnterEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_enterevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_LeaveEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperLeaveEvent(KFileFilterCombo* self, QEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnLeaveEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_leaveevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_MoveEvent(KFileFilterCombo* self, QMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperMoveEvent(KFileFilterCombo* self, QMoveEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_moveevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_CloseEvent(KFileFilterCombo* self, QCloseEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperCloseEvent(KFileFilterCombo* self, QCloseEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnCloseEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_closeevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_TabletEvent(KFileFilterCombo* self, QTabletEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperTabletEvent(KFileFilterCombo* self, QTabletEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnTabletEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_tabletevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ActionEvent(KFileFilterCombo* self, QActionEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperActionEvent(KFileFilterCombo* self, QActionEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnActionEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_actionevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_DragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperDragEnterEvent(KFileFilterCombo* self, QDragEnterEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragEnterEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_dragenterevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_DragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperDragMoveEvent(KFileFilterCombo* self, QDragMoveEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragMoveEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_dragmoveevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_DragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperDragLeaveEvent(KFileFilterCombo* self, QDragLeaveEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDragLeaveEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_dragleaveevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_DropEvent(KFileFilterCombo* self, QDropEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperDropEvent(KFileFilterCombo* self, QDropEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDropEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_dropevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KFileFilterCombo_NativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileFilterCombo_SuperNativeEvent(KFileFilterCombo* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        return vkfilefiltercombo->KFileFilterCombo::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnNativeEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_nativeevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KFileFilterCombo_Metric(const KFileFilterCombo* self, int param1) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KFileFilterCombo_SuperMetric(const KFileFilterCombo* self, int param1) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->KFileFilterCombo::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnMetric(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_metric_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Metric_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_InitPainter(const KFileFilterCombo* self, QPainter* painter) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo) {
        vkfilefiltercombo->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperInitPainter(const KFileFilterCombo* self, QPainter* painter) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        vkfilefiltercombo->KFileFilterCombo::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnInitPainter(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_initpainter_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KFileFilterCombo_Redirected(const KFileFilterCombo* self, QPoint* offset) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KFileFilterCombo_SuperRedirected(const KFileFilterCombo* self, QPoint* offset) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->KFileFilterCombo::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnRedirected(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_redirected_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KFileFilterCombo_SharedPainter(const KFileFilterCombo* self) {
    auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self));
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KFileFilterCombo_SuperSharedPainter(const KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->KFileFilterCombo::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSharedPainter(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self)))
        vkfilefiltercombo->kfilefiltercombo_sharedpainter_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KFileFilterCombo_FocusNextPrevChild(KFileFilterCombo* self, bool next) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        return vkfilefiltercombo->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KFileFilterCombo_SuperFocusNextPrevChild(KFileFilterCombo* self, bool next) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        return vkfilefiltercombo->KFileFilterCombo::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnFocusNextPrevChild(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_focusnextprevchild_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_TimerEvent(KFileFilterCombo* self, QTimerEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperTimerEvent(KFileFilterCombo* self, QTimerEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnTimerEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_timerevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ChildEvent(KFileFilterCombo* self, QChildEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperChildEvent(KFileFilterCombo* self, QChildEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnChildEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_childevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_CustomEvent(KFileFilterCombo* self, QEvent* event) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperCustomEvent(KFileFilterCombo* self, QEvent* event) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnCustomEvent(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_customevent_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_ConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperConnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnConnectNotify(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_connectnotify_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_DisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperDisconnectNotify(KFileFilterCombo* self, const QMetaMethod* signal) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnDisconnectNotify(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_disconnectnotify_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletionObject(KFileFilterCombo* self, KCompletion* completionObject, bool handleSignals) {
    self->setCompletionObject(completionObject, handleSignals);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetCompletionObject(KFileFilterCombo* self, KCompletion* completionObject, bool handleSignals) {
    self->KFileFilterCombo::setCompletionObject(completionObject, handleSignals);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletionObject(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setcompletionobject_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletionObject_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetHandleSignals(KFileFilterCombo* self, bool handle) {
    self->setHandleSignals(handle);
}

// Base class handler implementation
void KFileFilterCombo_SuperSetHandleSignals(KFileFilterCombo* self, bool handle) {
    self->KFileFilterCombo::setHandleSignals(handle);
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetHandleSignals(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_sethandlesignals_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetHandleSignals_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_SetCompletionMode(KFileFilterCombo* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KFileFilterCombo_SuperSetCompletionMode(KFileFilterCombo* self, int mode) {
    self->KFileFilterCombo::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnSetCompletionMode(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_setcompletionmode_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KFileFilterCombo_VirtualHook(KFileFilterCombo* self, int id, void* data) {
    auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self);
    if (vkfilefiltercombo) {
        vkfilefiltercombo->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KFileFilterCombo::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KFileFilterCombo_SuperVirtualHook(KFileFilterCombo* self, int id, void* data) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->KFileFilterCombo::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KFileFilterCombo::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KFileFilterCombo_OnVirtualHook(KFileFilterCombo* self, intptr_t slot) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self))
        vkfilefiltercombo->kfilefiltercombo_virtualhook_callback = reinterpret_cast<VirtualKFileFilterCombo::KFileFilterCombo_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
void KFileFilterCombo_UpdateMicroFocus(KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->VirtualKFileFilterCombo::updateMicroFocus();
    } else
        qFatal("Error: Protected method KFileFilterCombo::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileFilterCombo_Create(KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->VirtualKFileFilterCombo::create();
    } else
        qFatal("Error: Protected method KFileFilterCombo::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileFilterCombo_Destroy(KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->VirtualKFileFilterCombo::destroy();
    } else
        qFatal("Error: Protected method KFileFilterCombo::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileFilterCombo_FocusNextChild(KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::focusNextChild();
    } else
        qFatal("Error: Protected method KFileFilterCombo::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileFilterCombo_FocusPreviousChild(KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::focusPreviousChild();
    } else
        qFatal("Error: Protected method KFileFilterCombo::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KFileFilterCombo_Sender(const KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::sender();
    } else
        qFatal("Error: Protected method KFileFilterCombo::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileFilterCombo_SenderSignalIndex(const KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::senderSignalIndex();
    } else
        qFatal("Error: Protected method KFileFilterCombo::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KFileFilterCombo_Receivers(const KFileFilterCombo* self, const char* signal) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::receivers(signal);
    } else
        qFatal("Error: Protected method KFileFilterCombo::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KFileFilterCombo_IsSignalConnected(const KFileFilterCombo* self, const QMetaMethod* signal) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KFileFilterCombo::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KFileFilterCombo_GetDecodedMetricF(const KFileFilterCombo* self, int metricA, int metricB) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KFileFilterCombo::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_list of QKeySequence* */ KFileFilterCombo_KeyBindingMap(const KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkfilefiltercombo->VirtualKFileFilterCombo::keyBindingMap();
        // Convert QMap<> from C++ memory to manually-managed C memory
        int* _karr = static_cast<int*>(malloc(sizeof(int) * _ret.size()));
        libqt_list /* of QKeySequence* */* _varr = static_cast<libqt_list /* of QKeySequence* */*>(malloc(sizeof(libqt_list /* of QKeySequence* */) * _ret.size()));
        int _ctr = 0;
        for (auto _itr = _ret.keyValueBegin(); _itr != _ret.keyValueEnd(); ++_itr) {
            _karr[_ctr] = static_cast<int>(_itr->first);
            QList<QKeySequence> _mapval_ret = _itr->second;
            // Convert QList<> from C++ memory to manually-managed C memory
            QKeySequence** _mapval_arr = static_cast<QKeySequence**>(malloc(sizeof(QKeySequence*) * (_mapval_ret.size())));
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
    } else
        qFatal("Error: Protected method KFileFilterCombo::keyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileFilterCombo_SetKeyBindingMap(KFileFilterCombo* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> keyBindingMap_QMap;
        int* keyBindingMap_karr = static_cast<int*>(keyBindingMap.keys);
        libqt_list /* of QKeySequence* */* keyBindingMap_varr = static_cast<libqt_list /* of QKeySequence* */*>(keyBindingMap.values);
        for (size_t i = 0; i < keyBindingMap.len; ++i) {
            QList<QKeySequence> keyBindingMap_varr_i_QList;
            keyBindingMap_varr_i_QList.reserve(keyBindingMap_varr[i].len);
            QKeySequence** keyBindingMap_varr_i_arr = static_cast<QKeySequence**>(keyBindingMap_varr[i].data);
            for (size_t j = 0; j < keyBindingMap_varr[i].len; ++j) {
                keyBindingMap_varr_i_QList.push_back(*(keyBindingMap_varr_i_arr[j]));
            }
            keyBindingMap_QMap.insert(static_cast<KCompletionBase::KeyBindingType>(keyBindingMap_karr[i]), keyBindingMap_varr_i_QList);
        }
        vkfilefiltercombo->VirtualKFileFilterCombo::setKeyBindingMap(keyBindingMap_QMap);
    } else
        qFatal("Error: Protected method KFileFilterCombo::setKeyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KFileFilterCombo_SetDelegate(KFileFilterCombo* self, KCompletionBase* delegate) {
    if (auto* vkfilefiltercombo = dynamic_cast<VirtualKFileFilterCombo*>(self)) {
        vkfilefiltercombo->VirtualKFileFilterCombo::setDelegate(delegate);
    } else
        qFatal("Error: Protected method KFileFilterCombo::setDelegate called without a directly constructed type");
}

// Derived class protected handler implementation
KCompletionBase* KFileFilterCombo_Delegate(const KFileFilterCombo* self) {
    if (auto* vkfilefiltercombo = const_cast<VirtualKFileFilterCombo*>(dynamic_cast<const VirtualKFileFilterCombo*>(self))) {
        return vkfilefiltercombo->VirtualKFileFilterCombo::delegate();
    } else
        qFatal("Error: Protected method KFileFilterCombo::delegate called without a directly constructed type");
}

void KFileFilterCombo_Delete(KFileFilterCombo* self) {
    delete self;
}
