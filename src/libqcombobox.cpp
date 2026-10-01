#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QComboBox>
#include <QCompleter>
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
#include <QLineEdit>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QModelIndex>
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
#include <QValidator>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qcombobox.h>
#include "libqcombobox.h"
#include "libqcombobox.hxx"

QComboBox* QComboBox_new(QWidget* parent) {
    return new VirtualQComboBox(parent);
}

QComboBox* QComboBox_new2() {
    return new VirtualQComboBox();
}

QMetaObject* QComboBox_MetaObject(const QComboBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QComboBox_Metacast(QComboBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QComboBox_Metacall(QComboBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QComboBox_Tr(const char* s) {
    auto _ret = QComboBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QComboBox_MaxVisibleItems(const QComboBox* self) {
    return self->maxVisibleItems();
}

void QComboBox_SetMaxVisibleItems(QComboBox* self, int maxItems) {
    self->setMaxVisibleItems(static_cast<int>(maxItems));
}

int QComboBox_Count(const QComboBox* self) {
    return self->count();
}

void QComboBox_SetMaxCount(QComboBox* self, int max) {
    self->setMaxCount(static_cast<int>(max));
}

int QComboBox_MaxCount(const QComboBox* self) {
    return self->maxCount();
}

bool QComboBox_DuplicatesEnabled(const QComboBox* self) {
    return self->duplicatesEnabled();
}

void QComboBox_SetDuplicatesEnabled(QComboBox* self, bool enable) {
    self->setDuplicatesEnabled(enable);
}

void QComboBox_SetFrame(QComboBox* self, bool frame) {
    self->setFrame(frame);
}

bool QComboBox_HasFrame(const QComboBox* self) {
    return self->hasFrame();
}

int QComboBox_FindText(const QComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->findText(text_QString);
}

int QComboBox_FindData(const QComboBox* self, const QVariant* data) {
    return self->findData(*data);
}

int QComboBox_InsertPolicy(const QComboBox* self) {
    return static_cast<int>(self->insertPolicy());
}

void QComboBox_SetInsertPolicy(QComboBox* self, int policy) {
    self->setInsertPolicy(static_cast<QComboBox::InsertPolicy>(policy));
}

int QComboBox_SizeAdjustPolicy(const QComboBox* self) {
    return static_cast<int>(self->sizeAdjustPolicy());
}

void QComboBox_SetSizeAdjustPolicy(QComboBox* self, int policy) {
    self->setSizeAdjustPolicy(static_cast<QComboBox::SizeAdjustPolicy>(policy));
}

int QComboBox_MinimumContentsLength(const QComboBox* self) {
    return self->minimumContentsLength();
}

void QComboBox_SetMinimumContentsLength(QComboBox* self, int characters) {
    self->setMinimumContentsLength(static_cast<int>(characters));
}

QSize* QComboBox_IconSize(const QComboBox* self) {
    return new QSize(self->iconSize());
}

void QComboBox_SetIconSize(QComboBox* self, const QSize* size) {
    self->setIconSize(*size);
}

void QComboBox_SetPlaceholderText(QComboBox* self, const libqt_string placeholderText) {
    QString placeholderText_QString = QString::fromUtf8(placeholderText.data, placeholderText.len);
    self->setPlaceholderText(placeholderText_QString);
}

libqt_string QComboBox_PlaceholderText(const QComboBox* self) {
    auto _ret = self->placeholderText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QComboBox_IsEditable(const QComboBox* self) {
    return self->isEditable();
}

void QComboBox_SetEditable(QComboBox* self, bool editable) {
    self->setEditable(editable);
}

void QComboBox_SetLineEdit(QComboBox* self, QLineEdit* edit) {
    self->setLineEdit(edit);
}

QLineEdit* QComboBox_LineEdit(const QComboBox* self) {
    return self->lineEdit();
}

void QComboBox_SetValidator(QComboBox* self, const QValidator* v) {
    self->setValidator(v);
}

QValidator* QComboBox_Validator(const QComboBox* self) {
    return (QValidator*)self->validator();
}

void QComboBox_SetCompleter(QComboBox* self, QCompleter* c) {
    self->setCompleter(c);
}

QCompleter* QComboBox_Completer(const QComboBox* self) {
    return self->completer();
}

QAbstractItemDelegate* QComboBox_ItemDelegate(const QComboBox* self) {
    return self->itemDelegate();
}

void QComboBox_SetItemDelegate(QComboBox* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemModel* QComboBox_Model(const QComboBox* self) {
    return self->model();
}

void QComboBox_SetModel(QComboBox* self, QAbstractItemModel* model) {
    self->setModel(model);
}

QModelIndex* QComboBox_RootModelIndex(const QComboBox* self) {
    return new QModelIndex(self->rootModelIndex());
}

void QComboBox_SetRootModelIndex(QComboBox* self, const QModelIndex* index) {
    self->setRootModelIndex(*index);
}

int QComboBox_ModelColumn(const QComboBox* self) {
    return self->modelColumn();
}

void QComboBox_SetModelColumn(QComboBox* self, int visibleColumn) {
    self->setModelColumn(static_cast<int>(visibleColumn));
}

int QComboBox_CurrentIndex(const QComboBox* self) {
    return self->currentIndex();
}

libqt_string QComboBox_CurrentText(const QComboBox* self) {
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

QVariant* QComboBox_CurrentData(const QComboBox* self) {
    return new QVariant(self->currentData());
}

libqt_string QComboBox_ItemText(const QComboBox* self, int index) {
    auto _ret = self->itemText(static_cast<int>(index));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QIcon* QComboBox_ItemIcon(const QComboBox* self, int index) {
    return new QIcon(self->itemIcon(static_cast<int>(index)));
}

QVariant* QComboBox_ItemData(const QComboBox* self, int index) {
    return new QVariant(self->itemData(static_cast<int>(index)));
}

void QComboBox_AddItem(QComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(text_QString);
}

void QComboBox_AddItem2(QComboBox* self, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(*icon, text_QString);
}

void QComboBox_AddItems(QComboBox* self, const libqt_list /* of libqt_string */ texts) {
    QList<QString> texts_QList;
    texts_QList.reserve(texts.len);
    libqt_string* texts_arr = static_cast<libqt_string*>(texts.data);
    for (size_t i = 0; i < texts.len; ++i) {
        QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
        texts_QList.push_back(texts_arr_i_QString);
    }
    self->addItems(texts_QList);
}

void QComboBox_InsertItem(QComboBox* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), text_QString);
}

void QComboBox_InsertItem2(QComboBox* self, int index, const QIcon* icon, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), *icon, text_QString);
}

void QComboBox_InsertItems(QComboBox* self, int index, const libqt_list /* of libqt_string */ texts) {
    QList<QString> texts_QList;
    texts_QList.reserve(texts.len);
    libqt_string* texts_arr = static_cast<libqt_string*>(texts.data);
    for (size_t i = 0; i < texts.len; ++i) {
        QString texts_arr_i_QString = QString::fromUtf8(texts_arr[i].data, texts_arr[i].len);
        texts_QList.push_back(texts_arr_i_QString);
    }
    self->insertItems(static_cast<int>(index), texts_QList);
}

void QComboBox_InsertSeparator(QComboBox* self, int index) {
    self->insertSeparator(static_cast<int>(index));
}

void QComboBox_RemoveItem(QComboBox* self, int index) {
    self->removeItem(static_cast<int>(index));
}

void QComboBox_SetItemText(QComboBox* self, int index, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setItemText(static_cast<int>(index), text_QString);
}

void QComboBox_SetItemIcon(QComboBox* self, int index, const QIcon* icon) {
    self->setItemIcon(static_cast<int>(index), *icon);
}

void QComboBox_SetItemData(QComboBox* self, int index, const QVariant* value) {
    self->setItemData(static_cast<int>(index), *value);
}

QAbstractItemView* QComboBox_View(const QComboBox* self) {
    return self->view();
}

void QComboBox_SetView(QComboBox* self, QAbstractItemView* itemView) {
    self->setView(itemView);
}

QSize* QComboBox_SizeHint(const QComboBox* self) {
    return new QSize(self->sizeHint());
}

QSize* QComboBox_MinimumSizeHint(const QComboBox* self) {
    return new QSize(self->minimumSizeHint());
}

void QComboBox_ShowPopup(QComboBox* self) {
    self->showPopup();
}

void QComboBox_HidePopup(QComboBox* self) {
    self->hidePopup();
}

bool QComboBox_Event(QComboBox* self, QEvent* event) {
    return self->event(event);
}

QVariant* QComboBox_InputMethodQuery(const QComboBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

QVariant* QComboBox_InputMethodQuery2(const QComboBox* self, int query, const QVariant* argument) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(query), *argument));
}

void QComboBox_Clear(QComboBox* self) {
    self->clear();
}

void QComboBox_ClearEditText(QComboBox* self) {
    self->clearEditText();
}

void QComboBox_SetEditText(QComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setEditText(text_QString);
}

void QComboBox_SetCurrentIndex(QComboBox* self, int index) {
    self->setCurrentIndex(static_cast<int>(index));
}

void QComboBox_SetCurrentText(QComboBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCurrentText(text_QString);
}

void QComboBox_EditTextChanged(QComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->editTextChanged(param1_QString);
}

void QComboBox_Connect_EditTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::editTextChanged),
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

void QComboBox_Activated(QComboBox* self, int index) {
    self->activated(static_cast<int>(index));
}

void QComboBox_Connect_Activated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(int)>(&QComboBox::activated),
                       [self, slotFunc](int index) {
                           int sigval1 = index;
                           slotFunc(self, sigval1);
                       });
}

void QComboBox_TextActivated(QComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textActivated(param1_QString);
}

void QComboBox_Connect_TextActivated(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textActivated),
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

void QComboBox_Highlighted(QComboBox* self, int index) {
    self->highlighted(static_cast<int>(index));
}

void QComboBox_Connect_Highlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(int)>(&QComboBox::highlighted),
                       [self, slotFunc](int index) {
                           int sigval1 = index;
                           slotFunc(self, sigval1);
                       });
}

void QComboBox_TextHighlighted(QComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->textHighlighted(param1_QString);
}

void QComboBox_Connect_TextHighlighted(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::textHighlighted),
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

void QComboBox_CurrentIndexChanged(QComboBox* self, int index) {
    self->currentIndexChanged(static_cast<int>(index));
}

void QComboBox_Connect_CurrentIndexChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, int) = reinterpret_cast<void (*)(QComboBox*, int)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(int)>(&QComboBox::currentIndexChanged),
                       [self, slotFunc](int index) {
                           int sigval1 = index;
                           slotFunc(self, sigval1);
                       });
}

void QComboBox_CurrentTextChanged(QComboBox* self, const libqt_string param1) {
    QString param1_QString = QString::fromUtf8(param1.data, param1.len);
    self->currentTextChanged(param1_QString);
}

void QComboBox_Connect_CurrentTextChanged(QComboBox* self, intptr_t slot) {
    void (*slotFunc)(QComboBox*, const char*) = reinterpret_cast<void (*)(QComboBox*, const char*)>(slot);
    QComboBox::connect(self,
                       static_cast<void (QComboBox::*)(const QString&)>(&QComboBox::currentTextChanged),
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

void QComboBox_FocusInEvent(QComboBox* self, QFocusEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->focusInEvent(e);
    }
}

void QComboBox_FocusOutEvent(QComboBox* self, QFocusEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->focusOutEvent(e);
    }
}

void QComboBox_ChangeEvent(QComboBox* self, QEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->changeEvent(e);
    }
}

void QComboBox_ResizeEvent(QComboBox* self, QResizeEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->resizeEvent(e);
    }
}

void QComboBox_PaintEvent(QComboBox* self, QPaintEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->paintEvent(e);
    }
}

void QComboBox_ShowEvent(QComboBox* self, QShowEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->showEvent(e);
    }
}

void QComboBox_HideEvent(QComboBox* self, QHideEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->hideEvent(e);
    }
}

void QComboBox_MousePressEvent(QComboBox* self, QMouseEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->mousePressEvent(e);
    }
}

void QComboBox_MouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->mouseReleaseEvent(e);
    }
}

void QComboBox_KeyPressEvent(QComboBox* self, QKeyEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->keyPressEvent(e);
    }
}

void QComboBox_KeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->keyReleaseEvent(e);
    }
}

void QComboBox_WheelEvent(QComboBox* self, QWheelEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->wheelEvent(e);
    }
}

void QComboBox_ContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->contextMenuEvent(e);
    }
}

void QComboBox_InputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->inputMethodEvent(param1);
    }
}

void QComboBox_InitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
    auto* vqcombobox = dynamic_cast<const VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->initStyleOption(option);
    }
}

libqt_string QComboBox_Tr2(const char* s, const char* c) {
    auto _ret = QComboBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QComboBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QComboBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QComboBox_FindText2(const QComboBox* self, const libqt_string text, int flags) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->findText(text_QString, static_cast<Qt::MatchFlags>(flags));
}

int QComboBox_FindData2(const QComboBox* self, const QVariant* data, int role) {
    return self->findData(*data, static_cast<int>(role));
}

int QComboBox_FindData3(const QComboBox* self, const QVariant* data, int role, int flags) {
    return self->findData(*data, static_cast<int>(role), static_cast<Qt::MatchFlags>(flags));
}

QVariant* QComboBox_CurrentData1(const QComboBox* self, int role) {
    return new QVariant(self->currentData(static_cast<int>(role)));
}

QVariant* QComboBox_ItemData2(const QComboBox* self, int index, int role) {
    return new QVariant(self->itemData(static_cast<int>(index), static_cast<int>(role)));
}

void QComboBox_AddItem22(QComboBox* self, const libqt_string text, const QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(text_QString, *userData);
}

void QComboBox_AddItem3(QComboBox* self, const QIcon* icon, const libqt_string text, const QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->addItem(*icon, text_QString, *userData);
}

void QComboBox_InsertItem3(QComboBox* self, int index, const libqt_string text, const QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), text_QString, *userData);
}

void QComboBox_InsertItem4(QComboBox* self, int index, const QIcon* icon, const libqt_string text, const QVariant* userData) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->insertItem(static_cast<int>(index), *icon, text_QString, *userData);
}

void QComboBox_SetItemData3(QComboBox* self, int index, const QVariant* value, int role) {
    self->setItemData(static_cast<int>(index), *value, static_cast<int>(role));
}

// Base class handler implementation
QMetaObject* QComboBox_SuperMetaObject(const QComboBox* self) {
    return (QMetaObject*)self->QComboBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMetaObject(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_metaobject_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QComboBox_SuperMetacast(QComboBox* self, const char* param1) {
    return self->QComboBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMetacast(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_metacast_callback = reinterpret_cast<VirtualQComboBox::QComboBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QComboBox_SuperMetacall(QComboBox* self, int param1, int param2, void** param3) {
    return self->QComboBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMetacall(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_metacall_callback = reinterpret_cast<VirtualQComboBox::QComboBox_Metacall_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperSetModel(QComboBox* self, QAbstractItemModel* model) {
    self->QComboBox::setModel(model);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSetModel(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_setmodel_callback = reinterpret_cast<VirtualQComboBox::QComboBox_SetModel_Callback>(slot);
}

// Base class handler implementation
QSize* QComboBox_SuperSizeHint(const QComboBox* self) {
    return new QSize(self->QComboBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSizeHint(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_sizehint_callback = reinterpret_cast<VirtualQComboBox::QComboBox_SizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QComboBox_SuperMinimumSizeHint(const QComboBox* self) {
    return new QSize(self->QComboBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMinimumSizeHint(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_minimumsizehint_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperShowPopup(QComboBox* self) {
    self->QComboBox::showPopup();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowPopup(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_showpopup_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ShowPopup_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperHidePopup(QComboBox* self) {
    self->QComboBox::hidePopup();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHidePopup(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_hidepopup_callback = reinterpret_cast<VirtualQComboBox::QComboBox_HidePopup_Callback>(slot);
}

// Base class handler implementation
bool QComboBox_SuperEvent(QComboBox* self, QEvent* event) {
    return self->QComboBox::event(event);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_event_callback = reinterpret_cast<VirtualQComboBox::QComboBox_Event_Callback>(slot);
}

// Base class handler implementation
QVariant* QComboBox_SuperInputMethodQuery(const QComboBox* self, int param1) {
    return new QVariant(self->QComboBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodQuery(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_inputmethodquery_callback = reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodQuery_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperFocusInEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::focusInEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusInEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_focusinevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_FocusInEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperFocusOutEvent(QComboBox* self, QFocusEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::focusOutEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusOutEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_focusoutevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_FocusOutEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperChangeEvent(QComboBox* self, QEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnChangeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_changeevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ChangeEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperResizeEvent(QComboBox* self, QResizeEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::resizeEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnResizeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_resizeevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperPaintEvent(QComboBox* self, QPaintEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::paintEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnPaintEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_paintevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_PaintEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperShowEvent(QComboBox* self, QShowEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::showEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnShowEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_showevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperHideEvent(QComboBox* self, QHideEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::hideEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHideEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_hideevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperMousePressEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::mousePressEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMousePressEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_mousepressevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MousePressEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperMouseReleaseEvent(QComboBox* self, QMouseEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::mouseReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseReleaseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_mousereleaseevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MouseReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperKeyPressEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::keyPressEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyPressEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_keypressevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperKeyReleaseEvent(QComboBox* self, QKeyEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::keyReleaseEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnKeyReleaseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_keyreleaseevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_KeyReleaseEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperWheelEvent(QComboBox* self, QWheelEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::wheelEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnWheelEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_wheelevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_WheelEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperContextMenuEvent(QComboBox* self, QContextMenuEvent* e) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::contextMenuEvent(e);
    } else
        qFatal("Error: Protected virtual method QComboBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnContextMenuEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_contextmenuevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperInputMethodEvent(QComboBox* self, QInputMethodEvent* param1) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QComboBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInputMethodEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_inputmethodevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_InputMethodEvent_Callback>(slot);
}

// Base class handler implementation
void QComboBox_SuperInitStyleOption(const QComboBox* self, QStyleOptionComboBox* option) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->QComboBox::initStyleOption(option);
    } else
        qFatal("Error: Protected virtual method QComboBox::initStyleOption called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInitStyleOption(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_initstyleoption_callback = reinterpret_cast<VirtualQComboBox::QComboBox_InitStyleOption_Callback>(slot);
}

// Derived class handler implementation
int QComboBox_DevType(const QComboBox* self) {
    return self->devType();
}

// Base class handler implementation
int QComboBox_SuperDevType(const QComboBox* self) {
    return self->QComboBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDevType(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_devtype_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DevType_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_SetVisible(QComboBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QComboBox_SuperSetVisible(QComboBox* self, bool visible) {
    self->QComboBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSetVisible(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_setvisible_callback = reinterpret_cast<VirtualQComboBox::QComboBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
int QComboBox_HeightForWidth(const QComboBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QComboBox_SuperHeightForWidth(const QComboBox* self, int param1) {
    return self->QComboBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHeightForWidth(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_heightforwidth_callback = reinterpret_cast<VirtualQComboBox::QComboBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QComboBox_HasHeightForWidth(const QComboBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QComboBox_SuperHasHeightForWidth(const QComboBox* self) {
    return self->QComboBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnHasHeightForWidth(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_hasheightforwidth_callback = reinterpret_cast<VirtualQComboBox::QComboBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QComboBox_PaintEngine(const QComboBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QComboBox_SuperPaintEngine(const QComboBox* self) {
    return self->QComboBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnPaintEngine(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_paintengine_callback = reinterpret_cast<VirtualQComboBox::QComboBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_MouseDoubleClickEvent(QComboBox* self, QMouseEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperMouseDoubleClickEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseDoubleClickEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_MouseMoveEvent(QComboBox* self, QMouseEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperMouseMoveEvent(QComboBox* self, QMouseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMouseMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_mousemoveevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_EnterEvent(QComboBox* self, QEnterEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperEnterEvent(QComboBox* self, QEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEnterEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_enterevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_LeaveEvent(QComboBox* self, QEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperLeaveEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnLeaveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_leaveevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_MoveEvent(QComboBox* self, QMoveEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperMoveEvent(QComboBox* self, QMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_moveevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_CloseEvent(QComboBox* self, QCloseEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperCloseEvent(QComboBox* self, QCloseEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnCloseEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_closeevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_TabletEvent(QComboBox* self, QTabletEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperTabletEvent(QComboBox* self, QTabletEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnTabletEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_tabletevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_ActionEvent(QComboBox* self, QActionEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperActionEvent(QComboBox* self, QActionEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnActionEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_actionevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_DragEnterEvent(QComboBox* self, QDragEnterEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperDragEnterEvent(QComboBox* self, QDragEnterEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragEnterEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_dragenterevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_DragMoveEvent(QComboBox* self, QDragMoveEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperDragMoveEvent(QComboBox* self, QDragMoveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragMoveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_dragmoveevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_DragLeaveEvent(QComboBox* self, QDragLeaveEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperDragLeaveEvent(QComboBox* self, QDragLeaveEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDragLeaveEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_dragleaveevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_DropEvent(QComboBox* self, QDropEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperDropEvent(QComboBox* self, QDropEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDropEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_dropevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
bool QComboBox_NativeEvent(QComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        return vqcombobox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QComboBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QComboBox_SuperNativeEvent(QComboBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->QComboBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QComboBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnNativeEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_nativeevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QComboBox_Metric(const QComboBox* self, int param1) {
    auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self));
    if (vqcombobox) {
        return vqcombobox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QComboBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QComboBox_SuperMetric(const QComboBox* self, int param1) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->QComboBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QComboBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnMetric(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_metric_callback = reinterpret_cast<VirtualQComboBox::QComboBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_InitPainter(const QComboBox* self, QPainter* painter) {
    auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self));
    if (vqcombobox) {
        vqcombobox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QComboBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperInitPainter(const QComboBox* self, QPainter* painter) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        vqcombobox->QComboBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QComboBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnInitPainter(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_initpainter_callback = reinterpret_cast<VirtualQComboBox::QComboBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QComboBox_Redirected(const QComboBox* self, QPoint* offset) {
    auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self));
    if (vqcombobox) {
        return vqcombobox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QComboBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QComboBox_SuperRedirected(const QComboBox* self, QPoint* offset) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->QComboBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QComboBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnRedirected(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_redirected_callback = reinterpret_cast<VirtualQComboBox::QComboBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QComboBox_SharedPainter(const QComboBox* self) {
    auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self));
    if (vqcombobox) {
        return vqcombobox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QComboBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QComboBox_SuperSharedPainter(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->QComboBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QComboBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnSharedPainter(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self)))
        vqcombobox->qcombobox_sharedpainter_callback = reinterpret_cast<VirtualQComboBox::QComboBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
bool QComboBox_FocusNextPrevChild(QComboBox* self, bool next) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        return vqcombobox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QComboBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QComboBox_SuperFocusNextPrevChild(QComboBox* self, bool next) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->QComboBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QComboBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnFocusNextPrevChild(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_focusnextprevchild_callback = reinterpret_cast<VirtualQComboBox::QComboBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QComboBox_EventFilter(QComboBox* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QComboBox_SuperEventFilter(QComboBox* self, QObject* watched, QEvent* event) {
    return self->QComboBox::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnEventFilter(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_eventfilter_callback = reinterpret_cast<VirtualQComboBox::QComboBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_TimerEvent(QComboBox* self, QTimerEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperTimerEvent(QComboBox* self, QTimerEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnTimerEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_timerevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_ChildEvent(QComboBox* self, QChildEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperChildEvent(QComboBox* self, QChildEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnChildEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_childevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_CustomEvent(QComboBox* self, QEvent* event) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QComboBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperCustomEvent(QComboBox* self, QEvent* event) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QComboBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnCustomEvent(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_customevent_callback = reinterpret_cast<VirtualQComboBox::QComboBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_ConnectNotify(QComboBox* self, const QMetaMethod* signal) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QComboBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperConnectNotify(QComboBox* self, const QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QComboBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnConnectNotify(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_connectnotify_callback = reinterpret_cast<VirtualQComboBox::QComboBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QComboBox_DisconnectNotify(QComboBox* self, const QMetaMethod* signal) {
    auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self);
    if (vqcombobox) {
        vqcombobox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QComboBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QComboBox_SuperDisconnectNotify(QComboBox* self, const QMetaMethod* signal) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->QComboBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QComboBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QComboBox_OnDisconnectNotify(QComboBox* self, intptr_t slot) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self))
        vqcombobox->qcombobox_disconnectnotify_callback = reinterpret_cast<VirtualQComboBox::QComboBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QComboBox_UpdateMicroFocus(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->VirtualQComboBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QComboBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QComboBox_Create(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->VirtualQComboBox::create();
    } else
        qFatal("Error: Protected method QComboBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QComboBox_Destroy(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        vqcombobox->VirtualQComboBox::destroy();
    } else
        qFatal("Error: Protected method QComboBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QComboBox_FocusNextChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->VirtualQComboBox::focusNextChild();
    } else
        qFatal("Error: Protected method QComboBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QComboBox_FocusPreviousChild(QComboBox* self) {
    if (auto* vqcombobox = dynamic_cast<VirtualQComboBox*>(self)) {
        return vqcombobox->VirtualQComboBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QComboBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QComboBox_Sender(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->VirtualQComboBox::sender();
    } else
        qFatal("Error: Protected method QComboBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QComboBox_SenderSignalIndex(const QComboBox* self) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->VirtualQComboBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QComboBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QComboBox_Receivers(const QComboBox* self, const char* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->VirtualQComboBox::receivers(signal);
    } else
        qFatal("Error: Protected method QComboBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QComboBox_IsSignalConnected(const QComboBox* self, const QMetaMethod* signal) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->VirtualQComboBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QComboBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QComboBox_GetDecodedMetricF(const QComboBox* self, int metricA, int metricB) {
    if (auto* vqcombobox = const_cast<VirtualQComboBox*>(dynamic_cast<const VirtualQComboBox*>(self))) {
        return vqcombobox->VirtualQComboBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QComboBox::getDecodedMetricF called without a directly constructed type");
}

void QComboBox_Delete(QComboBox* self) {
    delete self;
}
