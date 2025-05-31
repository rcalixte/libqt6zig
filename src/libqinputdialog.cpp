#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputDialog>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
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
#include <QByteArray>
#include <cstring>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qinputdialog.h>
#include "libqinputdialog.h"
#include "libqinputdialog.hxx"

QInputDialog* QInputDialog_new(QWidget* parent) {
    return new VirtualQInputDialog(parent);
}

QInputDialog* QInputDialog_new2() {
    return new VirtualQInputDialog();
}

QInputDialog* QInputDialog_new3(QWidget* parent, int flags) {
    return new VirtualQInputDialog(parent, static_cast<Qt::WindowFlags>(flags));
}

QMetaObject* QInputDialog_MetaObject(const QInputDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QInputDialog_Metacast(QInputDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QInputDialog_Metacall(QInputDialog* self, int param1, int param2, void** param3) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQInputDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QInputDialog_OnMetacall(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Metacall_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QInputDialog_QBaseMetacall(QInputDialog* self, int param1, int param2, void** param3) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Metacall_IsBase(true);
        return vqinputdialog->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQInputDialog*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QInputDialog_Tr(const char* s) {
    QString _ret = QInputDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetInputMode(QInputDialog* self, int mode) {
    self->setInputMode(static_cast<QInputDialog::InputMode>(mode));
}

int QInputDialog_InputMode(const QInputDialog* self) {
    return static_cast<int>(self->inputMode());
}

void QInputDialog_SetLabelText(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLabelText(text_QString);
}

libqt_string QInputDialog_LabelText(const QInputDialog* self) {
    QString _ret = self->labelText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetOption(QInputDialog* self, int option) {
    self->setOption(static_cast<QInputDialog::InputDialogOption>(option));
}

bool QInputDialog_TestOption(const QInputDialog* self, int option) {
    return self->testOption(static_cast<QInputDialog::InputDialogOption>(option));
}

void QInputDialog_SetOptions(QInputDialog* self, int options) {
    self->setOptions(static_cast<QInputDialog::InputDialogOptions>(options));
}

int QInputDialog_Options(const QInputDialog* self) {
    return static_cast<int>(self->options());
}

void QInputDialog_SetTextValue(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setTextValue(text_QString);
}

libqt_string QInputDialog_TextValue(const QInputDialog* self) {
    QString _ret = self->textValue();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetTextEchoMode(QInputDialog* self, int mode) {
    self->setTextEchoMode(static_cast<QLineEdit::EchoMode>(mode));
}

int QInputDialog_TextEchoMode(const QInputDialog* self) {
    return static_cast<int>(self->textEchoMode());
}

void QInputDialog_SetComboBoxEditable(QInputDialog* self, bool editable) {
    self->setComboBoxEditable(editable);
}

bool QInputDialog_IsComboBoxEditable(const QInputDialog* self) {
    return self->isComboBoxEditable();
}

void QInputDialog_SetComboBoxItems(QInputDialog* self, const libqt_list /* of libqt_string */ items) {
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setComboBoxItems(items_QList);
}

libqt_list /* of libqt_string */ QInputDialog_ComboBoxItems(const QInputDialog* self) {
    QStringList _ret = self->comboBoxItems();
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

void QInputDialog_SetIntValue(QInputDialog* self, int value) {
    self->setIntValue(static_cast<int>(value));
}

int QInputDialog_IntValue(const QInputDialog* self) {
    return self->intValue();
}

void QInputDialog_SetIntMinimum(QInputDialog* self, int min) {
    self->setIntMinimum(static_cast<int>(min));
}

int QInputDialog_IntMinimum(const QInputDialog* self) {
    return self->intMinimum();
}

void QInputDialog_SetIntMaximum(QInputDialog* self, int max) {
    self->setIntMaximum(static_cast<int>(max));
}

int QInputDialog_IntMaximum(const QInputDialog* self) {
    return self->intMaximum();
}

void QInputDialog_SetIntRange(QInputDialog* self, int min, int max) {
    self->setIntRange(static_cast<int>(min), static_cast<int>(max));
}

void QInputDialog_SetIntStep(QInputDialog* self, int step) {
    self->setIntStep(static_cast<int>(step));
}

int QInputDialog_IntStep(const QInputDialog* self) {
    return self->intStep();
}

void QInputDialog_SetDoubleValue(QInputDialog* self, double value) {
    self->setDoubleValue(static_cast<double>(value));
}

double QInputDialog_DoubleValue(const QInputDialog* self) {
    return self->doubleValue();
}

void QInputDialog_SetDoubleMinimum(QInputDialog* self, double min) {
    self->setDoubleMinimum(static_cast<double>(min));
}

double QInputDialog_DoubleMinimum(const QInputDialog* self) {
    return self->doubleMinimum();
}

void QInputDialog_SetDoubleMaximum(QInputDialog* self, double max) {
    self->setDoubleMaximum(static_cast<double>(max));
}

double QInputDialog_DoubleMaximum(const QInputDialog* self) {
    return self->doubleMaximum();
}

void QInputDialog_SetDoubleRange(QInputDialog* self, double min, double max) {
    self->setDoubleRange(static_cast<double>(min), static_cast<double>(max));
}

void QInputDialog_SetDoubleDecimals(QInputDialog* self, int decimals) {
    self->setDoubleDecimals(static_cast<int>(decimals));
}

int QInputDialog_DoubleDecimals(const QInputDialog* self) {
    return self->doubleDecimals();
}

void QInputDialog_SetOkButtonText(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setOkButtonText(text_QString);
}

libqt_string QInputDialog_OkButtonText(const QInputDialog* self) {
    QString _ret = self->okButtonText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCancelButtonText(text_QString);
}

libqt_string QInputDialog_CancelButtonText(const QInputDialog* self) {
    QString _ret = self->cancelButtonText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QInputDialog_GetInt(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString);
}

double QInputDialog_GetDouble(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString);
}

void QInputDialog_SetDoubleStep(QInputDialog* self, double step) {
    self->setDoubleStep(static_cast<double>(step));
}

double QInputDialog_DoubleStep(const QInputDialog* self) {
    return self->doubleStep();
}

void QInputDialog_TextValueChanged(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textValueChanged(text_QString);
}

void QInputDialog_Connect_TextValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, libqt_string) = reinterpret_cast<void (*)(QInputDialog*, libqt_string)>(slot);
    QInputDialog::connect(self, &QInputDialog::textValueChanged, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        libqt_string text_str;
        text_str.len = text_b.length();
        text_str.data = static_cast<char*>(malloc((text_str.len + 1) * sizeof(char)));
        memcpy(text_str.data, text_b.data(), text_str.len);
        text_str.data[text_str.len] = '\0';
        libqt_string sigval1 = text_str;
        slotFunc(self, sigval1);
    });
}

void QInputDialog_TextValueSelected(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textValueSelected(text_QString);
}

void QInputDialog_Connect_TextValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, libqt_string) = reinterpret_cast<void (*)(QInputDialog*, libqt_string)>(slot);
    QInputDialog::connect(self, &QInputDialog::textValueSelected, [self, slotFunc](const QString& text) {
        const QString text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        libqt_string text_str;
        text_str.len = text_b.length();
        text_str.data = static_cast<char*>(malloc((text_str.len + 1) * sizeof(char)));
        memcpy(text_str.data, text_b.data(), text_str.len);
        text_str.data[text_str.len] = '\0';
        libqt_string sigval1 = text_str;
        slotFunc(self, sigval1);
    });
}

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
    self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_Connect_IntValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self, &QInputDialog::intValueChanged, [self, slotFunc](int value) {
        int sigval1 = value;
        slotFunc(self, sigval1);
    });
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
    self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_Connect_IntValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self, &QInputDialog::intValueSelected, [self, slotFunc](int value) {
        int sigval1 = value;
        slotFunc(self, sigval1);
    });
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
    self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_Connect_DoubleValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self, &QInputDialog::doubleValueChanged, [self, slotFunc](double value) {
        double sigval1 = value;
        slotFunc(self, sigval1);
    });
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
    self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_Connect_DoubleValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self, &QInputDialog::doubleValueSelected, [self, slotFunc](double value) {
        double sigval1 = value;
        slotFunc(self, sigval1);
    });
}

libqt_string QInputDialog_Tr2(const char* s, const char* c) {
    QString _ret = QInputDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_Tr3(const char* s, const char* c, int n) {
    QString _ret = QInputDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetOption2(QInputDialog* self, int option, bool on) {
    self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

libqt_string QInputDialog_GetText4(QWidget* parent, const libqt_string title, const libqt_string label, int echo) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText5(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText6(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText7(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText8(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText4(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem8(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem9(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QStringList items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    QString _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<char*>(malloc((_str.len + 1) * sizeof(char)));
    memcpy(_str.data, _b.data(), _str.len);
    _str.data[_str.len] = '\0';
    return _str;
}

int QInputDialog_GetInt4(QWidget* parent, const libqt_string title, const libqt_string label, int value) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value));
}

int QInputDialog_GetInt5(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue));
}

int QInputDialog_GetInt6(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue));
}

int QInputDialog_GetInt7(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step));
}

int QInputDialog_GetInt8(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok);
}

int QInputDialog_GetInt9(QWidget* parent, const libqt_string title, const libqt_string label, int value, int minValue, int maxValue, int step, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getInt(parent, title_QString, label_QString, static_cast<int>(value), static_cast<int>(minValue), static_cast<int>(maxValue), static_cast<int>(step), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_GetDouble4(QWidget* parent, const libqt_string title, const libqt_string label, double value) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value));
}

double QInputDialog_GetDouble5(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue));
}

double QInputDialog_GetDouble6(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue));
}

double QInputDialog_GetDouble7(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals));
}

double QInputDialog_GetDouble8(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok);
}

double QInputDialog_GetDouble9(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags));
}

double QInputDialog_GetDouble10(QWidget* parent, const libqt_string title, const libqt_string label, double value, double minValue, double maxValue, int decimals, bool* ok, int flags, double step) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    return QInputDialog::getDouble(parent, title_QString, label_QString, static_cast<double>(value), static_cast<double>(minValue), static_cast<double>(maxValue), static_cast<int>(decimals), ok, static_cast<Qt::WindowFlags>(flags), static_cast<double>(step));
}

// Derived class handler implementation
QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return new QSize(vqinputdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQInputDialog*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QInputDialog_QBaseMinimumSizeHint(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MinimumSizeHint_IsBase(true);
        return new QSize(vqinputdialog->minimumSizeHint());
    } else {
        return new QSize(((VirtualQInputDialog*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMinimumSizeHint(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MinimumSizeHint_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QInputDialog_SizeHint(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return new QSize(vqinputdialog->sizeHint());
    } else {
        return new QSize(((VirtualQInputDialog*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QInputDialog_QBaseSizeHint(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SizeHint_IsBase(true);
        return new QSize(vqinputdialog->sizeHint());
    } else {
        return new QSize(((VirtualQInputDialog*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSizeHint(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SizeHint_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setVisible(visible);
    } else {
        self->QInputDialog::setVisible(visible);
    }
}

// Base class handler implementation
void QInputDialog_QBaseSetVisible(QInputDialog* self, bool visible) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SetVisible_IsBase(true);
        vqinputdialog->setVisible(visible);
    } else {
        self->QInputDialog::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSetVisible(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SetVisible_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Done(QInputDialog* self, int result) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->done(static_cast<int>(result));
    } else {
        self->QInputDialog::done(static_cast<int>(result));
    }
}

// Base class handler implementation
void QInputDialog_QBaseDone(QInputDialog* self, int result) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Done_IsBase(true);
        vqinputdialog->done(static_cast<int>(result));
    } else {
        self->QInputDialog::done(static_cast<int>(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDone(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Done_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Done_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Open(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->open();
    } else {
        self->QInputDialog::open();
    }
}

// Base class handler implementation
void QInputDialog_QBaseOpen(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Open_IsBase(true);
        vqinputdialog->open();
    } else {
        self->QInputDialog::open();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnOpen(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Open_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Open_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_Exec(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->exec();
    } else {
        return self->QInputDialog::exec();
    }
}

// Base class handler implementation
int QInputDialog_QBaseExec(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Exec_IsBase(true);
        return vqinputdialog->exec();
    } else {
        return self->QInputDialog::exec();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnExec(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Exec_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Exec_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Accept(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->accept();
    } else {
        self->QInputDialog::accept();
    }
}

// Base class handler implementation
void QInputDialog_QBaseAccept(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Accept_IsBase(true);
        vqinputdialog->accept();
    } else {
        self->QInputDialog::accept();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnAccept(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Accept_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Accept_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Reject(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->reject();
    } else {
        self->QInputDialog::reject();
    }
}

// Base class handler implementation
void QInputDialog_QBaseReject(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Reject_IsBase(true);
        vqinputdialog->reject();
    } else {
        self->QInputDialog::reject();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnReject(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Reject_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Reject_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_KeyPressEvent(QInputDialog* self, QKeyEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->keyPressEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->keyPressEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseKeyPressEvent(QInputDialog* self, QKeyEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_KeyPressEvent_IsBase(true);
        vqinputdialog->keyPressEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->keyPressEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnKeyPressEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_KeyPressEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_CloseEvent(QInputDialog* self, QCloseEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->closeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->closeEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseCloseEvent(QInputDialog* self, QCloseEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_CloseEvent_IsBase(true);
        vqinputdialog->closeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->closeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnCloseEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_CloseEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ShowEvent(QInputDialog* self, QShowEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->showEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->showEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseShowEvent(QInputDialog* self, QShowEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ShowEvent_IsBase(true);
        vqinputdialog->showEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->showEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnShowEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ShowEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ResizeEvent(QInputDialog* self, QResizeEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->resizeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseResizeEvent(QInputDialog* self, QResizeEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ResizeEvent_IsBase(true);
        vqinputdialog->resizeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnResizeEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ResizeEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->contextMenuEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ContextMenuEvent_IsBase(true);
        vqinputdialog->contextMenuEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->contextMenuEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnContextMenuEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ContextMenuEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_EventFilter(QInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQInputDialog*)self)->eventFilter(param1, param2);
    }
}

// Base class handler implementation
bool QInputDialog_QBaseEventFilter(QInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_EventFilter_IsBase(true);
        return vqinputdialog->eventFilter(param1, param2);
    } else {
        return ((VirtualQInputDialog*)self)->eventFilter(param1, param2);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEventFilter(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_EventFilter_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_DevType(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->devType();
    } else {
        return self->QInputDialog::devType();
    }
}

// Base class handler implementation
int QInputDialog_QBaseDevType(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DevType_IsBase(true);
        return vqinputdialog->devType();
    } else {
        return self->QInputDialog::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDevType(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DevType_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_HeightForWidth(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QInputDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QInputDialog_QBaseHeightForWidth(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HeightForWidth_IsBase(true);
        return vqinputdialog->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QInputDialog::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHeightForWidth(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HeightForWidth_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_HasHeightForWidth(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->hasHeightForWidth();
    } else {
        return self->QInputDialog::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QInputDialog_QBaseHasHeightForWidth(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HasHeightForWidth_IsBase(true);
        return vqinputdialog->hasHeightForWidth();
    } else {
        return self->QInputDialog::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHasHeightForWidth(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HasHeightForWidth_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QInputDialog_PaintEngine(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->paintEngine();
    } else {
        return self->QInputDialog::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QInputDialog_QBasePaintEngine(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_PaintEngine_IsBase(true);
        return vqinputdialog->paintEngine();
    } else {
        return self->QInputDialog::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnPaintEngine(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_PaintEngine_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_Event(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->event(event);
    } else {
        return ((VirtualQInputDialog*)self)->event(event);
    }
}

// Base class handler implementation
bool QInputDialog_QBaseEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Event_IsBase(true);
        return vqinputdialog->event(event);
    } else {
        return ((VirtualQInputDialog*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Event_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_MousePressEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->mousePressEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseMousePressEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MousePressEvent_IsBase(true);
        vqinputdialog->mousePressEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMousePressEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MousePressEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_MouseReleaseEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseMouseReleaseEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseReleaseEvent_IsBase(true);
        vqinputdialog->mouseReleaseEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseReleaseEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_MouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseMouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseDoubleClickEvent_IsBase(true);
        vqinputdialog->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseDoubleClickEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_MouseMoveEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseMouseMoveEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseMoveEvent_IsBase(true);
        vqinputdialog->mouseMoveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseMoveEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MouseMoveEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_WheelEvent(QInputDialog* self, QWheelEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->wheelEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseWheelEvent(QInputDialog* self, QWheelEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_WheelEvent_IsBase(true);
        vqinputdialog->wheelEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnWheelEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_WheelEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_KeyReleaseEvent(QInputDialog* self, QKeyEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseKeyReleaseEvent(QInputDialog* self, QKeyEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_KeyReleaseEvent_IsBase(true);
        vqinputdialog->keyReleaseEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnKeyReleaseEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_FocusInEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->focusInEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseFocusInEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusInEvent_IsBase(true);
        vqinputdialog->focusInEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusInEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusInEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_FocusOutEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->focusOutEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseFocusOutEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusOutEvent_IsBase(true);
        vqinputdialog->focusOutEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusOutEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusOutEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_EnterEvent(QInputDialog* self, QEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->enterEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseEnterEvent(QInputDialog* self, QEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_EnterEvent_IsBase(true);
        vqinputdialog->enterEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEnterEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_EnterEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_LeaveEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->leaveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseLeaveEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_LeaveEvent_IsBase(true);
        vqinputdialog->leaveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnLeaveEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_LeaveEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_PaintEvent(QInputDialog* self, QPaintEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->paintEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBasePaintEvent(QInputDialog* self, QPaintEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_PaintEvent_IsBase(true);
        vqinputdialog->paintEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnPaintEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_PaintEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_MoveEvent(QInputDialog* self, QMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->moveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseMoveEvent(QInputDialog* self, QMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MoveEvent_IsBase(true);
        vqinputdialog->moveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMoveEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_MoveEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_TabletEvent(QInputDialog* self, QTabletEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->tabletEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseTabletEvent(QInputDialog* self, QTabletEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_TabletEvent_IsBase(true);
        vqinputdialog->tabletEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnTabletEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_TabletEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ActionEvent(QInputDialog* self, QActionEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->actionEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseActionEvent(QInputDialog* self, QActionEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ActionEvent_IsBase(true);
        vqinputdialog->actionEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnActionEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ActionEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_DragEnterEvent(QInputDialog* self, QDragEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->dragEnterEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseDragEnterEvent(QInputDialog* self, QDragEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragEnterEvent_IsBase(true);
        vqinputdialog->dragEnterEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragEnterEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragEnterEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_DragMoveEvent(QInputDialog* self, QDragMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->dragMoveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseDragMoveEvent(QInputDialog* self, QDragMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragMoveEvent_IsBase(true);
        vqinputdialog->dragMoveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragMoveEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragMoveEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_DragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseDragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragLeaveEvent_IsBase(true);
        vqinputdialog->dragLeaveEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragLeaveEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DragLeaveEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_DropEvent(QInputDialog* self, QDropEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->dropEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseDropEvent(QInputDialog* self, QDropEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DropEvent_IsBase(true);
        vqinputdialog->dropEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDropEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DropEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_HideEvent(QInputDialog* self, QHideEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->hideEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseHideEvent(QInputDialog* self, QHideEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HideEvent_IsBase(true);
        vqinputdialog->hideEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHideEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_HideEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_NativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQInputDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QInputDialog_QBaseNativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_NativeEvent_IsBase(true);
        return vqinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQInputDialog*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnNativeEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_NativeEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ChangeEvent(QInputDialog* self, QEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->changeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseChangeEvent(QInputDialog* self, QEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ChangeEvent_IsBase(true);
        vqinputdialog->changeEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnChangeEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ChangeEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_Metric(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQInputDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QInputDialog_QBaseMetric(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Metric_IsBase(true);
        return vqinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQInputDialog*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMetric(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Metric_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_InitPainter(const QInputDialog* self, QPainter* painter) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->initPainter(painter);
    } else {
        ((VirtualQInputDialog*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QInputDialog_QBaseInitPainter(const QInputDialog* self, QPainter* painter) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InitPainter_IsBase(true);
        vqinputdialog->initPainter(painter);
    } else {
        ((VirtualQInputDialog*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInitPainter(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InitPainter_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QInputDialog_Redirected(const QInputDialog* self, QPoint* offset) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->redirected(offset);
    } else {
        return ((VirtualQInputDialog*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QInputDialog_QBaseRedirected(const QInputDialog* self, QPoint* offset) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Redirected_IsBase(true);
        return vqinputdialog->redirected(offset);
    } else {
        return ((VirtualQInputDialog*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnRedirected(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Redirected_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QInputDialog_SharedPainter(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->sharedPainter();
    } else {
        return ((VirtualQInputDialog*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QInputDialog_QBaseSharedPainter(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SharedPainter_IsBase(true);
        return vqinputdialog->sharedPainter();
    } else {
        return ((VirtualQInputDialog*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSharedPainter(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SharedPainter_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_InputMethodEvent(QInputDialog* self, QInputMethodEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseInputMethodEvent(QInputDialog* self, QInputMethodEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InputMethodEvent_IsBase(true);
        vqinputdialog->inputMethodEvent(param1);
    } else {
        ((VirtualQInputDialog*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInputMethodEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InputMethodEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QInputDialog_InputMethodQuery(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return new QVariant(vqinputdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQInputDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QInputDialog_QBaseInputMethodQuery(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InputMethodQuery_IsBase(true);
        return new QVariant(vqinputdialog->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQInputDialog*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInputMethodQuery(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_InputMethodQuery_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_FocusNextPrevChild(QInputDialog* self, bool next) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQInputDialog*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QInputDialog_QBaseFocusNextPrevChild(QInputDialog* self, bool next) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusNextPrevChild_IsBase(true);
        return vqinputdialog->focusNextPrevChild(next);
    } else {
        return ((VirtualQInputDialog*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusNextPrevChild(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_TimerEvent(QInputDialog* self, QTimerEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->timerEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseTimerEvent(QInputDialog* self, QTimerEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_TimerEvent_IsBase(true);
        vqinputdialog->timerEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnTimerEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_TimerEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ChildEvent(QInputDialog* self, QChildEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->childEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseChildEvent(QInputDialog* self, QChildEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ChildEvent_IsBase(true);
        vqinputdialog->childEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnChildEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ChildEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_CustomEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->customEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QInputDialog_QBaseCustomEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_CustomEvent_IsBase(true);
        vqinputdialog->customEvent(event);
    } else {
        ((VirtualQInputDialog*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnCustomEvent(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_CustomEvent_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_ConnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->connectNotify(*signal);
    } else {
        ((VirtualQInputDialog*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QInputDialog_QBaseConnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ConnectNotify_IsBase(true);
        vqinputdialog->connectNotify(*signal);
    } else {
        ((VirtualQInputDialog*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnConnectNotify(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_ConnectNotify_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_DisconnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQInputDialog*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QInputDialog_QBaseDisconnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DisconnectNotify_IsBase(true);
        vqinputdialog->disconnectNotify(*signal);
    } else {
        ((VirtualQInputDialog*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDisconnectNotify(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_DisconnectNotify_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_AdjustPosition(QInputDialog* self, QWidget* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->adjustPosition(param1);
    } else {
        ((VirtualQInputDialog*)self)->adjustPosition(param1);
    }
}

// Base class handler implementation
void QInputDialog_QBaseAdjustPosition(QInputDialog* self, QWidget* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_AdjustPosition_IsBase(true);
        vqinputdialog->adjustPosition(param1);
    } else {
        ((VirtualQInputDialog*)self)->adjustPosition(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnAdjustPosition(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_AdjustPosition_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_AdjustPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_UpdateMicroFocus(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->updateMicroFocus();
    } else {
        ((VirtualQInputDialog*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QInputDialog_QBaseUpdateMicroFocus(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_UpdateMicroFocus_IsBase(true);
        vqinputdialog->updateMicroFocus();
    } else {
        ((VirtualQInputDialog*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnUpdateMicroFocus(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Create(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->create();
    } else {
        ((VirtualQInputDialog*)self)->create();
    }
}

// Base class handler implementation
void QInputDialog_QBaseCreate(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Create_IsBase(true);
        vqinputdialog->create();
    } else {
        ((VirtualQInputDialog*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnCreate(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Create_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QInputDialog_Destroy(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->destroy();
    } else {
        ((VirtualQInputDialog*)self)->destroy();
    }
}

// Base class handler implementation
void QInputDialog_QBaseDestroy(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Destroy_IsBase(true);
        vqinputdialog->destroy();
    } else {
        ((VirtualQInputDialog*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDestroy(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Destroy_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_FocusNextChild(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->focusNextChild();
    } else {
        return ((VirtualQInputDialog*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QInputDialog_QBaseFocusNextChild(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusNextChild_IsBase(true);
        return vqinputdialog->focusNextChild();
    } else {
        return ((VirtualQInputDialog*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusNextChild(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusNextChild_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_FocusPreviousChild(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->focusPreviousChild();
    } else {
        return ((VirtualQInputDialog*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QInputDialog_QBaseFocusPreviousChild(QInputDialog* self) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusPreviousChild_IsBase(true);
        return vqinputdialog->focusPreviousChild();
    } else {
        return ((VirtualQInputDialog*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusPreviousChild(QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_FocusPreviousChild_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QInputDialog_Sender(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->sender();
    } else {
        return ((VirtualQInputDialog*)self)->sender();
    }
}

// Base class handler implementation
QObject* QInputDialog_QBaseSender(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Sender_IsBase(true);
        return vqinputdialog->sender();
    } else {
        return ((VirtualQInputDialog*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSender(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Sender_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_SenderSignalIndex(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->senderSignalIndex();
    } else {
        return ((VirtualQInputDialog*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QInputDialog_QBaseSenderSignalIndex(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SenderSignalIndex_IsBase(true);
        return vqinputdialog->senderSignalIndex();
    } else {
        return ((VirtualQInputDialog*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSenderSignalIndex(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_SenderSignalIndex_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QInputDialog_Receivers(const QInputDialog* self, const char* signal) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->receivers(signal);
    } else {
        return ((VirtualQInputDialog*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QInputDialog_QBaseReceivers(const QInputDialog* self, const char* signal) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Receivers_IsBase(true);
        return vqinputdialog->receivers(signal);
    } else {
        return ((VirtualQInputDialog*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnReceivers(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_Receivers_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QInputDialog_IsSignalConnected(const QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        return vqinputdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQInputDialog*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QInputDialog_QBaseIsSignalConnected(const QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_IsSignalConnected_IsBase(true);
        return vqinputdialog->isSignalConnected(*signal);
    } else {
        return ((VirtualQInputDialog*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnIsSignalConnected(const QInputDialog* self, intptr_t slot) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog && vqinputdialog->isVirtualQInputDialog) {
        vqinputdialog->setQInputDialog_IsSignalConnected_Callback(reinterpret_cast<VirtualQInputDialog::QInputDialog_IsSignalConnected_Callback>(slot));
    }
}

void QInputDialog_Delete(QInputDialog* self) {
    delete self;
}
