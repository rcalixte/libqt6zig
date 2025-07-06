#include <QAbstractItemDelegate>
#include <QAbstractItemView>
#include <QAbstractScrollArea>
#include <QActionEvent>
#include <QBrush>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDataStream>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QFrame>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QItemSelection>
#include <QItemSelectionModel>
#include <QKeyEvent>
#include <QList>
#include <QListView>
#include <QListWidget>
#include <QListWidgetItem>
#include <QMargins>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMimeData>
#include <QModelIndex>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionFrame>
#include <QStyleOptionViewItem>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qlistwidget.h>
#include "libqlistwidget.h"
#include "libqlistwidget.hxx"

QListWidgetItem* QListWidgetItem_new() {
    return new VirtualQListWidgetItem();
}

QListWidgetItem* QListWidgetItem_new2(const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString);
}

QListWidgetItem* QListWidgetItem_new3(const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString);
}

QListWidgetItem* QListWidgetItem_new4(const QListWidgetItem* other) {
    return new VirtualQListWidgetItem(*other);
}

QListWidgetItem* QListWidgetItem_new5(QListWidget* listview) {
    return new VirtualQListWidgetItem(listview);
}

QListWidgetItem* QListWidgetItem_new6(QListWidget* listview, int typeVal) {
    return new VirtualQListWidgetItem(listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new7(const libqt_string text, QListWidget* listview) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new8(const libqt_string text, QListWidget* listview, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(text_QString, listview, static_cast<int>(typeVal));
}

QListWidgetItem* QListWidgetItem_new9(const QIcon* icon, const libqt_string text, QListWidget* listview) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString, listview);
}

QListWidgetItem* QListWidgetItem_new10(const QIcon* icon, const libqt_string text, QListWidget* listview, int typeVal) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQListWidgetItem(*icon, text_QString, listview, static_cast<int>(typeVal));
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
    return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool selectVal) {
    self->setSelected(selectVal);
}

bool QListWidgetItem_IsSelected(const QListWidgetItem* self) {
    return self->isSelected();
}

void QListWidgetItem_SetHidden(QListWidgetItem* self, bool hide) {
    self->setHidden(hide);
}

bool QListWidgetItem_IsHidden(const QListWidgetItem* self) {
    return self->isHidden();
}

int QListWidgetItem_Flags(const QListWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QListWidgetItem_SetFlags(QListWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QListWidgetItem_Text(const QListWidgetItem* self) {
    QString _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetText(QListWidgetItem* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

QIcon* QListWidgetItem_Icon(const QListWidgetItem* self) {
    return new QIcon(self->icon());
}

void QListWidgetItem_SetIcon(QListWidgetItem* self, const QIcon* icon) {
    self->setIcon(*icon);
}

libqt_string QListWidgetItem_StatusTip(const QListWidgetItem* self) {
    QString _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
    QString _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
    QString _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetWhatsThis(QListWidgetItem* self, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(whatsThis_QString);
}

QFont* QListWidgetItem_Font(const QListWidgetItem* self) {
    return new QFont(self->font());
}

void QListWidgetItem_SetFont(QListWidgetItem* self, const QFont* font) {
    self->setFont(*font);
}

int QListWidgetItem_TextAlignment(const QListWidgetItem* self) {
    return self->textAlignment();
}

void QListWidgetItem_SetTextAlignment(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<int>(alignment));
}

void QListWidgetItem_SetTextAlignmentWithAlignment(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::Alignment>(alignment));
}

QBrush* QListWidgetItem_Background(const QListWidgetItem* self) {
    return new QBrush(self->background());
}

void QListWidgetItem_SetBackground(QListWidgetItem* self, const QBrush* brush) {
    self->setBackground(*brush);
}

QBrush* QListWidgetItem_Foreground(const QListWidgetItem* self) {
    return new QBrush(self->foreground());
}

void QListWidgetItem_SetForeground(QListWidgetItem* self, const QBrush* brush) {
    self->setForeground(*brush);
}

int QListWidgetItem_CheckState(const QListWidgetItem* self) {
    return static_cast<int>(self->checkState());
}

void QListWidgetItem_SetCheckState(QListWidgetItem* self, int state) {
    self->setCheckState(static_cast<Qt::CheckState>(state));
}

QSize* QListWidgetItem_SizeHint(const QListWidgetItem* self) {
    return new QSize(self->sizeHint());
}

void QListWidgetItem_SetSizeHint(QListWidgetItem* self, const QSize* size) {
    self->setSizeHint(*size);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, const QListWidgetItem* other) {
    self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
    return self->type();
}

// Derived class handler implementation
QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        return vqlistwidgetitem->clone();
    } else {
        return self->QListWidgetItem::clone();
    }
}

// Base class handler implementation
QListWidgetItem* QListWidgetItem_QBaseClone(const QListWidgetItem* self) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Clone_IsBase(true);
        return vqlistwidgetitem->clone();
    } else {
        return self->QListWidgetItem::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnClone(const QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Clone_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        return new QVariant(vqlistwidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQListWidgetItem*)self)->data(static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QListWidgetItem_QBaseData(const QListWidgetItem* self, int role) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Data_IsBase(true);
        return new QVariant(vqlistwidgetitem->data(static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQListWidgetItem*)self)->data(static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnData(const QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Data_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_SetData(QListWidgetItem* self, int role, const QVariant* value) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    } else {
        self->QListWidgetItem::setData(static_cast<int>(role), *value);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseSetData(QListWidgetItem* self, int role, const QVariant* value) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_SetData_IsBase(true);
        vqlistwidgetitem->setData(static_cast<int>(role), *value);
    } else {
        self->QListWidgetItem::setData(static_cast<int>(role), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnSetData(QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_SetData_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        return vqlistwidgetitem->operator<(*other);
    } else {
        return self->QListWidgetItem::operator<(*other);
    }
}

// Base class handler implementation
bool QListWidgetItem_QBaseOperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_OperatorLesser_IsBase(true);
        return vqlistwidgetitem->operator<(*other);
    } else {
        return self->QListWidgetItem::operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnOperatorLesser(const QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->read(*in);
    } else {
        self->QListWidgetItem::read(*in);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseRead(QListWidgetItem* self, QDataStream* in) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Read_IsBase(true);
        vqlistwidgetitem->read(*in);
    } else {
        self->QListWidgetItem::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnRead(QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self);
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Read_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->write(*out);
    } else {
        self->QListWidgetItem::write(*out);
    }
}

// Base class handler implementation
void QListWidgetItem_QBaseWrite(const QListWidgetItem* self, QDataStream* out) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Write_IsBase(true);
        vqlistwidgetitem->write(*out);
    } else {
        self->QListWidgetItem::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnWrite(const QListWidgetItem* self, intptr_t slot) {
    auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self));
    if (vqlistwidgetitem && vqlistwidgetitem->isVirtualQListWidgetItem) {
        vqlistwidgetitem->setQListWidgetItem_Write_Callback(reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Write_Callback>(slot));
    }
}

void QListWidgetItem_Delete(QListWidgetItem* self) {
    delete self;
}

QListWidget* QListWidget_new(QWidget* parent) {
    return new VirtualQListWidget(parent);
}

QListWidget* QListWidget_new2() {
    return new VirtualQListWidget();
}

QMetaObject* QListWidget_MetaObject(const QListWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QListWidget_Metacast(QListWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QListWidget_Metacall(QListWidget* self, int param1, int param2, void** param3) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQListWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QListWidget_OnMetacall(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Metacall_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QListWidget_QBaseMetacall(QListWidget* self, int param1, int param2, void** param3) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Metacall_IsBase(true);
        return vqlistwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQListWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QListWidget_Tr(const char* s) {
    QString _ret = QListWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QListWidgetItem* QListWidget_Item(const QListWidget* self, int row) {
    return self->item(static_cast<int>(row));
}

int QListWidget_Row(const QListWidget* self, const QListWidgetItem* item) {
    return self->row(item);
}

void QListWidget_InsertItem(QListWidget* self, int row, QListWidgetItem* item) {
    self->insertItem(static_cast<int>(row), item);
}

void QListWidget_InsertItem2(QListWidget* self, int row, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->insertItem(static_cast<int>(row), label_QString);
}

void QListWidget_InsertItems(QListWidget* self, int row, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->insertItems(static_cast<int>(row), labels_QList);
}

void QListWidget_AddItem(QListWidget* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->addItem(label_QString);
}

void QListWidget_AddItemWithItem(QListWidget* self, QListWidgetItem* item) {
    self->addItem(item);
}

void QListWidget_AddItems(QListWidget* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->addItems(labels_QList);
}

QListWidgetItem* QListWidget_TakeItem(QListWidget* self, int row) {
    return self->takeItem(static_cast<int>(row));
}

int QListWidget_Count(const QListWidget* self) {
    return self->count();
}

QListWidgetItem* QListWidget_CurrentItem(const QListWidget* self) {
    return self->currentItem();
}

void QListWidget_SetCurrentItem(QListWidget* self, QListWidgetItem* item) {
    self->setCurrentItem(item);
}

void QListWidget_SetCurrentItem2(QListWidget* self, QListWidgetItem* item, int command) {
    self->setCurrentItem(item, static_cast<QItemSelectionModel::SelectionFlags>(command));
}

int QListWidget_CurrentRow(const QListWidget* self) {
    return self->currentRow();
}

void QListWidget_SetCurrentRow(QListWidget* self, int row) {
    self->setCurrentRow(static_cast<int>(row));
}

void QListWidget_SetCurrentRow2(QListWidget* self, int row, int command) {
    self->setCurrentRow(static_cast<int>(row), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QListWidgetItem* QListWidget_ItemAt(const QListWidget* self, const QPoint* p) {
    return self->itemAt(*p);
}

QListWidgetItem* QListWidget_ItemAt2(const QListWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QListWidget_VisualItemRect(const QListWidget* self, const QListWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

void QListWidget_SortItems(QListWidget* self) {
    self->sortItems();
}

void QListWidget_SetSortingEnabled(QListWidget* self, bool enable) {
    self->setSortingEnabled(enable);
}

bool QListWidget_IsSortingEnabled(const QListWidget* self) {
    return self->isSortingEnabled();
}

void QListWidget_EditItem(QListWidget* self, QListWidgetItem* item) {
    self->editItem(item);
}

void QListWidget_OpenPersistentEditor(QListWidget* self, QListWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QListWidget_ClosePersistentEditor(QListWidget* self, QListWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QListWidget_IsPersistentEditorOpen(const QListWidget* self, QListWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QListWidget_ItemWidget(const QListWidget* self, QListWidgetItem* item) {
    return self->itemWidget(item);
}

void QListWidget_SetItemWidget(QListWidget* self, QListWidgetItem* item, QWidget* widget) {
    self->setItemWidget(item, widget);
}

void QListWidget_RemoveItemWidget(QListWidget* self, QListWidgetItem* item) {
    self->removeItemWidget(item);
}

libqt_list /* of QListWidgetItem* */ QListWidget_SelectedItems(const QListWidget* self) {
    QList<QListWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QListWidgetItem* */ QListWidget_FindItems(const QListWidget* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QListWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QListWidgetItem* */ QListWidget_Items(const QListWidget* self, const QMimeData* data) {
    QList<QListWidgetItem*> _ret = self->items(data);
    // Convert QList<> from C++ memory to manually-managed C memory
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * _ret.size()));
    for (size_t i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QListWidget_IndexFromItem(const QListWidget* self, const QListWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QListWidgetItem* QListWidget_ItemFromIndex(const QListWidget* self, const QModelIndex* index) {
    return self->itemFromIndex(*index);
}

void QListWidget_ScrollToItem(QListWidget* self, const QListWidgetItem* item) {
    self->scrollToItem(item);
}

void QListWidget_Clear(QListWidget* self) {
    self->clear();
}

void QListWidget_ItemPressed(QListWidget* self, QListWidgetItem* item) {
    self->itemPressed(item);
}

void QListWidget_Connect_ItemPressed(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemPressed, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemClicked(item);
}

void QListWidget_Connect_ItemClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemClicked, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemDoubleClicked(item);
}

void QListWidget_Connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemDoubleClicked, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
    self->itemActivated(item);
}

void QListWidget_Connect_ItemActivated(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemActivated, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
    self->itemEntered(item);
}

void QListWidget_Connect_ItemEntered(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemEntered, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
    self->itemChanged(item);
}

void QListWidget_Connect_ItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::itemChanged, [self, slotFunc](QListWidgetItem* item) {
        QListWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QListWidget_Connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*, QListWidgetItem*)>(slot);
    QListWidget::connect(self, &QListWidget::currentItemChanged, [self, slotFunc](QListWidgetItem* current, QListWidgetItem* previous) {
        QListWidgetItem* sigval1 = current;
        QListWidgetItem* sigval2 = previous;
        slotFunc(self, sigval1, sigval2);
    });
}

void QListWidget_CurrentTextChanged(QListWidget* self, const libqt_string currentText) {
    QString currentText_QString = QString::fromUtf8(currentText.data, currentText.len);
    self->currentTextChanged(currentText_QString);
}

void QListWidget_Connect_CurrentTextChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, libqt_string) = reinterpret_cast<void (*)(QListWidget*, libqt_string)>(slot);
    QListWidget::connect(self, &QListWidget::currentTextChanged, [self, slotFunc](const QString& currentText) {
        const QString currentText_ret = currentText;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray currentText_b = currentText_ret.toUtf8();
        libqt_string currentText_str;
        currentText_str.len = currentText_b.length();
        currentText_str.data = static_cast<const char*>(malloc((currentText_str.len + 1) * sizeof(char)));
        memcpy((void*)currentText_str.data, currentText_b.data(), currentText_str.len);
        ((char*)currentText_str.data)[currentText_str.len] = '\0';
        libqt_string sigval1 = currentText_str;
        slotFunc(self, sigval1);
    });
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
    self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_Connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, int) = reinterpret_cast<void (*)(QListWidget*, int)>(slot);
    QListWidget::connect(self, &QListWidget::currentRowChanged, [self, slotFunc](int currentRow) {
        int sigval1 = currentRow;
        slotFunc(self, sigval1);
    });
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
    self->itemSelectionChanged();
}

void QListWidget_Connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*) = reinterpret_cast<void (*)(QListWidget*)>(slot);
    QListWidget::connect(self, &QListWidget::itemSelectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QListWidget_Tr2(const char* s, const char* c) {
    QString _ret = QListWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QListWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidget_SortItems1(QListWidget* self, int order) {
    self->sortItems(static_cast<Qt::SortOrder>(order));
}

void QListWidget_ScrollToItem2(QListWidget* self, const QListWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setSelectionModel(selectionModel);
    } else {
        self->QListWidget::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetSelectionModel_IsBase(true);
        vqlistwidget->setSelectionModel(selectionModel);
    } else {
        self->QListWidget::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelectionModel(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DropEvent(QListWidget* self, QDropEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->dropEvent(event);
    } else {
        ((VirtualQListWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseDropEvent(QListWidget* self, QDropEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropEvent_IsBase(true);
        vqlistwidget->dropEvent(event);
    } else {
        ((VirtualQListWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_Event(QListWidget* self, QEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->event(e);
    } else {
        return ((VirtualQListWidget*)self)->event(e);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEvent(QListWidget* self, QEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Event_IsBase(true);
        return vqlistwidget->event(e);
    } else {
        return ((VirtualQListWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Event_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QListWidget_MimeTypes(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        QList<QString> _ret = vqlistwidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = ((VirtualQListWidget*)self)->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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

// Base class handler implementation
libqt_list /* of libqt_string */ QListWidget_QBaseMimeTypes(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MimeTypes_IsBase(true);
        QList<QString> _ret = vqlistwidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
            memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
            ((char*)_lv_str.data)[_lv_str.len] = '\0';
            _arr[i] = _lv_str;
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QString> _ret = ((VirtualQListWidget*)self)->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            QString _lv_ret = _ret[i];
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray _lv_b = _lv_ret.toUtf8();
            libqt_string _lv_str;
            _lv_str.len = _lv_b.length();
            _lv_str.data = static_cast<const char*>(malloc((_lv_str.len + 1) * sizeof(char)));
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
void QListWidget_OnMimeTypes(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MimeTypes_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->mimeData(items_QList);
    } else {
        return ((VirtualQListWidget*)self)->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* QListWidget_QBaseMimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MimeData_IsBase(true);
        return vqlistwidget->mimeData(items_QList);
    } else {
        return ((VirtualQListWidget*)self)->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeData(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualQListWidget*)self)->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool QListWidget_QBaseDropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropMimeData_IsBase(true);
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualQListWidget*)self)->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropMimeData(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropMimeData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SupportedDropActions(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return static_cast<int>(vqlistwidget->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->supportedDropActions());
    }
}

// Base class handler implementation
int QListWidget_QBaseSupportedDropActions(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqlistwidget->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSupportedDropActions(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QListWidget_VisualRect(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QRect(vqlistwidget->visualRect(*index));
    } else {
        return new QRect(((VirtualQListWidget*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QListWidget_QBaseVisualRect(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VisualRect_IsBase(true);
        return new QRect(vqlistwidget->visualRect(*index));
    } else {
        return new QRect(((VirtualQListWidget*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRect(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VisualRect_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollTo(QListWidget* self, const QModelIndex* index, int hint) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollTo(QListWidget* self, const QModelIndex* index, int hint) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollTo_IsBase(true);
        vqlistwidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollTo(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollTo_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListWidget_IndexAt(const QListWidget* self, const QPoint* p) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QModelIndex(vqlistwidget->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQListWidget*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QListWidget_QBaseIndexAt(const QListWidget* self, const QPoint* p) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IndexAt_IsBase(true);
        return new QModelIndex(vqlistwidget->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQListWidget*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIndexAt(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IndexAt_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DoItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->doItemsLayout();
    } else {
        self->QListWidget::doItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseDoItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DoItemsLayout_IsBase(true);
        vqlistwidget->doItemsLayout();
    } else {
        self->QListWidget::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDoItemsLayout(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DoItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Reset(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->reset();
    } else {
        self->QListWidget::reset();
    }
}

// Base class handler implementation
void QListWidget_QBaseReset(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Reset_IsBase(true);
        vqlistwidget->reset();
    } else {
        self->QListWidget::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnReset(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Reset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetRootIndex(QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setRootIndex(*index);
    } else {
        self->QListWidget::setRootIndex(*index);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetRootIndex(QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetRootIndex_IsBase(true);
        vqlistwidget->setRootIndex(*index);
    } else {
        self->QListWidget::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetRootIndex(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetRootIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollContentsBy(QListWidget* self, int dx, int dy) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollContentsBy(QListWidget* self, int dx, int dy) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollContentsBy_IsBase(true);
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollContentsBy(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQListWidget*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QListWidget_QBaseDataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DataChanged_IsBase(true);
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        ((VirtualQListWidget*)self)->dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDataChanged(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DataChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_RowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListWidget*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListWidget_QBaseRowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RowsInserted_IsBase(true);
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListWidget*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsInserted(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RowsInserted_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_RowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListWidget*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QListWidget_QBaseRowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RowsAboutToBeRemoved_IsBase(true);
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQListWidget*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsAboutToBeRemoved(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->mouseMoveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->mouseMoveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseMoveEvent_IsBase(true);
        vqlistwidget->mouseMoveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->mouseMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseMoveEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->mouseReleaseEvent(e);
    } else {
        ((VirtualQListWidget*)self)->mouseReleaseEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseReleaseEvent_IsBase(true);
        vqlistwidget->mouseReleaseEvent(e);
    } else {
        ((VirtualQListWidget*)self)->mouseReleaseEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseReleaseEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_WheelEvent(QListWidget* self, QWheelEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->wheelEvent(e);
    } else {
        ((VirtualQListWidget*)self)->wheelEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseWheelEvent(QListWidget* self, QWheelEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_WheelEvent_IsBase(true);
        vqlistwidget->wheelEvent(e);
    } else {
        ((VirtualQListWidget*)self)->wheelEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnWheelEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_WheelEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_TimerEvent(QListWidget* self, QTimerEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->timerEvent(e);
    } else {
        ((VirtualQListWidget*)self)->timerEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseTimerEvent(QListWidget* self, QTimerEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_TimerEvent_IsBase(true);
        vqlistwidget->timerEvent(e);
    } else {
        ((VirtualQListWidget*)self)->timerEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTimerEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_TimerEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ResizeEvent(QListWidget* self, QResizeEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->resizeEvent(e);
    } else {
        ((VirtualQListWidget*)self)->resizeEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseResizeEvent(QListWidget* self, QResizeEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ResizeEvent_IsBase(true);
        vqlistwidget->resizeEvent(e);
    } else {
        ((VirtualQListWidget*)self)->resizeEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnResizeEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->dragMoveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->dragMoveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragMoveEvent_IsBase(true);
        vqlistwidget->dragMoveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->dragMoveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragMoveEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->dragLeaveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->dragLeaveEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragLeaveEvent_IsBase(true);
        vqlistwidget->dragLeaveEvent(e);
    } else {
        ((VirtualQListWidget*)self)->dragLeaveEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragLeaveEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StartDrag(QListWidget* self, int supportedActions) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQListWidget*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QListWidget_QBaseStartDrag(QListWidget* self, int supportedActions) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StartDrag_IsBase(true);
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQListWidget*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStartDrag(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StartDrag_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->initViewItemOption(option);
    } else {
        ((VirtualQListWidget*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitViewItemOption_IsBase(true);
        vqlistwidget->initViewItemOption(option);
    } else {
        ((VirtualQListWidget*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitViewItemOption(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitViewItemOption_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_PaintEvent(QListWidget* self, QPaintEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->paintEvent(e);
    } else {
        ((VirtualQListWidget*)self)->paintEvent(e);
    }
}

// Base class handler implementation
void QListWidget_QBasePaintEvent(QListWidget* self, QPaintEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_PaintEvent_IsBase(true);
        vqlistwidget->paintEvent(e);
    } else {
        ((VirtualQListWidget*)self)->paintEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_PaintEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_HorizontalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->horizontalOffset();
    } else {
        return ((VirtualQListWidget*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int QListWidget_QBaseHorizontalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalOffset_IsBase(true);
        return vqlistwidget->horizontalOffset();
    } else {
        return ((VirtualQListWidget*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalOffset(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_VerticalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->verticalOffset();
    } else {
        return ((VirtualQListWidget*)self)->verticalOffset();
    }
}

// Base class handler implementation
int QListWidget_QBaseVerticalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalOffset_IsBase(true);
        return vqlistwidget->verticalOffset();
    } else {
        return ((VirtualQListWidget*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalOffset(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QListWidget_MoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QModelIndex(vqlistwidget->moveCursor(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QListWidget_QBaseMoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MoveCursor_IsBase(true);
        return new QModelIndex(vqlistwidget->moveCursor(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveCursor(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MoveCursor_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetSelection(QListWidget* self, const QRect* rect, int command) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQListWidget*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetSelection(QListWidget* self, const QRect* rect, int command) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetSelection_IsBase(true);
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQListWidget*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelection(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetSelection_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QListWidget_VisualRegionForSelection(const QListWidget* self, const QItemSelection* selection) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QRegion(vqlistwidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QListWidget_QBaseVisualRegionForSelection(const QListWidget* self, const QItemSelection* selection) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqlistwidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRegionForSelection(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_SelectedIndexes(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        QList<QModelIndex> _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQListWidget*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_QBaseSelectedIndexes(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqlistwidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQListWidget*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (size_t i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectedIndexes(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectedIndexes_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->updateGeometries();
    } else {
        ((VirtualQListWidget*)self)->updateGeometries();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateGeometries_IsBase(true);
        vqlistwidget->updateGeometries();
    } else {
        ((VirtualQListWidget*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateGeometries(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateGeometries_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_IsIndexHidden(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->isIndexHidden(*index);
    } else {
        return ((VirtualQListWidget*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QListWidget_QBaseIsIndexHidden(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IsIndexHidden_IsBase(true);
        return vqlistwidget->isIndexHidden(*index);
    } else {
        return ((VirtualQListWidget*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIsIndexHidden(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IsIndexHidden_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQListWidget*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QListWidget_QBaseSelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectionChanged_IsBase(true);
        vqlistwidget->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQListWidget*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionChanged(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->currentChanged(*current, *previous);
    } else {
        ((VirtualQListWidget*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QListWidget_QBaseCurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CurrentChanged_IsBase(true);
        vqlistwidget->currentChanged(*current, *previous);
    } else {
        ((VirtualQListWidget*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCurrentChanged(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CurrentChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_ViewportSizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QSize(vqlistwidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QListWidget_QBaseViewportSizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vqlistwidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportSizeHint(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyboardSearch(QListWidget* self, const libqt_string search) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->keyboardSearch(search_QString);
    } else {
        self->QListWidget::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyboardSearch(QListWidget* self, const libqt_string search) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyboardSearch_IsBase(true);
        vqlistwidget->keyboardSearch(search_QString);
    } else {
        self->QListWidget::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyboardSearch(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyboardSearch_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SizeHintForRow(const QListWidget* self, int row) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QListWidget::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QListWidget_QBaseSizeHintForRow(const QListWidget* self, int row) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHintForRow_IsBase(true);
        return vqlistwidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QListWidget::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForRow(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHintForRow_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SizeHintForColumn(const QListWidget* self, int column) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QListWidget::sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QListWidget_QBaseSizeHintForColumn(const QListWidget* self, int column) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHintForColumn_IsBase(true);
        return vqlistwidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return self->QListWidget::sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForColumn(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHintForColumn_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QListWidget_ItemDelegateForIndex(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->itemDelegateForIndex(*index);
    } else {
        return self->QListWidget::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QListWidget_QBaseItemDelegateForIndex(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ItemDelegateForIndex_IsBase(true);
        return vqlistwidget->itemDelegateForIndex(*index);
    } else {
        return self->QListWidget::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnItemDelegateForIndex(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QListWidget_InputMethodQuery(const QListWidget* self, int query) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QVariant(vqlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QListWidget_QBaseInputMethodQuery(const QListWidget* self, int query) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqlistwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQListWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodQuery(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SelectAll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->selectAll();
    } else {
        self->QListWidget::selectAll();
    }
}

// Base class handler implementation
void QListWidget_QBaseSelectAll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectAll_IsBase(true);
        vqlistwidget->selectAll();
    } else {
        self->QListWidget::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectAll(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectAll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateEditorData(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->updateEditorData();
    } else {
        ((VirtualQListWidget*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateEditorData(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateEditorData_IsBase(true);
        vqlistwidget->updateEditorData();
    } else {
        ((VirtualQListWidget*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorData(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateEditorData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateEditorGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->updateEditorGeometries();
    } else {
        ((VirtualQListWidget*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateEditorGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateEditorGeometries_IsBase(true);
        vqlistwidget->updateEditorGeometries();
    } else {
        ((VirtualQListWidget*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorGeometries(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListWidget*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListWidget_QBaseVerticalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalScrollbarAction_IsBase(true);
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListWidget*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarAction(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListWidget*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QListWidget_QBaseHorizontalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalScrollbarAction_IsBase(true);
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQListWidget*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarAction(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListWidget*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListWidget_QBaseVerticalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalScrollbarValueChanged_IsBase(true);
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListWidget*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListWidget*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QListWidget_QBaseHorizontalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalScrollbarValueChanged_IsBase(true);
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQListWidget*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CloseEditor(QListWidget* self, QWidget* editor, int hint) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQListWidget*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QListWidget_QBaseCloseEditor(QListWidget* self, QWidget* editor, int hint) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CloseEditor_IsBase(true);
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQListWidget*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEditor(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CloseEditor_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CommitData(QListWidget* self, QWidget* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->commitData(editor);
    } else {
        ((VirtualQListWidget*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QListWidget_QBaseCommitData(QListWidget* self, QWidget* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CommitData_IsBase(true);
        vqlistwidget->commitData(editor);
    } else {
        ((VirtualQListWidget*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCommitData(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CommitData_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_EditorDestroyed(QListWidget* self, QObject* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->editorDestroyed(editor);
    } else {
        ((VirtualQListWidget*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QListWidget_QBaseEditorDestroyed(QListWidget* self, QObject* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EditorDestroyed_IsBase(true);
        vqlistwidget->editorDestroyed(editor);
    } else {
        ((VirtualQListWidget*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEditorDestroyed(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EditorDestroyed_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_Edit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQListWidget*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEdit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Edit2_IsBase(true);
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQListWidget*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEdit2(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Edit2_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QListWidget_QBaseSelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectionCommand_IsBase(true);
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionCommand(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SelectionCommand_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusNextPrevChild(QListWidget* self, bool next) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQListWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusNextPrevChild(QListWidget* self, bool next) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusNextPrevChild_IsBase(true);
        return vqlistwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQListWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusNextPrevChild(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_ViewportEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->viewportEvent(event);
    } else {
        return ((VirtualQListWidget*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseViewportEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportEvent_IsBase(true);
        return vqlistwidget->viewportEvent(event);
    } else {
        return ((VirtualQListWidget*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MousePressEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->mousePressEvent(event);
    } else {
        ((VirtualQListWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMousePressEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MousePressEvent_IsBase(true);
        vqlistwidget->mousePressEvent(event);
    } else {
        ((VirtualQListWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMousePressEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseDoubleClickEvent_IsBase(true);
        vqlistwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQListWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseDoubleClickEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->dragEnterEvent(event);
    } else {
        ((VirtualQListWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseDragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragEnterEvent_IsBase(true);
        vqlistwidget->dragEnterEvent(event);
    } else {
        ((VirtualQListWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragEnterEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_FocusInEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->focusInEvent(event);
    } else {
        ((VirtualQListWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseFocusInEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusInEvent_IsBase(true);
        vqlistwidget->focusInEvent(event);
    } else {
        ((VirtualQListWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusInEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_FocusOutEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->focusOutEvent(event);
    } else {
        ((VirtualQListWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseFocusOutEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusOutEvent_IsBase(true);
        vqlistwidget->focusOutEvent(event);
    } else {
        ((VirtualQListWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusOutEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyPressEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->keyPressEvent(event);
    } else {
        ((VirtualQListWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyPressEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyPressEvent_IsBase(true);
        vqlistwidget->keyPressEvent(event);
    } else {
        ((VirtualQListWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyPressEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->inputMethodEvent(event);
    } else {
        ((VirtualQListWidget*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseInputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InputMethodEvent_IsBase(true);
        vqlistwidget->inputMethodEvent(event);
    } else {
        ((VirtualQListWidget*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_EventFilter(QListWidget* self, QObject* object, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->eventFilter(object, event);
    } else {
        return ((VirtualQListWidget*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QListWidget_QBaseEventFilter(QListWidget* self, QObject* object, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EventFilter_IsBase(true);
        return vqlistwidget->eventFilter(object, event);
    } else {
        return ((VirtualQListWidget*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEventFilter(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EventFilter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_MinimumSizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QSize(vqlistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQListWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QListWidget_QBaseMinimumSizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqlistwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQListWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMinimumSizeHint(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_SizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QSize(vqlistwidget->sizeHint());
    } else {
        return new QSize(((VirtualQListWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QListWidget_QBaseSizeHint(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHint_IsBase(true);
        return new QSize(vqlistwidget->sizeHint());
    } else {
        return new QSize(((VirtualQListWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHint(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SizeHint_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetupViewport(QListWidget* self, QWidget* viewport) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setupViewport(viewport);
    } else {
        self->QListWidget::setupViewport(viewport);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetupViewport(QListWidget* self, QWidget* viewport) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetupViewport_IsBase(true);
        vqlistwidget->setupViewport(viewport);
    } else {
        self->QListWidget::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetupViewport(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetupViewport_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->contextMenuEvent(param1);
    } else {
        ((VirtualQListWidget*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ContextMenuEvent_IsBase(true);
        vqlistwidget->contextMenuEvent(param1);
    } else {
        ((VirtualQListWidget*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnContextMenuEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ChangeEvent(QListWidget* self, QEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->changeEvent(param1);
    } else {
        ((VirtualQListWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseChangeEvent(QListWidget* self, QEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ChangeEvent_IsBase(true);
        vqlistwidget->changeEvent(param1);
    } else {
        ((VirtualQListWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChangeEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->initStyleOption(option);
    } else {
        ((VirtualQListWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitStyleOption_IsBase(true);
        vqlistwidget->initStyleOption(option);
    } else {
        ((VirtualQListWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitStyleOption(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_DevType(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->devType();
    } else {
        return self->QListWidget::devType();
    }
}

// Base class handler implementation
int QListWidget_QBaseDevType(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DevType_IsBase(true);
        return vqlistwidget->devType();
    } else {
        return self->QListWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDevType(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DevType_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetVisible(QListWidget* self, bool visible) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setVisible(visible);
    } else {
        self->QListWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetVisible(QListWidget* self, bool visible) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetVisible_IsBase(true);
        vqlistwidget->setVisible(visible);
    } else {
        self->QListWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetVisible(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetVisible_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_HeightForWidth(const QListWidget* self, int param1) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QListWidget_QBaseHeightForWidth(const QListWidget* self, int param1) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HeightForWidth_IsBase(true);
        return vqlistwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QListWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHeightForWidth(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_HasHeightForWidth(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->hasHeightForWidth();
    } else {
        return self->QListWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QListWidget_QBaseHasHeightForWidth(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HasHeightForWidth_IsBase(true);
        return vqlistwidget->hasHeightForWidth();
    } else {
        return self->QListWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHasHeightForWidth(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QListWidget_PaintEngine(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->paintEngine();
    } else {
        return self->QListWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QListWidget_QBasePaintEngine(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_PaintEngine_IsBase(true);
        return vqlistwidget->paintEngine();
    } else {
        return self->QListWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEngine(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_PaintEngine_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_KeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQListWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseKeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyReleaseEvent_IsBase(true);
        vqlistwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQListWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyReleaseEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_EnterEvent(QListWidget* self, QEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->enterEvent(event);
    } else {
        ((VirtualQListWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseEnterEvent(QListWidget* self, QEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EnterEvent_IsBase(true);
        vqlistwidget->enterEvent(event);
    } else {
        ((VirtualQListWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEnterEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_EnterEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_LeaveEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->leaveEvent(event);
    } else {
        ((VirtualQListWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseLeaveEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_LeaveEvent_IsBase(true);
        vqlistwidget->leaveEvent(event);
    } else {
        ((VirtualQListWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnLeaveEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_MoveEvent(QListWidget* self, QMoveEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->moveEvent(event);
    } else {
        ((VirtualQListWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseMoveEvent(QListWidget* self, QMoveEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MoveEvent_IsBase(true);
        vqlistwidget->moveEvent(event);
    } else {
        ((VirtualQListWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_MoveEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CloseEvent(QListWidget* self, QCloseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->closeEvent(event);
    } else {
        ((VirtualQListWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseCloseEvent(QListWidget* self, QCloseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CloseEvent_IsBase(true);
        vqlistwidget->closeEvent(event);
    } else {
        ((VirtualQListWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CloseEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_TabletEvent(QListWidget* self, QTabletEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->tabletEvent(event);
    } else {
        ((VirtualQListWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseTabletEvent(QListWidget* self, QTabletEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_TabletEvent_IsBase(true);
        vqlistwidget->tabletEvent(event);
    } else {
        ((VirtualQListWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTabletEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_TabletEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ActionEvent(QListWidget* self, QActionEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->actionEvent(event);
    } else {
        ((VirtualQListWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseActionEvent(QListWidget* self, QActionEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ActionEvent_IsBase(true);
        vqlistwidget->actionEvent(event);
    } else {
        ((VirtualQListWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnActionEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ActionEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ShowEvent(QListWidget* self, QShowEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->showEvent(event);
    } else {
        ((VirtualQListWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseShowEvent(QListWidget* self, QShowEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ShowEvent_IsBase(true);
        vqlistwidget->showEvent(event);
    } else {
        ((VirtualQListWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnShowEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ShowEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_HideEvent(QListWidget* self, QHideEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->hideEvent(event);
    } else {
        ((VirtualQListWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseHideEvent(QListWidget* self, QHideEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HideEvent_IsBase(true);
        vqlistwidget->hideEvent(event);
    } else {
        ((VirtualQListWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHideEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_HideEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_NativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QListWidget_QBaseNativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_NativeEvent_IsBase(true);
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQListWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnNativeEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_NativeEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_Metric(const QListWidget* self, int param1) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QListWidget_QBaseMetric(const QListWidget* self, int param1) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Metric_IsBase(true);
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQListWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetric(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Metric_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_InitPainter(const QListWidget* self, QPainter* painter) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->initPainter(painter);
    } else {
        ((VirtualQListWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QListWidget_QBaseInitPainter(const QListWidget* self, QPainter* painter) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitPainter_IsBase(true);
        vqlistwidget->initPainter(painter);
    } else {
        ((VirtualQListWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitPainter(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_InitPainter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QListWidget_Redirected(const QListWidget* self, QPoint* offset) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->redirected(offset);
    } else {
        return ((VirtualQListWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QListWidget_QBaseRedirected(const QListWidget* self, QPoint* offset) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Redirected_IsBase(true);
        return vqlistwidget->redirected(offset);
    } else {
        return ((VirtualQListWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRedirected(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Redirected_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QListWidget_SharedPainter(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->sharedPainter();
    } else {
        return ((VirtualQListWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QListWidget_QBaseSharedPainter(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SharedPainter_IsBase(true);
        return vqlistwidget->sharedPainter();
    } else {
        return ((VirtualQListWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSharedPainter(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SharedPainter_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ChildEvent(QListWidget* self, QChildEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->childEvent(event);
    } else {
        ((VirtualQListWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseChildEvent(QListWidget* self, QChildEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ChildEvent_IsBase(true);
        vqlistwidget->childEvent(event);
    } else {
        ((VirtualQListWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChildEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ChildEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_CustomEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->customEvent(event);
    } else {
        ((VirtualQListWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QListWidget_QBaseCustomEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CustomEvent_IsBase(true);
        vqlistwidget->customEvent(event);
    } else {
        ((VirtualQListWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCustomEvent(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_CustomEvent_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ConnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->connectNotify(*signal);
    } else {
        ((VirtualQListWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QListWidget_QBaseConnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ConnectNotify_IsBase(true);
        vqlistwidget->connectNotify(*signal);
    } else {
        ((VirtualQListWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnConnectNotify(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DisconnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQListWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QListWidget_QBaseDisconnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DisconnectNotify_IsBase(true);
        vqlistwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQListWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDisconnectNotify(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ResizeContents(QListWidget* self, int width, int height) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQListWidget*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Base class handler implementation
void QListWidget_QBaseResizeContents(QListWidget* self, int width, int height) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ResizeContents_IsBase(true);
        vqlistwidget->resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else {
        ((VirtualQListWidget*)self)->resizeContents(static_cast<int>(width), static_cast<int>(height));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnResizeContents(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ResizeContents_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ResizeContents_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QListWidget_ContentsSize(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QSize(vqlistwidget->contentsSize());
    }
    return {};
}

// Base class handler implementation
QSize* QListWidget_QBaseContentsSize(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ContentsSize_IsBase(true);
        return new QSize(vqlistwidget->contentsSize());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnContentsSize(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ContentsSize_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ContentsSize_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QListWidget_RectForIndex(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QRect(vqlistwidget->rectForIndex(*index));
    }
    return {};
}

// Base class handler implementation
QRect* QListWidget_QBaseRectForIndex(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RectForIndex_IsBase(true);
        return new QRect(vqlistwidget->rectForIndex(*index));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRectForIndex(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_RectForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_RectForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQListWidget*)self)->setPositionForIndex(*position, *index);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetPositionForIndex_IsBase(true);
        vqlistwidget->setPositionForIndex(*position, *index);
    } else {
        ((VirtualQListWidget*)self)->setPositionForIndex(*position, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetPositionForIndex(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetPositionForIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetPositionForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_State(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return static_cast<int>(vqlistwidget->state());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->state());
    }
}

// Base class handler implementation
int QListWidget_QBaseState(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_State_IsBase(true);
        return static_cast<int>(vqlistwidget->state());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnState(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_State_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetState(QListWidget* self, int state) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    } else {
        ((VirtualQListWidget*)self)->setState(static_cast<VirtualQListWidget::State>(state));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetState(QListWidget* self, int state) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetState_IsBase(true);
        vqlistwidget->setState(static_cast<VirtualQListWidget::State>(state));
    } else {
        ((VirtualQListWidget*)self)->setState(static_cast<VirtualQListWidget::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetState(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetState_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScheduleDelayedItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQListWidget*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseScheduleDelayedItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScheduleDelayedItemsLayout_IsBase(true);
        vqlistwidget->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQListWidget*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScheduleDelayedItemsLayout(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ExecuteDelayedItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->executeDelayedItemsLayout();
    } else {
        ((VirtualQListWidget*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QListWidget_QBaseExecuteDelayedItemsLayout(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ExecuteDelayedItemsLayout_IsBase(true);
        vqlistwidget->executeDelayedItemsLayout();
    } else {
        ((VirtualQListWidget*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnExecuteDelayedItemsLayout(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetDirtyRegion(QListWidget* self, const QRegion* region) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setDirtyRegion(*region);
    } else {
        ((VirtualQListWidget*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QListWidget_QBaseSetDirtyRegion(QListWidget* self, const QRegion* region) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetDirtyRegion_IsBase(true);
        vqlistwidget->setDirtyRegion(*region);
    } else {
        ((VirtualQListWidget*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetDirtyRegion(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetDirtyRegion_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_ScrollDirtyRegion(QListWidget* self, int dx, int dy) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListWidget*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QListWidget_QBaseScrollDirtyRegion(QListWidget* self, int dx, int dy) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollDirtyRegion_IsBase(true);
        vqlistwidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQListWidget*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollDirtyRegion(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QListWidget_DirtyRegionOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QPoint(vqlistwidget->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QListWidget_QBaseDirtyRegionOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqlistwidget->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDirtyRegionOffset(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StartAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->startAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseStartAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StartAutoScroll_IsBase(true);
        vqlistwidget->startAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStartAutoScroll(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StartAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_StopAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->stopAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseStopAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StopAutoScroll_IsBase(true);
        vqlistwidget->stopAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStopAutoScroll(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_StopAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DoAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->doAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QListWidget_QBaseDoAutoScroll(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DoAutoScroll_IsBase(true);
        vqlistwidget->doAutoScroll();
    } else {
        ((VirtualQListWidget*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDoAutoScroll(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DoAutoScroll_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_DropIndicatorPosition(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QListWidget_QBaseDropIndicatorPosition(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqlistwidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQListWidget*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropIndicatorPosition(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_SetViewportMargins(QListWidget* self, int left, int top, int right, int bottom) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQListWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QListWidget_QBaseSetViewportMargins(QListWidget* self, int left, int top, int right, int bottom) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetViewportMargins_IsBase(true);
        vqlistwidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQListWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetViewportMargins(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QListWidget_ViewportMargins(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return new QMargins(vqlistwidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QListWidget_QBaseViewportMargins(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportMargins_IsBase(true);
        return new QMargins(vqlistwidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportMargins(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_ViewportMargins_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_DrawFrame(QListWidget* self, QPainter* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->drawFrame(param1);
    } else {
        ((VirtualQListWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QListWidget_QBaseDrawFrame(QListWidget* self, QPainter* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DrawFrame_IsBase(true);
        vqlistwidget->drawFrame(param1);
    } else {
        ((VirtualQListWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDrawFrame(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_DrawFrame_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_UpdateMicroFocus(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->updateMicroFocus();
    } else {
        ((VirtualQListWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QListWidget_QBaseUpdateMicroFocus(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateMicroFocus_IsBase(true);
        vqlistwidget->updateMicroFocus();
    } else {
        ((VirtualQListWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateMicroFocus(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Create(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->create();
    } else {
        ((VirtualQListWidget*)self)->create();
    }
}

// Base class handler implementation
void QListWidget_QBaseCreate(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Create_IsBase(true);
        vqlistwidget->create();
    } else {
        ((VirtualQListWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCreate(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Create_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QListWidget_Destroy(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->destroy();
    } else {
        ((VirtualQListWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QListWidget_QBaseDestroy(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Destroy_IsBase(true);
        vqlistwidget->destroy();
    } else {
        ((VirtualQListWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDestroy(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Destroy_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusNextChild(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->focusNextChild();
    } else {
        return ((VirtualQListWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusNextChild(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusNextChild_IsBase(true);
        return vqlistwidget->focusNextChild();
    } else {
        return ((VirtualQListWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusNextChild(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_FocusPreviousChild(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->focusPreviousChild();
    } else {
        return ((VirtualQListWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QListWidget_QBaseFocusPreviousChild(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusPreviousChild_IsBase(true);
        return vqlistwidget->focusPreviousChild();
    } else {
        return ((VirtualQListWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusPreviousChild(QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QListWidget_Sender(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->sender();
    } else {
        return ((VirtualQListWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QListWidget_QBaseSender(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Sender_IsBase(true);
        return vqlistwidget->sender();
    } else {
        return ((VirtualQListWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSender(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Sender_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_SenderSignalIndex(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->senderSignalIndex();
    } else {
        return ((VirtualQListWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QListWidget_QBaseSenderSignalIndex(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SenderSignalIndex_IsBase(true);
        return vqlistwidget->senderSignalIndex();
    } else {
        return ((VirtualQListWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSenderSignalIndex(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QListWidget_Receivers(const QListWidget* self, const char* signal) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->receivers(signal);
    } else {
        return ((VirtualQListWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QListWidget_QBaseReceivers(const QListWidget* self, const char* signal) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Receivers_IsBase(true);
        return vqlistwidget->receivers(signal);
    } else {
        return ((VirtualQListWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnReceivers(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_Receivers_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QListWidget_IsSignalConnected(const QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQListWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QListWidget_QBaseIsSignalConnected(const QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IsSignalConnected_IsBase(true);
        return vqlistwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQListWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIsSignalConnected(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QListWidget_GetDecodedMetricF(const QListWidget* self, int metricA, int metricB) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        return vqlistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QListWidget_QBaseGetDecodedMetricF(const QListWidget* self, int metricA, int metricB) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_GetDecodedMetricF_IsBase(true);
        return vqlistwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQListWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnGetDecodedMetricF(const QListWidget* self, intptr_t slot) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget && vqlistwidget->isVirtualQListWidget) {
        vqlistwidget->setQListWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQListWidget::QListWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QListWidget_Delete(QListWidget* self) {
    delete self;
}
