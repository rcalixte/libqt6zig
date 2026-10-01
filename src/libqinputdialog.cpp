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
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QInputDialog_Tr(const char* s) {
    auto _ret = QInputDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    auto _ret = self->labelText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    auto _ret = self->textValue();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    self->setComboBoxItems(items_QList);
}

libqt_list /* of libqt_string */ QInputDialog_ComboBoxItems(const QInputDialog* self) {
    QList<QString> _ret = self->comboBoxItems();
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
    auto _ret = self->okButtonText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetCancelButtonText(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setCancelButtonText(text_QString);
}

libqt_string QInputDialog_CancelButtonText(const QInputDialog* self) {
    auto _ret = self->cancelButtonText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QInputDialog_MinimumSizeHint(const QInputDialog* self) {
    return new QSize(self->minimumSizeHint());
}

QSize* QInputDialog_SizeHint(const QInputDialog* self) {
    return new QSize(self->sizeHint());
}

void QInputDialog_SetVisible(QInputDialog* self, bool visible) {
    self->setVisible(visible);
}

libqt_string QInputDialog_GetText(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText(QWidget* parent, const libqt_string title, const libqt_string label) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    auto _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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
    void (*slotFunc)(QInputDialog*, const char*) = reinterpret_cast<void (*)(QInputDialog*, const char*)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueChanged),
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

void QInputDialog_TextValueSelected(QInputDialog* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->textValueSelected(text_QString);
}

void QInputDialog_Connect_TextValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, const char*) = reinterpret_cast<void (*)(QInputDialog*, const char*)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(const QString&)>(&QInputDialog::textValueSelected),
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

void QInputDialog_IntValueChanged(QInputDialog* self, int value) {
    self->intValueChanged(static_cast<int>(value));
}

void QInputDialog_Connect_IntValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueChanged),
                          [self, slotFunc](int value) {
                              int sigval1 = value;
                              slotFunc(self, sigval1);
                          });
}

void QInputDialog_IntValueSelected(QInputDialog* self, int value) {
    self->intValueSelected(static_cast<int>(value));
}

void QInputDialog_Connect_IntValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, int) = reinterpret_cast<void (*)(QInputDialog*, int)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(int)>(&QInputDialog::intValueSelected),
                          [self, slotFunc](int value) {
                              int sigval1 = value;
                              slotFunc(self, sigval1);
                          });
}

void QInputDialog_DoubleValueChanged(QInputDialog* self, double value) {
    self->doubleValueChanged(static_cast<double>(value));
}

void QInputDialog_Connect_DoubleValueChanged(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueChanged),
                          [self, slotFunc](double value) {
                              double sigval1 = value;
                              slotFunc(self, sigval1);
                          });
}

void QInputDialog_DoubleValueSelected(QInputDialog* self, double value) {
    self->doubleValueSelected(static_cast<double>(value));
}

void QInputDialog_Connect_DoubleValueSelected(QInputDialog* self, intptr_t slot) {
    void (*slotFunc)(QInputDialog*, double) = reinterpret_cast<void (*)(QInputDialog*, double)>(slot);
    QInputDialog::connect(self,
                          static_cast<void (QInputDialog::*)(double)>(&QInputDialog::doubleValueSelected),
                          [self, slotFunc](double value) {
                              double sigval1 = value;
                              slotFunc(self, sigval1);
                          });
}

void QInputDialog_Done(QInputDialog* self, int result) {
    self->done(static_cast<int>(result));
}

libqt_string QInputDialog_Tr2(const char* s, const char* c) {
    auto _ret = QInputDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QInputDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QInputDialog_SetOption2(QInputDialog* self, int option, bool on) {
    self->setOption(static_cast<QInputDialog::InputDialogOption>(option), on);
}

libqt_string QInputDialog_GetText4(QWidget* parent, const libqt_string title, const libqt_string label, int echo) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText5(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText6(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText7(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetText8(QWidget* parent, const libqt_string title, const libqt_string label, int echo, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getText(parent, title_QString, label_QString, static_cast<QLineEdit::EchoMode>(echo), text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText4(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetMultiLineText7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_string text, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto _ret = QInputDialog::getMultiLineText(parent, title_QString, label_QString, text_QString, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem5(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem6(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem7(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem8(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QInputDialog_GetItem9(QWidget* parent, const libqt_string title, const libqt_string label, const libqt_list /* of libqt_string */ items, int current, bool editable, bool* ok, int flags, int inputMethodHints) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString label_QString = QString::fromUtf8(label.data, label.len);
    QList<QString> items_QList;
    items_QList.reserve(items.len);
    libqt_string* items_arr = static_cast<libqt_string*>(items.data);
    for (size_t i = 0; i < items.len; ++i) {
        QString items_arr_i_QString = QString::fromUtf8(items_arr[i].data, items_arr[i].len);
        items_QList.push_back(items_arr_i_QString);
    }
    auto _ret = QInputDialog::getItem(parent, title_QString, label_QString, items_QList, static_cast<int>(current), editable, ok, static_cast<Qt::WindowFlags>(flags), static_cast<Qt::InputMethodHints>(inputMethodHints));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
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

// Base class handler implementation
QMetaObject* QInputDialog_SuperMetaObject(const QInputDialog* self) {
    return (QMetaObject*)self->QInputDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMetaObject(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_metaobject_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QInputDialog_SuperMetacast(QInputDialog* self, const char* param1) {
    return self->QInputDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMetacast(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_metacast_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QInputDialog_SuperMetacall(QInputDialog* self, int param1, int param2, void** param3) {
    return self->QInputDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMetacall(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_metacall_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QInputDialog_SuperMinimumSizeHint(const QInputDialog* self) {
    return new QSize(self->QInputDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMinimumSizeHint(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_minimumsizehint_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MinimumSizeHint_Callback>(slot);
}

// Base class handler implementation
QSize* QInputDialog_SuperSizeHint(const QInputDialog* self) {
    return new QSize(self->QInputDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSizeHint(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_sizehint_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QInputDialog_SuperSetVisible(QInputDialog* self, bool visible) {
    self->QInputDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSetVisible(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_setvisible_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QInputDialog_SuperDone(QInputDialog* self, int result) {
    self->QInputDialog::done(static_cast<int>(result));
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDone(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_done_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Done_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_Open(QInputDialog* self) {
    self->open();
}

// Base class handler implementation
void QInputDialog_SuperOpen(QInputDialog* self) {
    self->QInputDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnOpen(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_open_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QInputDialog_Exec(QInputDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QInputDialog_SuperExec(QInputDialog* self) {
    return self->QInputDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnExec(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_exec_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_Accept(QInputDialog* self) {
    self->accept();
}

// Base class handler implementation
void QInputDialog_SuperAccept(QInputDialog* self) {
    self->QInputDialog::accept();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnAccept(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_accept_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Accept_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_Reject(QInputDialog* self) {
    self->reject();
}

// Base class handler implementation
void QInputDialog_SuperReject(QInputDialog* self) {
    self->QInputDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnReject(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_reject_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_KeyPressEvent(QInputDialog* self, QKeyEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperKeyPressEvent(QInputDialog* self, QKeyEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnKeyPressEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_keypressevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_CloseEvent(QInputDialog* self, QCloseEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperCloseEvent(QInputDialog* self, QCloseEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnCloseEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_closeevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ShowEvent(QInputDialog* self, QShowEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperShowEvent(QInputDialog* self, QShowEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnShowEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_showevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ResizeEvent(QInputDialog* self, QResizeEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperResizeEvent(QInputDialog* self, QResizeEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnResizeEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_resizeevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperContextMenuEvent(QInputDialog* self, QContextMenuEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnContextMenuEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_contextmenuevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QInputDialog_EventFilter(QInputDialog* self, QObject* param1, QEvent* param2) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        return vqinputdialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QInputDialog_SuperEventFilter(QInputDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->QInputDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QInputDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEventFilter(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_eventfilter_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QInputDialog_DevType(const QInputDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QInputDialog_SuperDevType(const QInputDialog* self) {
    return self->QInputDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDevType(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_devtype_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QInputDialog_HeightForWidth(const QInputDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QInputDialog_SuperHeightForWidth(const QInputDialog* self, int param1) {
    return self->QInputDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHeightForWidth(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_heightforwidth_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QInputDialog_HasHeightForWidth(const QInputDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QInputDialog_SuperHasHeightForWidth(const QInputDialog* self) {
    return self->QInputDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHasHeightForWidth(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_hasheightforwidth_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QInputDialog_PaintEngine(const QInputDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QInputDialog_SuperPaintEngine(const QInputDialog* self) {
    return self->QInputDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnPaintEngine(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_paintengine_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QInputDialog_Event(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        return vqinputdialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QInputDialog_SuperEvent(QInputDialog* self, QEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->QInputDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_event_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_MousePressEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperMousePressEvent(QInputDialog* self, QMouseEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMousePressEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_mousepressevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_MouseReleaseEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperMouseReleaseEvent(QInputDialog* self, QMouseEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseReleaseEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_mousereleaseevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_MouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperMouseDoubleClickEvent(QInputDialog* self, QMouseEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseDoubleClickEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_MouseMoveEvent(QInputDialog* self, QMouseEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperMouseMoveEvent(QInputDialog* self, QMouseEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMouseMoveEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_mousemoveevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_WheelEvent(QInputDialog* self, QWheelEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperWheelEvent(QInputDialog* self, QWheelEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnWheelEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_wheelevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_KeyReleaseEvent(QInputDialog* self, QKeyEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperKeyReleaseEvent(QInputDialog* self, QKeyEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnKeyReleaseEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_keyreleaseevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_FocusInEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperFocusInEvent(QInputDialog* self, QFocusEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusInEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_focusinevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_FocusOutEvent(QInputDialog* self, QFocusEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperFocusOutEvent(QInputDialog* self, QFocusEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusOutEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_focusoutevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_EnterEvent(QInputDialog* self, QEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperEnterEvent(QInputDialog* self, QEnterEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnEnterEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_enterevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_LeaveEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperLeaveEvent(QInputDialog* self, QEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnLeaveEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_leaveevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_PaintEvent(QInputDialog* self, QPaintEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperPaintEvent(QInputDialog* self, QPaintEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnPaintEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_paintevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_MoveEvent(QInputDialog* self, QMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperMoveEvent(QInputDialog* self, QMoveEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMoveEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_moveevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_TabletEvent(QInputDialog* self, QTabletEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperTabletEvent(QInputDialog* self, QTabletEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnTabletEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_tabletevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ActionEvent(QInputDialog* self, QActionEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperActionEvent(QInputDialog* self, QActionEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnActionEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_actionevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_DragEnterEvent(QInputDialog* self, QDragEnterEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperDragEnterEvent(QInputDialog* self, QDragEnterEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragEnterEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_dragenterevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_DragMoveEvent(QInputDialog* self, QDragMoveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperDragMoveEvent(QInputDialog* self, QDragMoveEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragMoveEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_dragmoveevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_DragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperDragLeaveEvent(QInputDialog* self, QDragLeaveEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDragLeaveEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_dragleaveevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_DropEvent(QInputDialog* self, QDropEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperDropEvent(QInputDialog* self, QDropEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDropEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_dropevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_HideEvent(QInputDialog* self, QHideEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperHideEvent(QInputDialog* self, QHideEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnHideEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_hideevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QInputDialog_NativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        return vqinputdialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QInputDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QInputDialog_SuperNativeEvent(QInputDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->QInputDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QInputDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnNativeEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_nativeevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ChangeEvent(QInputDialog* self, QEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperChangeEvent(QInputDialog* self, QEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnChangeEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_changeevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QInputDialog_Metric(const QInputDialog* self, int param1) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog) {
        return vqinputdialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QInputDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QInputDialog_SuperMetric(const QInputDialog* self, int param1) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->QInputDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QInputDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnMetric(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_metric_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_InitPainter(const QInputDialog* self, QPainter* painter) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog) {
        vqinputdialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperInitPainter(const QInputDialog* self, QPainter* painter) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        vqinputdialog->QInputDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QInputDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInitPainter(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_initpainter_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QInputDialog_Redirected(const QInputDialog* self, QPoint* offset) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog) {
        return vqinputdialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QInputDialog_SuperRedirected(const QInputDialog* self, QPoint* offset) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->QInputDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QInputDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnRedirected(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_redirected_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QInputDialog_SharedPainter(const QInputDialog* self) {
    auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self));
    if (vqinputdialog) {
        return vqinputdialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QInputDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QInputDialog_SuperSharedPainter(const QInputDialog* self) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->QInputDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QInputDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnSharedPainter(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_sharedpainter_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_InputMethodEvent(QInputDialog* self, QInputMethodEvent* param1) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperInputMethodEvent(QInputDialog* self, QInputMethodEvent* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QInputDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInputMethodEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_inputmethodevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QInputDialog_InputMethodQuery(const QInputDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QInputDialog_SuperInputMethodQuery(const QInputDialog* self, int param1) {
    return new QVariant(self->QInputDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnInputMethodQuery(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self)))
        vqinputdialog->qinputdialog_inputmethodquery_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QInputDialog_FocusNextPrevChild(QInputDialog* self, bool next) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        return vqinputdialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QInputDialog_SuperFocusNextPrevChild(QInputDialog* self, bool next) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->QInputDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QInputDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnFocusNextPrevChild(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_focusnextprevchild_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_TimerEvent(QInputDialog* self, QTimerEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperTimerEvent(QInputDialog* self, QTimerEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnTimerEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_timerevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ChildEvent(QInputDialog* self, QChildEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperChildEvent(QInputDialog* self, QChildEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnChildEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_childevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_CustomEvent(QInputDialog* self, QEvent* event) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperCustomEvent(QInputDialog* self, QEvent* event) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QInputDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnCustomEvent(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_customevent_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_ConnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperConnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QInputDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnConnectNotify(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_connectnotify_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QInputDialog_DisconnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self);
    if (vqinputdialog) {
        vqinputdialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QInputDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QInputDialog_SuperDisconnectNotify(QInputDialog* self, const QMetaMethod* signal) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->QInputDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QInputDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QInputDialog_OnDisconnectNotify(QInputDialog* self, intptr_t slot) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self))
        vqinputdialog->qinputdialog_disconnectnotify_callback = reinterpret_cast<VirtualQInputDialog::QInputDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QInputDialog_AdjustPosition(QInputDialog* self, QWidget* param1) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->VirtualQInputDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QInputDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QInputDialog_UpdateMicroFocus(QInputDialog* self) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->VirtualQInputDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QInputDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QInputDialog_Create(QInputDialog* self) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->VirtualQInputDialog::create();
    } else
        qFatal("Error: Protected method QInputDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QInputDialog_Destroy(QInputDialog* self) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        vqinputdialog->VirtualQInputDialog::destroy();
    } else
        qFatal("Error: Protected method QInputDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QInputDialog_FocusNextChild(QInputDialog* self) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->VirtualQInputDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QInputDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QInputDialog_FocusPreviousChild(QInputDialog* self) {
    if (auto* vqinputdialog = dynamic_cast<VirtualQInputDialog*>(self)) {
        return vqinputdialog->VirtualQInputDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QInputDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QInputDialog_Sender(const QInputDialog* self) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->VirtualQInputDialog::sender();
    } else
        qFatal("Error: Protected method QInputDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QInputDialog_SenderSignalIndex(const QInputDialog* self) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->VirtualQInputDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QInputDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QInputDialog_Receivers(const QInputDialog* self, const char* signal) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->VirtualQInputDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QInputDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QInputDialog_IsSignalConnected(const QInputDialog* self, const QMetaMethod* signal) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->VirtualQInputDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QInputDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QInputDialog_GetDecodedMetricF(const QInputDialog* self, int metricA, int metricB) {
    if (auto* vqinputdialog = const_cast<VirtualQInputDialog*>(dynamic_cast<const VirtualQInputDialog*>(self))) {
        return vqinputdialog->VirtualQInputDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QInputDialog::getDecodedMetricF called without a directly constructed type");
}

void QInputDialog_Delete(QInputDialog* self) {
    delete self;
}
