#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleEditableTextInterface>
#include <QAccessibleEvent>
#include <QAccessibleHyperlinkInterface>
#include <QAccessibleImageInterface>
#include <QAccessibleInterface>
#include <QAccessibleStateChangeEvent>
#include <QAccessibleTableCellInterface>
#include <QAccessibleTableInterface>
#include <QAccessibleTableModelChangeEvent>
#include <QAccessibleTextCursorEvent>
#include <QAccessibleTextInsertEvent>
#include <QAccessibleTextInterface>
#include <QAccessibleTextRemoveEvent>
#include <QAccessibleTextSelectionEvent>
#include <QAccessibleTextUpdateEvent>
#include <QAccessibleValueChangeEvent>
#include <QAccessibleValueInterface>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPair>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWindow>
#include <qaccessible.h>
#include "libqaccessible.h"
#include "libqaccessible.hxx"

bool QAccessibleInterface_IsValid(const QAccessibleInterface* self) {
    return self->isValid();
}

QObject* QAccessibleInterface_Object(const QAccessibleInterface* self) {
    return self->object();
}

QWindow* QAccessibleInterface_Window(const QAccessibleInterface* self) {
    return self->window();
}

libqt_list /* of libqt_pair  tuple of QAccessibleInterface* and int  */ QAccessibleInterface_Relations(const QAccessibleInterface* self, int match) {
    QList<QPair<QAccessibleInterface*, QAccessible::Relation>> _ret = self->relations(static_cast<QAccessible::Relation>(match));
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_pair /* tuple of QAccessibleInterface* and int */* _arr = static_cast<libqt_pair /* tuple of QAccessibleInterface* and int */*>(malloc(sizeof(libqt_pair /* tuple of QAccessibleInterface* and int */) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QPair<QAccessibleInterface*, QFlags<QAccessible::RelationFlag>> _lv_ret = _ret[i];
        // Convert QPair<> from C++ memory to manually-managed C memory
        QAccessibleInterface** _lv_first = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*)));
        int* _lv_second = static_cast<int*>(malloc(sizeof(int)));
        *_lv_first = _lv_ret.first;
        *_lv_second = static_cast<int>(_lv_ret.second);
        libqt_pair _lv_out;
        _lv_out.first = static_cast<void*>(_lv_first);
        _lv_out.second = static_cast<void*>(_lv_second);
        _arr[i] = _lv_out;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QAccessibleInterface* QAccessibleInterface_FocusChild(const QAccessibleInterface* self) {
    return self->focusChild();
}

QAccessibleInterface* QAccessibleInterface_ChildAt(const QAccessibleInterface* self, int x, int y) {
    return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleInterface* QAccessibleInterface_Parent(const QAccessibleInterface* self) {
    return self->parent();
}

QAccessibleInterface* QAccessibleInterface_Child(const QAccessibleInterface* self, int index) {
    return self->child(static_cast<int>(index));
}

int QAccessibleInterface_ChildCount(const QAccessibleInterface* self) {
    return self->childCount();
}

int QAccessibleInterface_IndexOfChild(const QAccessibleInterface* self, const QAccessibleInterface* param1) {
    return self->indexOfChild(param1);
}

libqt_string QAccessibleInterface_Text(const QAccessibleInterface* self, int t) {
    QString _ret = self->text(static_cast<QAccessible::Text>(t));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAccessibleInterface_SetText(QAccessibleInterface* self, int t, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QRect* QAccessibleInterface_Rect(const QAccessibleInterface* self) {
    return new QRect(self->rect());
}

int QAccessibleInterface_Role(const QAccessibleInterface* self) {
    return static_cast<int>(self->role());
}

QAccessible__State* QAccessibleInterface_State(const QAccessibleInterface* self) {
    return new QAccessible::State(self->state());
}

QColor* QAccessibleInterface_ForegroundColor(const QAccessibleInterface* self) {
    return new QColor(self->foregroundColor());
}

QColor* QAccessibleInterface_BackgroundColor(const QAccessibleInterface* self) {
    return new QColor(self->backgroundColor());
}

QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self) {
    return self->textInterface();
}

QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self) {
    return self->editableTextInterface();
}

QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self) {
    return self->valueInterface();
}

QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self) {
    return self->actionInterface();
}

QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self) {
    return self->imageInterface();
}

QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self) {
    return self->tableInterface();
}

QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self) {
    return self->tableCellInterface();
}

QAccessibleHyperlinkInterface* QAccessibleInterface_HyperlinkInterface(QAccessibleInterface* self) {
    return self->hyperlinkInterface();
}

void QAccessibleInterface_VirtualHook(QAccessibleInterface* self, int id, void* data) {
    self->virtual_hook(static_cast<int>(id), data);
}

void* QAccessibleInterface_InterfaceCast(QAccessibleInterface* self, int param1) {
    return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

void QAccessibleTextInterface_Selection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
    self->selection(static_cast<int>(selectionIndex), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
}

int QAccessibleTextInterface_SelectionCount(const QAccessibleTextInterface* self) {
    return self->selectionCount();
}

void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
    self->addSelection(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex) {
    self->removeSelection(static_cast<int>(selectionIndex));
}

void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
    self->setSelection(static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
}

int QAccessibleTextInterface_CursorPosition(const QAccessibleTextInterface* self) {
    return self->cursorPosition();
}

void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position) {
    self->setCursorPosition(static_cast<int>(position));
}

libqt_string QAccessibleTextInterface_Text(const QAccessibleTextInterface* self, int startOffset, int endOffset) {
    QString _ret = self->text(static_cast<int>(startOffset), static_cast<int>(endOffset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleTextInterface_TextBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
    QString _ret = self->textBeforeOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleTextInterface_TextAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
    QString _ret = self->textAfterOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleTextInterface_TextAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
    QString _ret = self->textAtOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleTextInterface_CharacterCount(const QAccessibleTextInterface* self) {
    return self->characterCount();
}

QRect* QAccessibleTextInterface_CharacterRect(const QAccessibleTextInterface* self, int offset) {
    return new QRect(self->characterRect(static_cast<int>(offset)));
}

int QAccessibleTextInterface_OffsetAtPoint(const QAccessibleTextInterface* self, const QPoint* point) {
    return self->offsetAtPoint(*point);
}

void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
    self->scrollToSubstring(static_cast<int>(startIndex), static_cast<int>(endIndex));
}

libqt_string QAccessibleTextInterface_Attributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset) {
    QString _ret = self->attributes(static_cast<int>(offset), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, const QAccessibleTextInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self) {
    delete self;
}

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
    self->deleteText(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertText(static_cast<int>(offset), text_QString);
}

void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->replaceText(static_cast<int>(startOffset), static_cast<int>(endOffset), text_QString);
}

void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, const QAccessibleEditableTextInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self) {
    delete self;
}

QVariant* QAccessibleValueInterface_CurrentValue(const QAccessibleValueInterface* self) {
    return new QVariant(self->currentValue());
}

void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, const QVariant* value) {
    self->setCurrentValue(*value);
}

QVariant* QAccessibleValueInterface_MaximumValue(const QAccessibleValueInterface* self) {
    return new QVariant(self->maximumValue());
}

QVariant* QAccessibleValueInterface_MinimumValue(const QAccessibleValueInterface* self) {
    return new QVariant(self->minimumValue());
}

QVariant* QAccessibleValueInterface_MinimumStepSize(const QAccessibleValueInterface* self) {
    return new QVariant(self->minimumStepSize());
}

void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, const QAccessibleValueInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self) {
    delete self;
}

bool QAccessibleTableCellInterface_IsSelected(const QAccessibleTableCellInterface* self) {
    return self->isSelected();
}

libqt_list /* of QAccessibleInterface* */ QAccessibleTableCellInterface_ColumnHeaderCells(const QAccessibleTableCellInterface* self) {
    QList<QAccessibleInterface*> _ret = self->columnHeaderCells();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QAccessibleInterface* */ QAccessibleTableCellInterface_RowHeaderCells(const QAccessibleTableCellInterface* self) {
    QList<QAccessibleInterface*> _ret = self->rowHeaderCells();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QAccessibleTableCellInterface_ColumnIndex(const QAccessibleTableCellInterface* self) {
    return self->columnIndex();
}

int QAccessibleTableCellInterface_RowIndex(const QAccessibleTableCellInterface* self) {
    return self->rowIndex();
}

int QAccessibleTableCellInterface_ColumnExtent(const QAccessibleTableCellInterface* self) {
    return self->columnExtent();
}

int QAccessibleTableCellInterface_RowExtent(const QAccessibleTableCellInterface* self) {
    return self->rowExtent();
}

QAccessibleInterface* QAccessibleTableCellInterface_Table(const QAccessibleTableCellInterface* self) {
    return self->table();
}

void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, const QAccessibleTableCellInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self) {
    delete self;
}

QAccessibleInterface* QAccessibleTableInterface_Caption(const QAccessibleTableInterface* self) {
    return self->caption();
}

QAccessibleInterface* QAccessibleTableInterface_Summary(const QAccessibleTableInterface* self) {
    return self->summary();
}

QAccessibleInterface* QAccessibleTableInterface_CellAt(const QAccessibleTableInterface* self, int row, int column) {
    return self->cellAt(static_cast<int>(row), static_cast<int>(column));
}

int QAccessibleTableInterface_SelectedCellCount(const QAccessibleTableInterface* self) {
    return self->selectedCellCount();
}

libqt_list /* of QAccessibleInterface* */ QAccessibleTableInterface_SelectedCells(const QAccessibleTableInterface* self) {
    QList<QAccessibleInterface*> _ret = self->selectedCells();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QAccessibleTableInterface_ColumnDescription(const QAccessibleTableInterface* self, int column) {
    QString _ret = self->columnDescription(static_cast<int>(column));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleTableInterface_RowDescription(const QAccessibleTableInterface* self, int row) {
    QString _ret = self->rowDescription(static_cast<int>(row));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleTableInterface_SelectedColumnCount(const QAccessibleTableInterface* self) {
    return self->selectedColumnCount();
}

int QAccessibleTableInterface_SelectedRowCount(const QAccessibleTableInterface* self) {
    return self->selectedRowCount();
}

int QAccessibleTableInterface_ColumnCount(const QAccessibleTableInterface* self) {
    return self->columnCount();
}

int QAccessibleTableInterface_RowCount(const QAccessibleTableInterface* self) {
    return self->rowCount();
}

libqt_list /* of int */ QAccessibleTableInterface_SelectedColumns(const QAccessibleTableInterface* self) {
    QList<int> _ret = self->selectedColumns();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of int */ QAccessibleTableInterface_SelectedRows(const QAccessibleTableInterface* self) {
    QList<int> _ret = self->selectedRows();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QAccessibleTableInterface_IsColumnSelected(const QAccessibleTableInterface* self, int column) {
    return self->isColumnSelected(static_cast<int>(column));
}

bool QAccessibleTableInterface_IsRowSelected(const QAccessibleTableInterface* self, int row) {
    return self->isRowSelected(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row) {
    return self->selectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column) {
    return self->selectColumn(static_cast<int>(column));
}

bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row) {
    return self->unselectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column) {
    return self->unselectColumn(static_cast<int>(column));
}

void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event) {
    self->modelChange(event);
}

void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self) {
    delete self;
}

libqt_string QAccessibleActionInterface_Tr(const char* sourceText) {
    QString _ret = QAccessibleActionInterface::tr(sourceText);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QAccessibleActionInterface_ActionNames(const QAccessibleActionInterface* self) {
    QStringList _ret = self->actionNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QAccessibleActionInterface_LocalizedActionName(const QAccessibleActionInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->localizedActionName(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_LocalizedActionDescription(const QAccessibleActionInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    QString _ret = self->localizedActionDescription(name_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    self->doAction(actionName_QString);
}

libqt_list /* of libqt_string */ QAccessibleActionInterface_KeyBindingsForAction(const QAccessibleActionInterface* self, const libqt_string actionName) {
    QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
    QStringList _ret = self->keyBindingsForAction(actionName_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * _ret.length()));
    for (size_t i = 0; i < _ret.length(); ++i) {
        QString _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<char*>(malloc((_lv_str.len + 1) * sizeof(char)));
        memcpy(_lv_str.data, _lv_b.data(), _lv_str.len);
        _lv_str.data[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.length();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QAccessibleActionInterface_PressAction() {
    const QString _ret = QAccessibleActionInterface::pressAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_IncreaseAction() {
    const QString _ret = QAccessibleActionInterface::increaseAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_DecreaseAction() {
    const QString _ret = QAccessibleActionInterface::decreaseAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ShowMenuAction() {
    const QString _ret = QAccessibleActionInterface::showMenuAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_SetFocusAction() {
    const QString _ret = QAccessibleActionInterface::setFocusAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ToggleAction() {
    const QString _ret = QAccessibleActionInterface::toggleAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ScrollLeftAction() {
    QString _ret = QAccessibleActionInterface::scrollLeftAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ScrollRightAction() {
    QString _ret = QAccessibleActionInterface::scrollRightAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ScrollUpAction() {
    QString _ret = QAccessibleActionInterface::scrollUpAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_ScrollDownAction() {
    QString _ret = QAccessibleActionInterface::scrollDownAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_NextPageAction() {
    QString _ret = QAccessibleActionInterface::nextPageAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_PreviousPageAction() {
    QString _ret = QAccessibleActionInterface::previousPageAction();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, const QAccessibleActionInterface* param1) {
    self->operator=(*param1);
}

libqt_string QAccessibleActionInterface_Tr2(const char* sourceText, const char* disambiguation) {
    QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleActionInterface_Tr3(const char* sourceText, const char* disambiguation, int n) {
    QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self) {
    delete self;
}

libqt_string QAccessibleImageInterface_ImageDescription(const QAccessibleImageInterface* self) {
    QString _ret = self->imageDescription();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

QSize* QAccessibleImageInterface_ImageSize(const QAccessibleImageInterface* self) {
    return new QSize(self->imageSize());
}

QPoint* QAccessibleImageInterface_ImagePosition(const QAccessibleImageInterface* self) {
    return new QPoint(self->imagePosition());
}

void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, const QAccessibleImageInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self) {
    delete self;
}

libqt_string QAccessibleHyperlinkInterface_Anchor(const QAccessibleHyperlinkInterface* self) {
    QString _ret = self->anchor();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleHyperlinkInterface_AnchorTarget(const QAccessibleHyperlinkInterface* self) {
    QString _ret = self->anchorTarget();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleHyperlinkInterface_StartIndex(const QAccessibleHyperlinkInterface* self) {
    return self->startIndex();
}

int QAccessibleHyperlinkInterface_EndIndex(const QAccessibleHyperlinkInterface* self) {
    return self->endIndex();
}

bool QAccessibleHyperlinkInterface_IsValid(const QAccessibleHyperlinkInterface* self) {
    return self->isValid();
}

void QAccessibleHyperlinkInterface_OperatorAssign(QAccessibleHyperlinkInterface* self, const QAccessibleHyperlinkInterface* param1) {
    self->operator=(*param1);
}

void QAccessibleHyperlinkInterface_Delete(QAccessibleHyperlinkInterface* self) {
    delete self;
}

QAccessibleEvent* QAccessibleEvent_new(QObject* obj, int typ) {
    return new VirtualQAccessibleEvent(obj, static_cast<QAccessible::Event>(typ));
}

QAccessibleEvent* QAccessibleEvent_new2(QAccessibleInterface* iface, int typ) {
    return new VirtualQAccessibleEvent(iface, static_cast<QAccessible::Event>(typ));
}

int QAccessibleEvent_Type(const QAccessibleEvent* self) {
    return static_cast<int>(self->type());
}

QObject* QAccessibleEvent_Object(const QAccessibleEvent* self) {
    return self->object();
}

unsigned int QAccessibleEvent_UniqueId(const QAccessibleEvent* self) {
    return static_cast<unsigned int>(self->uniqueId());
}

void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld) {
    self->setChild(static_cast<int>(chld));
}

int QAccessibleEvent_Child(const QAccessibleEvent* self) {
    return self->child();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleEvent_AccessibleInterface(const QAccessibleEvent* self) {
    auto* vqaccessibleevent = const_cast<VirtualQAccessibleEvent*>(dynamic_cast<const VirtualQAccessibleEvent*>(self));
    if (vqaccessibleevent && vqaccessibleevent->isVirtualQAccessibleEvent) {
        return vqaccessibleevent->accessibleInterface();
    } else {
        return self->QAccessibleEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleEvent_QBaseAccessibleInterface(const QAccessibleEvent* self) {
    auto* vqaccessibleevent = const_cast<VirtualQAccessibleEvent*>(dynamic_cast<const VirtualQAccessibleEvent*>(self));
    if (vqaccessibleevent && vqaccessibleevent->isVirtualQAccessibleEvent) {
        vqaccessibleevent->setQAccessibleEvent_AccessibleInterface_IsBase(true);
        return vqaccessibleevent->accessibleInterface();
    } else {
        return self->QAccessibleEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleEvent_OnAccessibleInterface(const QAccessibleEvent* self, intptr_t slot) {
    auto* vqaccessibleevent = const_cast<VirtualQAccessibleEvent*>(dynamic_cast<const VirtualQAccessibleEvent*>(self));
    if (vqaccessibleevent && vqaccessibleevent->isVirtualQAccessibleEvent) {
        vqaccessibleevent->setQAccessibleEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleEvent::QAccessibleEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleEvent_Delete(QAccessibleEvent* self) {
    delete self;
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new(QObject* obj, QAccessible__State* state) {
    return new VirtualQAccessibleStateChangeEvent(obj, *state);
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new2(QAccessibleInterface* iface, QAccessible__State* state) {
    return new VirtualQAccessibleStateChangeEvent(iface, *state);
}

QAccessible__State* QAccessibleStateChangeEvent_ChangedStates(const QAccessibleStateChangeEvent* self) {
    return new QAccessible::State(self->changedStates());
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleStateChangeEvent_AccessibleInterface(const QAccessibleStateChangeEvent* self) {
    auto* vqaccessiblestatechangeevent = const_cast<VirtualQAccessibleStateChangeEvent*>(dynamic_cast<const VirtualQAccessibleStateChangeEvent*>(self));
    if (vqaccessiblestatechangeevent && vqaccessiblestatechangeevent->isVirtualQAccessibleStateChangeEvent) {
        return vqaccessiblestatechangeevent->accessibleInterface();
    } else {
        return self->QAccessibleStateChangeEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleStateChangeEvent_QBaseAccessibleInterface(const QAccessibleStateChangeEvent* self) {
    auto* vqaccessiblestatechangeevent = const_cast<VirtualQAccessibleStateChangeEvent*>(dynamic_cast<const VirtualQAccessibleStateChangeEvent*>(self));
    if (vqaccessiblestatechangeevent && vqaccessiblestatechangeevent->isVirtualQAccessibleStateChangeEvent) {
        vqaccessiblestatechangeevent->setQAccessibleStateChangeEvent_AccessibleInterface_IsBase(true);
        return vqaccessiblestatechangeevent->accessibleInterface();
    } else {
        return self->QAccessibleStateChangeEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleStateChangeEvent_OnAccessibleInterface(const QAccessibleStateChangeEvent* self, intptr_t slot) {
    auto* vqaccessiblestatechangeevent = const_cast<VirtualQAccessibleStateChangeEvent*>(dynamic_cast<const VirtualQAccessibleStateChangeEvent*>(self));
    if (vqaccessiblestatechangeevent && vqaccessiblestatechangeevent->isVirtualQAccessibleStateChangeEvent) {
        vqaccessiblestatechangeevent->setQAccessibleStateChangeEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleStateChangeEvent::QAccessibleStateChangeEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self) {
    delete self;
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos) {
    return new VirtualQAccessibleTextCursorEvent(obj, static_cast<int>(cursorPos));
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos) {
    return new VirtualQAccessibleTextCursorEvent(iface, static_cast<int>(cursorPos));
}

void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position) {
    self->setCursorPosition(static_cast<int>(position));
}

int QAccessibleTextCursorEvent_CursorPosition(const QAccessibleTextCursorEvent* self) {
    return self->cursorPosition();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTextCursorEvent_AccessibleInterface(const QAccessibleTextCursorEvent* self) {
    auto* vqaccessibletextcursorevent = const_cast<VirtualQAccessibleTextCursorEvent*>(dynamic_cast<const VirtualQAccessibleTextCursorEvent*>(self));
    if (vqaccessibletextcursorevent && vqaccessibletextcursorevent->isVirtualQAccessibleTextCursorEvent) {
        return vqaccessibletextcursorevent->accessibleInterface();
    } else {
        return self->QAccessibleTextCursorEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTextCursorEvent_QBaseAccessibleInterface(const QAccessibleTextCursorEvent* self) {
    auto* vqaccessibletextcursorevent = const_cast<VirtualQAccessibleTextCursorEvent*>(dynamic_cast<const VirtualQAccessibleTextCursorEvent*>(self));
    if (vqaccessibletextcursorevent && vqaccessibletextcursorevent->isVirtualQAccessibleTextCursorEvent) {
        vqaccessibletextcursorevent->setQAccessibleTextCursorEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletextcursorevent->accessibleInterface();
    } else {
        return self->QAccessibleTextCursorEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextCursorEvent_OnAccessibleInterface(const QAccessibleTextCursorEvent* self, intptr_t slot) {
    auto* vqaccessibletextcursorevent = const_cast<VirtualQAccessibleTextCursorEvent*>(dynamic_cast<const VirtualQAccessibleTextCursorEvent*>(self));
    if (vqaccessibletextcursorevent && vqaccessibletextcursorevent->isVirtualQAccessibleTextCursorEvent) {
        vqaccessibletextcursorevent->setQAccessibleTextCursorEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTextCursorEvent::QAccessibleTextCursorEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self) {
    delete self;
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end) {
    return new VirtualQAccessibleTextSelectionEvent(obj, static_cast<int>(start), static_cast<int>(end));
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end) {
    return new VirtualQAccessibleTextSelectionEvent(iface, static_cast<int>(start), static_cast<int>(end));
}

void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end) {
    self->setSelection(static_cast<int>(start), static_cast<int>(end));
}

int QAccessibleTextSelectionEvent_SelectionStart(const QAccessibleTextSelectionEvent* self) {
    return self->selectionStart();
}

int QAccessibleTextSelectionEvent_SelectionEnd(const QAccessibleTextSelectionEvent* self) {
    return self->selectionEnd();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTextSelectionEvent_AccessibleInterface(const QAccessibleTextSelectionEvent* self) {
    auto* vqaccessibletextselectionevent = const_cast<VirtualQAccessibleTextSelectionEvent*>(dynamic_cast<const VirtualQAccessibleTextSelectionEvent*>(self));
    if (vqaccessibletextselectionevent && vqaccessibletextselectionevent->isVirtualQAccessibleTextSelectionEvent) {
        return vqaccessibletextselectionevent->accessibleInterface();
    } else {
        return self->QAccessibleTextSelectionEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTextSelectionEvent_QBaseAccessibleInterface(const QAccessibleTextSelectionEvent* self) {
    auto* vqaccessibletextselectionevent = const_cast<VirtualQAccessibleTextSelectionEvent*>(dynamic_cast<const VirtualQAccessibleTextSelectionEvent*>(self));
    if (vqaccessibletextselectionevent && vqaccessibletextselectionevent->isVirtualQAccessibleTextSelectionEvent) {
        vqaccessibletextselectionevent->setQAccessibleTextSelectionEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletextselectionevent->accessibleInterface();
    } else {
        return self->QAccessibleTextSelectionEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextSelectionEvent_OnAccessibleInterface(const QAccessibleTextSelectionEvent* self, intptr_t slot) {
    auto* vqaccessibletextselectionevent = const_cast<VirtualQAccessibleTextSelectionEvent*>(dynamic_cast<const VirtualQAccessibleTextSelectionEvent*>(self));
    if (vqaccessibletextselectionevent && vqaccessibletextselectionevent->isVirtualQAccessibleTextSelectionEvent) {
        vqaccessibletextselectionevent->setQAccessibleTextSelectionEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTextSelectionEvent::QAccessibleTextSelectionEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self) {
    delete self;
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextInsertEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextInsertEvent(iface, static_cast<int>(position), text_QString);
}

libqt_string QAccessibleTextInsertEvent_TextInserted(const QAccessibleTextInsertEvent* self) {
    QString _ret = self->textInserted();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleTextInsertEvent_ChangePosition(const QAccessibleTextInsertEvent* self) {
    return self->changePosition();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTextInsertEvent_AccessibleInterface(const QAccessibleTextInsertEvent* self) {
    auto* vqaccessibletextinsertevent = const_cast<VirtualQAccessibleTextInsertEvent*>(dynamic_cast<const VirtualQAccessibleTextInsertEvent*>(self));
    if (vqaccessibletextinsertevent && vqaccessibletextinsertevent->isVirtualQAccessibleTextInsertEvent) {
        return vqaccessibletextinsertevent->accessibleInterface();
    } else {
        return self->QAccessibleTextInsertEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTextInsertEvent_QBaseAccessibleInterface(const QAccessibleTextInsertEvent* self) {
    auto* vqaccessibletextinsertevent = const_cast<VirtualQAccessibleTextInsertEvent*>(dynamic_cast<const VirtualQAccessibleTextInsertEvent*>(self));
    if (vqaccessibletextinsertevent && vqaccessibletextinsertevent->isVirtualQAccessibleTextInsertEvent) {
        vqaccessibletextinsertevent->setQAccessibleTextInsertEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletextinsertevent->accessibleInterface();
    } else {
        return self->QAccessibleTextInsertEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextInsertEvent_OnAccessibleInterface(const QAccessibleTextInsertEvent* self, intptr_t slot) {
    auto* vqaccessibletextinsertevent = const_cast<VirtualQAccessibleTextInsertEvent*>(dynamic_cast<const VirtualQAccessibleTextInsertEvent*>(self));
    if (vqaccessibletextinsertevent && vqaccessibletextinsertevent->isVirtualQAccessibleTextInsertEvent) {
        vqaccessibletextinsertevent->setQAccessibleTextInsertEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTextInsertEvent::QAccessibleTextInsertEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self) {
    delete self;
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextRemoveEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextRemoveEvent(iface, static_cast<int>(position), text_QString);
}

libqt_string QAccessibleTextRemoveEvent_TextRemoved(const QAccessibleTextRemoveEvent* self) {
    QString _ret = self->textRemoved();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleTextRemoveEvent_ChangePosition(const QAccessibleTextRemoveEvent* self) {
    return self->changePosition();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTextRemoveEvent_AccessibleInterface(const QAccessibleTextRemoveEvent* self) {
    auto* vqaccessibletextremoveevent = const_cast<VirtualQAccessibleTextRemoveEvent*>(dynamic_cast<const VirtualQAccessibleTextRemoveEvent*>(self));
    if (vqaccessibletextremoveevent && vqaccessibletextremoveevent->isVirtualQAccessibleTextRemoveEvent) {
        return vqaccessibletextremoveevent->accessibleInterface();
    } else {
        return self->QAccessibleTextRemoveEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTextRemoveEvent_QBaseAccessibleInterface(const QAccessibleTextRemoveEvent* self) {
    auto* vqaccessibletextremoveevent = const_cast<VirtualQAccessibleTextRemoveEvent*>(dynamic_cast<const VirtualQAccessibleTextRemoveEvent*>(self));
    if (vqaccessibletextremoveevent && vqaccessibletextremoveevent->isVirtualQAccessibleTextRemoveEvent) {
        vqaccessibletextremoveevent->setQAccessibleTextRemoveEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletextremoveevent->accessibleInterface();
    } else {
        return self->QAccessibleTextRemoveEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextRemoveEvent_OnAccessibleInterface(const QAccessibleTextRemoveEvent* self, intptr_t slot) {
    auto* vqaccessibletextremoveevent = const_cast<VirtualQAccessibleTextRemoveEvent*>(dynamic_cast<const VirtualQAccessibleTextRemoveEvent*>(self));
    if (vqaccessibletextremoveevent && vqaccessibletextremoveevent->isVirtualQAccessibleTextRemoveEvent) {
        vqaccessibletextremoveevent->setQAccessibleTextRemoveEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTextRemoveEvent::QAccessibleTextRemoveEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self) {
    delete self;
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, const libqt_string oldText, const libqt_string text) {
    QString oldText_QString = QString::fromUtf8(oldText.data, oldText.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextUpdateEvent(obj, static_cast<int>(position), oldText_QString, text_QString);
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, const libqt_string oldText, const libqt_string text) {
    QString oldText_QString = QString::fromUtf8(oldText.data, oldText.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQAccessibleTextUpdateEvent(iface, static_cast<int>(position), oldText_QString, text_QString);
}

libqt_string QAccessibleTextUpdateEvent_TextRemoved(const QAccessibleTextUpdateEvent* self) {
    QString _ret = self->textRemoved();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QAccessibleTextUpdateEvent_TextInserted(const QAccessibleTextUpdateEvent* self) {
    QString _ret = self->textInserted();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QAccessibleTextUpdateEvent_ChangePosition(const QAccessibleTextUpdateEvent* self) {
    return self->changePosition();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTextUpdateEvent_AccessibleInterface(const QAccessibleTextUpdateEvent* self) {
    auto* vqaccessibletextupdateevent = const_cast<VirtualQAccessibleTextUpdateEvent*>(dynamic_cast<const VirtualQAccessibleTextUpdateEvent*>(self));
    if (vqaccessibletextupdateevent && vqaccessibletextupdateevent->isVirtualQAccessibleTextUpdateEvent) {
        return vqaccessibletextupdateevent->accessibleInterface();
    } else {
        return self->QAccessibleTextUpdateEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTextUpdateEvent_QBaseAccessibleInterface(const QAccessibleTextUpdateEvent* self) {
    auto* vqaccessibletextupdateevent = const_cast<VirtualQAccessibleTextUpdateEvent*>(dynamic_cast<const VirtualQAccessibleTextUpdateEvent*>(self));
    if (vqaccessibletextupdateevent && vqaccessibletextupdateevent->isVirtualQAccessibleTextUpdateEvent) {
        vqaccessibletextupdateevent->setQAccessibleTextUpdateEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletextupdateevent->accessibleInterface();
    } else {
        return self->QAccessibleTextUpdateEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTextUpdateEvent_OnAccessibleInterface(const QAccessibleTextUpdateEvent* self, intptr_t slot) {
    auto* vqaccessibletextupdateevent = const_cast<VirtualQAccessibleTextUpdateEvent*>(dynamic_cast<const VirtualQAccessibleTextUpdateEvent*>(self));
    if (vqaccessibletextupdateevent && vqaccessibletextupdateevent->isVirtualQAccessibleTextUpdateEvent) {
        vqaccessibletextupdateevent->setQAccessibleTextUpdateEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTextUpdateEvent::QAccessibleTextUpdateEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self) {
    delete self;
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, const QVariant* val) {
    return new VirtualQAccessibleValueChangeEvent(obj, *val);
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, const QVariant* val) {
    return new VirtualQAccessibleValueChangeEvent(iface, *val);
}

void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, const QVariant* val) {
    self->setValue(*val);
}

QVariant* QAccessibleValueChangeEvent_Value(const QAccessibleValueChangeEvent* self) {
    return new QVariant(self->value());
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleValueChangeEvent_AccessibleInterface(const QAccessibleValueChangeEvent* self) {
    auto* vqaccessiblevaluechangeevent = const_cast<VirtualQAccessibleValueChangeEvent*>(dynamic_cast<const VirtualQAccessibleValueChangeEvent*>(self));
    if (vqaccessiblevaluechangeevent && vqaccessiblevaluechangeevent->isVirtualQAccessibleValueChangeEvent) {
        return vqaccessiblevaluechangeevent->accessibleInterface();
    } else {
        return self->QAccessibleValueChangeEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleValueChangeEvent_QBaseAccessibleInterface(const QAccessibleValueChangeEvent* self) {
    auto* vqaccessiblevaluechangeevent = const_cast<VirtualQAccessibleValueChangeEvent*>(dynamic_cast<const VirtualQAccessibleValueChangeEvent*>(self));
    if (vqaccessiblevaluechangeevent && vqaccessiblevaluechangeevent->isVirtualQAccessibleValueChangeEvent) {
        vqaccessiblevaluechangeevent->setQAccessibleValueChangeEvent_AccessibleInterface_IsBase(true);
        return vqaccessiblevaluechangeevent->accessibleInterface();
    } else {
        return self->QAccessibleValueChangeEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleValueChangeEvent_OnAccessibleInterface(const QAccessibleValueChangeEvent* self, intptr_t slot) {
    auto* vqaccessiblevaluechangeevent = const_cast<VirtualQAccessibleValueChangeEvent*>(dynamic_cast<const VirtualQAccessibleValueChangeEvent*>(self));
    if (vqaccessiblevaluechangeevent && vqaccessiblevaluechangeevent->isVirtualQAccessibleValueChangeEvent) {
        vqaccessiblevaluechangeevent->setQAccessibleValueChangeEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleValueChangeEvent::QAccessibleValueChangeEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self) {
    delete self;
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new(QObject* obj, int changeType) {
    return new VirtualQAccessibleTableModelChangeEvent(obj, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new2(QAccessibleInterface* iface, int changeType) {
    return new VirtualQAccessibleTableModelChangeEvent(iface, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

void QAccessibleTableModelChangeEvent_SetModelChangeType(QAccessibleTableModelChangeEvent* self, int changeType) {
    self->setModelChangeType(static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

int QAccessibleTableModelChangeEvent_ModelChangeType(const QAccessibleTableModelChangeEvent* self) {
    return static_cast<int>(self->modelChangeType());
}

void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row) {
    self->setFirstRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col) {
    self->setFirstColumn(static_cast<int>(col));
}

void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row) {
    self->setLastRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col) {
    self->setLastColumn(static_cast<int>(col));
}

int QAccessibleTableModelChangeEvent_FirstRow(const QAccessibleTableModelChangeEvent* self) {
    return self->firstRow();
}

int QAccessibleTableModelChangeEvent_FirstColumn(const QAccessibleTableModelChangeEvent* self) {
    return self->firstColumn();
}

int QAccessibleTableModelChangeEvent_LastRow(const QAccessibleTableModelChangeEvent* self) {
    return self->lastRow();
}

int QAccessibleTableModelChangeEvent_LastColumn(const QAccessibleTableModelChangeEvent* self) {
    return self->lastColumn();
}

// Derived class handler implementation
QAccessibleInterface* QAccessibleTableModelChangeEvent_AccessibleInterface(const QAccessibleTableModelChangeEvent* self) {
    auto* vqaccessibletablemodelchangeevent = const_cast<VirtualQAccessibleTableModelChangeEvent*>(dynamic_cast<const VirtualQAccessibleTableModelChangeEvent*>(self));
    if (vqaccessibletablemodelchangeevent && vqaccessibletablemodelchangeevent->isVirtualQAccessibleTableModelChangeEvent) {
        return vqaccessibletablemodelchangeevent->accessibleInterface();
    } else {
        return self->QAccessibleTableModelChangeEvent::accessibleInterface();
    }
}

// Base class handler implementation
QAccessibleInterface* QAccessibleTableModelChangeEvent_QBaseAccessibleInterface(const QAccessibleTableModelChangeEvent* self) {
    auto* vqaccessibletablemodelchangeevent = const_cast<VirtualQAccessibleTableModelChangeEvent*>(dynamic_cast<const VirtualQAccessibleTableModelChangeEvent*>(self));
    if (vqaccessibletablemodelchangeevent && vqaccessibletablemodelchangeevent->isVirtualQAccessibleTableModelChangeEvent) {
        vqaccessibletablemodelchangeevent->setQAccessibleTableModelChangeEvent_AccessibleInterface_IsBase(true);
        return vqaccessibletablemodelchangeevent->accessibleInterface();
    } else {
        return self->QAccessibleTableModelChangeEvent::accessibleInterface();
    }
}

// Auxiliary method to allow providing re-implementation
void QAccessibleTableModelChangeEvent_OnAccessibleInterface(const QAccessibleTableModelChangeEvent* self, intptr_t slot) {
    auto* vqaccessibletablemodelchangeevent = const_cast<VirtualQAccessibleTableModelChangeEvent*>(dynamic_cast<const VirtualQAccessibleTableModelChangeEvent*>(self));
    if (vqaccessibletablemodelchangeevent && vqaccessibletablemodelchangeevent->isVirtualQAccessibleTableModelChangeEvent) {
        vqaccessibletablemodelchangeevent->setQAccessibleTableModelChangeEvent_AccessibleInterface_Callback(reinterpret_cast<VirtualQAccessibleTableModelChangeEvent::QAccessibleTableModelChangeEvent_AccessibleInterface_Callback>(slot));
    }
}

void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self) {
    delete self;
}
