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

QListWidgetItem* QListWidgetItem_Clone(const QListWidgetItem* self) {
    return self->clone();
}

QListWidget* QListWidgetItem_ListWidget(const QListWidgetItem* self) {
    return self->listWidget();
}

void QListWidgetItem_SetSelected(QListWidgetItem* self, bool select) {
    self->setSelected(select);
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
    auto _ret = self->text();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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
    auto _ret = self->statusTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetStatusTip(QListWidgetItem* self, const libqt_string statusTip) {
    QString statusTip_QString = QString::fromUtf8(statusTip.data, statusTip.len);
    self->setStatusTip(statusTip_QString);
}

libqt_string QListWidgetItem_ToolTip(const QListWidgetItem* self) {
    auto _ret = self->toolTip();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidgetItem_SetToolTip(QListWidgetItem* self, const libqt_string toolTip) {
    QString toolTip_QString = QString::fromUtf8(toolTip.data, toolTip.len);
    self->setToolTip(toolTip_QString);
}

libqt_string QListWidgetItem_WhatsThis(const QListWidgetItem* self) {
    auto _ret = self->whatsThis();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

void QListWidgetItem_SetTextAlignment2(QListWidgetItem* self, int alignment) {
    self->setTextAlignment(static_cast<Qt::AlignmentFlag>(alignment));
}

void QListWidgetItem_SetTextAlignment3(QListWidgetItem* self, int alignment) {
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

QVariant* QListWidgetItem_Data(const QListWidgetItem* self, int role) {
    return new QVariant(self->data(static_cast<int>(role)));
}

void QListWidgetItem_SetData(QListWidgetItem* self, int role, const QVariant* value) {
    self->setData(static_cast<int>(role), *value);
}

bool QListWidgetItem_OperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
    return self->operator<(*other);
}

void QListWidgetItem_Read(QListWidgetItem* self, QDataStream* in) {
    self->read(*in);
}

void QListWidgetItem_Write(const QListWidgetItem* self, QDataStream* out) {
    self->write(*out);
}

void QListWidgetItem_OperatorAssign(QListWidgetItem* self, const QListWidgetItem* other) {
    self->operator=(*other);
}

int QListWidgetItem_Type(const QListWidgetItem* self) {
    return self->type();
}

// Base class handler implementation
QListWidgetItem* QListWidgetItem_SuperClone(const QListWidgetItem* self) {
    return self->QListWidgetItem::clone();
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnClone(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self)))
        vqlistwidgetitem->qlistwidgetitem_clone_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Clone_Callback>(slot);
}

// Base class handler implementation
QVariant* QListWidgetItem_SuperData(const QListWidgetItem* self, int role) {
    return new QVariant(self->QListWidgetItem::data(static_cast<int>(role)));
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnData(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self)))
        vqlistwidgetitem->qlistwidgetitem_data_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Data_Callback>(slot);
}

// Base class handler implementation
void QListWidgetItem_SuperSetData(QListWidgetItem* self, int role, const QVariant* value) {
    self->QListWidgetItem::setData(static_cast<int>(role), *value);
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnSetData(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self))
        vqlistwidgetitem->qlistwidgetitem_setdata_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_SetData_Callback>(slot);
}

// Base class handler implementation
bool QListWidgetItem_SuperOperatorLesser(const QListWidgetItem* self, const QListWidgetItem* other) {
    return self->QListWidgetItem::operator<(*other);
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnOperatorLesser(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self)))
        vqlistwidgetitem->qlistwidgetitem_operatorlesser_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_OperatorLesser_Callback>(slot);
}

// Base class handler implementation
void QListWidgetItem_SuperRead(QListWidgetItem* self, QDataStream* in) {
    self->QListWidgetItem::read(*in);
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnRead(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = dynamic_cast<VirtualQListWidgetItem*>(self))
        vqlistwidgetitem->qlistwidgetitem_read_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Read_Callback>(slot);
}

// Base class handler implementation
void QListWidgetItem_SuperWrite(const QListWidgetItem* self, QDataStream* out) {
    self->QListWidgetItem::write(*out);
}

// Auxiliary method to allow providing re-implementation
void QListWidgetItem_OnWrite(QListWidgetItem* self, intptr_t slot) {
    if (auto* vqlistwidgetitem = const_cast<VirtualQListWidgetItem*>(dynamic_cast<const VirtualQListWidgetItem*>(self)))
        vqlistwidgetitem->qlistwidgetitem_write_callback = reinterpret_cast<VirtualQListWidgetItem::QListWidgetItem_Write_Callback>(slot);
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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QListWidget_Tr(const char* s) {
    auto _ret = QListWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QListWidget_SetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    self->setSelectionModel(selectionModel);
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

void QListWidget_AddItem2(QListWidget* self, QListWidgetItem* item) {
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
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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
    QListWidgetItem** _arr = static_cast<QListWidgetItem**>(malloc(sizeof(QListWidgetItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
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

void QListWidget_DropEvent(QListWidget* self, QDropEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->dropEvent(event);
    }
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
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemPressed),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemClicked(item);
}

void QListWidget_Connect_ItemClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemClicked),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemDoubleClicked(QListWidget* self, QListWidgetItem* item) {
    self->itemDoubleClicked(item);
}

void QListWidget_Connect_ItemDoubleClicked(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemDoubleClicked),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemActivated(QListWidget* self, QListWidgetItem* item) {
    self->itemActivated(item);
}

void QListWidget_Connect_ItemActivated(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemActivated),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemEntered(QListWidget* self, QListWidgetItem* item) {
    self->itemEntered(item);
}

void QListWidget_Connect_ItemEntered(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemEntered),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemChanged(QListWidget* self, QListWidgetItem* item) {
    self->itemChanged(item);
}

void QListWidget_Connect_ItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*)>(&QListWidget::itemChanged),
                         [self, slotFunc](QListWidgetItem* item) {
                             QListWidgetItem* sigval1 = item;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_CurrentItemChanged(QListWidget* self, QListWidgetItem* current, QListWidgetItem* previous) {
    self->currentItemChanged(current, previous);
}

void QListWidget_Connect_CurrentItemChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, QListWidgetItem*, QListWidgetItem*) = reinterpret_cast<void (*)(QListWidget*, QListWidgetItem*, QListWidgetItem*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(QListWidgetItem*, QListWidgetItem*)>(&QListWidget::currentItemChanged),
                         [self, slotFunc](QListWidgetItem* current, QListWidgetItem* previous) {
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
    void (*slotFunc)(QListWidget*, const char*) = reinterpret_cast<void (*)(QListWidget*, const char*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(const QString&)>(&QListWidget::currentTextChanged),
                         [self, slotFunc](const QString& currentText) {
                             const auto currentText_ret = currentText;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray currentText_b = currentText_ret.toUtf8();
                             auto currentText_str_len = currentText_b.length();
                             const char* currentText_str = static_cast<const char*>(malloc(currentText_str_len + 1));
                             memcpy((void*)currentText_str, currentText_b.data(), currentText_str_len);
                             ((char*)currentText_str)[currentText_str_len] = '\0';
                             const char* sigval1 = currentText_str;
                             slotFunc(self, sigval1);
                             libqt_free(currentText_str);
                         });
}

void QListWidget_CurrentRowChanged(QListWidget* self, int currentRow) {
    self->currentRowChanged(static_cast<int>(currentRow));
}

void QListWidget_Connect_CurrentRowChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*, int) = reinterpret_cast<void (*)(QListWidget*, int)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)(int)>(&QListWidget::currentRowChanged),
                         [self, slotFunc](int currentRow) {
                             int sigval1 = currentRow;
                             slotFunc(self, sigval1);
                         });
}

void QListWidget_ItemSelectionChanged(QListWidget* self) {
    self->itemSelectionChanged();
}

void QListWidget_Connect_ItemSelectionChanged(QListWidget* self, intptr_t slot) {
    void (*slotFunc)(QListWidget*) = reinterpret_cast<void (*)(QListWidget*)>(slot);
    QListWidget::connect(self,
                         static_cast<void (QListWidget::*)()>(&QListWidget::itemSelectionChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

bool QListWidget_Event(QListWidget* self, QEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->event(e);
    }
    qFatal("Error: Protected method QListWidget::event called without a directly constructed type");
}

libqt_list /* of libqt_string */ QListWidget_MimeTypes(const QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
    if (vqlistwidget) {
        QList<QString> _ret = vqlistwidget->mimeTypes();
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
    qFatal("Error: Protected method QListWidget::mimeTypes called without a directly constructed type");
}

QMimeData* QListWidget_MimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->mimeData(items_QList);
    }
    qFatal("Error: Protected method QListWidget::mimeData called without a directly constructed type");
}

bool QListWidget_DropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    }
    qFatal("Error: Protected method QListWidget::dropMimeData called without a directly constructed type");
}

int QListWidget_SupportedDropActions(const QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<const VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return static_cast<int>(vqlistwidget->supportedDropActions());
    }
    qFatal("Error: Protected method QListWidget::supportedDropActions called without a directly constructed type");
}

libqt_string QListWidget_Tr2(const char* s, const char* c) {
    auto _ret = QListWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QListWidget_Tr3(const char* s, const char* c, int n) {
    auto _ret = QListWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
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

// Base class handler implementation
QMetaObject* QListWidget_SuperMetaObject(const QListWidget* self) {
    return (QMetaObject*)self->QListWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetaObject(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_metaobject_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QListWidget_SuperMetacast(QListWidget* self, const char* param1) {
    return self->QListWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetacast(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_metacast_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QListWidget_SuperMetacall(QListWidget* self, int param1, int param2, void** param3) {
    return self->QListWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetacall(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_metacall_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
void QListWidget_SuperSetSelectionModel(QListWidget* self, QItemSelectionModel* selectionModel) {
    self->QListWidget::setSelectionModel(selectionModel);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelectionModel(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_setselectionmodel_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SetSelectionModel_Callback>(slot);
}

// Base class handler implementation
void QListWidget_SuperDropEvent(QListWidget* self, QDropEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_dropevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DropEvent_Callback>(slot);
}

// Base class handler implementation
bool QListWidget_SuperEvent(QListWidget* self, QEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::event(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_event_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Event_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QListWidget_SuperMimeTypes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        QList<QString> _ret = vqlistwidget->QListWidget::mimeTypes();
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
        qFatal("Error: Protected virtual method QListWidget::mimeTypes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeTypes(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_mimetypes_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MimeTypes_Callback>(slot);
}

// Base class handler implementation
QMimeData* QListWidget_SuperMimeData(const QListWidget* self, const libqt_list /* of QListWidgetItem* */ items) {
    QList<QListWidgetItem*> items_QList;
    items_QList.reserve(items.len);
    QListWidgetItem** items_arr = static_cast<QListWidgetItem**>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        items_QList.push_back(items_arr[i]);
    }
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::mimeData(items_QList);
    } else
        qFatal("Error: Protected virtual method QListWidget::mimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMimeData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_mimedata_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MimeData_Callback>(slot);
}

// Base class handler implementation
bool QListWidget_SuperDropMimeData(QListWidget* self, int index, const QMimeData* data, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::dropMimeData(static_cast<int>(index), data, static_cast<Qt::DropAction>(action));
    } else
        qFatal("Error: Protected virtual method QListWidget::dropMimeData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDropMimeData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_dropmimedata_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DropMimeData_Callback>(slot);
}

// Base class handler implementation
int QListWidget_SuperSupportedDropActions(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->QListWidget::supportedDropActions());
    } else
        qFatal("Error: Protected virtual method QListWidget::supportedDropActions called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSupportedDropActions(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_supporteddropactions_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SupportedDropActions_Callback>(slot);
}

// Derived class handler implementation
QRect* QListWidget_VisualRect(const QListWidget* self, const QModelIndex* index) {
    return new QRect(self->visualRect(*index));
}

// Base class handler implementation
QRect* QListWidget_SuperVisualRect(const QListWidget* self, const QModelIndex* index) {
    return new QRect(self->QListWidget::visualRect(*index));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRect(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_visualrect_callback = reinterpret_cast<VirtualQListWidget::QListWidget_VisualRect_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ScrollTo(QListWidget* self, const QModelIndex* index, int hint) {
    self->scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Base class handler implementation
void QListWidget_SuperScrollTo(QListWidget* self, const QModelIndex* index, int hint) {
    self->QListWidget::scrollTo(*index, static_cast<QAbstractItemView::ScrollHint>(hint));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollTo(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_scrollto_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ScrollTo_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QListWidget_IndexAt(const QListWidget* self, const QPoint* p) {
    return new QModelIndex(self->indexAt(*p));
}

// Base class handler implementation
QModelIndex* QListWidget_SuperIndexAt(const QListWidget* self, const QPoint* p) {
    return new QModelIndex(self->QListWidget::indexAt(*p));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIndexAt(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_indexat_callback = reinterpret_cast<VirtualQListWidget::QListWidget_IndexAt_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DoItemsLayout(QListWidget* self) {
    self->doItemsLayout();
}

// Base class handler implementation
void QListWidget_SuperDoItemsLayout(QListWidget* self) {
    self->QListWidget::doItemsLayout();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDoItemsLayout(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_doitemslayout_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DoItemsLayout_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_Reset(QListWidget* self) {
    self->reset();
}

// Base class handler implementation
void QListWidget_SuperReset(QListWidget* self) {
    self->QListWidget::reset();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnReset(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_reset_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Reset_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SetRootIndex(QListWidget* self, const QModelIndex* index) {
    self->setRootIndex(*index);
}

// Base class handler implementation
void QListWidget_SuperSetRootIndex(QListWidget* self, const QModelIndex* index) {
    self->QListWidget::setRootIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetRootIndex(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_setrootindex_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SetRootIndex_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ScrollContentsBy(QListWidget* self, int dx, int dy) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else {
        qFatal("Error: Protected virtual method QListWidget::scrollContentsBy called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperScrollContentsBy(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::scrollContentsBy(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected virtual method QListWidget::scrollContentsBy called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnScrollContentsBy(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_scrollcontentsby_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ScrollContentsBy_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->dataChanged(*topLeft, *bottomRight, roles_QList);
    } else {
        qFatal("Error: Protected virtual method QListWidget::dataChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperDataChanged(QListWidget* self, const QModelIndex* topLeft, const QModelIndex* bottomRight, const libqt_list /* of int */ roles) {
    QList<int> roles_QList;
    roles_QList.reserve(roles.len);
    int* roles_arr = static_cast<int*>(roles.data);
    for (size_t i = 0; i < roles.len; ++i) {
        roles_QList.push_back(static_cast<int>(roles_arr[i]));
    }
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::dataChanged(*topLeft, *bottomRight, roles_QList);
    } else
        qFatal("Error: Protected virtual method QListWidget::dataChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDataChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_datachanged_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DataChanged_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_RowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QListWidget::rowsInserted called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperRowsInserted(QListWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::rowsInserted(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QListWidget::rowsInserted called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsInserted(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_rowsinserted_callback = reinterpret_cast<VirtualQListWidget::QListWidget_RowsInserted_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_RowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else {
        qFatal("Error: Protected virtual method QListWidget::rowsAboutToBeRemoved called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperRowsAboutToBeRemoved(QListWidget* self, const QModelIndex* parent, int start, int end) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::rowsAboutToBeRemoved(*parent, static_cast<int>(start), static_cast<int>(end));
    } else
        qFatal("Error: Protected virtual method QListWidget::rowsAboutToBeRemoved called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRowsAboutToBeRemoved(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_rowsabouttoberemoved_callback = reinterpret_cast<VirtualQListWidget::QListWidget_RowsAboutToBeRemoved_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_MouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->mouseMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperMouseMoveEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::mouseMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_mousemoveevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_MouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->mouseReleaseEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperMouseReleaseEvent(QListWidget* self, QMouseEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseReleaseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_WheelEvent(QListWidget* self, QWheelEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->wheelEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperWheelEvent(QListWidget* self, QWheelEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnWheelEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_wheelevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_TimerEvent(QListWidget* self, QTimerEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->timerEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperTimerEvent(QListWidget* self, QTimerEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::timerEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTimerEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_timerevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ResizeEvent(QListWidget* self, QResizeEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->resizeEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperResizeEvent(QListWidget* self, QResizeEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnResizeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_resizeevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->dragMoveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperDragMoveEvent(QListWidget* self, QDragMoveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_dragmoveevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->dragLeaveEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperDragLeaveEvent(QListWidget* self, QDragLeaveEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragLeaveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_dragleaveevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_StartDrag(QListWidget* self, int supportedActions) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else {
        qFatal("Error: Protected virtual method QListWidget::startDrag called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperStartDrag(QListWidget* self, int supportedActions) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::startDrag(static_cast<Qt::DropActions>(supportedActions));
    } else
        qFatal("Error: Protected virtual method QListWidget::startDrag called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnStartDrag(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_startdrag_callback = reinterpret_cast<VirtualQListWidget::QListWidget_StartDrag_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_InitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        vqlistwidget->initViewItemOption(option);
    } else {
        qFatal("Error: Protected virtual method QListWidget::initViewItemOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperInitViewItemOption(const QListWidget* self, QStyleOptionViewItem* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->QListWidget::initViewItemOption(option);
    } else
        qFatal("Error: Protected virtual method QListWidget::initViewItemOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitViewItemOption(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_initviewitemoption_callback = reinterpret_cast<VirtualQListWidget::QListWidget_InitViewItemOption_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_PaintEvent(QListWidget* self, QPaintEvent* e) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->paintEvent(e);
    } else {
        qFatal("Error: Protected virtual method QListWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperPaintEvent(QListWidget* self, QPaintEvent* e) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QListWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_paintevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_HorizontalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->horizontalOffset();
    } else {
        qFatal("Error: Protected virtual method QListWidget::horizontalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QListWidget_SuperHorizontalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::horizontalOffset();
    } else
        qFatal("Error: Protected virtual method QListWidget::horizontalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalOffset(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_horizontaloffset_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalOffset_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_VerticalOffset(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->verticalOffset();
    } else {
        qFatal("Error: Protected virtual method QListWidget::verticalOffset called without a directly constructed type");
    }
}

// Base class handler implementation
int QListWidget_SuperVerticalOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::verticalOffset();
    } else
        qFatal("Error: Protected virtual method QListWidget::verticalOffset called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalOffset(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_verticaloffset_callback = reinterpret_cast<VirtualQListWidget::QListWidget_VerticalOffset_Callback>(slot);
}

// Derived class handler implementation
QModelIndex* QListWidget_MoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    return new QModelIndex((self->*&VirtualQListWidget::Base::moveCursor)(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

// Base class handler implementation
QModelIndex* QListWidget_SuperMoveCursor(QListWidget* self, int cursorAction, int modifiers) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        return new QModelIndex(vqlistwidget->moveCursor(static_cast<VirtualQListWidget::CursorAction>(cursorAction), static_cast<Qt::KeyboardModifiers>(modifiers)));
    qFatal("Error: Protected virtual method QListWidget::moveCursor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveCursor(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_movecursor_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MoveCursor_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SetSelection(QListWidget* self, const QRect* rect, int command) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else {
        qFatal("Error: Protected virtual method QListWidget::setSelection called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperSetSelection(QListWidget* self, const QRect* rect, int command) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::setSelection(*rect, static_cast<QItemSelectionModel::SelectionFlags>(command));
    } else
        qFatal("Error: Protected virtual method QListWidget::setSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetSelection(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_setselection_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SetSelection_Callback>(slot);
}

// Derived class handler implementation
QRegion* QListWidget_VisualRegionForSelection(const QListWidget* self, const QItemSelection* selection) {
    return new QRegion((self->*&VirtualQListWidget::Base::visualRegionForSelection)(*selection));
}

// Base class handler implementation
QRegion* QListWidget_SuperVisualRegionForSelection(const QListWidget* self, const QItemSelection* selection) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QRegion(vqlistwidget->visualRegionForSelection(*selection));
    qFatal("Error: Protected virtual method QListWidget::visualRegionForSelection called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVisualRegionForSelection(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_visualregionforselection_callback = reinterpret_cast<VirtualQListWidget::QListWidget_VisualRegionForSelection_Callback>(slot);
}

// Derived class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_SelectedIndexes(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        QList<QModelIndex> _ret = vqlistwidget->selectedIndexes();
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
        qFatal("Error: Protected virtual method QListWidget::selectedIndexes called without a directly constructed type");
    }
}

// Base class handler implementation
libqt_list /* of QModelIndex* */ QListWidget_SuperSelectedIndexes(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        QList<QModelIndex> _ret = vqlistwidget->QListWidget::selectedIndexes();
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
        qFatal("Error: Protected virtual method QListWidget::selectedIndexes called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectedIndexes(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_selectedindexes_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SelectedIndexes_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_UpdateGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->updateGeometries();
    } else {
        qFatal("Error: Protected virtual method QListWidget::updateGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperUpdateGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::updateGeometries();
    } else
        qFatal("Error: Protected virtual method QListWidget::updateGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateGeometries(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_updategeometries_callback = reinterpret_cast<VirtualQListWidget::QListWidget_UpdateGeometries_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_IsIndexHidden(const QListWidget* self, const QModelIndex* index) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->isIndexHidden(*index);
    } else {
        qFatal("Error: Protected virtual method QListWidget::isIndexHidden called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperIsIndexHidden(const QListWidget* self, const QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::isIndexHidden(*index);
    } else
        qFatal("Error: Protected virtual method QListWidget::isIndexHidden called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnIsIndexHidden(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_isindexhidden_callback = reinterpret_cast<VirtualQListWidget::QListWidget_IsIndexHidden_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->selectionChanged(*selected, *deselected);
    } else {
        qFatal("Error: Protected virtual method QListWidget::selectionChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperSelectionChanged(QListWidget* self, const QItemSelection* selected, const QItemSelection* deselected) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::selectionChanged(*selected, *deselected);
    } else
        qFatal("Error: Protected virtual method QListWidget::selectionChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_selectionchanged_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SelectionChanged_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_CurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->currentChanged(*current, *previous);
    } else {
        qFatal("Error: Protected virtual method QListWidget::currentChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperCurrentChanged(QListWidget* self, const QModelIndex* current, const QModelIndex* previous) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::currentChanged(*current, *previous);
    } else
        qFatal("Error: Protected virtual method QListWidget::currentChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCurrentChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_currentchanged_callback = reinterpret_cast<VirtualQListWidget::QListWidget_CurrentChanged_Callback>(slot);
}

// Derived class handler implementation
QSize* QListWidget_ViewportSizeHint(const QListWidget* self) {
    return new QSize((self->*&VirtualQListWidget::Base::viewportSizeHint)());
}

// Base class handler implementation
QSize* QListWidget_SuperViewportSizeHint(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QSize(vqlistwidget->viewportSizeHint());
    qFatal("Error: Protected virtual method QListWidget::viewportSizeHint called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportSizeHint(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_viewportsizehint_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ViewportSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_KeyboardSearch(QListWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->keyboardSearch(search_QString);
}

// Base class handler implementation
void QListWidget_SuperKeyboardSearch(QListWidget* self, const libqt_string search) {
    QString search_QString = QString::fromUtf8(search.data, search.len);
    self->QListWidget::keyboardSearch(search_QString);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyboardSearch(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_keyboardsearch_callback = reinterpret_cast<VirtualQListWidget::QListWidget_KeyboardSearch_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_SizeHintForRow(const QListWidget* self, int row) {
    return self->sizeHintForRow(static_cast<int>(row));
}

// Base class handler implementation
int QListWidget_SuperSizeHintForRow(const QListWidget* self, int row) {
    return self->QListWidget::sizeHintForRow(static_cast<int>(row));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForRow(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_sizehintforrow_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForRow_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_SizeHintForColumn(const QListWidget* self, int column) {
    return self->sizeHintForColumn(static_cast<int>(column));
}

// Base class handler implementation
int QListWidget_SuperSizeHintForColumn(const QListWidget* self, int column) {
    return self->QListWidget::sizeHintForColumn(static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHintForColumn(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_sizehintforcolumn_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SizeHintForColumn_Callback>(slot);
}

// Derived class handler implementation
QAbstractItemDelegate* QListWidget_ItemDelegateForIndex(const QListWidget* self, const QModelIndex* index) {
    return self->itemDelegateForIndex(*index);
}

// Base class handler implementation
QAbstractItemDelegate* QListWidget_SuperItemDelegateForIndex(const QListWidget* self, const QModelIndex* index) {
    return self->QListWidget::itemDelegateForIndex(*index);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnItemDelegateForIndex(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_itemdelegateforindex_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ItemDelegateForIndex_Callback>(slot);
}

// Derived class handler implementation
QVariant* QListWidget_InputMethodQuery(const QListWidget* self, int query) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Base class handler implementation
QVariant* QListWidget_SuperInputMethodQuery(const QListWidget* self, int query) {
    return new QVariant(self->QListWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(query)));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodQuery(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_inputmethodquery_callback = reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SelectAll(QListWidget* self) {
    self->selectAll();
}

// Base class handler implementation
void QListWidget_SuperSelectAll(QListWidget* self) {
    self->QListWidget::selectAll();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectAll(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_selectall_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SelectAll_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_UpdateEditorData(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->updateEditorData();
    } else {
        qFatal("Error: Protected virtual method QListWidget::updateEditorData called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperUpdateEditorData(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::updateEditorData();
    } else
        qFatal("Error: Protected virtual method QListWidget::updateEditorData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_updateeditordata_callback = reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorData_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_UpdateEditorGeometries(QListWidget* self) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->updateEditorGeometries();
    } else {
        qFatal("Error: Protected virtual method QListWidget::updateEditorGeometries called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperUpdateEditorGeometries(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::updateEditorGeometries();
    } else
        qFatal("Error: Protected virtual method QListWidget::updateEditorGeometries called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnUpdateEditorGeometries(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_updateeditorgeometries_callback = reinterpret_cast<VirtualQListWidget::QListWidget_UpdateEditorGeometries_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->verticalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QListWidget::verticalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperVerticalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::verticalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QListWidget::verticalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarAction(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_verticalscrollbaraction_callback = reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarAction(QListWidget* self, int action) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->horizontalScrollbarAction(static_cast<int>(action));
    } else {
        qFatal("Error: Protected virtual method QListWidget::horizontalScrollbarAction called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperHorizontalScrollbarAction(QListWidget* self, int action) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::horizontalScrollbarAction(static_cast<int>(action));
    } else
        qFatal("Error: Protected virtual method QListWidget::horizontalScrollbarAction called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarAction(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_horizontalscrollbaraction_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarAction_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_VerticalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->verticalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QListWidget::verticalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperVerticalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::verticalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QListWidget::verticalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnVerticalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_verticalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQListWidget::QListWidget_VerticalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_HorizontalScrollbarValueChanged(QListWidget* self, int value) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->horizontalScrollbarValueChanged(static_cast<int>(value));
    } else {
        qFatal("Error: Protected virtual method QListWidget::horizontalScrollbarValueChanged called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperHorizontalScrollbarValueChanged(QListWidget* self, int value) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::horizontalScrollbarValueChanged(static_cast<int>(value));
    } else
        qFatal("Error: Protected virtual method QListWidget::horizontalScrollbarValueChanged called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHorizontalScrollbarValueChanged(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_horizontalscrollbarvaluechanged_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HorizontalScrollbarValueChanged_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_CloseEditor(QListWidget* self, QWidget* editor, int hint) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else {
        qFatal("Error: Protected virtual method QListWidget::closeEditor called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperCloseEditor(QListWidget* self, QWidget* editor, int hint) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::closeEditor(editor, static_cast<QAbstractItemDelegate::EndEditHint>(hint));
    } else
        qFatal("Error: Protected virtual method QListWidget::closeEditor called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEditor(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_closeeditor_callback = reinterpret_cast<VirtualQListWidget::QListWidget_CloseEditor_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_CommitData(QListWidget* self, QWidget* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->commitData(editor);
    } else {
        qFatal("Error: Protected virtual method QListWidget::commitData called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperCommitData(QListWidget* self, QWidget* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::commitData(editor);
    } else
        qFatal("Error: Protected virtual method QListWidget::commitData called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCommitData(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_commitdata_callback = reinterpret_cast<VirtualQListWidget::QListWidget_CommitData_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_EditorDestroyed(QListWidget* self, QObject* editor) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->editorDestroyed(editor);
    } else {
        qFatal("Error: Protected virtual method QListWidget::editorDestroyed called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperEditorDestroyed(QListWidget* self, QObject* editor) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::editorDestroyed(editor);
    } else
        qFatal("Error: Protected virtual method QListWidget::editorDestroyed called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEditorDestroyed(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_editordestroyed_callback = reinterpret_cast<VirtualQListWidget::QListWidget_EditorDestroyed_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_Edit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::edit2 called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperEdit2(QListWidget* self, const QModelIndex* index, int trigger, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::edit(*index, static_cast<QAbstractItemView::EditTrigger>(trigger), event);
    } else
        qFatal("Error: Protected virtual method QListWidget::edit2 called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEdit2(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_edit2_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Edit2_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_SelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return static_cast<int>(vqlistwidget->selectionCommand(*index, event));
    } else {
        qFatal("Error: Protected virtual method QListWidget::selectionCommand called without a directly constructed type");
    }
}

// Base class handler implementation
int QListWidget_SuperSelectionCommand(const QListWidget* self, const QModelIndex* index, const QEvent* event) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->QListWidget::selectionCommand(*index, event));
    } else
        qFatal("Error: Protected virtual method QListWidget::selectionCommand called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSelectionCommand(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_selectioncommand_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SelectionCommand_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_FocusNextPrevChild(QListWidget* self, bool next) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QListWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperFocusNextPrevChild(QListWidget* self, bool next) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QListWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusNextPrevChild(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQListWidget::QListWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_ViewportEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->viewportEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::viewportEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperViewportEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::viewportEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::viewportEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnViewportEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_viewportevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ViewportEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_MousePressEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperMousePressEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMousePressEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_mousepressevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_MouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperMouseDoubleClickEvent(QListWidget* self, QMouseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMouseDoubleClickEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperDragEnterEvent(QListWidget* self, QDragEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDragEnterEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_dragenterevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_FocusInEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperFocusInEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusInEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_focusinevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_FocusOutEvent(QListWidget* self, QFocusEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperFocusOutEvent(QListWidget* self, QFocusEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnFocusOutEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_focusoutevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_KeyPressEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperKeyPressEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyPressEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_keypressevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_InputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->inputMethodEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperInputMethodEvent(QListWidget* self, QInputMethodEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::inputMethodEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInputMethodEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_inputmethodevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_EventFilter(QListWidget* self, QObject* object, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->eventFilter(object, event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperEventFilter(QListWidget* self, QObject* object, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::eventFilter(object, event);
    } else
        qFatal("Error: Protected virtual method QListWidget::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEventFilter(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_eventfilter_callback = reinterpret_cast<VirtualQListWidget::QListWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
QSize* QListWidget_MinimumSizeHint(const QListWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QListWidget_SuperMinimumSizeHint(const QListWidget* self) {
    return new QSize(self->QListWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMinimumSizeHint(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_minimumsizehint_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QListWidget_SizeHint(const QListWidget* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QListWidget_SuperSizeHint(const QListWidget* self) {
    return new QSize(self->QListWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSizeHint(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_sizehint_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SizeHint_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SetupViewport(QListWidget* self, QWidget* viewport) {
    self->setupViewport(viewport);
}

// Base class handler implementation
void QListWidget_SuperSetupViewport(QListWidget* self, QWidget* viewport) {
    self->QListWidget::setupViewport(viewport);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetupViewport(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_setupviewport_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SetupViewport_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QListWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperContextMenuEvent(QListWidget* self, QContextMenuEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QListWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnContextMenuEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_contextmenuevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ChangeEvent(QListWidget* self, QEvent* param1) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QListWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperChangeEvent(QListWidget* self, QEvent* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QListWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChangeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_changeevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_InitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        vqlistwidget->initStyleOption(option);
    } else {
        qFatal("Error: Protected virtual method QListWidget::initStyleOption called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperInitStyleOption(const QListWidget* self, QStyleOptionFrame* option) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->QListWidget::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QListWidget::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitStyleOption(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_initstyleoption_callback = reinterpret_cast<VirtualQListWidget::QListWidget_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_DevType(const QListWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QListWidget_SuperDevType(const QListWidget* self) {
    return self->QListWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDevType(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_devtype_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_SetVisible(QListWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QListWidget_SuperSetVisible(QListWidget* self, bool visible) {
    self->QListWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSetVisible(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_setvisible_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_HeightForWidth(const QListWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QListWidget_SuperHeightForWidth(const QListWidget* self, int param1) {
    return self->QListWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHeightForWidth(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_heightforwidth_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_HasHeightForWidth(const QListWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QListWidget_SuperHasHeightForWidth(const QListWidget* self) {
    return self->QListWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHasHeightForWidth(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QListWidget_PaintEngine(const QListWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QListWidget_SuperPaintEngine(const QListWidget* self) {
    return self->QListWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnPaintEngine(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_paintengine_callback = reinterpret_cast<VirtualQListWidget::QListWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_KeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperKeyReleaseEvent(QListWidget* self, QKeyEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnKeyReleaseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_EnterEvent(QListWidget* self, QEnterEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperEnterEvent(QListWidget* self, QEnterEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnEnterEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_enterevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_LeaveEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperLeaveEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnLeaveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_leaveevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_MoveEvent(QListWidget* self, QMoveEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperMoveEvent(QListWidget* self, QMoveEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMoveEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_moveevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_CloseEvent(QListWidget* self, QCloseEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperCloseEvent(QListWidget* self, QCloseEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCloseEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_closeevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_TabletEvent(QListWidget* self, QTabletEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperTabletEvent(QListWidget* self, QTabletEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnTabletEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_tabletevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ActionEvent(QListWidget* self, QActionEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperActionEvent(QListWidget* self, QActionEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnActionEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_actionevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ShowEvent(QListWidget* self, QShowEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperShowEvent(QListWidget* self, QShowEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnShowEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_showevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_HideEvent(QListWidget* self, QHideEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperHideEvent(QListWidget* self, QHideEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnHideEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_hideevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QListWidget_NativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        return vqlistwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QListWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QListWidget_SuperNativeEvent(QListWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->QListWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QListWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnNativeEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_nativeevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QListWidget_Metric(const QListWidget* self, int param1) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QListWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QListWidget_SuperMetric(const QListWidget* self, int param1) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QListWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnMetric(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_metric_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_InitPainter(const QListWidget* self, QPainter* painter) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        vqlistwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QListWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperInitPainter(const QListWidget* self, QPainter* painter) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        vqlistwidget->QListWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QListWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnInitPainter(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_initpainter_callback = reinterpret_cast<VirtualQListWidget::QListWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QListWidget_Redirected(const QListWidget* self, QPoint* offset) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QListWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QListWidget_SuperRedirected(const QListWidget* self, QPoint* offset) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QListWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnRedirected(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_redirected_callback = reinterpret_cast<VirtualQListWidget::QListWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QListWidget_SharedPainter(const QListWidget* self) {
    auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self));
    if (vqlistwidget) {
        return vqlistwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QListWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QListWidget_SuperSharedPainter(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->QListWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QListWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnSharedPainter(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        vqlistwidget->qlistwidget_sharedpainter_callback = reinterpret_cast<VirtualQListWidget::QListWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ChildEvent(QListWidget* self, QChildEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperChildEvent(QListWidget* self, QChildEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnChildEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_childevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_CustomEvent(QListWidget* self, QEvent* event) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QListWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperCustomEvent(QListWidget* self, QEvent* event) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QListWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnCustomEvent(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_customevent_callback = reinterpret_cast<VirtualQListWidget::QListWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_ConnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QListWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperConnectNotify(QListWidget* self, const QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QListWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnConnectNotify(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_connectnotify_callback = reinterpret_cast<VirtualQListWidget::QListWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QListWidget_DisconnectNotify(QListWidget* self, const QMetaMethod* signal) {
    auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self);
    if (vqlistwidget) {
        vqlistwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QListWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QListWidget_SuperDisconnectNotify(QListWidget* self, const QMetaMethod* signal) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->QListWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QListWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QListWidget_OnDisconnectNotify(QListWidget* self, intptr_t slot) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self))
        vqlistwidget->qlistwidget_disconnectnotify_callback = reinterpret_cast<VirtualQListWidget::QListWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QListWidget_ResizeContents(QListWidget* self, int width, int height) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::resizeContents(static_cast<int>(width), static_cast<int>(height));
    } else
        qFatal("Error: Protected method QListWidget::resizeContents called without a directly constructed type");
}

// Derived class handler implementation
QSize* QListWidget_ContentsSize(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QSize(vqlistwidget->contentsSize());
    qFatal("Error: Protected method QListWidget::contentsSize called without a directly constructed type");
}

// Derived class handler implementation
QRect* QListWidget_RectForIndex(const QListWidget* self, const QModelIndex* index) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QRect(vqlistwidget->rectForIndex(*index));
    qFatal("Error: Protected method QListWidget::rectForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_SetPositionForIndex(QListWidget* self, const QPoint* position, const QModelIndex* index) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::setPositionForIndex(*position, *index);
    } else
        qFatal("Error: Protected method QListWidget::setPositionForIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QListWidget_State(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->VirtualQListWidget::state());
    } else
        qFatal("Error: Protected method QListWidget::state called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_SetState(QListWidget* self, int state) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::setState(static_cast<VirtualQListWidget::State>(state));
    } else
        qFatal("Error: Protected method QListWidget::setState called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_ScheduleDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::scheduleDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QListWidget::scheduleDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_ExecuteDelayedItemsLayout(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::executeDelayedItemsLayout();
    } else
        qFatal("Error: Protected method QListWidget::executeDelayedItemsLayout called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_SetDirtyRegion(QListWidget* self, const QRegion* region) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::setDirtyRegion(*region);
    } else
        qFatal("Error: Protected method QListWidget::setDirtyRegion called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_ScrollDirtyRegion(QListWidget* self, int dx, int dy) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::scrollDirtyRegion(static_cast<int>(dx), static_cast<int>(dy));
    } else
        qFatal("Error: Protected method QListWidget::scrollDirtyRegion called without a directly constructed type");
}

// Derived class handler implementation
QPoint* QListWidget_DirtyRegionOffset(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QPoint(vqlistwidget->dirtyRegionOffset());
    qFatal("Error: Protected method QListWidget::dirtyRegionOffset called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_StartAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::startAutoScroll();
    } else
        qFatal("Error: Protected method QListWidget::startAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_StopAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::stopAutoScroll();
    } else
        qFatal("Error: Protected method QListWidget::stopAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_DoAutoScroll(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::doAutoScroll();
    } else
        qFatal("Error: Protected method QListWidget::doAutoScroll called without a directly constructed type");
}

// Derived class protected handler implementation
int QListWidget_DropIndicatorPosition(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return static_cast<int>(vqlistwidget->VirtualQListWidget::dropIndicatorPosition());
    } else
        qFatal("Error: Protected method QListWidget::dropIndicatorPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_SetViewportMargins(QListWidget* self, int left, int top, int right, int bottom) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::setViewportMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
    } else
        qFatal("Error: Protected method QListWidget::setViewportMargins called without a directly constructed type");
}

// Derived class handler implementation
QMargins* QListWidget_ViewportMargins(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self)))
        return new QMargins(vqlistwidget->viewportMargins());
    qFatal("Error: Protected method QListWidget::viewportMargins called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_DrawFrame(QListWidget* self, QPainter* param1) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::drawFrame(param1);
    } else
        qFatal("Error: Protected method QListWidget::drawFrame called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_UpdateMicroFocus(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QListWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_Create(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::create();
    } else
        qFatal("Error: Protected method QListWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QListWidget_Destroy(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        vqlistwidget->VirtualQListWidget::destroy();
    } else
        qFatal("Error: Protected method QListWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListWidget_FocusNextChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->VirtualQListWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QListWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListWidget_FocusPreviousChild(QListWidget* self) {
    if (auto* vqlistwidget = dynamic_cast<VirtualQListWidget*>(self)) {
        return vqlistwidget->VirtualQListWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QListWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QListWidget_Sender(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->VirtualQListWidget::sender();
    } else
        qFatal("Error: Protected method QListWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QListWidget_SenderSignalIndex(const QListWidget* self) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->VirtualQListWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QListWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QListWidget_Receivers(const QListWidget* self, const char* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->VirtualQListWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QListWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QListWidget_IsSignalConnected(const QListWidget* self, const QMetaMethod* signal) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->VirtualQListWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QListWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QListWidget_GetDecodedMetricF(const QListWidget* self, int metricA, int metricB) {
    if (auto* vqlistwidget = const_cast<VirtualQListWidget*>(dynamic_cast<const VirtualQListWidget*>(self))) {
        return vqlistwidget->VirtualQListWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QListWidget::getDecodedMetricF called without a directly constructed type");
}

void QListWidget_Delete(QListWidget* self) {
    delete self;
}
