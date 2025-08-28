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
#include <QByteArray>
#include <cstring>
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
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualKEditListWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string KEditListWidget_Tr(const char* s) {
    QString _ret = KEditListWidget::tr(s);
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
    QString _ret = self->text(static_cast<int>(index));
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
    QString _ret = self->currentText();
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
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return self->eventFilter(o, e);
    } else {
        return ((VirtualKEditListWidget*)self)->eventFilter(o, e);
    }
}

void KEditListWidget_Changed(KEditListWidget* self) {
    self->changed();
}

void KEditListWidget_Connect_Changed(KEditListWidget* self, intptr_t slot) {
    void (*slotFunc)(KEditListWidget*) = reinterpret_cast<void (*)(KEditListWidget*)>(slot);
    KEditListWidget::connect(self, &KEditListWidget::changed, [self, slotFunc]() {
        slotFunc(self);
    });
}

void KEditListWidget_Added(KEditListWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->added(text_QString);
}

void KEditListWidget_Connect_Added(KEditListWidget* self, intptr_t slot) {
    void (*slotFunc)(KEditListWidget*, const char*) = reinterpret_cast<void (*)(KEditListWidget*, const char*)>(slot);
    KEditListWidget::connect(self, &KEditListWidget::added, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
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
    KEditListWidget::connect(self, &KEditListWidget::removed, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        const char* text_str = static_cast<const char*>(malloc(text_b.length() + 1));
        memcpy((void*)text_str, text_b.data(), text_b.length());
        ((char*)text_str)[text_b.length()] = '\0';
        const char* sigval1 = text_str;
        slotFunc(self, sigval1);
        libqt_free(text_str);
    });
}

libqt_string KEditListWidget_Tr2(const char* s, const char* c) {
    QString _ret = KEditListWidget::tr(s, c);
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
    QString _ret = KEditListWidget::tr(s, c, static_cast<int>(n));
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
int KEditListWidget_QBaseMetacall(KEditListWidget* self, int param1, int param2, void** param3) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Metacall_IsBase(true);
        return vkeditlistwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->KEditListWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetacall(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Metacall_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseEventFilter(KEditListWidget* self, QObject* o, QEvent* e) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_EventFilter_IsBase(true);
        return vkeditlistwidget->eventFilter(o, e);
    } else {
        return self->KEditListWidget::eventFilter(o, e);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEventFilter(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_EventFilter_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditListWidget_DevType(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->devType();
    } else {
        return self->KEditListWidget::devType();
    }
}

// Base class handler implementation
int KEditListWidget_QBaseDevType(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DevType_IsBase(true);
        return vkeditlistwidget->devType();
    } else {
        return self->KEditListWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDevType(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DevType_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_SetVisible(KEditListWidget* self, bool visible) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setVisible(visible);
    } else {
        self->KEditListWidget::setVisible(visible);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseSetVisible(KEditListWidget* self, bool visible) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SetVisible_IsBase(true);
        vkeditlistwidget->setVisible(visible);
    } else {
        self->KEditListWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSetVisible(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SetVisible_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KEditListWidget_SizeHint(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return new QSize(vkeditlistwidget->sizeHint());
    } else {
        return new QSize(((VirtualKEditListWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* KEditListWidget_QBaseSizeHint(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SizeHint_IsBase(true);
        return new QSize(vkeditlistwidget->sizeHint());
    } else {
        return new QSize(((VirtualKEditListWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSizeHint(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SizeHint_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* KEditListWidget_MinimumSizeHint(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return new QSize(vkeditlistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKEditListWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* KEditListWidget_QBaseMinimumSizeHint(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vkeditlistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualKEditListWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMinimumSizeHint(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditListWidget_HeightForWidth(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KEditListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int KEditListWidget_QBaseHeightForWidth(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HeightForWidth_IsBase(true);
        return vkeditlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->KEditListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHeightForWidth(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HeightForWidth_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_HasHeightForWidth(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->hasHeightForWidth();
    } else {
        return self->KEditListWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseHasHeightForWidth(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HasHeightForWidth_IsBase(true);
        return vkeditlistwidget->hasHeightForWidth();
    } else {
        return self->KEditListWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHasHeightForWidth(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* KEditListWidget_PaintEngine(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->paintEngine();
    } else {
        return self->KEditListWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* KEditListWidget_QBasePaintEngine(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_PaintEngine_IsBase(true);
        return vkeditlistwidget->paintEngine();
    } else {
        return self->KEditListWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnPaintEngine(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_PaintEngine_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_Event(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->event(event);
    } else {
        return ((VirtualKEditListWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Event_IsBase(true);
        return vkeditlistwidget->event(event);
    } else {
        return ((VirtualKEditListWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Event_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_MousePressEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->mousePressEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseMousePressEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MousePressEvent_IsBase(true);
        vkeditlistwidget->mousePressEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMousePressEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MousePressEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_MouseReleaseEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseMouseReleaseEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseReleaseEvent_IsBase(true);
        vkeditlistwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseReleaseEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_MouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseMouseDoubleClickEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseDoubleClickEvent_IsBase(true);
        vkeditlistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseDoubleClickEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_MouseMoveEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseMouseMoveEvent(KEditListWidget* self, QMouseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseMoveEvent_IsBase(true);
        vkeditlistwidget->mouseMoveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMouseMoveEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_WheelEvent(KEditListWidget* self, QWheelEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->wheelEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseWheelEvent(KEditListWidget* self, QWheelEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_WheelEvent_IsBase(true);
        vkeditlistwidget->wheelEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnWheelEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_WheelEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_KeyPressEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->keyPressEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseKeyPressEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_KeyPressEvent_IsBase(true);
        vkeditlistwidget->keyPressEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnKeyPressEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_KeyReleaseEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseKeyReleaseEvent(KEditListWidget* self, QKeyEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_KeyReleaseEvent_IsBase(true);
        vkeditlistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnKeyReleaseEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_FocusInEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->focusInEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseFocusInEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusInEvent_IsBase(true);
        vkeditlistwidget->focusInEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusInEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusInEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_FocusOutEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->focusOutEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseFocusOutEvent(KEditListWidget* self, QFocusEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusOutEvent_IsBase(true);
        vkeditlistwidget->focusOutEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusOutEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_EnterEvent(KEditListWidget* self, QEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->enterEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseEnterEvent(KEditListWidget* self, QEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_EnterEvent_IsBase(true);
        vkeditlistwidget->enterEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnEnterEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_EnterEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_LeaveEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->leaveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseLeaveEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_LeaveEvent_IsBase(true);
        vkeditlistwidget->leaveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnLeaveEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_LeaveEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_PaintEvent(KEditListWidget* self, QPaintEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->paintEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBasePaintEvent(KEditListWidget* self, QPaintEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_PaintEvent_IsBase(true);
        vkeditlistwidget->paintEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnPaintEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_PaintEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_MoveEvent(KEditListWidget* self, QMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->moveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseMoveEvent(KEditListWidget* self, QMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MoveEvent_IsBase(true);
        vkeditlistwidget->moveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMoveEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_MoveEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ResizeEvent(KEditListWidget* self, QResizeEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->resizeEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseResizeEvent(KEditListWidget* self, QResizeEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ResizeEvent_IsBase(true);
        vkeditlistwidget->resizeEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnResizeEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ResizeEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_CloseEvent(KEditListWidget* self, QCloseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->closeEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseCloseEvent(KEditListWidget* self, QCloseEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_CloseEvent_IsBase(true);
        vkeditlistwidget->closeEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnCloseEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_CloseEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->contextMenuEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseContextMenuEvent(KEditListWidget* self, QContextMenuEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ContextMenuEvent_IsBase(true);
        vkeditlistwidget->contextMenuEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnContextMenuEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_TabletEvent(KEditListWidget* self, QTabletEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->tabletEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseTabletEvent(KEditListWidget* self, QTabletEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_TabletEvent_IsBase(true);
        vkeditlistwidget->tabletEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnTabletEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_TabletEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ActionEvent(KEditListWidget* self, QActionEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->actionEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseActionEvent(KEditListWidget* self, QActionEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ActionEvent_IsBase(true);
        vkeditlistwidget->actionEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnActionEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ActionEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_DragEnterEvent(KEditListWidget* self, QDragEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->dragEnterEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDragEnterEvent(KEditListWidget* self, QDragEnterEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragEnterEvent_IsBase(true);
        vkeditlistwidget->dragEnterEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragEnterEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_DragMoveEvent(KEditListWidget* self, QDragMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->dragMoveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDragMoveEvent(KEditListWidget* self, QDragMoveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragMoveEvent_IsBase(true);
        vkeditlistwidget->dragMoveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragMoveEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_DragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDragLeaveEvent(KEditListWidget* self, QDragLeaveEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragLeaveEvent_IsBase(true);
        vkeditlistwidget->dragLeaveEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDragLeaveEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_DropEvent(KEditListWidget* self, QDropEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->dropEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDropEvent(KEditListWidget* self, QDropEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DropEvent_IsBase(true);
        vkeditlistwidget->dropEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDropEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DropEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ShowEvent(KEditListWidget* self, QShowEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->showEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseShowEvent(KEditListWidget* self, QShowEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ShowEvent_IsBase(true);
        vkeditlistwidget->showEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnShowEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ShowEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_HideEvent(KEditListWidget* self, QHideEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->hideEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseHideEvent(KEditListWidget* self, QHideEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HideEvent_IsBase(true);
        vkeditlistwidget->hideEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnHideEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_HideEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_NativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKEditListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseNativeEvent(KEditListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_NativeEvent_IsBase(true);
        return vkeditlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualKEditListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnNativeEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_NativeEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ChangeEvent(KEditListWidget* self, QEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->changeEvent(param1);
    } else {
        ((VirtualKEditListWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseChangeEvent(KEditListWidget* self, QEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ChangeEvent_IsBase(true);
        vkeditlistwidget->changeEvent(param1);
    } else {
        ((VirtualKEditListWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnChangeEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ChangeEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditListWidget_Metric(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKEditListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int KEditListWidget_QBaseMetric(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Metric_IsBase(true);
        return vkeditlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualKEditListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnMetric(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Metric_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_InitPainter(const KEditListWidget* self, QPainter* painter) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->initPainter(painter);
    } else {
        ((VirtualKEditListWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseInitPainter(const KEditListWidget* self, QPainter* painter) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InitPainter_IsBase(true);
        vkeditlistwidget->initPainter(painter);
    } else {
        ((VirtualKEditListWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInitPainter(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InitPainter_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* KEditListWidget_Redirected(const KEditListWidget* self, QPoint* offset) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->redirected(offset);
    } else {
        return ((VirtualKEditListWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* KEditListWidget_QBaseRedirected(const KEditListWidget* self, QPoint* offset) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Redirected_IsBase(true);
        return vkeditlistwidget->redirected(offset);
    } else {
        return ((VirtualKEditListWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnRedirected(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Redirected_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* KEditListWidget_SharedPainter(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->sharedPainter();
    } else {
        return ((VirtualKEditListWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* KEditListWidget_QBaseSharedPainter(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SharedPainter_IsBase(true);
        return vkeditlistwidget->sharedPainter();
    } else {
        return ((VirtualKEditListWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSharedPainter(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SharedPainter_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_InputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKEditListWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseInputMethodEvent(KEditListWidget* self, QInputMethodEvent* param1) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InputMethodEvent_IsBase(true);
        vkeditlistwidget->inputMethodEvent(param1);
    } else {
        ((VirtualKEditListWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInputMethodEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* KEditListWidget_InputMethodQuery(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return new QVariant(vkeditlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKEditListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* KEditListWidget_QBaseInputMethodQuery(const KEditListWidget* self, int param1) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vkeditlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualKEditListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnInputMethodQuery(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_FocusNextPrevChild(KEditListWidget* self, bool next) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKEditListWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseFocusNextPrevChild(KEditListWidget* self, bool next) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusNextPrevChild_IsBase(true);
        return vkeditlistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualKEditListWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusNextPrevChild(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_TimerEvent(KEditListWidget* self, QTimerEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->timerEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseTimerEvent(KEditListWidget* self, QTimerEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_TimerEvent_IsBase(true);
        vkeditlistwidget->timerEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnTimerEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_TimerEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ChildEvent(KEditListWidget* self, QChildEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->childEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseChildEvent(KEditListWidget* self, QChildEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ChildEvent_IsBase(true);
        vkeditlistwidget->childEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnChildEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ChildEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_CustomEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->customEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseCustomEvent(KEditListWidget* self, QEvent* event) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_CustomEvent_IsBase(true);
        vkeditlistwidget->customEvent(event);
    } else {
        ((VirtualKEditListWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnCustomEvent(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_CustomEvent_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_ConnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->connectNotify(*signal);
    } else {
        ((VirtualKEditListWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseConnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ConnectNotify_IsBase(true);
        vkeditlistwidget->connectNotify(*signal);
    } else {
        ((VirtualKEditListWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnConnectNotify(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_ConnectNotify_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_DisconnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKEditListWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDisconnectNotify(KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DisconnectNotify_IsBase(true);
        vkeditlistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualKEditListWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDisconnectNotify(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_UpdateMicroFocus(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->updateMicroFocus();
    } else {
        ((VirtualKEditListWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void KEditListWidget_QBaseUpdateMicroFocus(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_UpdateMicroFocus_IsBase(true);
        vkeditlistwidget->updateMicroFocus();
    } else {
        ((VirtualKEditListWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnUpdateMicroFocus(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_Create(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->create();
    } else {
        ((VirtualKEditListWidget*)self)->create();
    }
}

// Base class handler implementation
void KEditListWidget_QBaseCreate(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Create_IsBase(true);
        vkeditlistwidget->create();
    } else {
        ((VirtualKEditListWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnCreate(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Create_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void KEditListWidget_Destroy(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->destroy();
    } else {
        ((VirtualKEditListWidget*)self)->destroy();
    }
}

// Base class handler implementation
void KEditListWidget_QBaseDestroy(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Destroy_IsBase(true);
        vkeditlistwidget->destroy();
    } else {
        ((VirtualKEditListWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnDestroy(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Destroy_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_FocusNextChild(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->focusNextChild();
    } else {
        return ((VirtualKEditListWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseFocusNextChild(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusNextChild_IsBase(true);
        return vkeditlistwidget->focusNextChild();
    } else {
        return ((VirtualKEditListWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusNextChild(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusNextChild_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_FocusPreviousChild(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->focusPreviousChild();
    } else {
        return ((VirtualKEditListWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseFocusPreviousChild(KEditListWidget* self) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusPreviousChild_IsBase(true);
        return vkeditlistwidget->focusPreviousChild();
    } else {
        return ((VirtualKEditListWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnFocusPreviousChild(KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = dynamic_cast<VirtualKEditListWidget*>(self);
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* KEditListWidget_Sender(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->sender();
    } else {
        return ((VirtualKEditListWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* KEditListWidget_QBaseSender(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Sender_IsBase(true);
        return vkeditlistwidget->sender();
    } else {
        return ((VirtualKEditListWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSender(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Sender_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditListWidget_SenderSignalIndex(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->senderSignalIndex();
    } else {
        return ((VirtualKEditListWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int KEditListWidget_QBaseSenderSignalIndex(const KEditListWidget* self) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SenderSignalIndex_IsBase(true);
        return vkeditlistwidget->senderSignalIndex();
    } else {
        return ((VirtualKEditListWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnSenderSignalIndex(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int KEditListWidget_Receivers(const KEditListWidget* self, const char* signal) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->receivers(signal);
    } else {
        return ((VirtualKEditListWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int KEditListWidget_QBaseReceivers(const KEditListWidget* self, const char* signal) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Receivers_IsBase(true);
        return vkeditlistwidget->receivers(signal);
    } else {
        return ((VirtualKEditListWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnReceivers(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_Receivers_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool KEditListWidget_IsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKEditListWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool KEditListWidget_QBaseIsSignalConnected(const KEditListWidget* self, const QMetaMethod* signal) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_IsSignalConnected_IsBase(true);
        return vkeditlistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualKEditListWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnIsSignalConnected(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double KEditListWidget_GetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        return vkeditlistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKEditListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double KEditListWidget_QBaseGetDecodedMetricF(const KEditListWidget* self, int metricA, int metricB) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_GetDecodedMetricF_IsBase(true);
        return vkeditlistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualKEditListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget_OnGetDecodedMetricF(const KEditListWidget* self, intptr_t slot) {
    auto* vkeditlistwidget = const_cast<VirtualKEditListWidget*>(dynamic_cast<const VirtualKEditListWidget*>(self));
    if (vkeditlistwidget && vkeditlistwidget->isVirtualKEditListWidget) {
        vkeditlistwidget->setKEditListWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualKEditListWidget::KEditListWidget_GetDecodedMetricF_Callback>(slot));
    }
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
    auto* vkeditlistwidget__customeditor = dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self);
    if (vkeditlistwidget__customeditor && vkeditlistwidget__customeditor->isVirtualKEditListWidgetCustomEditor) {
        return self->representationWidget();
    } else {
        return ((VirtualKEditListWidgetCustomEditor*)self)->representationWidget();
    }
}

QLineEdit* KEditListWidget__CustomEditor_LineEdit(const KEditListWidget__CustomEditor* self) {
    auto* vkeditlistwidget__customeditor = dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self);
    if (vkeditlistwidget__customeditor && vkeditlistwidget__customeditor->isVirtualKEditListWidgetCustomEditor) {
        return self->lineEdit();
    } else {
        return ((VirtualKEditListWidgetCustomEditor*)self)->lineEdit();
    }
}

// Base class handler implementation
QWidget* KEditListWidget__CustomEditor_QBaseRepresentationWidget(const KEditListWidget__CustomEditor* self) {
    auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self));
    if (vkeditlistwidgetcustomeditor && vkeditlistwidgetcustomeditor->isVirtualKEditListWidgetCustomEditor) {
        vkeditlistwidgetcustomeditor->setKEditListWidget__CustomEditor_RepresentationWidget_IsBase(true);
        return vkeditlistwidgetcustomeditor->representationWidget();
    } else {
        return self->KEditListWidget::CustomEditor::representationWidget();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget__CustomEditor_OnRepresentationWidget(const KEditListWidget__CustomEditor* self, intptr_t slot) {
    auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self));
    if (vkeditlistwidgetcustomeditor && vkeditlistwidgetcustomeditor->isVirtualKEditListWidgetCustomEditor) {
        vkeditlistwidgetcustomeditor->setKEditListWidget__CustomEditor_RepresentationWidget_Callback(reinterpret_cast<VirtualKEditListWidgetCustomEditor::KEditListWidget__CustomEditor_RepresentationWidget_Callback>(slot));
    }
}

// Base class handler implementation
QLineEdit* KEditListWidget__CustomEditor_QBaseLineEdit(const KEditListWidget__CustomEditor* self) {
    auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self));
    if (vkeditlistwidgetcustomeditor && vkeditlistwidgetcustomeditor->isVirtualKEditListWidgetCustomEditor) {
        vkeditlistwidgetcustomeditor->setKEditListWidget__CustomEditor_LineEdit_IsBase(true);
        return vkeditlistwidgetcustomeditor->lineEdit();
    } else {
        return self->KEditListWidget::CustomEditor::lineEdit();
    }
}

// Auxiliary method to allow providing re-implementation
void KEditListWidget__CustomEditor_OnLineEdit(const KEditListWidget__CustomEditor* self, intptr_t slot) {
    auto* vkeditlistwidgetcustomeditor = const_cast<VirtualKEditListWidgetCustomEditor*>(dynamic_cast<const VirtualKEditListWidgetCustomEditor*>(self));
    if (vkeditlistwidgetcustomeditor && vkeditlistwidgetcustomeditor->isVirtualKEditListWidgetCustomEditor) {
        vkeditlistwidgetcustomeditor->setKEditListWidget__CustomEditor_LineEdit_Callback(reinterpret_cast<VirtualKEditListWidgetCustomEditor::KEditListWidget__CustomEditor_LineEdit_Callback>(slot));
    }
}

void KEditListWidget__CustomEditor_Delete(KEditListWidget__CustomEditor* self) {
    delete self;
}
