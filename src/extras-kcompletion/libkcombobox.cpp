#include <KComboBox>
#include <KCompletion>
#include <KCompletionBase>
#include <KCompletionBox>
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
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QKeySequence>
#include <QLineEdit>
#include <QList>
#include <QMap>
#include <QMenu>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <kcombobox.h>
#include "libkcombobox.h"
#include "libkcombobox.hxx"

KComboBox* KComboBox_new(QWidget* parent) {
    return new VirtualKComboBox(parent);
}

KComboBox* KComboBox_new2() {
    return new VirtualKComboBox();
}

KComboBox* KComboBox_new3(bool rw) {
    return new VirtualKComboBox(rw);
}

KComboBox* KComboBox_new4(bool rw, QWidget* parent) {
    return new VirtualKComboBox(rw, parent);
}

KCompletionBase* KComboBox_AsKCompletionBase(const KComboBox* self) {
    return const_cast<KComboBox*>(self);
}

KComboBox* KComboBox_FromKCompletionBase(const KCompletionBase* _kcompletionbase) {
    return dynamic_cast<KComboBox*>(const_cast<KCompletionBase*>(_kcompletionbase));
}

QMetaObject* KComboBox_MetaObject(const KComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* KComboBox_Metacast(KComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KComboBox_Metacall(KComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KComboBox_Tr(const char* s) {
    auto _ret = KComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KComboBox_SetEditUrl(KComboBox* self, const QUrl* url) {
    self->setEditUrl(*url);
}

void KComboBox_AddUrl(KComboBox* self, const QUrl* url) {
    self->addUrl(*url);
}

void KComboBox_AddUrl2(KComboBox* self, const QIcon* icon, const QUrl* url) {
    self->addUrl(*icon, *url);
}

void KComboBox_InsertUrl(KComboBox* self, int index, const QUrl* url) {
    self->insertUrl(static_cast<int>(index), *url);
}

void KComboBox_InsertUrl2(KComboBox* self, int index, const QIcon* icon, const QUrl* url) {
    self->insertUrl(static_cast<int>(index), *icon, *url);
}

void KComboBox_ChangeUrl(KComboBox* self, int index, const QUrl* url) {
    self->changeUrl(static_cast<int>(index), *url);
}

void KComboBox_ChangeUrl2(KComboBox* self, int index, const QIcon* icon, const QUrl* url) {
    self->changeUrl(static_cast<int>(index), *icon, *url);
}

int KComboBox_CursorPosition(const KComboBox* self) {
    return self->cursorPosition();
}

void KComboBox_SetAutoCompletion(KComboBox* self, bool autocomplete) {
    self->setAutoCompletion(autocomplete);
}

bool KComboBox_AutoCompletion(const KComboBox* self) {
    return self->autoCompletion();
}

bool KComboBox_UrlDropsEnabled(const KComboBox* self) {
    return self->urlDropsEnabled();
}

bool KComboBox_Contains(const KComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->contains(text_QString);
}

void KComboBox_SetTrapReturnKey(KComboBox* self, bool trap) {
    self->setTrapReturnKey(trap);
}

bool KComboBox_TrapReturnKey(const KComboBox* self) {
    return self->trapReturnKey();
}

KCompletionBox* KComboBox_CompletionBox(KComboBox* self) {
    return self->completionBox();
}

void KComboBox_SetLineEdit(KComboBox* self, QLineEdit* lineEdit) {
    self->setLineEdit(lineEdit);
}

void KComboBox_SetEditable(KComboBox* self, bool editable) {
    self->setEditable(editable);
}

QMenu* KComboBox_ContextMenu(const KComboBox* self) {
    return self->contextMenu();
}

QSize* KComboBox_MinimumSizeHint(const KComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

void KComboBox_ReturnPressed(KComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->returnPressed(text_QString);
}

void KComboBox_Connect_ReturnPressed(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(const QString&)>(&KComboBox::returnPressed),
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

void KComboBox_Completion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->completion(param1_QString);
}

void KComboBox_Connect_Completion(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(const QString&)>(&KComboBox::completion),
                       [self, slotFunc](const QString& param1) {
                           const auto param1_ret = param1;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray param1_b = param1_ret.toUtf8();
                           auto param1_str_len = param1_b.length();
                           const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                           memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                           ((char*)param1_str)[param1_str_len] = '\0';
                           const char* sigval1 = param1_str;
                           slotFunc(self, sigval1);
                           libqt_free(param1_str);
                       });
}

void KComboBox_SubstringCompletion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->substringCompletion(param1_QString);
}

void KComboBox_Connect_SubstringCompletion(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, const char*) = reinterpret_cast<void (*)(KComboBox*, const char*)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(const QString&)>(&KComboBox::substringCompletion),
                       [self, slotFunc](const QString& param1) {
                           const auto param1_ret = param1;
                           // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                           QByteArray param1_b = param1_ret.toUtf8();
                           auto param1_str_len = param1_b.length();
                           const char* param1_str = static_cast<const char*>(malloc(param1_str_len + 1));
                           memcpy((void*)param1_str, param1_b.data(), param1_str_len);
                           ((char*)param1_str)[param1_str_len] = '\0';
                           const char* sigval1 = param1_str;
                           slotFunc(self, sigval1);
                           libqt_free(param1_str);
                       });
}

void KComboBox_TextRotation(KComboBox* self, int param1) {
    self->textRotation(static_cast<KCompletionBase::KeyBindingType>(param1));
}

void KComboBox_Connect_TextRotation(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, int) = reinterpret_cast<void (*)(KComboBox*, int)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(KCompletionBase::KeyBindingType)>(&KComboBox::textRotation),
                       [self, slotFunc](KCompletionBase::KeyBindingType param1) {
                           int sigval1 = static_cast<int>(param1);
                           slotFunc(self, sigval1);
                       });
}

void KComboBox_CompletionModeChanged(KComboBox* self, int param1) {
    self->completionModeChanged(static_cast<KCompletion::CompletionMode>(param1));
}

void KComboBox_Connect_CompletionModeChanged(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, int) = reinterpret_cast<void (*)(KComboBox*, int)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(KCompletion::CompletionMode)>(&KComboBox::completionModeChanged),
                       [self, slotFunc](KCompletion::CompletionMode param1) {
                           int sigval1 = static_cast<int>(param1);
                           slotFunc(self, sigval1);
                       });
}

void KComboBox_AboutToShowContextMenu(KComboBox* self, QMenu* contextMenu) {
    self->aboutToShowContextMenu(contextMenu);
}

void KComboBox_Connect_AboutToShowContextMenu(KComboBox* self, intptr_t slot) {
    void (*slotFunc)(KComboBox*, QMenu*) = reinterpret_cast<void (*)(KComboBox*, QMenu*)>(slot);
    KComboBox::connect(self,
                       static_cast<void (KComboBox::*)(QMenu*)>(&KComboBox::aboutToShowContextMenu),
                       [self, slotFunc](QMenu* contextMenu) {
                           QMenu* sigval1 = contextMenu;
                           slotFunc(self, sigval1);
                       });
}

void KComboBox_RotateText(KComboBox* self, int typeVal) {
    self->rotateText(static_cast<KCompletionBase::KeyBindingType>(typeVal));
}

void KComboBox_SetCompletedText(KComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->setCompletedText(completedText_QString);
}

void KComboBox_SetCompletedItems(KComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setCompletedItems(items_QList, autoSuggest);
}

void KComboBox_SetCurrentItem(KComboBox* self, const libqt_string item) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString);
}

void KComboBox_MakeCompletion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->makeCompletion(param1_QString);
    }
}

void KComboBox_SetCompletedText2(KComboBox* self, const libqt_string text, bool marked) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->setCompletedText(text_QString, marked);
    }
}

libqt_string KComboBox_Tr2(const char* s, const char* c) {
    auto _ret = KComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = KComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

KCompletionBox* KComboBox_CompletionBox1(KComboBox* self, bool create) {
    return self->completionBox(create);
}

void KComboBox_SetCurrentItem2(KComboBox* self, const libqt_string item, bool insert) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString, insert);
}

void KComboBox_SetCurrentItem3(KComboBox* self, const libqt_string item, bool insert, int index) {
    QString item_QString = QString::fromUtf8(item.data, item.len);
    self->setCurrentItem(item_QString, insert, static_cast<int>(index));
}

// Base class handler implementation
QMetaObject* KComboBox_SuperMetaObject(const KComboBox* self) {
    return (QMetaObject*)self->KComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetaObject(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_metaobject_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KComboBox_SuperMetacast(KComboBox* self, const char* param1) {
    return self->KComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetacast(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_metacast_callback = reinterpret_cast<VirtualKComboBox::KComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int KComboBox_SuperMetacall(KComboBox* self, int param1, int param2, void** param3) {
    return self->KComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetacall(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_metacall_callback = reinterpret_cast<VirtualKComboBox::KComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperSetAutoCompletion(KComboBox* self, bool autocomplete) {
    self->KComboBox::setAutoCompletion(autocomplete);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetAutoCompletion(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setautocompletion_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetAutoCompletion_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperSetLineEdit(KComboBox* self, QLineEdit* lineEdit) {
    self->KComboBox::setLineEdit(lineEdit);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetLineEdit(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setlineedit_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetLineEdit_Callback>(slot);
}

// Base class handler implementation
QSize* KComboBox_SuperMinimumSizeHint(const KComboBox* self) {
    return new QSize(self->KComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMinimumSizeHint(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_minimumsizehint_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperSetCompletedText(KComboBox* self, const libqt_string completedText) {
    QString completedText_QString = QString::fromUtf8(completedText.data, completedText.len);
    self->KComboBox::setCompletedText(completedText_QString);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedText(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setcompletedtext_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedText_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperSetCompletedItems(KComboBox* self, const libqt_list /* of libqt_string */ items, bool autoSuggest) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->KComboBox::setCompletedItems(items_QList, autoSuggest);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedItems(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setcompleteditems_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedItems_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperMakeCompletion(KComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::makeCompletion(param1_QString);
    } else
        qFatal("Error: Protected virtual method KComboBox::makeCompletion called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMakeCompletion(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_makecompletion_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MakeCompletion_Callback>(slot);
}

// Base class handler implementation
void KComboBox_SuperSetCompletedText2(KComboBox* self, const libqt_string text, bool marked) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::setCompletedText(text_QString, marked);
    } else
        qFatal("Error: Protected virtual method KComboBox::setCompletedText2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletedText2(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setcompletedtext2_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletedText2_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_SetModel(KComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

// Base class handler implementation
void KComboBox_SuperSetModel(KComboBox* self, QAbstractItemModel* model) {
    self->KComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetModel(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setmodel_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetModel_Callback>(slot);
}

// Derived class handler implementation
QSize* KComboBox_SizeHint(const KComboBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KComboBox_SuperSizeHint(const KComboBox* self) {
    return new QSize(self->KComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSizeHint(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_sizehint_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ShowPopup(KComboBox* self) {
    self->showPopup();
}

// Base class handler implementation
void KComboBox_SuperShowPopup(KComboBox* self) {
    self->KComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnShowPopup(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_showpopup_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ShowPopup_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_HidePopup(KComboBox* self) {
    self->hidePopup();
}

// Base class handler implementation
void KComboBox_SuperHidePopup(KComboBox* self) {
    self->KComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHidePopup(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_hidepopup_callback = reinterpret_cast<VirtualKComboBox::KComboBox_HidePopup_Callback>(slot);
}

// Derived class handler implementation
bool KComboBox_Event(KComboBox* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool KComboBox_SuperEvent(KComboBox* self, QEvent* event) {
    return self->KComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_event_callback = reinterpret_cast<VirtualKComboBox::KComboBox_Event_Callback>(slot);
}

// Derived class handler implementation
QVariant* KComboBox_InputMethodQuery(const KComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KComboBox_SuperInputMethodQuery(const KComboBox* self, int param1) {
    return new QVariant(self->KComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInputMethodQuery(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_inputmethodquery_callback = reinterpret_cast<VirtualKComboBox::KComboBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_FocusInEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->focusInEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperFocusInEvent(KComboBox* self, QFocusEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusInEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_focusinevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_FocusOutEvent(KComboBox* self, QFocusEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->focusOutEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperFocusOutEvent(KComboBox* self, QFocusEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusOutEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_focusoutevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ChangeEvent(KComboBox* self, QEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->changeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperChangeEvent(KComboBox* self, QEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnChangeEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_changeevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ResizeEvent(KComboBox* self, QResizeEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperResizeEvent(KComboBox* self, QResizeEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnResizeEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_resizeevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_PaintEvent(KComboBox* self, QPaintEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperPaintEvent(KComboBox* self, QPaintEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnPaintEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_paintevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ShowEvent(KComboBox* self, QShowEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->showEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperShowEvent(KComboBox* self, QShowEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnShowEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_showevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_HideEvent(KComboBox* self, QHideEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->hideEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperHideEvent(KComboBox* self, QHideEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHideEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_hideevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_MousePressEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->mousePressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperMousePressEvent(KComboBox* self, QMouseEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMousePressEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_mousepressevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_MouseReleaseEvent(KComboBox* self, QMouseEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperMouseReleaseEvent(KComboBox* self, QMouseEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseReleaseEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_mousereleaseevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_KeyPressEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->keyPressEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperKeyPressEvent(KComboBox* self, QKeyEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnKeyPressEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_keypressevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_KeyReleaseEvent(KComboBox* self, QKeyEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->keyReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperKeyReleaseEvent(KComboBox* self, QKeyEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnKeyReleaseEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_keyreleaseevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_WheelEvent(KComboBox* self, QWheelEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperWheelEvent(KComboBox* self, QWheelEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnWheelEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_wheelevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ContextMenuEvent(KComboBox* self, QContextMenuEvent* e) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->contextMenuEvent(e);
    } else {
        qFatal("Error: Protected virtual method KComboBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperContextMenuEvent(KComboBox* self, QContextMenuEvent* e) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method KComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnContextMenuEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_contextmenuevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_InputMethodEvent(KComboBox* self, QInputMethodEvent* param1) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KComboBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperInputMethodEvent(KComboBox* self, QInputMethodEvent* param1) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInputMethodEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_inputmethodevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_InitStyleOption(const KComboBox* self, QStyleOptionComboBox* option) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox) {
        vkcombobox->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method KComboBox::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperInitStyleOption(const KComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        vkcombobox->KComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method KComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInitStyleOption(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_initstyleoption_callback = reinterpret_cast<VirtualKComboBox::KComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int KComboBox_DevType(const KComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int KComboBox_SuperDevType(const KComboBox* self) {
    return self->KComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDevType(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_devtype_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_SetVisible(KComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KComboBox_SuperSetVisible(KComboBox* self, bool visible) {
    self->KComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetVisible(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setvisible_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int KComboBox_HeightForWidth(const KComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KComboBox_SuperHeightForWidth(const KComboBox* self, int param1) {
    return self->KComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHeightForWidth(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_heightforwidth_callback = reinterpret_cast<VirtualKComboBox::KComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KComboBox_HasHeightForWidth(const KComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KComboBox_SuperHasHeightForWidth(const KComboBox* self) {
    return self->KComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnHasHeightForWidth(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_hasheightforwidth_callback = reinterpret_cast<VirtualKComboBox::KComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KComboBox_PaintEngine(const KComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KComboBox_SuperPaintEngine(const KComboBox* self) {
    return self->KComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnPaintEngine(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_paintengine_callback = reinterpret_cast<VirtualKComboBox::KComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_MouseDoubleClickEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperMouseDoubleClickEvent(KComboBox* self, QMouseEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseDoubleClickEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_MouseMoveEvent(KComboBox* self, QMouseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperMouseMoveEvent(KComboBox* self, QMouseEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMouseMoveEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_mousemoveevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_EnterEvent(KComboBox* self, QEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperEnterEvent(KComboBox* self, QEnterEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEnterEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_enterevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_LeaveEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperLeaveEvent(KComboBox* self, QEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnLeaveEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_leaveevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_MoveEvent(KComboBox* self, QMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperMoveEvent(KComboBox* self, QMoveEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMoveEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_moveevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_CloseEvent(KComboBox* self, QCloseEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperCloseEvent(KComboBox* self, QCloseEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnCloseEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_closeevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_TabletEvent(KComboBox* self, QTabletEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperTabletEvent(KComboBox* self, QTabletEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnTabletEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_tabletevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ActionEvent(KComboBox* self, QActionEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperActionEvent(KComboBox* self, QActionEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnActionEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_actionevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_DragEnterEvent(KComboBox* self, QDragEnterEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperDragEnterEvent(KComboBox* self, QDragEnterEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragEnterEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_dragenterevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_DragMoveEvent(KComboBox* self, QDragMoveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperDragMoveEvent(KComboBox* self, QDragMoveEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragMoveEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_dragmoveevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_DragLeaveEvent(KComboBox* self, QDragLeaveEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperDragLeaveEvent(KComboBox* self, QDragLeaveEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDragLeaveEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_dragleaveevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_DropEvent(KComboBox* self, QDropEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperDropEvent(KComboBox* self, QDropEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDropEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_dropevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool KComboBox_NativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        return vkcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KComboBox_SuperNativeEvent(KComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        return vkcombobox->KComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnNativeEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_nativeevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int KComboBox_Metric(const KComboBox* self, int param1) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox) {
        return vkcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KComboBox_SuperMetric(const KComboBox* self, int param1) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->KComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnMetric(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_metric_callback = reinterpret_cast<VirtualKComboBox::KComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_InitPainter(const KComboBox* self, QPainter* painter) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox) {
        vkcombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperInitPainter(const KComboBox* self, QPainter* painter) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        vkcombobox->KComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnInitPainter(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_initpainter_callback = reinterpret_cast<VirtualKComboBox::KComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KComboBox_Redirected(const KComboBox* self, QPoint* offset) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox) {
        return vkcombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KComboBox_SuperRedirected(const KComboBox* self, QPoint* offset) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->KComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnRedirected(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_redirected_callback = reinterpret_cast<VirtualKComboBox::KComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KComboBox_SharedPainter(const KComboBox* self) {
    auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self));
    if (vkcombobox) {
        return vkcombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KComboBox_SuperSharedPainter(const KComboBox* self) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->KComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSharedPainter(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self)))
        vkcombobox->kcombobox_sharedpainter_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool KComboBox_FocusNextPrevChild(KComboBox* self, bool next) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        return vkcombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KComboBox_SuperFocusNextPrevChild(KComboBox* self, bool next) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        return vkcombobox->KComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnFocusNextPrevChild(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_focusnextprevchild_callback = reinterpret_cast<VirtualKComboBox::KComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool KComboBox_EventFilter(KComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool KComboBox_SuperEventFilter(KComboBox* self, QObject* watched, QEvent* event) {
    return self->KComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnEventFilter(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_eventfilter_callback = reinterpret_cast<VirtualKComboBox::KComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_TimerEvent(KComboBox* self, QTimerEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperTimerEvent(KComboBox* self, QTimerEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnTimerEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_timerevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ChildEvent(KComboBox* self, QChildEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperChildEvent(KComboBox* self, QChildEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnChildEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_childevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_CustomEvent(KComboBox* self, QEvent* event) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperCustomEvent(KComboBox* self, QEvent* event) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnCustomEvent(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_customevent_callback = reinterpret_cast<VirtualKComboBox::KComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_ConnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperConnectNotify(KComboBox* self, const QMetaMethod* signal) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnConnectNotify(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_connectnotify_callback = reinterpret_cast<VirtualKComboBox::KComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_DisconnectNotify(KComboBox* self, const QMetaMethod* signal) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperDisconnectNotify(KComboBox* self, const QMetaMethod* signal) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnDisconnectNotify(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_disconnectnotify_callback = reinterpret_cast<VirtualKComboBox::KComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_SetCompletionObject(KComboBox* self, KCompletion* completionObject, bool handleSignals) {
    self->setCompletionObject(completionObject, handleSignals);
}

// Base class handler implementation
void KComboBox_SuperSetCompletionObject(KComboBox* self, KCompletion* completionObject, bool handleSignals) {
    self->KComboBox::setCompletionObject(completionObject, handleSignals);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletionObject(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setcompletionobject_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletionObject_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_SetHandleSignals(KComboBox* self, bool handle) {
    self->setHandleSignals(handle);
}

// Base class handler implementation
void KComboBox_SuperSetHandleSignals(KComboBox* self, bool handle) {
    self->KComboBox::setHandleSignals(handle);
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetHandleSignals(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_sethandlesignals_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetHandleSignals_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_SetCompletionMode(KComboBox* self, int mode) {
    self->setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Base class handler implementation
void KComboBox_SuperSetCompletionMode(KComboBox* self, int mode) {
    self->KComboBox::setCompletionMode(static_cast<KCompletion::CompletionMode>(mode));
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnSetCompletionMode(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_setcompletionmode_callback = reinterpret_cast<VirtualKComboBox::KComboBox_SetCompletionMode_Callback>(slot);
}

// Derived class handler implementation
void KComboBox_VirtualHook(KComboBox* self, int id, void* data) {
    auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self);
    if (vkcombobox) {
        vkcombobox->virtual_hook(static_cast<int>(id), data);
    } else {
        qFatal("Error: Protected virtual method KComboBox::virtual_hook called without a directly constructed type");
    }
}

// Base class handler implementation
void KComboBox_SuperVirtualHook(KComboBox* self, int id, void* data) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->KComboBox::virtual_hook(static_cast<int>(id), data);
    } else
        qFatal("Error: Protected virtual method KComboBox::virtual_hook called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KComboBox_OnVirtualHook(KComboBox* self, intptr_t slot) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self))
        vkcombobox->kcombobox_virtualhook_callback = reinterpret_cast<VirtualKComboBox::KComboBox_VirtualHook_Callback>(slot);
}

// Derived class protected handler implementation
void KComboBox_UpdateMicroFocus(KComboBox* self) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->VirtualKComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method KComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KComboBox_Create(KComboBox* self) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->VirtualKComboBox::create();
    } else
        qFatal("Error: Protected method KComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KComboBox_Destroy(KComboBox* self) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->VirtualKComboBox::destroy();
    } else
        qFatal("Error: Protected method KComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KComboBox_FocusNextChild(KComboBox* self) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        return vkcombobox->VirtualKComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method KComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KComboBox_FocusPreviousChild(KComboBox* self) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        return vkcombobox->VirtualKComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method KComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KComboBox_Sender(const KComboBox* self) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::sender();
    } else
        qFatal("Error: Protected method KComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KComboBox_SenderSignalIndex(const KComboBox* self) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method KComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KComboBox_Receivers(const KComboBox* self, const char* signal) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method KComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KComboBox_IsSignalConnected(const KComboBox* self, const QMetaMethod* signal) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KComboBox_GetDecodedMetricF(const KComboBox* self, int metricA, int metricB) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KComboBox::getDecodedMetricF called without a directly constructed type");
}

// Derived class protected handler implementation
libqt_map /* of int to libqt_list of QKeySequence* */ KComboBox_KeyBindingMap(const KComboBox* self) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        QMap<KCompletionBase::KeyBindingType, QList<QKeySequence>> _ret = vkcombobox->VirtualKComboBox::keyBindingMap();
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
        qFatal("Error: Protected method KComboBox::keyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KComboBox_SetKeyBindingMap(KComboBox* self, libqt_map /* of int to libqt_list of QKeySequence* */ keyBindingMap) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
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
        vkcombobox->VirtualKComboBox::setKeyBindingMap(keyBindingMap_QMap);
    } else
        qFatal("Error: Protected method KComboBox::setKeyBindingMap called without a directly constructed type");
}

// Derived class protected handler implementation
void KComboBox_SetDelegate(KComboBox* self, KCompletionBase* delegate) {
    if (auto* vkcombobox = dynamic_cast<VirtualKComboBox*>(self)) {
        vkcombobox->VirtualKComboBox::setDelegate(delegate);
    } else
        qFatal("Error: Protected method KComboBox::setDelegate called without a directly constructed type");
}

// Derived class protected handler implementation
KCompletionBase* KComboBox_Delegate(const KComboBox* self) {
    if (auto* vkcombobox = const_cast<VirtualKComboBox*>(dynamic_cast<const VirtualKComboBox*>(self))) {
        return vkcombobox->VirtualKComboBox::delegate();
    } else
        qFatal("Error: Protected method KComboBox::delegate called without a directly constructed type");
}

void KComboBox_Delete(KComboBox* self) {
    delete self;
}
