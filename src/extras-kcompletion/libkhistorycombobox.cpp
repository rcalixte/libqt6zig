#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KHistoryComboBox>
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
#include <khistorycombobox.h>
#include "libkhistorycombobox.h"
#include "libkhistorycombobox.hxx"

KHistoryComboBox* KHistoryComboBox_new(QWidget* parent) {
    return new VirtualKHistoryComboBox(parent);
}

KHistoryComboBox* KHistoryComboBox_new2() {
    return new VirtualKHistoryComboBox();
}

KHistoryComboBox* KHistoryComboBox_new3(bool useCompletion) {
    return new VirtualKHistoryComboBox(useCompletion);
}

KHistoryComboBox* KHistoryComboBox_new4(bool useCompletion, QWidget* parent) {
    return new VirtualKHistoryComboBox(useCompletion, parent);
}

QMetaObject* KHistoryComboBox_MetaObject(const KHistoryComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KHistoryComboBox_Metacast(KHistoryComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KHistoryComboBox_Metacall(KHistoryComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KHistoryComboBox_Tr(const char* s) {
    auto _ret = KHistoryComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KHistoryComboBox_SetHistoryItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setHistoryItems(items_QList);
}

void KHistoryComboBox_SetHistoryItems2(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool setCompletionList) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setHistoryItems(items_QList, setCompletionList);
}

libqt_list /* of libqt_string */ KHistoryComboBox_HistoryItems(const KHistoryComboBox* self) {
    QList<QString> _ret = self->historyItems();
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

bool KHistoryComboBox_RemoveFromHistory(KHistoryComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    return self->removeFromHistory(item_QString);
}

void KHistoryComboBox_SetIconProvider(KHistoryComboBox* self, intptr_t providerFunction) {
    auto providerFunction_func = [providerFunction](const QString& funcparam1_fp) -> QIcon {
        const auto funcparam1_ret = funcparam1_fp;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray funcparam1_b = funcparam1_ret.toUtf8();
        auto funcparam1_str_len = funcparam1_b.length();
        const char* funcparam1_str = static_cast<const char*>(malloc(funcparam1_str_len + 1));
        memcpy((void*)funcparam1_str, funcparam1_b.data(), funcparam1_str_len);
        ((char*)funcparam1_str)[funcparam1_str_len] = '\0';
        const char* funcparam1_fv = funcparam1_str;
        auto providerFunction_funcret = reinterpret_cast<QIcon (*)(const char*)>(providerFunction)(funcparam1_fv);
        return static_cast<QIcon>(providerFunction_funcret);
    };
    self->setIconProvider(providerFunction_func);
}

void KHistoryComboBox_AddToHistory(KHistoryComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->addToHistory(item_QString);
}

void KHistoryComboBox_ClearHistory(KHistoryComboBox* self) {
    self->clearHistory();
}

void KHistoryComboBox_Reset(KHistoryComboBox* self) {
    self->reset();
}

void KHistoryComboBox_Cleared(KHistoryComboBox* self) {
    self->cleared();
}

void KHistoryComboBox_Connect_Cleared(KHistoryComboBox* self, intptr_t slot) {
    void (*slotFunc)(KHistoryComboBox*) = reinterpret_cast<void (*)(KHistoryComboBox*)>(slot);
    KHistoryComboBox::connect(self,
                              static_cast<void (KHistoryComboBox::*)()>(&KHistoryComboBox::cleared),
                              [self, slotFunc]() {
                                  slotFunc(self);
                              });
}

void KHistoryComboBox_KeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->keyPressEvent(param1);
    }
}

void KHistoryComboBox_WheelEvent(KHistoryComboBox* self, QWheelEvent* ev) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->wheelEvent(ev);
    }
}

libqt_string KHistoryComboBox_Tr2(const char* s, const char* c) {
    auto _ret = KHistoryComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KHistoryComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = KHistoryComboBox::tr(s, c, static_cast<int>(n));
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
QMetaObject* KHistoryComboBox_SuperMetaObject(const KHistoryComboBox* self) {
    return (QMetaObject*)self->KHistoryComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetaObject(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_metaobject_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KHistoryComboBox_SuperMetacast(KHistoryComboBox* self, const char* param1) {
    return self->KHistoryComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetacast(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_metacast_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KHistoryComboBox_SuperMetacall(KHistoryComboBox* self, int param1, int param2, void** param3) {
    return self->KHistoryComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetacall(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_metacall_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
void KHistoryComboBox_SuperKeyPressEvent(KHistoryComboBox* self, QKeyEvent* param1) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnKeyPressEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_keypressevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void KHistoryComboBox_SuperWheelEvent(KHistoryComboBox* self, QWheelEvent* ev) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::wheelEvent(ev);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnWheelEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_wheelevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetAutoCompletion(KHistoryComboBox* self, bool autocomplete) {
    self->setAutoCompletion(autocomplete);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetAutoCompletion(KHistoryComboBox* self, bool autocomplete) {
    self->KHistoryComboBox::setAutoCompletion(autocomplete);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetAutoCompletion(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setautocompletion_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetAutoCompletion_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetLineEdit(KHistoryComboBox* self, QLineEdit* lineEdit) {
    self->setLineEdit(lineEdit);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetLineEdit(KHistoryComboBox* self, QLineEdit* lineEdit) {
    self->KHistoryComboBox::setLineEdit(lineEdit);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetLineEdit(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setlineedit_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetLineEdit_Callback>(slot);
}

// Derived class handler implementation
QSize* KHistoryComboBox_MinimumSizeHint(const KHistoryComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KHistoryComboBox_SuperMinimumSizeHint(const KHistoryComboBox* self) {
    return new QSize(self->KHistoryComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMinimumSizeHint(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_minimumsizehint_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletedText(KHistoryComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->setCompletedText(completedText_QString);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetCompletedText(KHistoryComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->KHistoryComboBox::setCompletedText(completedText_QString);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletedText(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setcompletedtext_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletedText_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletedItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
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
void KHistoryComboBox_SuperSetCompletedItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->KHistoryComboBox::setCompletedItems(items_QList, autoSuggest);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletedItems(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setcompleteditems_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletedItems_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MakeCompletion(KHistoryComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->makeCompletion(param1_QString);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::makeCompletion called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMakeCompletion(KHistoryComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::makeCompletion(param1_QString);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::makeCompletion called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMakeCompletion(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_makecompletion_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MakeCompletion_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetModel(KHistoryComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetModel(KHistoryComboBox* self, QAbstractItemModel* model) {
    self->KHistoryComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetModel(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setmodel_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KHistoryComboBox_SizeHint(const KHistoryComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KHistoryComboBox_SuperSizeHint(const KHistoryComboBox* self) {
    return new QSize(self->KHistoryComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSizeHint(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_sizehint_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ShowPopup(KHistoryComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void KHistoryComboBox_SuperShowPopup(KHistoryComboBox* self) {
    self->KHistoryComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnShowPopup(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_showpopup_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_HidePopup(KHistoryComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void KHistoryComboBox_SuperHidePopup(KHistoryComboBox* self) {
    self->KHistoryComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHidePopup(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_hidepopup_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool KHistoryComboBox_Event(KHistoryComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KHistoryComboBox_SuperEvent(KHistoryComboBox* self, QEvent* event) {
    return self->KHistoryComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_event_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KHistoryComboBox_InputMethodQuery(const KHistoryComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KHistoryComboBox_SuperInputMethodQuery(const KHistoryComboBox* self, int param1) {
    return new QVariant(self->KHistoryComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInputMethodQuery(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_inputmethodquery_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_FocusInEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperFocusInEvent(KHistoryComboBox* self, QFocusEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusInEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_focusinevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_FocusOutEvent(KHistoryComboBox* self, QFocusEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperFocusOutEvent(KHistoryComboBox* self, QFocusEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusOutEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_focusoutevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ChangeEvent(KHistoryComboBox* self, QEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperChangeEvent(KHistoryComboBox* self, QEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnChangeEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_changeevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ResizeEvent(KHistoryComboBox* self, QResizeEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperResizeEvent(KHistoryComboBox* self, QResizeEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnResizeEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_resizeevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_PaintEvent(KHistoryComboBox* self, QPaintEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperPaintEvent(KHistoryComboBox* self, QPaintEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnPaintEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_paintevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ShowEvent(KHistoryComboBox* self, QShowEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperShowEvent(KHistoryComboBox* self, QShowEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnShowEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_showevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_HideEvent(KHistoryComboBox* self, QHideEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperHideEvent(KHistoryComboBox* self, QHideEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHideEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_hideevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MousePressEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMousePressEvent(KHistoryComboBox* self, QMouseEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMousePressEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_mousepressevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMouseReleaseEvent(KHistoryComboBox* self, QMouseEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseReleaseEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_mousereleaseevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_KeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperKeyReleaseEvent(KHistoryComboBox* self, QKeyEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnKeyReleaseEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_keyreleaseevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperContextMenuEvent(KHistoryComboBox* self, QContextMenuEvent* e) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnContextMenuEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_contextmenuevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_InputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperInputMethodEvent(KHistoryComboBox* self, QInputMethodEvent* param1) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInputMethodEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_inputmethodevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_InitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox) {
        vkhistorycombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperInitStyleOption(const KHistoryComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        vkhistorycombobox->KHistoryComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInitStyleOption(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_initstyleoption_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KHistoryComboBox_DevType(const KHistoryComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int KHistoryComboBox_SuperDevType(const KHistoryComboBox* self) {
    return self->KHistoryComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDevType(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_devtype_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetVisible(KHistoryComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetVisible(KHistoryComboBox* self, bool visible) {
    self->KHistoryComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetVisible(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setvisible_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KHistoryComboBox_HeightForWidth(const KHistoryComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KHistoryComboBox_SuperHeightForWidth(const KHistoryComboBox* self, int param1) {
    return self->KHistoryComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHeightForWidth(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_heightforwidth_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KHistoryComboBox_HasHeightForWidth(const KHistoryComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KHistoryComboBox_SuperHasHeightForWidth(const KHistoryComboBox* self) {
    return self->KHistoryComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnHasHeightForWidth(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_hasheightforwidth_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KHistoryComboBox_PaintEngine(const KHistoryComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KHistoryComboBox_SuperPaintEngine(const KHistoryComboBox* self) {
    return self->KHistoryComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnPaintEngine(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_paintengine_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMouseDoubleClickEvent(KHistoryComboBox* self, QMouseEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseDoubleClickEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMouseMoveEvent(KHistoryComboBox* self, QMouseEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMouseMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_mousemoveevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_EnterEvent(KHistoryComboBox* self, QEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperEnterEvent(KHistoryComboBox* self, QEnterEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEnterEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_enterevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_LeaveEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperLeaveEvent(KHistoryComboBox* self, QEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnLeaveEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_leaveevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_MoveEvent(KHistoryComboBox* self, QMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperMoveEvent(KHistoryComboBox* self, QMoveEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_moveevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_CloseEvent(KHistoryComboBox* self, QCloseEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperCloseEvent(KHistoryComboBox* self, QCloseEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnCloseEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_closeevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_TabletEvent(KHistoryComboBox* self, QTabletEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperTabletEvent(KHistoryComboBox* self, QTabletEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnTabletEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_tabletevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ActionEvent(KHistoryComboBox* self, QActionEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperActionEvent(KHistoryComboBox* self, QActionEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnActionEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_actionevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_DragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperDragEnterEvent(KHistoryComboBox* self, QDragEnterEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragEnterEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_dragenterevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_DragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperDragMoveEvent(KHistoryComboBox* self, QDragMoveEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragMoveEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_dragmoveevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_DragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperDragLeaveEvent(KHistoryComboBox* self, QDragLeaveEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDragLeaveEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_dragleaveevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_DropEvent(KHistoryComboBox* self, QDropEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperDropEvent(KHistoryComboBox* self, QDropEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDropEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_dropevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KHistoryComboBox_NativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        return vkhistorycombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KHistoryComboBox_SuperNativeEvent(KHistoryComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        return vkhistorycombobox->KHistoryComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnNativeEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_nativeevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KHistoryComboBox_Metric(const KHistoryComboBox* self, int param1) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox) {
        return vkhistorycombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KHistoryComboBox_SuperMetric(const KHistoryComboBox* self, int param1) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->KHistoryComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnMetric(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_metric_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_InitPainter(const KHistoryComboBox* self, QPainter* painter) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox) {
        vkhistorycombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperInitPainter(const KHistoryComboBox* self, QPainter* painter) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        vkhistorycombobox->KHistoryComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnInitPainter(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_initpainter_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KHistoryComboBox_Redirected(const KHistoryComboBox* self, QPoint* offset) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox) {
        return vkhistorycombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KHistoryComboBox_SuperRedirected(const KHistoryComboBox* self, QPoint* offset) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->KHistoryComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnRedirected(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_redirected_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KHistoryComboBox_SharedPainter(const KHistoryComboBox* self) {
    auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self));
    if (vkhistorycombobox) {
        return vkhistorycombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KHistoryComboBox_SuperSharedPainter(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->KHistoryComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSharedPainter(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self)))
        vkhistorycombobox->khistorycombobox_sharedpainter_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KHistoryComboBox_FocusNextPrevChild(KHistoryComboBox* self, bool next) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        return vkhistorycombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KHistoryComboBox_SuperFocusNextPrevChild(KHistoryComboBox* self, bool next) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        return vkhistorycombobox->KHistoryComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnFocusNextPrevChild(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_focusnextprevchild_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KHistoryComboBox_EventFilter(KHistoryComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KHistoryComboBox_SuperEventFilter(KHistoryComboBox* self, QObject* watched, QEvent* event) {
    return self->KHistoryComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnEventFilter(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_eventfilter_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_TimerEvent(KHistoryComboBox* self, QTimerEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperTimerEvent(KHistoryComboBox* self, QTimerEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnTimerEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_timerevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ChildEvent(KHistoryComboBox* self, QChildEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperChildEvent(KHistoryComboBox* self, QChildEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnChildEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_childevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_CustomEvent(KHistoryComboBox* self, QEvent* event) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperCustomEvent(KHistoryComboBox* self, QEvent* event) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnCustomEvent(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_customevent_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_ConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperConnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnConnectNotify(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_connectnotify_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_DisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperDisconnectNotify(KHistoryComboBox* self, const QMetaMethod* signal) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnDisconnectNotify(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_disconnectnotify_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletionObject(KHistoryComboBox* self, KCompletion* completionObject, bool handleSignals) {
    self->setCompletionObject(completionObject, handleSignals);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetCompletionObject(KHistoryComboBox* self, KCompletion* completionObject, bool handleSignals) {
    self->KHistoryComboBox::setCompletionObject(completionObject, handleSignals);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletionObject(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setcompletionobject_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletionObject_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetHandleSignals(KHistoryComboBox* self, bool handle) {
    self->setHandleSignals(handle);
}

// Base class handler implementation
void KHistoryComboBox_SuperSetHandleSignals(KHistoryComboBox* self, bool handle) {
    self->KHistoryComboBox::setHandleSignals(handle);
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetHandleSignals(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_sethandlesignals_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetHandleSignals_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_SetCompletionMode(KHistoryComboBox* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KHistoryComboBox_SuperSetCompletionMode(KHistoryComboBox* self, int mode) {
    self->KHistoryComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnSetCompletionMode(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_setcompletionmode_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KHistoryComboBox_VirtualHook(KHistoryComboBox* self, int id, void* data) {
    auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self);
    if (vkhistorycombobox) {
        vkhistorycombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KHistoryComboBox::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KHistoryComboBox_SuperVirtualHook(KHistoryComboBox* self, int id, void* data) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->KHistoryComboBox::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KHistoryComboBox::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KHistoryComboBox_OnVirtualHook(KHistoryComboBox* self, intptr_t slot) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self))
        vkhistorycombobox->khistorycombobox_virtualhook_callback = reinterpret_cast<VirtualKHistoryComboBox::KHistoryComboBox_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
void KHistoryComboBox_InsertItems(KHistoryComboBox* self, const libqt_list /* of libqt_string */ items) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        QList<QString> items_QList;
        items_QList.reserve(items.len);
        libqt_string* items_arr = static_cast<libqt_string*>(items.data);
        for (size_t i = 0; i < items.len; ++i) {
            QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
            items_QList.push_back(items_arr_i_QString);
        }
        vkhistorycombobox->VirtualKHistoryComboBox::insertItems(items_QList);
    } else
        qFatal("Error: Protected method KHistoryComboBox::insertItems called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHistoryComboBox_UseCompletion(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::useCompletion();
    } else
        qFatal("Error: Protected method KHistoryComboBox::useCompletion called without a directly constructed type");
}

// Derived class protected handler implementation
void KHistoryComboBox_UpdateMicroFocus(KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->VirtualKHistoryComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KHistoryComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KHistoryComboBox_Create(KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->VirtualKHistoryComboBox::create();
    } else
        qFatal("Error: Protected method KHistoryComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KHistoryComboBox_Destroy(KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->VirtualKHistoryComboBox::destroy();
    } else
        qFatal("Error: Protected method KHistoryComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHistoryComboBox_FocusNextChild(KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        return vkhistorycombobox->VirtualKHistoryComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method KHistoryComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHistoryComboBox_FocusPreviousChild(KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        return vkhistorycombobox->VirtualKHistoryComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KHistoryComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KHistoryComboBox_Sender(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::sender();
    } else
        qFatal("Error: Protected method KHistoryComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KHistoryComboBox_SenderSignalIndex(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KHistoryComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KHistoryComboBox_Receivers(const KHistoryComboBox* self, const char* signal) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method KHistoryComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KHistoryComboBox_IsSignalConnected(const KHistoryComboBox* self, const QMetaMethod* signal) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KHistoryComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KHistoryComboBox_GetDecodedMetricF(const KHistoryComboBox* self, int metricA, int metricB) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KHistoryComboBox::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_list of QKeySequence* */ KHistoryComboBox_KeyBindingMap(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkhistorycombobox->VirtualKHistoryComboBox::keyBindingMap();
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
        qFatal("Error: Protected method KHistoryComboBox::keyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KHistoryComboBox_SetKeyBindingMap(KHistoryComboBox* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
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
        vkhistorycombobox->VirtualKHistoryComboBox::setKeyBindingMap(keyBindingMap_QMap);
    } else
        qFatal("Error: Protected method KHistoryComboBox::setKeyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KHistoryComboBox_SetDelegate(KHistoryComboBox* self, KCompletionBase* delegate) {
    if (auto* vkhistorycombobox = dynamic_cast<VirtualKHistoryComboBox*>(self)) {
        vkhistorycombobox->VirtualKHistoryComboBox::setDelegate(delegate);
    } else
        qFatal("Error: Protected method KHistoryComboBox::setDelegate called without a directly constructed type");
}

// Derived class protected handler implementation
KCompletionBase* KHistoryComboBox_Delegate(const KHistoryComboBox* self) {
    if (auto* vkhistorycombobox = const_cast<VirtualKHistoryComboBox*>(dynamic_cast<const VirtualKHistoryComboBox*>(self))) {
        return vkhistorycombobox->VirtualKHistoryComboBox::delegate();
    } else
        qFatal("Error: Protected method KHistoryComboBox::delegate called without a directly constructed type");
}

void KHistoryComboBox_Delete(KHistoryComboBox* self) {
    delete self;
}
