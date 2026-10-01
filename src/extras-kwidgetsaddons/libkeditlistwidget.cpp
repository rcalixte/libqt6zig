#include <KEditListWidget>
#define WORKAROUND_INNER_CLASS_DEFINITION_KEditListWidget__CustomEditor
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
#include <QLineEdit>
#include <QList>
#include <QListView>
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
#include <QPushButton>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <keditlistwidget.h>
#include "libkeditlistwidget.h"
#include "libkeditlistwidget.hxx"

KEditListWidget* KEditListWidget_new(QWidget* parent) {
    return new VirtualKEditListWidget(parent);
}

KEditListWidget* KEditListWidget_new2() {
    return new VirtualKEditListWidget();
}

KEditListWidget* KEditListWidget_new3(const KEditListWidget__CustomEditor* customEditor) {
    return new VirtualKEditListWidget(*customEditor);
}

KEditListWidget* KEditListWidget_new4(const KEditListWidget__CustomEditor* customEditor, QWidget* parent) {
    return new VirtualKEditListWidget(*customEditor, parent);
}

KEditListWidget* KEditListWidget_new5(const KEditListWidget__CustomEditor* customEditor, QWidget* parent, bool checkAtEntering) {
    return new VirtualKEditListWidget(*customEditor, parent, checkAtEntering);
}

KEditListWidget* KEditListWidget_new6(const KEditListWidget__CustomEditor* customEditor, QWidget* parent, bool checkAtEntering, int buttons) {
    return new VirtualKEditListWidget(*customEditor, parent, checkAtEntering, static_cast<KEditListWidget::Buttons>(buttons));
}

QMetaObject* KEditListWidget_MetaObject(const KEditListWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* KEditListWidget_Metacast(KEditListWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KEditListWidget_Metacall(KEditListWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string KEditListWidget_Tr(const char* s) {
    auto _ret = KEditListWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QListView* KEditListWidget_ListView(const KEditListWidget* self) {
    return self->listView();
}

QLineEdit* KEditListWidget_LineEdit(const KEditListWidget* self) {
    return self->lineEdit();
}

QPushButton* KEditListWidget_AddButton(const KEditListWidget* self) {
    return self->addButton();
}

QPushButton* KEditListWidget_RemoveButton(const KEditListWidget* self) {
    return self->removeButton();
}

QPushButton* KEditListWidget_UpButton(const KEditListWidget* self) {
    return self->upButton();
}

QPushButton* KEditListWidget_DownButton(const KEditListWidget* self) {
    return self->downButton();
}

int KEditListWidget_Count(const KEditListWidget* self) {
    return self->count();
}

void KEditListWidget_InsertStringList(KEditListWidget* self, const libqt_list /* of libqt_string */ list) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->insertStringList(list_QList);
}

void KEditListWidget_InsertItem(KEditListWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(text_QString);
}

void KEditListWidget_Clear(KEditListWidget* self) {
    self->clear();
}

libqt_string KEditListWidget_Text(const KEditListWidget* self, int index) {
    auto _ret = self->text(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int KEditListWidget_CurrentItem(const KEditListWidget* self) {
    return self->currentItem();
}

libqt_string KEditListWidget_CurrentText(const KEditListWidget* self) {
    auto _ret = self->currentText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ KEditListWidget_Items(const KEditListWidget* self) {
    QList<QString> _ret = self->items();
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

void KEditListWidget_SetItems(KEditListWidget* self, const libqt_list /* of libqt_string */ items) {
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setItems(items_QList);
}

int KEditListWidget_Buttons(const KEditListWidget* self) {
    return static_cast<int>(self->buttons());
}

void KEditListWidget_SetButtons(KEditListWidget* self, int buttons) {
    self->setButtons(static_cast<KEditListWidget::Buttons>(buttons));
}

void KEditListWidget_SetCheckAtEntering(KEditListWidget* self, bool check) {
    self->setCheckAtEntering(check);
}

bool KEditListWidget_CheckAtEntering(KEditListWidget* self) {
    return self->checkAtEntering();
}

void KEditListWidget_SetCustomEditor(KEditListWidget* self, const KEditListWidget__CustomEditor* editor) {
    self->setCustomEditor(*editor);
}

bool KEditListWidget_EventFilter(KEditListWidget* self, QObject* o, QEvent* e) {
    return self->eventFilter(o, e);
}

void KEditListWidget_Changed(KEditListWidget* self) {
    self->changed();
}

void KEditListWidget_Connect_Changed(KEditListWidget* self, intptr_t slot) {
    void (*slotFunc)(KEditListWidget*) = reinterpret_cast<void (*)(KEditListWidget*)>(slot);
    KEditListWidget::connect(self,
                             static_cast<void (KEditListWidget::*)()>(&KEditListWidget::changed),
                             [self, slotFunc]() {
                                 slotFunc(self);
                             });
}

void KEditListWidget_Added(KEditListWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->added(text_QString);
}

void KEditListWidget_Connect_Added(KEditListWidget* self, intptr_t slot) {
    void (*slotFunc)(KEditListWidget*, const char*) = reinterpret_cast<void (*)(KEditListWidget*, const char*)>(slot);
    KEditListWidget::connect(self,
                             static_cast<void (KEditListWidget::*)(const QString&)>(&KEditListWidget::added),
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

void KEditListWidget_Removed(KEditListWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->removed(text_QString);
}

void KEditListWidget_Connect_Removed(KEditListWidget* self, intptr_t slot) {
    void (*slotFunc)(KEditListWidget*, const char*) = reinterpret_cast<void (*)(KEditListWidget*, const char*)>(slot);
    KEditListWidget::connect(self,
                             static_cast<void (KEditListWidget::*)(const QString&)>(&KEditListWidget::removed),
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

libqt_string KEditListWidget_Tr2(const char* s, const char* c) {
    auto _ret = KEditListWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string KEditListWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = KEditListWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void KEditListWidget_InsertStringList2(KEditListWidget* self, const libqt_list /* of libqt_string */ list, int index) {
    QList<QString> list_QList;
    list_QList.reserve(list.len);
    libqt_string* list_arr = static_cast<libqt_string*>(list.data);
    for (size_t i = 0; i < list.len; ++i) {
        QString list_arr_i_QString = QString::fromUtf8(list_arr[i].data, list_arr[i].len);
        list_QList.push_back(list_arr_i_QString);
    }
    self->insertStringList(list_QList, static_cast<int>(index));
}

void KEditListWidget_InsertItem2(KEditListWidget* self, const libqt_string text, int index) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(text_QString, static_cast<int>(index));
}

// Base class handler implementation
QMetaObject* KEditListWidget_SuperMetaObject(const KEditListWidget* self) {
    return (QMetaObject*)self->KEditListWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetaObject(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_metaobject_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* KEditListWidget_SuperMetacast(KEditListWidget* self, const char* param1) {
    return self->KEditListWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetacast(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_metacast_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int KEditListWidget_SuperMetacall(KEditListWidget* self, int param1, int param2, void** param3) {
    return self->KEditListWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetacall(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_metacall_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
bool KEditListWidget_SuperEventFilter(KEditListWidget* self, QObject* o, QEvent* e) {
    return self->KEditListWidget::eventFilter(o, e);
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEventFilter(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_eventfilter_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int KEditListWidget_DevType(const KEditListWidget* self) {
    return self->devType();
}

// Base class handler implementation
int KEditListWidget_SuperDevType(const KEditListWidget* self) {
    return self->KEditListWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDevType(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_devtype_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_SetVisible(KEditListWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void KEditListWidget_SuperSetVisible(KEditListWidget* self, bool visible) {
    self->KEditListWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSetVisible(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_setvisible_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* KEditListWidget_SizeHint(const KEditListWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* KEditListWidget_SuperSizeHint(const KEditListWidget* self) {
    return new QSize(self->KEditListWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSizeHint(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_sizehint_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* KEditListWidget_MinimumSizeHint(const KEditListWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* KEditListWidget_SuperMinimumSizeHint(const KEditListWidget* self) {
    return new QSize(self->KEditListWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMinimumSizeHint(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_minimumsizehint_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int KEditListWidget_HeightForWidth(const KEditListWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int KEditListWidget_SuperHeightForWidth(const KEditListWidget* self, int param1) {
    return self->KEditListWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHeightForWidth(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_heightforwidth_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool KEditListWidget_HasHeightForWidth(const KEditListWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool KEditListWidget_SuperHasHeightForWidth(const KEditListWidget* self) {
    return self->KEditListWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHasHeightForWidth(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_hasheightforwidth_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* KEditListWidget_PaintEngine(const KEditListWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* KEditListWidget_SuperPaintEngine(const KEditListWidget* self) {
    return self->KEditListWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnPaintEngine(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_paintengine_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool KEditListWidget_Event(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        return vkeditlistwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditListWidget_SuperEvent(KEditListWidget* self, QEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        return vkeditlistwidget->KEditListWidget::event(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_event_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_MousePressEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperMousePressEvent(KEditListWidget* self, QMouseEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMousePressEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_mousepressevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_MouseReleaseEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperMouseReleaseEvent(KEditListWidget* self, QMouseEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseReleaseEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_mousereleaseevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_MouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperMouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseDoubleClickEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_MouseMoveEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperMouseMoveEvent(KEditListWidget* self, QMouseEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseMoveEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_mousemoveevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_WheelEvent(KEditListWidget* self, QWheelEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperWheelEvent(KEditListWidget* self, QWheelEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnWheelEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_wheelevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_KeyPressEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperKeyPressEvent(KEditListWidget* self, QKeyEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnKeyPressEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_keypressevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_KeyReleaseEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperKeyReleaseEvent(KEditListWidget* self, QKeyEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnKeyReleaseEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_keyreleaseevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_FocusInEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperFocusInEvent(KEditListWidget* self, QFocusEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusInEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_focusinevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_FocusOutEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperFocusOutEvent(KEditListWidget* self, QFocusEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusOutEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_focusoutevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_EnterEvent(KEditListWidget* self, QEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperEnterEvent(KEditListWidget* self, QEnterEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEnterEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_enterevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_LeaveEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperLeaveEvent(KEditListWidget* self, QEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnLeaveEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_leaveevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_PaintEvent(KEditListWidget* self, QPaintEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperPaintEvent(KEditListWidget* self, QPaintEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnPaintEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_paintevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_MoveEvent(KEditListWidget* self, QMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperMoveEvent(KEditListWidget* self, QMoveEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMoveEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_moveevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ResizeEvent(KEditListWidget* self, QResizeEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperResizeEvent(KEditListWidget* self, QResizeEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnResizeEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_resizeevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_CloseEvent(KEditListWidget* self, QCloseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperCloseEvent(KEditListWidget* self, QCloseEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnCloseEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_closeevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnContextMenuEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_contextmenuevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_TabletEvent(KEditListWidget* self, QTabletEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperTabletEvent(KEditListWidget* self, QTabletEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnTabletEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_tabletevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ActionEvent(KEditListWidget* self, QActionEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperActionEvent(KEditListWidget* self, QActionEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnActionEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_actionevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_DragEnterEvent(KEditListWidget* self, QDragEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperDragEnterEvent(KEditListWidget* self, QDragEnterEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragEnterEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_dragenterevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_DragMoveEvent(KEditListWidget* self, QDragMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperDragMoveEvent(KEditListWidget* self, QDragMoveEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragMoveEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_dragmoveevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_DragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperDragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragLeaveEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_dragleaveevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_DropEvent(KEditListWidget* self, QDropEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperDropEvent(KEditListWidget* self, QDropEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDropEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_dropevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ShowEvent(KEditListWidget* self, QShowEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperShowEvent(KEditListWidget* self, QShowEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnShowEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_showevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_HideEvent(KEditListWidget* self, QHideEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperHideEvent(KEditListWidget* self, QHideEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHideEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_hideevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool KEditListWidget_NativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        return vkeditlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditListWidget_SuperNativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        return vkeditlistwidget->KEditListWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method KEditListWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnNativeEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_nativeevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ChangeEvent(KEditListWidget* self, QEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperChangeEvent(KEditListWidget* self, QEvent* param1) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnChangeEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_changeevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int KEditListWidget_Metric(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget) {
        return vkeditlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int KEditListWidget_SuperMetric(const KEditListWidget* self, int param1) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->KEditListWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method KEditListWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetric(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_metric_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_InitPainter(const KEditListWidget* self, QPainter* painter) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget) {
        vkeditlistwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperInitPainter(const KEditListWidget* self, QPainter* painter) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        vkeditlistwidget->KEditListWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInitPainter(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_initpainter_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* KEditListWidget_Redirected(const KEditListWidget* self, QPoint* offset) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget) {
        return vkeditlistwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* KEditListWidget_SuperRedirected(const KEditListWidget* self, QPoint* offset) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->KEditListWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnRedirected(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_redirected_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* KEditListWidget_SharedPainter(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget) {
        return vkeditlistwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* KEditListWidget_SuperSharedPainter(const KEditListWidget* self) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->KEditListWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method KEditListWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSharedPainter(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_sharedpainter_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_InputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperInputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInputMethodEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_inputmethodevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* KEditListWidget_InputMethodQuery(const KEditListWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* KEditListWidget_SuperInputMethodQuery(const KEditListWidget* self, int param1) {
    return new QVariant(self->KEditListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInputMethodQuery(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self)))
        vkeditlistwidget->keditlistwidget_inputmethodquery_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool KEditListWidget_FocusNextPrevChild(KEditListWidget* self, bool next) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        return vkeditlistwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool KEditListWidget_SuperFocusNextPrevChild(KEditListWidget* self, bool next) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        return vkeditlistwidget->KEditListWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusNextPrevChild(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_focusnextprevchild_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_TimerEvent(KEditListWidget* self, QTimerEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperTimerEvent(KEditListWidget* self, QTimerEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnTimerEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_timerevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ChildEvent(KEditListWidget* self, QChildEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperChildEvent(KEditListWidget* self, QChildEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnChildEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_childevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_CustomEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperCustomEvent(KEditListWidget* self, QEvent* event) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnCustomEvent(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_customevent_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_ConnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperConnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnConnectNotify(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_connectnotify_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void KEditListWidget_DisconnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget) {
        vkeditlistwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method KEditListWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void KEditListWidget_SuperDisconnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->KEditListWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method KEditListWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDisconnectNotify(KEditListWidget* self, intptr_t slot) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self))
        vkeditlistwidget->keditlistwidget_disconnectnotify_callback = reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void KEditListWidget_UpdateMicroFocus(KEditListWidget* self) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->VirtualKEditListWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method KEditListWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void KEditListWidget_Create(KEditListWidget* self) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->VirtualKEditListWidget::create();
    } else
        qFatal("Error: Protected method KEditListWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void KEditListWidget_Destroy(KEditListWidget* self) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        vkeditlistwidget->VirtualKEditListWidget::destroy();
    } else
        qFatal("Error: Protected method KEditListWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditListWidget_FocusNextChild(KEditListWidget* self) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        return vkeditlistwidget->VirtualKEditListWidget::focusNextChild();
    } else
        qFatal("Error: Protected method KEditListWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditListWidget_FocusPreviousChild(KEditListWidget* self) {
    if (auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self)) {
        return vkeditlistwidget->VirtualKEditListWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method KEditListWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* KEditListWidget_Sender(const KEditListWidget* self) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->VirtualKEditListWidget::sender();
    } else
        qFatal("Error: Protected method KEditListWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int KEditListWidget_SenderSignalIndex(const KEditListWidget* self) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->VirtualKEditListWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method KEditListWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int KEditListWidget_Receivers(const KEditListWidget* self, const char* signal) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->VirtualKEditListWidget::receivers(signal);
    } else
        qFatal("Error: Protected method KEditListWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool KEditListWidget_IsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->VirtualKEditListWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method KEditListWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double KEditListWidget_GetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB) {
    if (auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self))) {
        return vkeditlistwidget->VirtualKEditListWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method KEditListWidget::getDecodedMetricF called without a directly constructed type");
}

void KEditListWidget_Delete(KEditListWidget* self) {
    delete self;
}

KEditListWidget__CustomEditor* KEditListWidget__CustomEditor_new() {
    return new VirtualKEditListWidgetCustomEditor();
}

KEditListWidget__CustomEditor* KEditListWidget__CustomEditor_new2(QWidget* repWidget, QLineEdit* edit) {
    return new VirtualKEditListWidgetCustomEditor(repWidget, edit);
}

KEditListWidget__CustomEditor* KEditListWidget__CustomEditor_new3(QComboBox* combo) {
    return new VirtualKEditListWidgetCustomEditor(combo);
}

void KEditListWidget__CustomEditor_SetRepresentationWidget(KEditListWidget__CustomEditor* self, QWidget* repWidget) {
    self->setRepresentationWidget(repWidget);
}

void KEditListWidget__CustomEditor_SetLineEdit(KEditListWidget__CustomEditor* self, QLineEdit* edit) {
    self->setLineEdit(edit);
}

QWidget* KEditListWidget__CustomEditor_RepresentationWidget(const KEditListWidget__CustomEditor* self) {
    return self->representationWidget();
}

QLineEdit* KEditListWidget__CustomEditor_LineEdit(const KEditListWidget__CustomEditor* self) {
    return self->lineEdit();
}

// Base class handler implementation
QWidget* KEditListWidget__CustomEditor_SuperRepresentationWidget(const KEditListWidget__CustomEditor* self) {
    return self->KEditListWidget::CustomEditor::representationWidget();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget__CustomEditor_OnRepresentationWidget(KEditListWidget__CustomEditor* self, intptr_t slot) {
    if (auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self)))
        vkeditlistwidgetcustomeditor->keditlistwidget__customeditor_representationwidget_callback = reinterpret_cast<VirtualKEditListWidgetCustomEditor::KEditListWidget__CustomEditor_RepresentationWidget_Callback>(slot);
}

// Base class handler implementation
QLineEdit* KEditListWidget__CustomEditor_SuperLineEdit(const KEditListWidget__CustomEditor* self) {
    return self->KEditListWidget::CustomEditor::lineEdit();
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget__CustomEditor_OnLineEdit(KEditListWidget__CustomEditor* self, intptr_t slot) {
    if (auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self)))
        vkeditlistwidgetcustomeditor->keditlistwidget__customeditor_lineedit_callback = reinterpret_cast<VirtualKEditListWidgetCustomEditor::KEditListWidget__CustomEditor_LineEdit_Callback>(slot);
}

void KEditListWidget__CustomEditor_Delete(KEditListWidget__CustomEditor* self) {
    delete self;
}
