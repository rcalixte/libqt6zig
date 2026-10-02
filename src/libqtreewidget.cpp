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

QTreeWidgetItem* QTreeWidgetItem_Clone(const QTreeWidgetItem* self) {
    return self->clone();
}

QTreeWidget* QTreeWidgetItem_TreeWidget(const QTreeWidgetItem* self) {
    return self->treeWidget();
}

void QTreeWidgetItem_SetSelected(QTreeWidgetItem* self, bool select) {
    self->setSelected(select);
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
    auto _ret = self->text(static_cast<int>(column));
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
    auto _ret = self->statusTip(static_cast<int>(column));
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
    auto _ret = self->toolTip(static_cast<int>(column));
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
    auto _ret = self->whatsThis(static_cast<int>(column));
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

QVariant* QTreeWidgetItem_Data(const QTreeWidgetItem* self, int column, int role) {
    return new QVariant(self->data(static_cast<int>(column), static_cast<int>(role)));
}

void QTreeWidgetItem_SetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
    self->setData(static_cast<int>(column), static_cast<int>(role), *value);
}

bool QTreeWidgetItem_OperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
    return self->operator<(*other);
}

void QTreeWidgetItem_Read(QTreeWidgetItem* self, QDataStream* in) {
    self->read(*in);
}

void QTreeWidgetItem_Write(const QTreeWidgetItem* self, QDataStream* out) {
    self->write(*out);
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
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * (_ret.size())));
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

// Base class handler implementation
QTreeWidgetItem* QTreeWidgetItem_SuperClone(const QTreeWidgetItem* self) {
    return self->QTreeWidgetItem::clone();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnClone(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self)))
        vqtreewidgetitem->qtreewidgetitem_clone_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Clone_Callback>(slot);
}

// Base class handler implementation
QVariant* QTreeWidgetItem_SuperData(const QTreeWidgetItem* self, int column, int role) {
    return new QVariant(self->QTreeWidgetItem::data(static_cast<int>(column), static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnData(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self)))
        vqtreewidgetitem->qtreewidgetitem_data_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Data_Callback>(slot);
}

// Base class handler implementation
void QTreeWidgetItem_SuperSetData(QTreeWidgetItem* self, int column, int role, const QVariant* value) {
    self->QTreeWidgetItem::setData(static_cast<int>(column), static_cast<int>(role), *value);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnSetData(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self))
        vqtreewidgetitem->qtreewidgetitem_setdata_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_SetData_Callback>(slot);
}

// Base class handler implementation
bool QTreeWidgetItem_SuperOperatorLesser(const QTreeWidgetItem* self, const QTreeWidgetItem* other) {
    return self->QTreeWidgetItem::operator<(*other);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnOperatorLesser(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self)))
        vqtreewidgetitem->qtreewidgetitem_operatorlesser_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_OperatorLesser_Callback>(slot);
}

// Base class handler implementation
void QTreeWidgetItem_SuperRead(QTreeWidgetItem* self, QDataStream* in) {
    self->QTreeWidgetItem::read(*in);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnRead(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self))
        vqtreewidgetitem->qtreewidgetitem_read_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Read_Callback>(slot);
}

// Base class handler implementation
void QTreeWidgetItem_SuperWrite(const QTreeWidgetItem* self, QDataStream* out) {
    self->QTreeWidgetItem::write(*out);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidgetItem_OnWrite(QTreeWidgetItem* self, intptr_t slot) {
    if (auto* vqtreewidgetitem = const_cast<VirtualQTreeWidgetItem*>(dynamic_cast<const VirtualQTreeWidgetItem*>(self)))
        vqtreewidgetitem->qtreewidgetitem_write_callback = reinterpret_cast<VirtualQTreeWidgetItem::QTreeWidgetItem_Write_Callback>(slot);
}

// Derived class protected handler implementation
void QTreeWidgetItem_EmitDataChanged(QTreeWidgetItem* self) {
    if (auto* vqtreewidgetitem = dynamic_cast<VirtualQTreeWidgetItem*>(self)) {
        vqtreewidgetitem->VirtualQTreeWidgetItem::emitDataChanged();
    } else
        qFatal("Error: Protected method QTreeWidgetItem::emitDataChanged called without a directly constructed type");
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTreeWidget_Tr(const char* s) {
    auto _ret = QTreeWidget::tr(s);
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
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * (_ret.size())));
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
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * (_ret.size())));
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

void QTreeWidget_SetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemPressed),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemClicked),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemDoubleClicked),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemActivated),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemEntered),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, int)>(&QTreeWidget::itemChanged),
                         [self, slotFunc](QTreeWidgetItem* item, int column) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemExpanded),
                         [self, slotFunc](QTreeWidgetItem* item) {
                             QTreeWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QTreeWidget_ItemCollapsed(QTreeWidget* self, QTreeWidgetItem* item) {
    self->itemCollapsed(item);
}

void QTreeWidget_Connect_ItemCollapsed(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*)>(&QTreeWidget::itemCollapsed),
                         [self, slotFunc](QTreeWidgetItem* item) {
                             QTreeWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QTreeWidget_CurrentItemChanged(QTreeWidget* self, QTreeWidgetItem* current, QTreeWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QTreeWidget_Connect_CurrentItemChanged(QTreeWidget* self, intptr_t slot) {
    void (*slotFunc)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*) = reinterpret_cast<void (*)(QTreeWidget*, QTreeWidgetItem*, QTreeWidgetItem*)>(slot);
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)(QTreeWidgetItem*, QTreeWidgetItem*)>(&QTreeWidget::currentItemChanged),
                         [self, slotFunc](QTreeWidgetItem* current, QTreeWidgetItem* previous) {
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
    QTreeWidget::connect(self,
                         static_cast<void (QTreeWidget::*)()>(&QTreeWidget::itemSelectionChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

bool QTreeWidget_Event(QTreeWidget* self, QEvent* e) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->event(e);
    }
    qFatal("Error: Protected method QTreeWidget::event called without a directly constructed type");
}

libqt_list /* of libqt_string */ QTreeWidget_MimeTypes(const QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        QList<QString> _ret = vqtreewidget->mimeTypes();
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
    qFatal("Error: Protected method QTreeWidget::mimeTypes called without a directly constructed type");
}

QMimeData* QTreeWidget_MimeData(const QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->mimeData(items_QList);
    }
    qFatal("Error: Protected method QTreeWidget::mimeData called without a directly constructed type");
}

bool QTreeWidget_DropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
    qFatal("Error: Protected method QTreeWidget::dropMimeData called without a directly constructed type");
}

int QTreeWidget_SupportedDropActions(const QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<const VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return static_cast<int>(vqtreewidget->supportedDropActions());
    }
    qFatal("Error: Protected method QTreeWidget::supportedDropActions called without a directly constructed type");
}

void QTreeWidget_DropEvent(QTreeWidget* self, QDropEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->dropEvent(event);
    }
}

libqt_string QTreeWidget_Tr2(const char* s, const char* c) {
    auto _ret = QTreeWidget::tr(s, c);
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
    auto _ret = QTreeWidget::tr(s, c, static_cast<int>(n));
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
    QTreeWidgetItem** _arr = static_cast<QTreeWidgetItem**>(malloc(sizeof(QTreeWidgetItem*) * (_ret.size())));
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

// Base class handler implementation
QMetaObject* QTreeWidget_SuperMetaObject(const QTreeWidget* self) {
    return (QMetaObject*)self->QTreeWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetaObject(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_metaobject_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTreeWidget_SuperMetacast(QTreeWidget* self, const char* param1) {
    return self->QTreeWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetacast(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_metacast_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTreeWidget_SuperMetacall(QTreeWidget* self, int param1, int param2, void** param3) {
    return self->QTreeWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetacall(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_metacall_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QTreeWidget_SuperSetSelectionModel(QTreeWidget* self, QItemSelectionModel* selectionModel) {
    self->QTreeWidget::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelectionModel(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_setselectionmodel_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
bool QTreeWidget_SuperEvent(QTreeWidget* self, QEvent* e) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::event(e);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_event_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Event_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTreeWidget_SuperMimeTypes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        QList<QString> _ret = vqtreewidget->QTreeWidget::mimeTypes();
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
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mimeTypes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeTypes(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_mimetypes_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QTreeWidget_SuperMimeData(const QTreeWidget* self, const libqt_list /* of QTreeWidgetItem* */ items) {
    QList<QTreeWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QTreeWidgetItem** items_arr = static_cast<QTreeWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::mimeData(items_QList);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMimeData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_mimedata_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QTreeWidget_SuperDropMimeData(QTreeWidget* self, QTreeWidgetItem* parent, int index, const QMimeData* data, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::dropMimeData(parent, static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::dropMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropMimeData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_dropmimedata_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QTreeWidget_SuperSupportedDropActions(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->QTreeWidget::supportedDropActions());
    } else
        qFatal("Error: Protected virtual method QTreeWidget::supportedDropActions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSupportedDropActions(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_supporteddropactions_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SupportedDropActions_Callback>(slot);
}

// Base class handler implementation
void QTreeWidget_SuperDropEvent(QTreeWidget* self, QDropEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDropEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_dropevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SetRootIndex(QTreeWidget* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void QTreeWidget_SuperSetRootIndex(QTreeWidget* self, const QModelIndex* index) {
    self->QTreeWidget::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetRootIndex(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_setrootindex_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_KeyboardSearch(QTreeWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QTreeWidget_SuperKeyboardSearch(QTreeWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QTreeWidget::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyboardSearch(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_keyboardsearch_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
QRect* QTreeWidget_VisualRect(const QTreeWidget* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* QTreeWidget_SuperVisualRect(const QTreeWidget* self, const QModelIndex* index) {
    return new QRect(self->QTreeWidget::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRect(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_visualrect_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ScrollTo(QTreeWidget* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QTreeWidget_SuperScrollTo(QTreeWidget* self, const QModelIndex* index, int hint) {
    self->QTreeWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollTo(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_scrollto_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTreeWidget_IndexAt(const QTreeWidget* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* QTreeWidget_SuperIndexAt(const QTreeWidget* self, const QPoint* p) {
    return new QModelIndex(self->QTreeWidget::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIndexAt(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_indexat_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DoItemsLayout(QTreeWidget* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void QTreeWidget_SuperDoItemsLayout(QTreeWidget* self) {
    self->QTreeWidget::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDoItemsLayout(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_doitemslayout_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_Reset(QTreeWidget* self) {
    self->reset();
}

// Base class handler implementation
void QTreeWidget_SuperReset(QTreeWidget* self) {
    self->QTreeWidget::reset();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnReset(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_reset_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Reset_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DataChanged(QTreeWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->dataChanged(*topLeft, *bottomRight, roles_QList);
}

// Base class handler implementation
void QTreeWidget_SuperDataChanged(QTreeWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    self->QTreeWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDataChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_datachanged_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SelectAll(QTreeWidget* self) {
    self->selectAll();
}

// Base class handler implementation
void QTreeWidget_SuperSelectAll(QTreeWidget* self) {
    self->QTreeWidget::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectAll(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_selectall_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperVerticalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperScrollContentsBy(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnScrollContentsBy(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_scrollcontentsby_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_RowsInserted(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperRowsInserted(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsInserted(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_rowsinserted_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_RowsAboutToBeRemoved(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperRowsAboutToBeRemoved(QTreeWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRowsAboutToBeRemoved(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QTreeWidget_MoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualQTreeWidget::Base::moveCursor)(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* QTreeWidget_SuperMoveCursor(QTreeWidget* self, int cursorAction, int modifiers) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        return new QModelIndex(vqtreewidget->moveCursor(static_cast<VirtualQTreeWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QTreeWidget::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveCursor(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_movecursor_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_HorizontalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeWidget_SuperHorizontalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalOffset(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_horizontaloffset_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_VerticalOffset(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeWidget_SuperVerticalOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalOffset(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_verticaloffset_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SetSelection(QTreeWidget* self, const QRect* rect, int command) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperSetSelection(QTreeWidget* self, const QRect* rect, int command) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetSelection(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_setselection_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* QTreeWidget_VisualRegionForSelection(const QTreeWidget* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualQTreeWidget::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* QTreeWidget_SuperVisualRegionForSelection(const QTreeWidget* self, const QItemSelection* selection) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        return new QRegion(vqtreewidget->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QTreeWidget::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVisualRegionForSelection(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_visualregionforselection_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QTreeWidget_SelectedIndexes(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        QList<QModelIndex> _ret = vqtreewidget->selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QTreeWidget_SuperSelectedIndexes(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        QList<QModelIndex> _ret = vqtreewidget->QTreeWidget::selectedIndexes();
        // Convert QList<> from C++ memory to manually-managed C memory
        QModelIndex** _arr = static_cast<QModelIndex**>(malloc(sizeof(QModelIndex*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QModelIndex(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else
        qFatal("Error: Protected virtual method QTreeWidget::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectedIndexes(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_selectedindexes_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ChangeEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->changeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperChangeEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChangeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_changeevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_TimerEvent(QTreeWidget* self, QTimerEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperTimerEvent(QTreeWidget* self, QTimerEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTimerEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_timerevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_PaintEvent(QTreeWidget* self, QPaintEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperPaintEvent(QTreeWidget* self, QPaintEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_paintevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DrawRow(const QTreeWidget* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        vqtreewidget->drawRow(painter, *options, *index);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::drawRow called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDrawRow(const QTreeWidget* self, QPainter* painter, const QStyleOptionViewItem* options, const QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->QTreeWidget::drawRow(painter, *options, *index);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::drawRow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawRow(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_drawrow_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawRow_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DrawBranches(const QTreeWidget* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        vqtreewidget->drawBranches(painter, *rect, *index);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::drawBranches called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDrawBranches(const QTreeWidget* self, QPainter* painter, const QRect* rect, const QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->QTreeWidget::drawBranches(painter, *rect, *index);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::drawBranches called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDrawBranches(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_drawbranches_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DrawBranches_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_MousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperMousePressEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMousePressEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_mousepressevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_MouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperMouseReleaseEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseReleaseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_mousereleaseevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_MouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperMouseDoubleClickEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseDoubleClickEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_MouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperMouseMoveEvent(QTreeWidget* self, QMouseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMouseMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_mousemoveevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_KeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperKeyPressEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyPressEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_keypressevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDragMoveEvent(QTreeWidget* self, QDragMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_dragmoveevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_ViewportEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperViewportEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_viewportevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_UpdateGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperUpdateGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateGeometries(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_updategeometries_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
QSize* QTreeWidget_ViewportSizeHint(const QTreeWidget* self) {
    return new QSize((self->*&VirtualQTreeWidget::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QTreeWidget_SuperViewportSizeHint(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        return new QSize(vqtreewidget->viewportSizeHint());
    qFatal("Error: Protected virtual method QTreeWidget::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnViewportSizeHint(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_viewportsizehint_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_SizeHintForColumn(const QTreeWidget* self, int column) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->sizeHintForColumn(static_cast<int>(column));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::sizeHintForColumn called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeWidget_SuperSizeHintForColumn(const QTreeWidget* self, int column) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::sizeHintForColumn(static_cast<int>(column));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::sizeHintForColumn called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForColumn(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_sizehintforcolumn_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperHorizontalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_IsIndexHidden(const QTreeWidget* self, const QModelIndex* index) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperIsIndexHidden(const QTreeWidget* self, const QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnIsIndexHidden(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_isindexhidden_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SelectionChanged(QTreeWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperSelectionChanged(QTreeWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_selectionchanged_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_CurrentChanged(QTreeWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperCurrentChanged(QTreeWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCurrentChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_currentchanged_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_SizeHintForRow(const QTreeWidget* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QTreeWidget_SuperSizeHintForRow(const QTreeWidget* self, int row) {
    return self->QTreeWidget::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHintForRow(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_sizehintforrow_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QTreeWidget_ItemDelegateForIndex(const QTreeWidget* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QTreeWidget_SuperItemDelegateForIndex(const QTreeWidget* self, const QModelIndex* index) {
    return self->QTreeWidget::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnItemDelegateForIndex(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_itemdelegateforindex_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTreeWidget_InputMethodQuery(const QTreeWidget* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QTreeWidget_SuperInputMethodQuery(const QTreeWidget* self, int query) {
    return new QVariant(self->QTreeWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodQuery(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_inputmethodquery_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorData(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperUpdateEditorData(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_updateeditordata_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_UpdateEditorGeometries(QTreeWidget* self) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperUpdateEditorGeometries(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnUpdateEditorGeometries(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_updateeditorgeometries_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_VerticalScrollbarAction(QTreeWidget* self, int action) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperVerticalScrollbarAction(QTreeWidget* self, int action) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnVerticalScrollbarAction(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_verticalscrollbaraction_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_HorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperHorizontalScrollbarValueChanged(QTreeWidget* self, int value) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHorizontalScrollbarValueChanged(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_CloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperCloseEditor(QTreeWidget* self, QWidget* editor, int hint) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEditor(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_closeeditor_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_CommitData(QTreeWidget* self, QWidget* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperCommitData(QTreeWidget* self, QWidget* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCommitData(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_commitdata_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_EditorDestroyed(QTreeWidget* self, QObject* editor) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperEditorDestroyed(QTreeWidget* self, QObject* editor) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEditorDestroyed(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_editordestroyed_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_Edit2(QTreeWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperEdit2(QTreeWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEdit2(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_edit2_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_SelectionCommand(const QTreeWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return static_cast<int>(vqtreewidget->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeWidget_SuperSelectionCommand(const QTreeWidget* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->QTreeWidget::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSelectionCommand(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_selectioncommand_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_StartDrag(QTreeWidget* self, int supportedActions) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperStartDrag(QTreeWidget* self, int supportedActions) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnStartDrag(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_startdrag_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_InitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        vqtreewidget->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperInitViewItemOption(const QTreeWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->QTreeWidget::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitViewItemOption(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_initviewitemoption_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_FocusNextPrevChild(QTreeWidget* self, bool next) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperFocusNextPrevChild(QTreeWidget* self, bool next) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusNextPrevChild(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_focusnextprevchild_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDragEnterEvent(QTreeWidget* self, QDragEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragEnterEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_dragenterevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDragLeaveEvent(QTreeWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDragLeaveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_dragleaveevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_FocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperFocusInEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusInEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_focusinevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_FocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperFocusOutEvent(QTreeWidget* self, QFocusEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnFocusOutEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_focusoutevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperResizeEvent(QTreeWidget* self, QResizeEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnResizeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_resizeevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_InputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperInputMethodEvent(QTreeWidget* self, QInputMethodEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInputMethodEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_inputmethodevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_EventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperEventFilter(QTreeWidget* self, QObject* object, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEventFilter(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_eventfilter_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QTreeWidget_MinimumSizeHint(const QTreeWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTreeWidget_SuperMinimumSizeHint(const QTreeWidget* self) {
    return new QSize(self->QTreeWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMinimumSizeHint(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_minimumsizehint_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QTreeWidget_SizeHint(const QTreeWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QTreeWidget_SuperSizeHint(const QTreeWidget* self) {
    return new QSize(self->QTreeWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSizeHint(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_sizehint_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SetupViewport(QTreeWidget* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QTreeWidget_SuperSetupViewport(QTreeWidget* self, QWidget* viewport) {
    self->QTreeWidget::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetupViewport(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_setupviewport_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_WheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->wheelEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperWheelEvent(QTreeWidget* self, QWheelEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::wheelEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnWheelEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_wheelevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperContextMenuEvent(QTreeWidget* self, QContextMenuEvent* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnContextMenuEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_contextmenuevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_InitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        vqtreewidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperInitStyleOption(const QTreeWidget* self, QStyleOptionFrame* option) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->QTreeWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitStyleOption(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_initstyleoption_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_DevType(const QTreeWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QTreeWidget_SuperDevType(const QTreeWidget* self) {
    return self->QTreeWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDevType(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_devtype_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_SetVisible(QTreeWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTreeWidget_SuperSetVisible(QTreeWidget* self, bool visible) {
    self->QTreeWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSetVisible(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_setvisible_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_HeightForWidth(const QTreeWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTreeWidget_SuperHeightForWidth(const QTreeWidget* self, int param1) {
    return self->QTreeWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHeightForWidth(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_heightforwidth_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_HasHeightForWidth(const QTreeWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTreeWidget_SuperHasHeightForWidth(const QTreeWidget* self) {
    return self->QTreeWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHasHeightForWidth(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_hasheightforwidth_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTreeWidget_PaintEngine(const QTreeWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTreeWidget_SuperPaintEngine(const QTreeWidget* self) {
    return self->QTreeWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnPaintEngine(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_paintengine_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_KeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperKeyReleaseEvent(QTreeWidget* self, QKeyEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnKeyReleaseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_keyreleaseevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_EnterEvent(QTreeWidget* self, QEnterEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperEnterEvent(QTreeWidget* self, QEnterEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnEnterEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_enterevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_LeaveEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperLeaveEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnLeaveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_leaveevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_MoveEvent(QTreeWidget* self, QMoveEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperMoveEvent(QTreeWidget* self, QMoveEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMoveEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_moveevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_CloseEvent(QTreeWidget* self, QCloseEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperCloseEvent(QTreeWidget* self, QCloseEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCloseEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_closeevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_TabletEvent(QTreeWidget* self, QTabletEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperTabletEvent(QTreeWidget* self, QTabletEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnTabletEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_tabletevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ActionEvent(QTreeWidget* self, QActionEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperActionEvent(QTreeWidget* self, QActionEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnActionEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_actionevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ShowEvent(QTreeWidget* self, QShowEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperShowEvent(QTreeWidget* self, QShowEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnShowEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_showevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_HideEvent(QTreeWidget* self, QHideEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperHideEvent(QTreeWidget* self, QHideEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnHideEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_hideevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTreeWidget_NativeEvent(QTreeWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        return vqtreewidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTreeWidget_SuperNativeEvent(QTreeWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->QTreeWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnNativeEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_nativeevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTreeWidget_Metric(const QTreeWidget* self, int param1) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTreeWidget_SuperMetric(const QTreeWidget* self, int param1) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTreeWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnMetric(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_metric_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_InitPainter(const QTreeWidget* self, QPainter* painter) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        vqtreewidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperInitPainter(const QTreeWidget* self, QPainter* painter) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->QTreeWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnInitPainter(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_initpainter_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTreeWidget_Redirected(const QTreeWidget* self, QPoint* offset) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTreeWidget_SuperRedirected(const QTreeWidget* self, QPoint* offset) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnRedirected(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_redirected_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTreeWidget_SharedPainter(const QTreeWidget* self) {
    auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self));
    if (vqtreewidget) {
        return vqtreewidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTreeWidget_SuperSharedPainter(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->QTreeWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTreeWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnSharedPainter(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        vqtreewidget->qtreewidget_sharedpainter_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ChildEvent(QTreeWidget* self, QChildEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperChildEvent(QTreeWidget* self, QChildEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnChildEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_childevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_CustomEvent(QTreeWidget* self, QEvent* event) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperCustomEvent(QTreeWidget* self, QEvent* event) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnCustomEvent(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_customevent_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_ConnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperConnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnConnectNotify(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_connectnotify_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTreeWidget_DisconnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self);
    if (vqtreewidget) {
        vqtreewidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTreeWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTreeWidget_SuperDisconnectNotify(QTreeWidget* self, const QMetaMethod* signal) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->QTreeWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTreeWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTreeWidget_OnDisconnectNotify(QTreeWidget* self, intptr_t slot) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self))
        vqtreewidget->qtreewidget_disconnectnotify_callback = reinterpret_cast<VirtualQTreeWidget::QTreeWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTreeWidget_ColumnResized(QTreeWidget* self, int column, int oldSize, int newSize) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::columnResized(static_cast<int>(column), static_cast<int>(oldSize), static_cast<int>(newSize));
    } else
        qFatal("Error: Protected method QTreeWidget::columnResized called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_ColumnCountChanged(QTreeWidget* self, int oldCount, int newCount) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::columnCountChanged(static_cast<int>(oldCount), static_cast<int>(newCount));
    } else
        qFatal("Error: Protected method QTreeWidget::columnCountChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_ColumnMoved(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::columnMoved();
    } else
        qFatal("Error: Protected method QTreeWidget::columnMoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_Reexpand(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::reexpand();
    } else
        qFatal("Error: Protected method QTreeWidget::reexpand called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_RowsRemoved(QTreeWidget* self, const QModelIndex* parent, int first, int last) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::rowsRemoved(*parent, static_cast<int>(first), static_cast<int>(last));
    } else
        qFatal("Error: Protected method QTreeWidget::rowsRemoved called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_DrawTree(const QTreeWidget* self, QPainter* painter, const QRegion* region) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        vqtreewidget->VirtualQTreeWidget::drawTree(painter, *region);
    } else
        qFatal("Error: Protected method QTreeWidget::drawTree called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_IndexRowSizeHint(const QTreeWidget* self, const QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::indexRowSizeHint(*index);
    } else
        qFatal("Error: Protected method QTreeWidget::indexRowSizeHint called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_RowHeight(const QTreeWidget* self, const QModelIndex* index) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::rowHeight(*index);
    } else
        qFatal("Error: Protected method QTreeWidget::rowHeight called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_State(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->VirtualQTreeWidget::state());
    } else
        qFatal("Error: Protected method QTreeWidget::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_SetState(QTreeWidget* self, int state) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::setState(static_cast<VirtualQTreeWidget::State>(state));
    } else
        qFatal("Error: Protected method QTreeWidget::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_ScheduleDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTreeWidget::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_ExecuteDelayedItemsLayout(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QTreeWidget::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_SetDirtyRegion(QTreeWidget* self, const QRegion* region) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QTreeWidget::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_ScrollDirtyRegion(QTreeWidget* self, int dx, int dy) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QTreeWidget::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QTreeWidget_DirtyRegionOffset(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        return new QPoint(vqtreewidget->dirtyRegionOffset());
    qFatal("Error: Protected method QTreeWidget::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_StartAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::startAutoScroll();
    } else
        qFatal("Error: Protected method QTreeWidget::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_StopAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::stopAutoScroll();
    } else
        qFatal("Error: Protected method QTreeWidget::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_DoAutoScroll(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::doAutoScroll();
    } else
        qFatal("Error: Protected method QTreeWidget::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_DropIndicatorPosition(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return static_cast<int>(vqtreewidget->VirtualQTreeWidget::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QTreeWidget::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_SetViewportMargins(QTreeWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QTreeWidget::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QTreeWidget_ViewportMargins(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self)))
        return new QMargins(vqtreewidget->viewportMargins());
    qFatal("Error: Protected method QTreeWidget::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_DrawFrame(QTreeWidget* self, QPainter* param1) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method QTreeWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_UpdateMicroFocus(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTreeWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_Create(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::create();
    } else
        qFatal("Error: Protected method QTreeWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTreeWidget_Destroy(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        vqtreewidget->VirtualQTreeWidget::destroy();
    } else
        qFatal("Error: Protected method QTreeWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeWidget_FocusNextChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->VirtualQTreeWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QTreeWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeWidget_FocusPreviousChild(QTreeWidget* self) {
    if (auto* vqtreewidget = dynamic_cast<VirtualQTreeWidget*>(self)) {
        return vqtreewidget->VirtualQTreeWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTreeWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTreeWidget_Sender(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::sender();
    } else
        qFatal("Error: Protected method QTreeWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_SenderSignalIndex(const QTreeWidget* self) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTreeWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTreeWidget_Receivers(const QTreeWidget* self, const char* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QTreeWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTreeWidget_IsSignalConnected(const QTreeWidget* self, const QMetaMethod* signal) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTreeWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTreeWidget_GetDecodedMetricF(const QTreeWidget* self, int metricA, int metricB) {
    if (auto* vqtreewidget = const_cast<VirtualQTreeWidget*>(dynamic_cast<const VirtualQTreeWidget*>(self))) {
        return vqtreewidget->VirtualQTreeWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTreeWidget::getDecodedMetricF called without a directly constructed type");
}

void QTreeWidget_Delete(QTreeWidget* self) {
    delete self;
}
