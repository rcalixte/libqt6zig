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
#include <QTreeView>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtreewidget.h>
#include "libqtreewidget.h"
#include "libqtreewidget.hxx"

QTreeWidgetItem* QTreeWidgetItem_new() {
    return new VirtualQTreeWidgetItem();
}

QTreeWidgetItem* QTreeWidgetItem_new2(const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new3(QTreeWidget* treeview) {
    return new VirtualQTreeWidgetItem(treeview);
}

QTreeWidgetItem* QTreeWidgetItem_new4(QTreeWidget* treeview, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(treeview, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new5(QTreeWidget* treeview, QTreeWidgetItem* after) {
    return new VirtualQTreeWidgetItem(treeview, after);
}

QTreeWidgetItem* QTreeWidgetItem_new6(QTreeWidgetItem* parent) {
    return new VirtualQTreeWidgetItem(parent);
}

QTreeWidgetItem* QTreeWidgetItem_new7(QTreeWidgetItem* parent, const libqt_list /* of libqt_string */ strings) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(parent, strings_QList);
}

QTreeWidgetItem* QTreeWidgetItem_new8(QTreeWidgetItem* parent, QTreeWidgetItem* after) {
    return new VirtualQTreeWidgetItem(parent, after);
}

QTreeWidgetItem* QTreeWidgetItem_new9(const QTreeWidgetItem* other) {
    return new VirtualQTreeWidgetItem(*other);
}

QTreeWidgetItem* QTreeWidgetItem_new10(int typeVal) {
    return new VirtualQTreeWidgetItem(static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new11(const libqt_list /* of libqt_string */ strings, int typeVal) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new12(QTreeWidget* treeview, int typeVal) {
    return new VirtualQTreeWidgetItem(treeview, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new13(QTreeWidget* treeview, const libqt_list /* of libqt_string */ strings, int typeVal) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(treeview, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new14(QTreeWidget* treeview, QTreeWidgetItem* after, int typeVal) {
    return new VirtualQTreeWidgetItem(treeview, after, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new15(QTreeWidgetItem* parent, int typeVal) {
    return new VirtualQTreeWidgetItem(parent, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new16(QTreeWidgetItem* parent, const libqt_list /* of libqt_string */ strings, int typeVal) {
    QList<QString> strings_QList;
    strings_QList.reserve(strings.len);
    libqt_string* strings_arr = static_cast<libqt_string*>(strings.data);
    for (size_t i = 0; i < strings.len; ++i) {
        QString strings_arr_i_QString = QString::fromUtf8(strings_arr[i].data, strings_arr[i].len);
        strings_QList.push_back(strings_arr_i_QString);
    }
    return new VirtualQTreeWidgetItem(parent, strings_QList, static_cast<int>(typeVal));
}

QTreeWidgetItem* QTreeWidgetItem_new17(QTreeWidgetItem* parent, QTreeWidgetItem* after, int typeVal) {
    return new VirtualQTreeWidgetItem(parent, after, static_cast<int>(typeVal));
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
    return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool selectVal) {
    self->setSelected(selectVal);
}

bool QTreeWidgetItem_IsSelected(const QTreeWidgetItem* self) {
    return self->isSelected();
}

void QTreeWidgetItem_SetHidden(QTreeWidgetItem* self, bool hide) {
    self->setHidden(hide);
}

bool QTreeWidgetItem_IsHidden(const QTreeWidgetItem* self) {
    return self->isHidden();
}

void QTreeWidgetItem_SetExpanded(QTreeWidgetItem* self, bool expand) {
    self->setExpanded(expand);
}

bool QTreeWidgetItem_IsExpanded(const QTreeWidgetItem* self) {
    return self->isExpanded();
}

void QTreeWidgetItem_SetFirstColumnSpanned(QTreeWidgetItem* self, bool span) {
    self->setFirstColumnSpanned(span);
}

bool QTreeWidgetItem_IsFirstColumnSpanned(const QTreeWidgetItem* self) {
    return self->isFirstColumnSpanned();
}

void QTreeWidgetItem_SetDisabled(QTreeWidgetItem* self, bool disabled) {
    self->setDisabled(disabled);
}

bool QTreeWidgetItem_IsDisabled(const QTreeWidgetItem* self) {
    return self->isDisabled();
}

void QTreeWidgetItem_SetChildIndicatorPolicy(QTreeWidgetItem* self, int policy) {
    self->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(policy));
}

int QTreeWidgetItem_ChildIndicatorPolicy(const QTreeWidgetItem* self) {
    return static_cast<int>(self->childIndicatorPolicy());
}

int QTreeWidgetItem_Flags(const QTreeWidgetItem* self) {
    return static_cast<int>(self->flags());
}

void QTreeWidgetItem_SetFlags(QTreeWidgetItem* self, int flags) {
    self->setFlags(static_cast<Qt::ItemFlags>(flags));
}

libqt_string QTreeWidgetItem_Text(const QTreeWidgetItem* self, int column) {
    QString _ret = self->text(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetText(QTreeWidgetItem* self, int column, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<int>(column), text_QString);
}

QIcon* QTreeWidgetItem_Icon(const QTreeWidgetItem* self, int column) {
    return new QIcon(self->icon(static_cast<int>(column)));
}

void QTreeWidgetItem_SetIcon(QTreeWidgetItem* self, int column, const QIcon* icon) {
    self->setIcon(static_cast<int>(column), *icon);
}

libqt_string QTreeWidgetItem_StatusTip(const QTreeWidgetItem* self, int column) {
    QString _ret = self->statusTip(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetStatusTip(QTreeWidgetItem* self, int column, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(static_cast<int>(column), statusTip_QString);
}

libqt_string QTreeWidgetItem_ToolTip(const QTreeWidgetItem* self, int column) {
    QString _ret = self->toolTip(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetToolTip(QTreeWidgetItem* self, int column, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(static_cast<int>(column), toolTip_QString);
}

libqt_string QTreeWidgetItem_WhatsThis(const QTreeWidgetItem* self, int column) {
    QString _ret = self->whatsThis(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeWidgetItem_SetWhatsThis(QTreeWidgetItem* self, int column, const libqt_string whatsThis) {
    QString whatsThis_QString = QString::fromUtf8(whatsThis.data, whatsThis.len);
    self->setWhatsThis(static_cast<int>(column), whatsThis_QString);
}

QFont* QTreeWidgetItem_Font(const QTreeWidgetItem* self, int column) {
    return new QFont(self->font(static_cast<int>(column)));
}

void QTreeWidgetItem_SetFont(QTreeWidgetItem* self, int column, const QFont* font) {
    self->setFont(static_cast<int>(column), *font);
}

int QTreeWidgetItem_TextAlignment(const QTreeWidgetItem* self, int column) {
    return self->textAlignment(static_cast<int>(column));
}

void QTreeWidgetItem_SetTextAlignment(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<int>(alignment));
}

void QTreeWidgetItem_SetTextAlignment2(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<Qt::AlignmentFlag>(alignment));
}

void QTreeWidgetItem_SetTextAlignment3(QTreeWidgetItem* self, int column, int alignment) {
    self->setTextAlignment(static_cast<int>(column), static_cast<Qt::Alignment>(alignment));
}

QBrush* QTreeWidgetItem_Background(const QTreeWidgetItem* self, int column) {
    return new QBrush(self->background(static_cast<int>(column)));
}

void QTreeWidgetItem_SetBackground(QTreeWidgetItem* self, int column, const QBrush* brush) {
    self->setBackground(static_cast<int>(column), *brush);
}

QBrush* QTreeWidgetItem_Foreground(const QTreeWidgetItem* self, int column) {
    return new QBrush(self->foreground(static_cast<int>(column)));
}

void QTreeWidgetItem_SetForeground(QTreeWidgetItem* self, int column, const QBrush* brush) {
    self->setForeground(static_cast<int>(column), *brush);
}

int QTreeWidgetItem_CheckState(const QTreeWidgetItem* self, int column) {
    return static_cast<int>(self->checkState(static_cast<int>(column)));
}

void QTreeWidgetItem_SetCheckState(QTreeWidgetItem* self, int column, int state) {
    self->setCheckState(static_cast<int>(column), static_cast<Qt::CheckState>(state));
}

QSize* QTreeWidgetItem_SizeHint(const QTreeWidgetItem* self, int column) {
    return new QSize(self->sizeHint(static_cast<int>(column)));
}

void QTreeWidgetItem_SetSizeHint(QTreeWidgetItem* self, int column, const QSize* size) {
    self->setSizeHint(static_cast<int>(column), *size);
}

void QTreeWidgetItem_OperatorAssign(QTreeWidgetItem* self, const QTreeWidgetItem* other) {
    self->operator=(*other);
}

QTreeWidgetItem* QTreeWidgetItem_Parent(const QTreeWidgetItem* self) {
    return self->parent();
}

QTreeWidgetItem* QTreeWidgetItem_Child(const QTreeWidgetItem* self, int index) {
    return self->child(static_cast<int>(index));
}

int QTreeWidgetItem_ChildCount(const QTreeWidgetItem* self) {
    return self->childCount();
}

int QTreeWidgetItem_ColumnCount(const QTreeWidgetItem* self) {
    return self->columnCount();
}

int QTreeWidgetItem_IndexOfChild(const QTreeWidgetItem* self, QTreeWidgetItem* child) {
    return self->indexOfChild(child);
}

void QTreeWidgetItem_AddChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
    self->addChild(child);
}

void QTreeWidgetItem_InsertChild(QTreeWidgetItem* self, int index, QTreeWidgetItem* child) {
    self->insertChild(static_cast<int>(index), child);
}

void QTreeWidgetItem_RemoveChild(QTreeWidgetItem* self, QTreeWidgetItem* child) {
    self->removeChild(child);
}

QTreeWidgetItem* QTreeWidgetItem_TakeChild(QTreeWidgetItem* self, int index) {
    return self->takeChild(static_cast<int>(index));
}

void QTreeWidgetItem_AddChildren(QTreeWidgetItem* self, const libqt_list /* of QTreeWidgetItem* */ children) {
    QList<QTreeWidgetItem*> children_QList;
    children_QList.reserve(children.len);
    QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
    for (size_t i = 0; i < children.len; ++i) {
        children_QList.push_back(children_arr[i]);
    }
    self->addChildren(children_QList);
}

void QTreeWidgetItem_InsertChildren(QTreeWidgetItem* self, int index, const libqt_list /* of QTreeWidgetItem* */ children) {
    QList<QTreeWidgetItem*> children_QList;
    children_QList.reserve(children.len);
    QTreeWidgetItem** children_arr = static_cast<QTreeWidgetItem**>(children.data);
    for (size_t i = 0; i < children.len; ++i) {
        children_QList.push_back(children_arr[i]);
    }
    self->insertChildren(static_cast<int>(index), children_QList);
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidgetItem_TakeChildren(QTreeWidgetItem* self) {
    QList<QTreeWidgetItem*> _ret = self->takeChildren();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QTreeWidgetItem_Type(const QTreeWidgetItem* self) {
    return self->type();
}

void QTreeWidgetItem_SortChildren(QTreeWidgetItem* self, int column, int order) {
    self->sortChildren(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

// Derived class handler implementation
QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        return vqtreewidgetitem->clone();
    } else {
        return self->QTreeWidgetItem::clone();
    }
}

// Base class handler implementation
QTreeWidgetItem* QTreeWidgetItem_QBaseClone(const QTreeWidgetItem* self) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Clone_IsBase(true);
        return vqtreewidgetitem->clone();
    } else {
        return self->QTreeWidgetItem::clone();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnClone(const QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Clone_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Clone_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        return new QVariant(vqtreewidgetitem->data(static_cast<int>(column), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTreeWidgetItem*)self)->data(static_cast<int>(column), static_cast<int>(role)));
    }
}

// Base class handler implementation
QVariant* QTreeWidgetItem_QBaseData(const QTreeWidgetItem* self, int column, int role) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Data_IsBase(true);
        return new QVariant(vqtreewidgetitem->data(static_cast<int>(column), static_cast<int>(role)));
    } else {
        return new QVariant(((VirtualQTreeWidgetItem*)self)->data(static_cast<int>(column), static_cast<int>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnData(const QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Data_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Data_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    } else {
        self->QTreeWidgetItem::setData(static_cast<int>(column), static_cast<int>(role), *value);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseSetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_SetData_IsBase(true);
        vqtreewidgetitem->setData(static_cast<int>(column), static_cast<int>(role), *value);
    } else {
        self->QTreeWidgetItem::setData(static_cast<int>(column), static_cast<int>(role), *value);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnSetData(QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_SetData_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_SetData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        return vqtreewidgetitem->operator<(*other);
    } else {
        return self->QTreeWidgetItem::operator<(*other);
    }
}

// Base class handler implementation
bool QTreeWidgetItem_QBaseOperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_IsBase(true);
        return vqtreewidgetitem->operator<(*other);
    } else {
        return self->QTreeWidgetItem::operator<(*other);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnOperatorLesser(const QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_OperatorLesser_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_OperatorLesser_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->read(*in);
    } else {
        self->QTreeWidgetItem::read(*in);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseRead(QTreeWidgetItem* self, QDataStream* in) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Read_IsBase(true);
        vqtreewidgetitem->read(*in);
    } else {
        self->QTreeWidgetItem::read(*in);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnRead(QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Read_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Read_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->write(*out);
    } else {
        self->QTreeWidgetItem::write(*out);
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseWrite(const QTreeWidgetItem* self, QDataStream* out) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Write_IsBase(true);
        vqtreewidgetitem->write(*out);
    } else {
        self->QTreeWidgetItem::write(*out);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnWrite(const QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self));
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_Write_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Write_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->emitDataChanged();
    } else {
        ((VirtualQTreeWidgetItem*)self)->emitDataChanged();
    }
}

// Base class handler implementation
void QTreeWidgetItem_QBaseEmitDataChanged(QTreeWidgetItem* self) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_IsBase(true);
        vqtreewidgetitem->emitDataChanged();
    } else {
        ((VirtualQTreeWidgetItem*)self)->emitDataChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnEmitDataChanged(QTreeWidgetItem* self, intptr_t slot) {
    auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self);
    if (vqtreewidgetitem && vqtreewidgetitem->isVirtualQTreeWidgetItem) {
        vqtreewidgetitem->setQTreeWidgetItem_EmitDataChanged_Callback(reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_EmitDataChanged_Callback>(slot));
    }
}

void QTreeWidgetItem_Delete(QTreeWidgetItem* self) {
    delete self;
}

QTreeWidget* QTreeWidget_new(QWidget* parent) {
    return new VirtualQTreeWidget(parent);
}

QTreeWidget* QTreeWidget_new2() {
    return new VirtualQTreeWidget();
}

QMetaObject* QTreeWidget_MetaObject(const QTreeWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTreeWidget_Metacast(QTreeWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTreeWidget_Metacall(QTreeWidget* self, int param1, int param2, void** param3) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTreeWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTreeWidget_OnMetacall(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Metacall_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTreeWidget_QBaseMetacall(QTreeWidget* self, int param1, int param2, void** param3) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Metacall_IsBase(true);
        return vqtreewidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTreeWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTreeWidget_Tr(const char* s) {
    QString _ret = QTreeWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTreeWidget_ColumnCount(const QTreeWidget* self) {
    return self->columnCount();
}

void QTreeWidget_SetColumnCount(QTreeWidget* self, int columns) {
    self->setColumnCount(static_cast<int>(columns));
}

QTreeWidgetItem* QTreeWidget_InvisibleRootItem(const QTreeWidget* self) {
    return self->invisibleRootItem();
}

QTreeWidgetItem* QTreeWidget_TopLevelItem(const QTreeWidget* self, int index) {
    return self->topLevelItem(static_cast<int>(index));
}

int QTreeWidget_TopLevelItemCount(const QTreeWidget* self) {
    return self->topLevelItemCount();
}

void QTreeWidget_InsertTopLevelItem(QTreeWidget* self, int index, QTreeWidgetItem* item) {
    self->insertTopLevelItem(static_cast<int>(index), item);
}

void QTreeWidget_AddTopLevelItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->addTopLevelItem(item);
}

QTreeWidgetItem* QTreeWidget_TakeTopLevelItem(QTreeWidget* self, int index) {
    return self->takeTopLevelItem(static_cast<int>(index));
}

int QTreeWidget_IndexOfTopLevelItem(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->indexOfTopLevelItem(item);
}

void QTreeWidget_InsertTopLevelItems(QTreeWidget* self, int index, const libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->insertTopLevelItems(static_cast<int>(index), items_QList);
}

void QTreeWidget_AddTopLevelItems(QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    self->addTopLevelItems(items_QList);
}

QTreeWidgetItem* QTreeWidget_HeaderItem(const QTreeWidget* self) {
    return self->headerItem();
}

void QTreeWidget_SetHeaderItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->setHeaderItem(item);
}

void QTreeWidget_SetHeaderLabels(QTreeWidget* self, const libqt_list /* of libqt_string */ labels) {
    QList<QString> labels_QList;
    labels_QList.reserve(labels.len);
    libqt_string* labels_arr = static_cast<libqt_string*>(labels.data);
    for (size_t i = 0; i < labels.len; ++i) {
        QString labels_arr_i_QString = QString::fromUtf8(labels_arr[i].data, labels_arr[i].len);
        labels_QList.push_back(labels_arr_i_QString);
    }
    self->setHeaderLabels(labels_QList);
}

void QTreeWidget_SetHeaderLabel(QTreeWidget* self, const libqt_string label) {
    QString label_QString = QString::fromUtf8(label.data, label.len);
    self->setHeaderLabel(label_QString);
}

QTreeWidgetItem* QTreeWidget_CurrentItem(const QTreeWidget* self) {
    return self->currentItem();
}

int QTreeWidget_CurrentColumn(const QTreeWidget* self) {
    return self->currentColumn();
}

void QTreeWidget_SetCurrentItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->setCurrentItem(item);
}

void QTreeWidget_SetCurrentItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->setCurrentItem(item, static_cast<int>(column));
}

void QTreeWidget_SetCurrentItem3(QTreeWidget* self, QTreeWidgetItem* item, int column, int command) {
    self->setCurrentItem(item, static_cast<int>(column), static_cast<QItemSelectionModel::SelectionFlags>(command));
}

QTreeWidgetItem* QTreeWidget_ItemAt(const QTreeWidget* self, const QPoint* p) {
    return self->itemAt(*p);
}

QTreeWidgetItem* QTreeWidget_ItemAt2(const QTreeWidget* self, int x, int y) {
    return self->itemAt(static_cast<int>(x), static_cast<int>(y));
}

QRect* QTreeWidget_VisualItemRect(const QTreeWidget* self, const QTreeWidgetItem* item) {
    return new QRect(self->visualItemRect(item));
}

int QTreeWidget_SortColumn(const QTreeWidget* self) {
    return self->sortColumn();
}

void QTreeWidget_SortItems(QTreeWidget* self, int column, int order) {
    self->sortItems(static_cast<int>(column), static_cast<Qt::SortOrder>(order));
}

void QTreeWidget_EditItem(QTreeWidget* self, QTreeWidgetItem* item) {
    self->editItem(item);
}

void QTreeWidget_OpenPersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
    self->openPersistentEditor(item);
}

void QTreeWidget_ClosePersistentEditor(QTreeWidget* self, QTreeWidgetItem* item) {
    self->closePersistentEditor(item);
}

bool QTreeWidget_IsPersistentEditorOpen(const QTreeWidget* self, QTreeWidgetItem* item) {
    return self->isPersistentEditorOpen(item);
}

QWidget* QTreeWidget_ItemWidget(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
    return self->itemWidget(item, static_cast<int>(column));
}

void QTreeWidget_SetItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column, QWidget* widget) {
    self->setItemWidget(item, static_cast<int>(column), widget);
}

void QTreeWidget_RemoveItemWidget(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->removeItemWidget(item, static_cast<int>(column));
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_SelectedItems(const QTreeWidget* self) {
    QList<QTreeWidgetItem*> _ret = self->selectedItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_FindItems(const QTreeWidget* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QTreeWidgetItem* QTreeWidget_ItemAbove(const QTreeWidget* self, const QTreeWidgetItem* item) {
    return self->itemAbove(item);
}

QTreeWidgetItem* QTreeWidget_ItemBelow(const QTreeWidget* self, const QTreeWidgetItem* item) {
    return self->itemBelow(item);
}

QModelIndex* QTreeWidget_IndexFromItem(const QTreeWidget* self, const QTreeWidgetItem* item) {
    return new QModelIndex(self->indexFromItem(item));
}

QTreeWidgetItem* QTreeWidget_ItemFromIndex(const QTreeWidget* self, const QModelIndex* index) {
    return self->itemFromIndex(*index);
}

void QTreeWidget_ScrollToItem(QTreeWidget* self, const QTreeWidgetItem* item) {
    self->scrollToItem(item);
}

void QTreeWidget_ExpandItem(QTreeWidget* self, const QTreeWidgetItem* item) {
    self->expandItem(item);
}

void QTreeWidget_CollapseItem(QTreeWidget* self, const QTreeWidgetItem* item) {
    self->collapseItem(item);
}

void QTreeWidget_Clear(QTreeWidget* self) {
    self->clear();
}

void QTreeWidget_ItemPressed(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemPressed(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemPressed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemPressed, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemClicked(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemDoubleClicked(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemDoubleClicked(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemDoubleClicked(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemDoubleClicked, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemActivated(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemActivated(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemActivated(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemActivated, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemEntered(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemEntered(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemEntered(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemEntered, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemChanged(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->itemChanged(item, static_cast<int>(column));
}

void QTreeWidget_Connect_ItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, int) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, int)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemChanged, [self, slotFunc](QTreeWidgetItem* item, int column) {
        QTreeWidgetItem* sigval1 = item;
        int sigval2 = column;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemExpanded(QTreeWidget* self, QTreeWidgetItem* item) {
    self->itemExpanded(item);
}

void QTreeWidget_Connect_ItemExpanded(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemExpanded, [self, slotFunc](QTreeWidgetItem* item) {
        QTreeWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
    self->itemCollapsed(item);
}

void QTreeWidget_Connect_ItemCollapsed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemCollapsed, [self, slotFunc](QTreeWidgetItem* item) {
        QTreeWidgetItem* sigval1 = item;
        slotFunc(self, sigval1);
    });
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QTreeWidget_Connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::currentItemChanged, [self, slotFunc](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
        QTreeWidgetItem* sigval1 = current;
        QTreeWidgetItem* sigval2 = previous;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTreeWidget_ItemSelectionChanged(QTreeWidget* self) {
    self->itemSelectionChanged();
}

void QTreeWidget_Connect_ItemSelectionChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*) = reinterpret_cast<void (*)(QTreeWidget*)>(slot);
    QTreeWidget::connect(self, &QTreeWidget::itemSelectionChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QTreeWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTreeWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTreeWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTreeWidget_EditItem2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->editItem(item, static_cast<int>(column));
}

void QTreeWidget_OpenPersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->openPersistentEditor(item, static_cast<int>(column));
}

void QTreeWidget_ClosePersistentEditor2(QTreeWidget* self, QTreeWidgetItem* item, int column) {
    self->closePersistentEditor(item, static_cast<int>(column));
}

bool QTreeWidget_IsPersistentEditorOpen2(const QTreeWidget* self, QTreeWidgetItem* item, int column) {
    return self->isPersistentEditorOpen(item, static_cast<int>(column));
}

libqt_list /* of QTreeWidgetItem* */ QTreeWidget_FindItems3(const QTreeWidget* self, const libqt_string text, int flags, int column) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QList<QTreeWidgetItem*> _ret = self->findItems(text_QString, static_cast<Qt::MatchFlags>(flags), static_cast<int>(column));
    // Convert QList<> from C++ memory to manually-managed C memory
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * _ret.size()));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QModelIndex* QTreeWidget_IndexFromItem2(const QTreeWidget* self, const QTreeWidgetItem* item, int column) {
    return new QModelIndex(self->indexFromItem(item, static_cast<int>(column)));
}

void QTreeWidget_ScrollToItem2(QTreeWidget* self, const QTreeWidgetItem* item, int hint) {
    self->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Derived class handler implementation
void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setSelectionModel(selectionModel);
    } else {
        self->QTreeWidget::setSelectionModel(selectionModel);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetSelectionModel_IsBase(true);
        vqtreewidget->setSelectionModel(selectionModel);
    } else {
        self->QTreeWidget::setSelectionModel(selectionModel);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelectionModel(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetSelectionModel_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelectionModel_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_Event(QTreeWidget* self, QEvent* e) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->event(e);
    } else {
        return ((VirtualQTreeWidget*)self)->event(e);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEvent(QTreeWidget* self, QEvent* e) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Event_IsBase(true);
        return vqtreewidget->event(e);
    } else {
        return ((VirtualQTreeWidget*)self)->event(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Event_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTreeWidget_MimeTypes(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        QList<QString> _ret = vqtreewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
    } else {
        QList<QString> _ret = ((VirtualQTreeWidget*)self)->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTreeWidget_QBaseMimeTypes(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MimeTypes_IsBase(true);
        QList<QString> _ret = vqtreewidget->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
    } else {
        QList<QString> _ret = ((VirtualQTreeWidget*)self)->mimeTypes();
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.size()));
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
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeTypes(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MimeTypes_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeTypes_Callback>(slot));
    }
}

// Derived class handler implementation
QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->mimeData(items_QList);
    } else {
        return ((VirtualQTreeWidget*)self)->mimeData(items_QList);
    }
}

// Base class handler implementation
QMimeData* QTreeWidget_QBaseMimeData(const QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MimeData_IsBase(true);
        return vqtreewidget->mimeData(items_QList);
    } else {
        return ((VirtualQTreeWidget*)self)->mimeData(items_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeData(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeData_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualQTreeWidget*)self)->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropMimeData_IsBase(true);
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else {
        return ((VirtualQTreeWidget*)self)->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropMimeData(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropMimeData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropMimeData_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SupportedDropActions(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return static_cast<int>(vqtreewidget->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->supportedDropActions());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSupportedDropActions(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SupportedDropActions_IsBase(true);
        return static_cast<int>(vqtreewidget->supportedDropActions());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->supportedDropActions());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSupportedDropActions(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SupportedDropActions_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SupportedDropActions_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->dropEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDropEvent(QTreeWidget* self, QDropEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropEvent_IsBase(true);
        vqtreewidget->dropEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetRootIndex(QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setRootIndex(*index);
    } else {
        self->QTreeWidget::setRootIndex(*index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetRootIndex(QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetRootIndex_IsBase(true);
        vqtreewidget->setRootIndex(*index);
    } else {
        self->QTreeWidget::setRootIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetRootIndex(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetRootIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetRootIndex_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyboardSearch(QTreeWidget* self, const libqt_string search) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->keyboardSearch(search_QString);
    } else {
        self->QTreeWidget::keyboardSearch(search_QString);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyboardSearch(QTreeWidget* self, const libqt_string search) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QString search_QString = QString::fromUtf8(search.data, search.len);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyboardSearch_IsBase(true);
        vqtreewidget->keyboardSearch(search_QString);
    } else {
        self->QTreeWidget::keyboardSearch(search_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyboardSearch(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyboardSearch_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyboardSearch_Callback>(slot));
    }
}

// Derived class handler implementation
QRect* QTreeWidget_VisualRect(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QRect(vqtreewidget->visualRect(*index));
    } else {
        return new QRect(((VirtualQTreeWidget*)self)->visualRect(*index));
    }
}

// Base class handler implementation
QRect* QTreeWidget_QBaseVisualRect(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VisualRect_IsBase(true);
        return new QRect(vqtreewidget->visualRect(*index));
    } else {
        return new QRect(((VirtualQTreeWidget*)self)->visualRect(*index));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRect(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VisualRect_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRect_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollTo(QTreeWidget* self, const QModelIndex* index, int hint) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QTreeWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollTo(QTreeWidget* self, const QModelIndex* index, int hint) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollTo_IsBase(true);
        vqtreewidget->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    } else {
        self->QTreeWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollTo(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollTo_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollTo_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeWidget_IndexAt(const QTreeWidget* self, const QPoint* p) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QModelIndex(vqtreewidget->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQTreeWidget*)self)->indexAt(*p));
    }
}

// Base class handler implementation
QModelIndex* QTreeWidget_QBaseIndexAt(const QTreeWidget* self, const QPoint* p) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IndexAt_IsBase(true);
        return new QModelIndex(vqtreewidget->indexAt(*p));
    } else {
        return new QModelIndex(((VirtualQTreeWidget*)self)->indexAt(*p));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIndexAt(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IndexAt_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IndexAt_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DoItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->doItemsLayout();
    } else {
        self->QTreeWidget::doItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDoItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DoItemsLayout_IsBase(true);
        vqtreewidget->doItemsLayout();
    } else {
        self->QTreeWidget::doItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDoItemsLayout(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DoItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DoItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Reset(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->reset();
    } else {
        self->QTreeWidget::reset();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseReset(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Reset_IsBase(true);
        vqtreewidget->reset();
    } else {
        self->QTreeWidget::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReset(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Reset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Reset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DataChanged(QTreeWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        self->QTreeWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDataChanged(QTreeWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DataChanged_IsBase(true);
        vqtreewidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        self->QTreeWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDataChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DataChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DataChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SelectAll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->selectAll();
    } else {
        self->QTreeWidget::selectAll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSelectAll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectAll_IsBase(true);
        vqtreewidget->selectAll();
    } else {
        self->QTreeWidget::selectAll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectAll(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectAll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectAll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeWidget*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseVerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarValueChanged_IsBase(true);
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeWidget*)self)->verticalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollContentsBy_IsBase(true);
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeWidget*)self)->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollContentsBy(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollContentsBy_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollContentsBy_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsInserted(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeWidget*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsInserted(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsInserted_IsBase(true);
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeWidget*)self)->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsInserted(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsInserted_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsInserted_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsAboutToBeRemoved(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeWidget*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsAboutToBeRemoved(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsAboutToBeRemoved_IsBase(true);
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        ((VirtualQTreeWidget*)self)->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsAboutToBeRemoved(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsAboutToBeRemoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsAboutToBeRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
QModelIndex* QTreeWidget_MoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QModelIndex(vqtreewidget->moveCursor(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Base class handler implementation
QModelIndex* QTreeWidget_QBaseMoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MoveCursor_IsBase(true);
        return new QModelIndex(vqtreewidget->moveCursor(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveCursor(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MoveCursor_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveCursor_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_HorizontalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->horizontalOffset();
    } else {
        return ((VirtualQTreeWidget*)self)->horizontalOffset();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseHorizontalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalOffset_IsBase(true);
        return vqtreewidget->horizontalOffset();
    } else {
        return ((VirtualQTreeWidget*)self)->horizontalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalOffset(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_VerticalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->verticalOffset();
    } else {
        return ((VirtualQTreeWidget*)self)->verticalOffset();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseVerticalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalOffset_IsBase(true);
        return vqtreewidget->verticalOffset();
    } else {
        return ((VirtualQTreeWidget*)self)->verticalOffset();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalOffset(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetSelection(QTreeWidget* self, const QRect* rect, int command) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQTreeWidget*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetSelection(QTreeWidget* self, const QRect* rect, int command) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetSelection_IsBase(true);
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        ((VirtualQTreeWidget*)self)->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelection(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetSelection_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelection_Callback>(slot));
    }
}

// Derived class handler implementation
QRegion* QTreeWidget_VisualRegionForSelection(const QTreeWidget* self, const QItemSelection* selection) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QRegion(vqtreewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Base class handler implementation
QRegion* QTreeWidget_QBaseVisualRegionForSelection(const QTreeWidget* self, const QItemSelection* selection) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VisualRegionForSelection_IsBase(true);
        return new QRegion(vqtreewidget->visualRegionForSelection(*selection));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRegionForSelection(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VisualRegionForSelection_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRegionForSelection_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTreeWidget_SelectedIndexes(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        QList<QModelIndex> _ret = vqtreewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQTreeWidget*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTreeWidget_QBaseSelectedIndexes(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectedIndexes_IsBase(true);
        QList<QModelIndex> _ret = vqtreewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QModelIndex> _ret = ((VirtualQTreeWidget*)self)->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * _ret.size()));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectedIndexes(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectedIndexes_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectedIndexes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ChangeEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->changeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->changeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseChangeEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ChangeEvent_IsBase(true);
        vqtreewidget->changeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->changeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChangeEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_TimerEvent(QTreeWidget* self, QTimerEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->timerEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseTimerEvent(QTreeWidget* self, QTimerEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_TimerEvent_IsBase(true);
        vqtreewidget->timerEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTimerEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_PaintEvent(QTreeWidget* self, QPaintEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->paintEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBasePaintEvent(QTreeWidget* self, QPaintEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_PaintEvent_IsBase(true);
        vqtreewidget->paintEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawRow(const QTreeWidget* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->drawRow(painter, *options, *index);
    } else {
        ((VirtualQTreeWidget*)self)->drawRow(painter, *options, *index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawRow(const QTreeWidget* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawRow_IsBase(true);
        vqtreewidget->drawRow(painter, *options, *index);
    } else {
        ((VirtualQTreeWidget*)self)->drawRow(painter, *options, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawRow(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawRow_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawRow_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawBranches(const QTreeWidget* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->drawBranches(painter, *rect, *index);
    } else {
        ((VirtualQTreeWidget*)self)->drawBranches(painter, *rect, *index);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawBranches(const QTreeWidget* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawBranches_IsBase(true);
        vqtreewidget->drawBranches(painter, *rect, *index);
    } else {
        ((VirtualQTreeWidget*)self)->drawBranches(painter, *rect, *index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawBranches(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawBranches_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawBranches_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->mousePressEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MousePressEvent_IsBase(true);
        vqtreewidget->mousePressEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMousePressEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseReleaseEvent_IsBase(true);
        vqtreewidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseReleaseEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseDoubleClickEvent_IsBase(true);
        vqtreewidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseDoubleClickEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseMoveEvent_IsBase(true);
        vqtreewidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseMoveEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->keyPressEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyPressEvent_IsBase(true);
        vqtreewidget->keyPressEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyPressEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->dragMoveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragMoveEvent_IsBase(true);
        vqtreewidget->dragMoveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragMoveEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_ViewportEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->viewportEvent(event);
    } else {
        return ((VirtualQTreeWidget*)self)->viewportEvent(event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseViewportEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportEvent_IsBase(true);
        return vqtreewidget->viewportEvent(event);
    } else {
        return ((VirtualQTreeWidget*)self)->viewportEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->updateGeometries();
    } else {
        ((VirtualQTreeWidget*)self)->updateGeometries();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateGeometries_IsBase(true);
        vqtreewidget->updateGeometries();
    } else {
        ((VirtualQTreeWidget*)self)->updateGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateGeometries(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateGeometries_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_ViewportSizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QSize(vqtreewidget->viewportSizeHint());
    }
    return {};
}

// Base class handler implementation
QSize* QTreeWidget_QBaseViewportSizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportSizeHint_IsBase(true);
        return new QSize(vqtreewidget->viewportSizeHint());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportSizeHint(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SizeHintForColumn(const QTreeWidget* self, int column) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return ((VirtualQTreeWidget*)self)->sizeHintForColumn(static_cast<int>(column));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSizeHintForColumn(const QTreeWidget* self, int column) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHintForColumn_IsBase(true);
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        return ((VirtualQTreeWidget*)self)->sizeHintForColumn(static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForColumn(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHintForColumn_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForColumn_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeWidget*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHorizontalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarAction_IsBase(true);
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeWidget*)self)->horizontalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_IsIndexHidden(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->isIndexHidden(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->isIndexHidden(*index);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseIsIndexHidden(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IsIndexHidden_IsBase(true);
        return vqtreewidget->isIndexHidden(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->isIndexHidden(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIsIndexHidden(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IsIndexHidden_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IsIndexHidden_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SelectionChanged(QTreeWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQTreeWidget*)self)->selectionChanged(*selected, *deselected);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSelectionChanged(QTreeWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectionChanged_IsBase(true);
        vqtreewidget->selectionChanged(*selected, *deselected);
    } else {
        ((VirtualQTreeWidget*)self)->selectionChanged(*selected, *deselected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CurrentChanged(QTreeWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->currentChanged(*current, *previous);
    } else {
        ((VirtualQTreeWidget*)self)->currentChanged(*current, *previous);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCurrentChanged(QTreeWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CurrentChanged_IsBase(true);
        vqtreewidget->currentChanged(*current, *previous);
    } else {
        ((VirtualQTreeWidget*)self)->currentChanged(*current, *previous);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCurrentChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CurrentChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CurrentChanged_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SizeHintForRow(const QTreeWidget* self, int row) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QTreeWidget::sizeHintForRow(static_cast<int>(row));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSizeHintForRow(const QTreeWidget* self, int row) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHintForRow_IsBase(true);
        return vqtreewidget->sizeHintForRow(static_cast<int>(row));
    } else {
        return self->QTreeWidget::sizeHintForRow(static_cast<int>(row));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForRow(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHintForRow_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForRow_Callback>(slot));
    }
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeWidget_ItemDelegateForIndex(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->itemDelegateForIndex(*index);
    } else {
        return self->QTreeWidget::itemDelegateForIndex(*index);
    }
}

// Base class handler implementation
QAbstractItemDelegate* QTreeWidget_QBaseItemDelegateForIndex(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ItemDelegateForIndex_IsBase(true);
        return vqtreewidget->itemDelegateForIndex(*index);
    } else {
        return self->QTreeWidget::itemDelegateForIndex(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnItemDelegateForIndex(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ItemDelegateForIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ItemDelegateForIndex_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTreeWidget_InputMethodQuery(const QTreeWidget* self, int query) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QVariant(vqtreewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQTreeWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Base class handler implementation
QVariant* QTreeWidget_QBaseInputMethodQuery(const QTreeWidget* self, int query) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtreewidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    } else {
        return new QVariant(((VirtualQTreeWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodQuery(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorData(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->updateEditorData();
    } else {
        ((VirtualQTreeWidget*)self)->updateEditorData();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateEditorData(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateEditorData_IsBase(true);
        vqtreewidget->updateEditorData();
    } else {
        ((VirtualQTreeWidget*)self)->updateEditorData();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorData(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateEditorData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->updateEditorGeometries();
    } else {
        ((VirtualQTreeWidget*)self)->updateEditorGeometries();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateEditorGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateEditorGeometries_IsBase(true);
        vqtreewidget->updateEditorGeometries();
    } else {
        ((VirtualQTreeWidget*)self)->updateEditorGeometries();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorGeometries(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateEditorGeometries_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorGeometries_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeWidget*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseVerticalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarAction_IsBase(true);
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        ((VirtualQTreeWidget*)self)->verticalScrollbarAction(static_cast<int>(action));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_VerticalScrollbarAction_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarAction_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeWidget*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarValueChanged_IsBase(true);
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        ((VirtualQTreeWidget*)self)->horizontalScrollbarValueChanged(static_cast<int>(value));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HorizontalScrollbarValueChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarValueChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQTreeWidget*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CloseEditor_IsBase(true);
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        ((VirtualQTreeWidget*)self)->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEditor(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CloseEditor_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEditor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CommitData(QTreeWidget* self, QWidget* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->commitData(editor);
    } else {
        ((VirtualQTreeWidget*)self)->commitData(editor);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCommitData(QTreeWidget* self, QWidget* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CommitData_IsBase(true);
        vqtreewidget->commitData(editor);
    } else {
        ((VirtualQTreeWidget*)self)->commitData(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCommitData(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CommitData_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CommitData_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_EditorDestroyed(QTreeWidget* self, QObject* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->editorDestroyed(editor);
    } else {
        ((VirtualQTreeWidget*)self)->editorDestroyed(editor);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseEditorDestroyed(QTreeWidget* self, QObject* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EditorDestroyed_IsBase(true);
        vqtreewidget->editorDestroyed(editor);
    } else {
        ((VirtualQTreeWidget*)self)->editorDestroyed(editor);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEditorDestroyed(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EditorDestroyed_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EditorDestroyed_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_Edit2(QTreeWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQTreeWidget*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEdit2(QTreeWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Edit2_IsBase(true);
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        return ((VirtualQTreeWidget*)self)->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEdit2(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Edit2_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Edit2_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SelectionCommand(const QTreeWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->selectionCommand(*index, event));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSelectionCommand(const QTreeWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectionCommand_IsBase(true);
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->selectionCommand(*index, event));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionCommand(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SelectionCommand_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionCommand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StartDrag(QTreeWidget* self, int supportedActions) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQTreeWidget*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStartDrag(QTreeWidget* self, int supportedActions) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StartDrag_IsBase(true);
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        ((VirtualQTreeWidget*)self)->startDrag(static_cast<Qt::DropActions>(supportedActions));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStartDrag(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StartDrag_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StartDrag_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->initViewItemOption(option);
    } else {
        ((VirtualQTreeWidget*)self)->initViewItemOption(option);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitViewItemOption_IsBase(true);
        vqtreewidget->initViewItemOption(option);
    } else {
        ((VirtualQTreeWidget*)self)->initViewItemOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitViewItemOption(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitViewItemOption_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitViewItemOption_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusNextPrevChild(QTreeWidget* self, bool next) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTreeWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusNextPrevChild(QTreeWidget* self, bool next) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusNextPrevChild_IsBase(true);
        return vqtreewidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTreeWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusNextPrevChild(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->dragEnterEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragEnterEvent_IsBase(true);
        vqtreewidget->dragEnterEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragEnterEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragLeaveEvent_IsBase(true);
        vqtreewidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragLeaveEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_FocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->focusInEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseFocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusInEvent_IsBase(true);
        vqtreewidget->focusInEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusInEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_FocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->focusOutEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseFocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusOutEvent_IsBase(true);
        vqtreewidget->focusOutEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusOutEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->resizeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->resizeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ResizeEvent_IsBase(true);
        vqtreewidget->resizeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->resizeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnResizeEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->inputMethodEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->inputMethodEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InputMethodEvent_IsBase(true);
        vqtreewidget->inputMethodEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->inputMethodEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_EventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->eventFilter(object, event);
    } else {
        return ((VirtualQTreeWidget*)self)->eventFilter(object, event);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseEventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EventFilter_IsBase(true);
        return vqtreewidget->eventFilter(object, event);
    } else {
        return ((VirtualQTreeWidget*)self)->eventFilter(object, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEventFilter(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EventFilter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_MinimumSizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QSize(vqtreewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTreeWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTreeWidget_QBaseMinimumSizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtreewidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTreeWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMinimumSizeHint(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTreeWidget_SizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QSize(vqtreewidget->sizeHint());
    } else {
        return new QSize(((VirtualQTreeWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTreeWidget_QBaseSizeHint(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHint_IsBase(true);
        return new QSize(vqtreewidget->sizeHint());
    } else {
        return new QSize(((VirtualQTreeWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHint(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetupViewport(QTreeWidget* self, QWidget* viewport) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setupViewport(viewport);
    } else {
        self->QTreeWidget::setupViewport(viewport);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetupViewport(QTreeWidget* self, QWidget* viewport) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetupViewport_IsBase(true);
        vqtreewidget->setupViewport(viewport);
    } else {
        self->QTreeWidget::setupViewport(viewport);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetupViewport(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetupViewport_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetupViewport_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_WheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->wheelEvent(param1);
    } else {
        ((VirtualQTreeWidget*)self)->wheelEvent(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseWheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_WheelEvent_IsBase(true);
        vqtreewidget->wheelEvent(param1);
    } else {
        ((VirtualQTreeWidget*)self)->wheelEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnWheelEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->contextMenuEvent(param1);
    } else {
        ((VirtualQTreeWidget*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ContextMenuEvent_IsBase(true);
        vqtreewidget->contextMenuEvent(param1);
    } else {
        ((VirtualQTreeWidget*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnContextMenuEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->initStyleOption(option);
    } else {
        ((VirtualQTreeWidget*)self)->initStyleOption(option);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitStyleOption_IsBase(true);
        vqtreewidget->initStyleOption(option);
    } else {
        ((VirtualQTreeWidget*)self)->initStyleOption(option);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitStyleOption(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitStyleOption_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitStyleOption_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_DevType(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->devType();
    } else {
        return self->QTreeWidget::devType();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseDevType(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DevType_IsBase(true);
        return vqtreewidget->devType();
    } else {
        return self->QTreeWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDevType(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DevType_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetVisible(QTreeWidget* self, bool visible) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setVisible(visible);
    } else {
        self->QTreeWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetVisible(QTreeWidget* self, bool visible) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetVisible_IsBase(true);
        vqtreewidget->setVisible(visible);
    } else {
        self->QTreeWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetVisible(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetVisible_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_HeightForWidth(const QTreeWidget* self, int param1) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTreeWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseHeightForWidth(const QTreeWidget* self, int param1) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HeightForWidth_IsBase(true);
        return vqtreewidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTreeWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHeightForWidth(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_HasHeightForWidth(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->hasHeightForWidth();
    } else {
        return self->QTreeWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseHasHeightForWidth(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HasHeightForWidth_IsBase(true);
        return vqtreewidget->hasHeightForWidth();
    } else {
        return self->QTreeWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHasHeightForWidth(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTreeWidget_PaintEngine(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->paintEngine();
    } else {
        return self->QTreeWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTreeWidget_QBasePaintEngine(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_PaintEngine_IsBase(true);
        return vqtreewidget->paintEngine();
    } else {
        return self->QTreeWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEngine(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_KeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseKeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyReleaseEvent_IsBase(true);
        vqtreewidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyReleaseEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_EnterEvent(QTreeWidget* self, QEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->enterEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseEnterEvent(QTreeWidget* self, QEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EnterEvent_IsBase(true);
        vqtreewidget->enterEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEnterEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_LeaveEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->leaveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseLeaveEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_LeaveEvent_IsBase(true);
        vqtreewidget->leaveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnLeaveEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_MoveEvent(QTreeWidget* self, QMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->moveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseMoveEvent(QTreeWidget* self, QMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MoveEvent_IsBase(true);
        vqtreewidget->moveEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CloseEvent(QTreeWidget* self, QCloseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->closeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCloseEvent(QTreeWidget* self, QCloseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CloseEvent_IsBase(true);
        vqtreewidget->closeEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_TabletEvent(QTreeWidget* self, QTabletEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->tabletEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseTabletEvent(QTreeWidget* self, QTabletEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_TabletEvent_IsBase(true);
        vqtreewidget->tabletEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTabletEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ActionEvent(QTreeWidget* self, QActionEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->actionEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseActionEvent(QTreeWidget* self, QActionEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ActionEvent_IsBase(true);
        vqtreewidget->actionEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnActionEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ShowEvent(QTreeWidget* self, QShowEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->showEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseShowEvent(QTreeWidget* self, QShowEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ShowEvent_IsBase(true);
        vqtreewidget->showEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnShowEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_HideEvent(QTreeWidget* self, QHideEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->hideEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseHideEvent(QTreeWidget* self, QHideEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HideEvent_IsBase(true);
        vqtreewidget->hideEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHideEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_HideEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_NativeEvent(QTreeWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTreeWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseNativeEvent(QTreeWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_NativeEvent_IsBase(true);
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTreeWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnNativeEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_Metric(const QTreeWidget* self, int param1) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTreeWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTreeWidget_QBaseMetric(const QTreeWidget* self, int param1) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Metric_IsBase(true);
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTreeWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetric(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Metric_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_InitPainter(const QTreeWidget* self, QPainter* painter) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->initPainter(painter);
    } else {
        ((VirtualQTreeWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseInitPainter(const QTreeWidget* self, QPainter* painter) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitPainter_IsBase(true);
        vqtreewidget->initPainter(painter);
    } else {
        ((VirtualQTreeWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitPainter(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_InitPainter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTreeWidget_Redirected(const QTreeWidget* self, QPoint* offset) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->redirected(offset);
    } else {
        return ((VirtualQTreeWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTreeWidget_QBaseRedirected(const QTreeWidget* self, QPoint* offset) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Redirected_IsBase(true);
        return vqtreewidget->redirected(offset);
    } else {
        return ((VirtualQTreeWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRedirected(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Redirected_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTreeWidget_SharedPainter(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->sharedPainter();
    } else {
        return ((VirtualQTreeWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTreeWidget_QBaseSharedPainter(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SharedPainter_IsBase(true);
        return vqtreewidget->sharedPainter();
    } else {
        return ((VirtualQTreeWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSharedPainter(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ChildEvent(QTreeWidget* self, QChildEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->childEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseChildEvent(QTreeWidget* self, QChildEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ChildEvent_IsBase(true);
        vqtreewidget->childEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChildEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_CustomEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->customEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCustomEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CustomEvent_IsBase(true);
        vqtreewidget->customEvent(event);
    } else {
        ((VirtualQTreeWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCustomEvent(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ConnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->connectNotify(*signal);
    } else {
        ((VirtualQTreeWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseConnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ConnectNotify_IsBase(true);
        vqtreewidget->connectNotify(*signal);
    } else {
        ((VirtualQTreeWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnConnectNotify(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DisconnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTreeWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDisconnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DisconnectNotify_IsBase(true);
        vqtreewidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTreeWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDisconnectNotify(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnResized(QTreeWidget* self, int column, int oldSize, int newSize) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        ((VirtualQTreeWidget*)self)->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnResized(QTreeWidget* self, int column, int oldSize, int newSize) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnResized_IsBase(true);
        vqtreewidget->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else {
        ((VirtualQTreeWidget*)self)->columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnResized(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnResized_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnResized_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnCountChanged(QTreeWidget* self, int oldCount, int newCount) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        ((VirtualQTreeWidget*)self)->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnCountChanged(QTreeWidget* self, int oldCount, int newCount) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnCountChanged_IsBase(true);
        vqtreewidget->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else {
        ((VirtualQTreeWidget*)self)->columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnCountChanged(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnCountChanged_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnCountChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ColumnMoved(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->columnMoved();
    } else {
        ((VirtualQTreeWidget*)self)->columnMoved();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseColumnMoved(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnMoved_IsBase(true);
        vqtreewidget->columnMoved();
    } else {
        ((VirtualQTreeWidget*)self)->columnMoved();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnColumnMoved(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ColumnMoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ColumnMoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Reexpand(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->reexpand();
    } else {
        ((VirtualQTreeWidget*)self)->reexpand();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseReexpand(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Reexpand_IsBase(true);
        vqtreewidget->reexpand();
    } else {
        ((VirtualQTreeWidget*)self)->reexpand();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReexpand(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Reexpand_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Reexpand_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_RowsRemoved(QTreeWidget* self, const QModelIndex* parent, int first, int last) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTreeWidget*)self)->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseRowsRemoved(QTreeWidget* self, const QModelIndex* parent, int first, int last) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsRemoved_IsBase(true);
        vqtreewidget->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else {
        ((VirtualQTreeWidget*)self)->rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsRemoved(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowsRemoved_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsRemoved_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawTree(const QTreeWidget* self, QPainter* painter, const QRegion* region) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->drawTree(painter, *region);
    } else {
        ((VirtualQTreeWidget*)self)->drawTree(painter, *region);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawTree(const QTreeWidget* self, QPainter* painter, const QRegion* region) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawTree_IsBase(true);
        vqtreewidget->drawTree(painter, *region);
    } else {
        ((VirtualQTreeWidget*)self)->drawTree(painter, *region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawTree(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawTree_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawTree_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_IndexRowSizeHint(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->indexRowSizeHint(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->indexRowSizeHint(*index);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseIndexRowSizeHint(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IndexRowSizeHint_IsBase(true);
        return vqtreewidget->indexRowSizeHint(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->indexRowSizeHint(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIndexRowSizeHint(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IndexRowSizeHint_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IndexRowSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_RowHeight(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->rowHeight(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->rowHeight(*index);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseRowHeight(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowHeight_IsBase(true);
        return vqtreewidget->rowHeight(*index);
    } else {
        return ((VirtualQTreeWidget*)self)->rowHeight(*index);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowHeight(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_RowHeight_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowHeight_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_State(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return static_cast<int>(vqtreewidget->state());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->state());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseState(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_State_IsBase(true);
        return static_cast<int>(vqtreewidget->state());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnState(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_State_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_State_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetState(QTreeWidget* self, int state) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    } else {
        ((VirtualQTreeWidget*)self)->setState(static_cast<VirtualQTreeWidget::State>(state));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetState(QTreeWidget* self, int state) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetState_IsBase(true);
        vqtreewidget->setState(static_cast<VirtualQTreeWidget::State>(state));
    } else {
        ((VirtualQTreeWidget*)self)->setState(static_cast<VirtualQTreeWidget::State>(state));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetState(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetState_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetState_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScheduleDelayedItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQTreeWidget*)self)->scheduleDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScheduleDelayedItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScheduleDelayedItemsLayout_IsBase(true);
        vqtreewidget->scheduleDelayedItemsLayout();
    } else {
        ((VirtualQTreeWidget*)self)->scheduleDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScheduleDelayedItemsLayout(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScheduleDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScheduleDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ExecuteDelayedItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->executeDelayedItemsLayout();
    } else {
        ((VirtualQTreeWidget*)self)->executeDelayedItemsLayout();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseExecuteDelayedItemsLayout(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ExecuteDelayedItemsLayout_IsBase(true);
        vqtreewidget->executeDelayedItemsLayout();
    } else {
        ((VirtualQTreeWidget*)self)->executeDelayedItemsLayout();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnExecuteDelayedItemsLayout(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ExecuteDelayedItemsLayout_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ExecuteDelayedItemsLayout_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetDirtyRegion(QTreeWidget* self, const QRegion* region) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setDirtyRegion(*region);
    } else {
        ((VirtualQTreeWidget*)self)->setDirtyRegion(*region);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetDirtyRegion(QTreeWidget* self, const QRegion* region) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetDirtyRegion_IsBase(true);
        vqtreewidget->setDirtyRegion(*region);
    } else {
        ((VirtualQTreeWidget*)self)->setDirtyRegion(*region);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetDirtyRegion(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetDirtyRegion_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_ScrollDirtyRegion(QTreeWidget* self, int dx, int dy) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeWidget*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseScrollDirtyRegion(QTreeWidget* self, int dx, int dy) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollDirtyRegion_IsBase(true);
        vqtreewidget->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        ((VirtualQTreeWidget*)self)->scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollDirtyRegion(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ScrollDirtyRegion_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollDirtyRegion_Callback>(slot));
    }
}

// Derived class handler implementation
QPoint* QTreeWidget_DirtyRegionOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QPoint(vqtreewidget->dirtyRegionOffset());
    }
    return {};
}

// Base class handler implementation
QPoint* QTreeWidget_QBaseDirtyRegionOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DirtyRegionOffset_IsBase(true);
        return new QPoint(vqtreewidget->dirtyRegionOffset());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDirtyRegionOffset(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DirtyRegionOffset_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DirtyRegionOffset_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StartAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->startAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->startAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStartAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StartAutoScroll_IsBase(true);
        vqtreewidget->startAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->startAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStartAutoScroll(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StartAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StartAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_StopAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->stopAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->stopAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseStopAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StopAutoScroll_IsBase(true);
        vqtreewidget->stopAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->stopAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStopAutoScroll(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_StopAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StopAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DoAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->doAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->doAutoScroll();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDoAutoScroll(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DoAutoScroll_IsBase(true);
        vqtreewidget->doAutoScroll();
    } else {
        ((VirtualQTreeWidget*)self)->doAutoScroll();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDoAutoScroll(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DoAutoScroll_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DoAutoScroll_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_DropIndicatorPosition(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->dropIndicatorPosition());
    }
}

// Base class handler implementation
int QTreeWidget_QBaseDropIndicatorPosition(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropIndicatorPosition_IsBase(true);
        return static_cast<int>(vqtreewidget->dropIndicatorPosition());
    } else {
        return static_cast<int>(((VirtualQTreeWidget*)self)->dropIndicatorPosition());
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropIndicatorPosition(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DropIndicatorPosition_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropIndicatorPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_SetViewportMargins(QTreeWidget* self, int left, int top, int right, int bottom) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTreeWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Base class handler implementation
void QTreeWidget_QBaseSetViewportMargins(QTreeWidget* self, int left, int top, int right, int bottom) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetViewportMargins_IsBase(true);
        vqtreewidget->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else {
        ((VirtualQTreeWidget*)self)->setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetViewportMargins(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SetViewportMargins_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
QMargins* QTreeWidget_ViewportMargins(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return new QMargins(vqtreewidget->viewportMargins());
    }
    return {};
}

// Base class handler implementation
QMargins* QTreeWidget_QBaseViewportMargins(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportMargins_IsBase(true);
        return new QMargins(vqtreewidget->viewportMargins());
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportMargins(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_ViewportMargins_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportMargins_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_DrawFrame(QTreeWidget* self, QPainter* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->drawFrame(param1);
    } else {
        ((VirtualQTreeWidget*)self)->drawFrame(param1);
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDrawFrame(QTreeWidget* self, QPainter* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawFrame_IsBase(true);
        vqtreewidget->drawFrame(param1);
    } else {
        ((VirtualQTreeWidget*)self)->drawFrame(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawFrame(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_DrawFrame_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawFrame_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_UpdateMicroFocus(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->updateMicroFocus();
    } else {
        ((VirtualQTreeWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseUpdateMicroFocus(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateMicroFocus_IsBase(true);
        vqtreewidget->updateMicroFocus();
    } else {
        ((VirtualQTreeWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateMicroFocus(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Create(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->create();
    } else {
        ((VirtualQTreeWidget*)self)->create();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseCreate(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Create_IsBase(true);
        vqtreewidget->create();
    } else {
        ((VirtualQTreeWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCreate(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Create_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTreeWidget_Destroy(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->destroy();
    } else {
        ((VirtualQTreeWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QTreeWidget_QBaseDestroy(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Destroy_IsBase(true);
        vqtreewidget->destroy();
    } else {
        ((VirtualQTreeWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDestroy(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Destroy_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusNextChild(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->focusNextChild();
    } else {
        return ((VirtualQTreeWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusNextChild(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusNextChild_IsBase(true);
        return vqtreewidget->focusNextChild();
    } else {
        return ((VirtualQTreeWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusNextChild(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_FocusPreviousChild(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->focusPreviousChild();
    } else {
        return ((VirtualQTreeWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseFocusPreviousChild(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusPreviousChild_IsBase(true);
        return vqtreewidget->focusPreviousChild();
    } else {
        return ((VirtualQTreeWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusPreviousChild(QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTreeWidget_Sender(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->sender();
    } else {
        return ((VirtualQTreeWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTreeWidget_QBaseSender(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Sender_IsBase(true);
        return vqtreewidget->sender();
    } else {
        return ((VirtualQTreeWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSender(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Sender_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_SenderSignalIndex(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->senderSignalIndex();
    } else {
        return ((VirtualQTreeWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTreeWidget_QBaseSenderSignalIndex(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SenderSignalIndex_IsBase(true);
        return vqtreewidget->senderSignalIndex();
    } else {
        return ((VirtualQTreeWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSenderSignalIndex(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTreeWidget_Receivers(const QTreeWidget* self, const char* signal) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->receivers(signal);
    } else {
        return ((VirtualQTreeWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTreeWidget_QBaseReceivers(const QTreeWidget* self, const char* signal) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Receivers_IsBase(true);
        return vqtreewidget->receivers(signal);
    } else {
        return ((VirtualQTreeWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReceivers(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_Receivers_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTreeWidget_IsSignalConnected(const QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTreeWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTreeWidget_QBaseIsSignalConnected(const QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IsSignalConnected_IsBase(true);
        return vqtreewidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTreeWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIsSignalConnected(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTreeWidget_GetDecodedMetricF(const QTreeWidget* self, int metricA, int metricB) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        return vqtreewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTreeWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTreeWidget_QBaseGetDecodedMetricF(const QTreeWidget* self, int metricA, int metricB) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_GetDecodedMetricF_IsBase(true);
        return vqtreewidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTreeWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnGetDecodedMetricF(const QTreeWidget* self, intptr_t slot) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget && vqtreewidget->isVirtualQTreeWidget) {
        vqtreewidget->setQTreeWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTreeWidget::QTreeWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QTreeWidget_Delete(QTreeWidget* self) {
    delete self;
}
