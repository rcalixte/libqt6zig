#include <QAbstractButton>
#include <QActionEvent>
#include <QByteArray>
#include <QCheckBox>
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
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMessageBox>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
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
#include <qmessagebox.h>
#include "libqmessagebox.h"
#include "libqmessagebox.hxx"

QMessageBox* QMessageBox_new(QWidget* parent) {
    return new VirtualQMessageBox(parent);
}

QMessageBox* QMessageBox_new2() {
    return new VirtualQMessageBox();
}

QMessageBox* QMessageBox_new3(int icon, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString);
}

QMessageBox* QMessageBox_new4(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

QMessageBox* QMessageBox_new5(int icon, const libqt_string title, const libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons));
}

QMessageBox* QMessageBox_new6(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent);
}

QMessageBox* QMessageBox_new7(int icon, const libqt_string title, const libqt_string text, int buttons, QWidget* parent, int flags) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(static_cast<QMessageBox::Icon>(icon), title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), parent, static_cast<Qt::WindowFlags>(flags));
}

QMessageBox* QMessageBox_new8(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent);
}

QMessageBox* QMessageBox_new9(const libqt_string title, const libqt_string text, int icon, int button0, int button1, int button2, QWidget* parent, int f) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return new VirtualQMessageBox(title_QString, text_QString, static_cast<QMessageBox::Icon>(icon), static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2), parent, static_cast<Qt::WindowFlags>(f));
}

QMetaObject* QMessageBox_MetaObject(const QMessageBox* self) {
    return (QMetaObject*)self->metaObject();
}

void* QMessageBox_Metacast(QMessageBox* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QMessageBox_Metacall(QMessageBox* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QMessageBox_Tr(const char* s) {
    auto _ret = QMessageBox::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageBox_AddButton(QMessageBox* self, QAbstractButton* button, int role) {
    self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton2(QMessageBox* self, const libqt_string text, int role) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->addButton(text_QString, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QMessageBox_AddButton3(QMessageBox* self, int button) {
    return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QMessageBox_RemoveButton(QMessageBox* self, QAbstractButton* button) {
    self->removeButton(button);
}

libqt_list /* of QAbstractButton* */ QMessageBox_Buttons(const QMessageBox* self) {
    QList<QAbstractButton*> _ret = self->buttons();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstractButton** _arr = static_cast<QAbstractButton**>(malloc(sizeof(QAbstractButton*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QMessageBox_ButtonRole(const QMessageBox* self, QAbstractButton* button) {
    return static_cast<int>(self->buttonRole(button));
}

void QMessageBox_SetStandardButtons(QMessageBox* self, int buttons) {
    self->setStandardButtons(static_cast<QMessageBox::StandardButtons>(buttons));
}

int QMessageBox_StandardButtons(const QMessageBox* self) {
    return static_cast<int>(self->standardButtons());
}

int QMessageBox_StandardButton(const QMessageBox* self, QAbstractButton* button) {
    return static_cast<int>(self->standardButton(button));
}

QAbstractButton* QMessageBox_Button(const QMessageBox* self, int which) {
    return self->button(static_cast<QMessageBox::StandardButton>(which));
}

QPushButton* QMessageBox_DefaultButton(const QMessageBox* self) {
    return self->defaultButton();
}

void QMessageBox_SetDefaultButton(QMessageBox* self, QPushButton* button) {
    self->setDefaultButton(button);
}

void QMessageBox_SetDefaultButton2(QMessageBox* self, int button) {
    self->setDefaultButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_EscapeButton(const QMessageBox* self) {
    return self->escapeButton();
}

void QMessageBox_SetEscapeButton(QMessageBox* self, QAbstractButton* button) {
    self->setEscapeButton(button);
}

void QMessageBox_SetEscapeButton2(QMessageBox* self, int button) {
    self->setEscapeButton(static_cast<QMessageBox::StandardButton>(button));
}

QAbstractButton* QMessageBox_ClickedButton(const QMessageBox* self) {
    return self->clickedButton();
}

libqt_string QMessageBox_Text(const QMessageBox* self) {
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

void QMessageBox_SetText(QMessageBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setText(text_QString);
}

int QMessageBox_Icon(const QMessageBox* self) {
    return static_cast<int>(self->icon());
}

void QMessageBox_SetIcon(QMessageBox* self, int icon) {
    self->setIcon(static_cast<QMessageBox::Icon>(icon));
}

QPixmap* QMessageBox_IconPixmap(const QMessageBox* self) {
    return new QPixmap(self->iconPixmap());
}

void QMessageBox_SetIconPixmap(QMessageBox* self, const QPixmap* pixmap) {
    self->setIconPixmap(*pixmap);
}

int QMessageBox_TextFormat(const QMessageBox* self) {
    return static_cast<int>(self->textFormat());
}

void QMessageBox_SetTextFormat(QMessageBox* self, int format) {
    self->setTextFormat(static_cast<Qt::TextFormat>(format));
}

void QMessageBox_SetTextInteractionFlags(QMessageBox* self, int flags) {
    self->setTextInteractionFlags(static_cast<Qt::TextInteractionFlags>(flags));
}

int QMessageBox_TextInteractionFlags(const QMessageBox* self) {
    return static_cast<int>(self->textInteractionFlags());
}

void QMessageBox_SetCheckBox(QMessageBox* self, QCheckBox* cb) {
    self->setCheckBox(cb);
}

QCheckBox* QMessageBox_CheckBox(const QMessageBox* self) {
    return self->checkBox();
}

void QMessageBox_SetOption(QMessageBox* self, int option) {
    self->setOption(static_cast<QMessageBox::Option>(option));
}

bool QMessageBox_TestOption(const QMessageBox* self, int option) {
    return self->testOption(static_cast<QMessageBox::Option>(option));
}

void QMessageBox_SetOptions(QMessageBox* self, int options) {
    self->setOptions(static_cast<QMessageBox::Options>(options));
}

int QMessageBox_Options(const QMessageBox* self) {
    return static_cast<int>(self->options());
}

int QMessageBox_Information(QWidget* parent, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString));
}

int QMessageBox_Information2(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0)));
}

int QMessageBox_Question(QWidget* parent, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString));
}

int QMessageBox_Question2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Warning(QWidget* parent, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString));
}

int QMessageBox_Warning2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

int QMessageBox_Critical(QWidget* parent, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString));
}

int QMessageBox_Critical2(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1));
}

void QMessageBox_About(QWidget* parent, const libqt_string title, const libqt_string text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QMessageBox::about(parent, title_QString, text_QString);
}

void QMessageBox_AboutQt(QWidget* parent) {
    QMessageBox::aboutQt(parent);
}

int QMessageBox_Information3(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Information4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Question3(QWidget* parent, const libqt_string title, const libqt_string text, int button0) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0));
}

int QMessageBox_Question4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Warning3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Warning4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString);
}

int QMessageBox_Critical3(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Critical4(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString);
}

libqt_string QMessageBox_ButtonText(const QMessageBox* self, int button) {
    auto _ret = self->buttonText(static_cast<int>(button));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetButtonText(QMessageBox* self, int button, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setButtonText(static_cast<int>(button), text_QString);
}

libqt_string QMessageBox_InformativeText(const QMessageBox* self) {
    auto _ret = self->informativeText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetInformativeText(QMessageBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setInformativeText(text_QString);
}

libqt_string QMessageBox_DetailedText(const QMessageBox* self) {
    auto _ret = self->detailedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetDetailedText(QMessageBox* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setDetailedText(text_QString);
}

void QMessageBox_SetWindowTitle(QMessageBox* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->setWindowTitle(title_QString);
}

void QMessageBox_SetWindowModality(QMessageBox* self, int windowModality) {
    self->setWindowModality(static_cast<Qt::WindowModality>(windowModality));
}

QPixmap* QMessageBox_StandardIcon(int icon) {
    return new QPixmap(QMessageBox::standardIcon(static_cast<QMessageBox::Icon>(icon)));
}

void QMessageBox_ButtonClicked(QMessageBox* self, QAbstractButton* button) {
    self->buttonClicked(button);
}

void QMessageBox_Connect_ButtonClicked(QMessageBox* self, intptr_t slot) {
    void (*slotFunc)(QMessageBox*, QAbstractButton*) = reinterpret_cast<void (*)(QMessageBox*, QAbstractButton*)>(slot);
    QMessageBox::connect(self,
                         static_cast<void (QMessageBox::*)(QAbstractButton*)>(&QMessageBox::buttonClicked),
                         [self, slotFunc](QAbstractButton* button) {
                             QAbstractButton* sigval1 = button;
                             slotFunc(self, sigval1);
                         });
}

bool QMessageBox_Event(QMessageBox* self, QEvent* e) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        return vqmessagebox->event(e);
    }
    qFatal("Error: Protected method QMessageBox::event called without a directly constructed type");
}

void QMessageBox_ResizeEvent(QMessageBox* self, QResizeEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->resizeEvent(event);
    }
}

void QMessageBox_ShowEvent(QMessageBox* self, QShowEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->showEvent(event);
    }
}

void QMessageBox_CloseEvent(QMessageBox* self, QCloseEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->closeEvent(event);
    }
}

void QMessageBox_KeyPressEvent(QMessageBox* self, QKeyEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->keyPressEvent(event);
    }
}

void QMessageBox_ChangeEvent(QMessageBox* self, QEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->changeEvent(event);
    }
}

libqt_string QMessageBox_Tr2(const char* s, const char* c) {
    auto _ret = QMessageBox::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QMessageBox_Tr3(const char* s, const char* c, int n) {
    auto _ret = QMessageBox::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QMessageBox_SetOption2(QMessageBox* self, int option, bool on) {
    self->setOption(static_cast<QMessageBox::Option>(option), on);
}

int QMessageBox_Information42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Information5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Information52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::information(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButton>(button0), static_cast<QMessageBox::StandardButton>(button1)));
}

int QMessageBox_Question42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Question5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::question(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Warning42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Warning5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::warning(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

int QMessageBox_Critical42(QWidget* parent, const libqt_string title, const libqt_string text, int buttons) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons)));
}

int QMessageBox_Critical5(QWidget* parent, const libqt_string title, const libqt_string text, int buttons, int defaultButton) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<int>(QMessageBox::critical(parent, title_QString, text_QString, static_cast<QMessageBox::StandardButtons>(buttons), static_cast<QMessageBox::StandardButton>(defaultButton)));
}

void QMessageBox_AboutQt2(QWidget* parent, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QMessageBox::aboutQt(parent, title_QString);
}

int QMessageBox_Information53(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Information6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::information(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Information54(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Information62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Information7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Information8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::information(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Question52(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1));
}

int QMessageBox_Question6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::question(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Question53(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Question62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Question7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Question8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::question(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Warning6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Warning52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Warning62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Warning7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Warning8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::warning(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

int QMessageBox_Critical6(QWidget* parent, const libqt_string title, const libqt_string text, int button0, int button1, int button2) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, static_cast<int>(button0), static_cast<int>(button1), static_cast<int>(button2));
}

int QMessageBox_Critical52(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString);
}

int QMessageBox_Critical62(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString);
}

int QMessageBox_Critical7(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber));
}

int QMessageBox_Critical8(QWidget* parent, const libqt_string title, const libqt_string text, const libqt_string button0Text, const libqt_string button1Text, const libqt_string button2Text, int defaultButtonNumber, int escapeButtonNumber) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    QString button0Text_QString = QString::fromUtf8(button0Text.data, button0Text.len);
    QString button1Text_QString = QString::fromUtf8(button1Text.data, button1Text.len);
    QString button2Text_QString = QString::fromUtf8(button2Text.data, button2Text.len);
    return QMessageBox::critical(parent, title_QString, text_QString, button0Text_QString, button1Text_QString, button2Text_QString, static_cast<int>(defaultButtonNumber), static_cast<int>(escapeButtonNumber));
}

// Base class handler implementation
QMetaObject* QMessageBox_SuperMetaObject(const QMessageBox* self) {
    return (QMetaObject*)self->QMessageBox::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMetaObject(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_metaobject_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QMessageBox_SuperMetacast(QMessageBox* self, const char* param1) {
    return self->QMessageBox::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMetacast(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_metacast_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Metacast_Callback>(slot);
}

// Base class handler implementation
int QMessageBox_SuperMetacall(QMessageBox* self, int param1, int param2, void** param3) {
    return self->QMessageBox::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMetacall(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_metacall_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Metacall_Callback>(slot);
}

// Base class handler implementation
bool QMessageBox_SuperEvent(QMessageBox* self, QEvent* e) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->QMessageBox::event(e);
    } else
        qFatal("Error: Protected virtual method QMessageBox::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_event_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Event_Callback>(slot);
}

// Base class handler implementation
void QMessageBox_SuperResizeEvent(QMessageBox* self, QResizeEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnResizeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_resizeevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ResizeEvent_Callback>(slot);
}

// Base class handler implementation
void QMessageBox_SuperShowEvent(QMessageBox* self, QShowEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnShowEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_showevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QMessageBox_SuperCloseEvent(QMessageBox* self, QCloseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCloseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_closeevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QMessageBox_SuperKeyPressEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnKeyPressEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_keypressevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_KeyPressEvent_Callback>(slot);
}

// Base class handler implementation
void QMessageBox_SuperChangeEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::changeEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnChangeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_changeevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_SetVisible(QMessageBox* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QMessageBox_SuperSetVisible(QMessageBox* self, bool visible) {
    self->QMessageBox::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSetVisible(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_setvisible_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QMessageBox_SizeHint(const QMessageBox* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QMessageBox_SuperSizeHint(const QMessageBox* self) {
    return new QSize(self->QMessageBox::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSizeHint(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_sizehint_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QMessageBox_MinimumSizeHint(const QMessageBox* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QMessageBox_SuperMinimumSizeHint(const QMessageBox* self) {
    return new QSize(self->QMessageBox::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMinimumSizeHint(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_minimumsizehint_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_Open(QMessageBox* self) {
    self->open();
}

// Base class handler implementation
void QMessageBox_SuperOpen(QMessageBox* self) {
    self->QMessageBox::open();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnOpen(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_open_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Open_Callback>(slot);
}

// Derived class handler implementation
int QMessageBox_Exec(QMessageBox* self) {
    return self->exec();
}

// Base class handler implementation
int QMessageBox_SuperExec(QMessageBox* self) {
    return self->QMessageBox::exec();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnExec(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_exec_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Exec_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_Done(QMessageBox* self, int param1) {
    self->done(static_cast<int>(param1));
}

// Base class handler implementation
void QMessageBox_SuperDone(QMessageBox* self, int param1) {
    self->QMessageBox::done(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDone(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_done_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Done_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_Accept(QMessageBox* self) {
    self->accept();
}

// Base class handler implementation
void QMessageBox_SuperAccept(QMessageBox* self) {
    self->QMessageBox::accept();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnAccept(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_accept_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Accept_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_Reject(QMessageBox* self) {
    self->reject();
}

// Base class handler implementation
void QMessageBox_SuperReject(QMessageBox* self) {
    self->QMessageBox::reject();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnReject(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_reject_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Reject_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_ContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperContextMenuEvent(QMessageBox* self, QContextMenuEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMessageBox::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnContextMenuEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_contextmenuevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMessageBox_EventFilter(QMessageBox* self, QObject* param1, QEvent* param2) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        return vqmessagebox->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMessageBox_SuperEventFilter(QMessageBox* self, QObject* param1, QEvent* param2) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->QMessageBox::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QMessageBox::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEventFilter(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_eventfilter_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QMessageBox_DevType(const QMessageBox* self) {
    return self->devType();
}

// Base class handler implementation
int QMessageBox_SuperDevType(const QMessageBox* self) {
    return self->QMessageBox::devType();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDevType(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_devtype_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DevType_Callback>(slot);
}

// Derived class handler implementation
int QMessageBox_HeightForWidth(const QMessageBox* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QMessageBox_SuperHeightForWidth(const QMessageBox* self, int param1) {
    return self->QMessageBox::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHeightForWidth(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_heightforwidth_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QMessageBox_HasHeightForWidth(const QMessageBox* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QMessageBox_SuperHasHeightForWidth(const QMessageBox* self) {
    return self->QMessageBox::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHasHeightForWidth(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_hasheightforwidth_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QMessageBox_PaintEngine(const QMessageBox* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QMessageBox_SuperPaintEngine(const QMessageBox* self) {
    return self->QMessageBox::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnPaintEngine(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_paintengine_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_MousePressEvent(QMessageBox* self, QMouseEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperMousePressEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMousePressEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_mousepressevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_MouseReleaseEvent(QMessageBox* self, QMouseEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperMouseReleaseEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseReleaseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_mousereleaseevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_MouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperMouseDoubleClickEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseDoubleClickEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_mousedoubleclickevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_MouseMoveEvent(QMessageBox* self, QMouseEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperMouseMoveEvent(QMessageBox* self, QMouseEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMouseMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_mousemoveevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_WheelEvent(QMessageBox* self, QWheelEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperWheelEvent(QMessageBox* self, QWheelEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnWheelEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_wheelevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_KeyReleaseEvent(QMessageBox* self, QKeyEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperKeyReleaseEvent(QMessageBox* self, QKeyEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnKeyReleaseEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_keyreleaseevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_FocusInEvent(QMessageBox* self, QFocusEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperFocusInEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusInEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_focusinevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_FocusOutEvent(QMessageBox* self, QFocusEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperFocusOutEvent(QMessageBox* self, QFocusEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusOutEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_focusoutevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_EnterEvent(QMessageBox* self, QEnterEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperEnterEvent(QMessageBox* self, QEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnEnterEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_enterevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_LeaveEvent(QMessageBox* self, QEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperLeaveEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnLeaveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_leaveevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_PaintEvent(QMessageBox* self, QPaintEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperPaintEvent(QMessageBox* self, QPaintEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnPaintEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_paintevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_MoveEvent(QMessageBox* self, QMoveEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperMoveEvent(QMessageBox* self, QMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_moveevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_TabletEvent(QMessageBox* self, QTabletEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperTabletEvent(QMessageBox* self, QTabletEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnTabletEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_tabletevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_ActionEvent(QMessageBox* self, QActionEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperActionEvent(QMessageBox* self, QActionEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnActionEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_actionevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_DragEnterEvent(QMessageBox* self, QDragEnterEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperDragEnterEvent(QMessageBox* self, QDragEnterEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragEnterEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_dragenterevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_DragMoveEvent(QMessageBox* self, QDragMoveEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperDragMoveEvent(QMessageBox* self, QDragMoveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragMoveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_dragmoveevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_DragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperDragLeaveEvent(QMessageBox* self, QDragLeaveEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDragLeaveEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_dragleaveevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_DropEvent(QMessageBox* self, QDropEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperDropEvent(QMessageBox* self, QDropEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDropEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_dropevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_HideEvent(QMessageBox* self, QHideEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperHideEvent(QMessageBox* self, QHideEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnHideEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_hideevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QMessageBox_NativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        return vqmessagebox->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QMessageBox::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMessageBox_SuperNativeEvent(QMessageBox* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->QMessageBox::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QMessageBox::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnNativeEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_nativeevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QMessageBox_Metric(const QMessageBox* self, int param1) {
    auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self));
    if (vqmessagebox) {
        return vqmessagebox->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QMessageBox::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QMessageBox_SuperMetric(const QMessageBox* self, int param1) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->QMessageBox::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QMessageBox::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnMetric(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_metric_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Metric_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_InitPainter(const QMessageBox* self, QPainter* painter) {
    auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self));
    if (vqmessagebox) {
        vqmessagebox->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperInitPainter(const QMessageBox* self, QPainter* painter) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        vqmessagebox->QMessageBox::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QMessageBox::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInitPainter(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_initpainter_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QMessageBox_Redirected(const QMessageBox* self, QPoint* offset) {
    auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self));
    if (vqmessagebox) {
        return vqmessagebox->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QMessageBox_SuperRedirected(const QMessageBox* self, QPoint* offset) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->QMessageBox::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QMessageBox::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnRedirected(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_redirected_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QMessageBox_SharedPainter(const QMessageBox* self) {
    auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self));
    if (vqmessagebox) {
        return vqmessagebox->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QMessageBox::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QMessageBox_SuperSharedPainter(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->QMessageBox::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QMessageBox::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnSharedPainter(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_sharedpainter_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_InputMethodEvent(QMessageBox* self, QInputMethodEvent* param1) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperInputMethodEvent(QMessageBox* self, QInputMethodEvent* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QMessageBox::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInputMethodEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_inputmethodevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QMessageBox_InputMethodQuery(const QMessageBox* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QMessageBox_SuperInputMethodQuery(const QMessageBox* self, int param1) {
    return new QVariant(self->QMessageBox::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnInputMethodQuery(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self)))
        vqmessagebox->qmessagebox_inputmethodquery_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QMessageBox_FocusNextPrevChild(QMessageBox* self, bool next) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        return vqmessagebox->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QMessageBox_SuperFocusNextPrevChild(QMessageBox* self, bool next) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->QMessageBox::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QMessageBox::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnFocusNextPrevChild(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_focusnextprevchild_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_TimerEvent(QMessageBox* self, QTimerEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperTimerEvent(QMessageBox* self, QTimerEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnTimerEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_timerevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_ChildEvent(QMessageBox* self, QChildEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperChildEvent(QMessageBox* self, QChildEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnChildEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_childevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_CustomEvent(QMessageBox* self, QEvent* event) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperCustomEvent(QMessageBox* self, QEvent* event) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QMessageBox::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnCustomEvent(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_customevent_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_ConnectNotify(QMessageBox* self, const QMetaMethod* signal) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperConnectNotify(QMessageBox* self, const QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMessageBox::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnConnectNotify(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_connectnotify_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QMessageBox_DisconnectNotify(QMessageBox* self, const QMetaMethod* signal) {
    auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self);
    if (vqmessagebox) {
        vqmessagebox->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QMessageBox::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QMessageBox_SuperDisconnectNotify(QMessageBox* self, const QMetaMethod* signal) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->QMessageBox::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QMessageBox::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QMessageBox_OnDisconnectNotify(QMessageBox* self, intptr_t slot) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self))
        vqmessagebox->qmessagebox_disconnectnotify_callback = reinterpret_cast<VirtualQMessageBox::QMessageBox_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QMessageBox_AdjustPosition(QMessageBox* self, QWidget* param1) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->VirtualQMessageBox::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QMessageBox::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QMessageBox_UpdateMicroFocus(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->VirtualQMessageBox::updateMicroFocus();
    } else
        qFatal("Error: Protected method QMessageBox::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QMessageBox_Create(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->VirtualQMessageBox::create();
    } else
        qFatal("Error: Protected method QMessageBox::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QMessageBox_Destroy(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        vqmessagebox->VirtualQMessageBox::destroy();
    } else
        qFatal("Error: Protected method QMessageBox::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMessageBox_FocusNextChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->VirtualQMessageBox::focusNextChild();
    } else
        qFatal("Error: Protected method QMessageBox::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMessageBox_FocusPreviousChild(QMessageBox* self) {
    if (auto* vqmessagebox = dynamic_cast<VirtualQMessageBox*>(self)) {
        return vqmessagebox->VirtualQMessageBox::focusPreviousChild();
    } else
        qFatal("Error: Protected method QMessageBox::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QMessageBox_Sender(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->VirtualQMessageBox::sender();
    } else
        qFatal("Error: Protected method QMessageBox::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QMessageBox_SenderSignalIndex(const QMessageBox* self) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->VirtualQMessageBox::senderSignalIndex();
    } else
        qFatal("Error: Protected method QMessageBox::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QMessageBox_Receivers(const QMessageBox* self, const char* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->VirtualQMessageBox::receivers(signal);
    } else
        qFatal("Error: Protected method QMessageBox::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QMessageBox_IsSignalConnected(const QMessageBox* self, const QMetaMethod* signal) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->VirtualQMessageBox::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QMessageBox::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QMessageBox_GetDecodedMetricF(const QMessageBox* self, int metricA, int metricB) {
    if (auto* vqmessagebox = const_cast<VirtualQMessageBox*>(dynamic_cast<const VirtualQMessageBox*>(self))) {
        return vqmessagebox->VirtualQMessageBox::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QMessageBox::getDecodedMetricF called without a directly constructed type");
}

void QMessageBox_Delete(QMessageBox* self) {
    delete self;
}

void qmessagebox_h_QRequireVersion(int argc, char** argv, libqt_string req) {
    qRequireVersion(static_cast<int>(argc), argv, QAnyStringView(req.data, req.len));
}
