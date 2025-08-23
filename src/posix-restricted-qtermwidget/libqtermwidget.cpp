#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__Filter__HotSpot
#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QFont>
#include <QHideEvent>
#include <QIODevice>
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
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qtermwidget.h>
#include "libqtermwidget.h"
#include "libqtermwidget.hxx"

QTermWidget* QTermWidget_new(QWidget* parent) {
    return new VirtualQTermWidget(parent);
}

QTermWidget* QTermWidget_new2(int startnow) {
    return new VirtualQTermWidget(static_cast<int>(startnow));
}

QTermWidget* QTermWidget_new3() {
    return new VirtualQTermWidget();
}

QTermWidget* QTermWidget_new4(int startnow, QWidget* parent) {
    return new VirtualQTermWidget(static_cast<int>(startnow), parent);
}

QMetaObject* QTermWidget_MetaObject(const QTermWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTermWidget_Metacast(QTermWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTermWidget_Metacall(QTermWidget* self, int param1, int param2, void** param3) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTermWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Subclass method to allow providing a virtual method re-implementation
void QTermWidget_OnMetacall(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Metacall_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Metacall_Callback>(slot));
    }
}

// Virtual base class handler implementation
int QTermWidget_QBaseMetacall(QTermWidget* self, int param1, int param2, void** param3) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Metacall_IsBase(true);
        return vqtermwidget->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTermWidget*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QTermWidget_Tr(const char* s) {
    QString _ret = QTermWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QTermWidget_AvailableColorSchemes() {
    QList<QString> _ret = QTermWidget::availableColorSchemes();
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

void QTermWidget_AddCustomColorSchemeDir(const libqt_string custom_dir) {
    QString custom_dir_QString = QString::fromUtf8(custom_dir.data, custom_dir.len);
    QTermWidget::addCustomColorSchemeDir(custom_dir_QString);
}

libqt_list /* of libqt_string */ QTermWidget_AvailableKeyBindings() {
    QList<QString> _ret = QTermWidget::availableKeyBindings();
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

Konsole__Filter__HotSpot* QTermWidget_GetHotSpotAt(const QTermWidget* self, const QPoint* pos) {
    return self->getHotSpotAt(*pos);
}

Konsole__Filter__HotSpot* QTermWidget_GetHotSpotAt2(const QTermWidget* self, int row, int column) {
    return self->getHotSpotAt(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidget_SetKeyboardCursorShape(QTermWidget* self, int shape) {
    self->setKeyboardCursorShape(static_cast<QTermWidget::KeyboardCursorShape>(shape));
}

void QTermWidget_Finished(QTermWidget* self) {
    self->finished();
}

void QTermWidget_Connect_Finished(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::finished, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_CopyAvailable(QTermWidget* self, bool param1) {
    self->copyAvailable(param1);
}

void QTermWidget_Connect_CopyAvailable(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, bool) = reinterpret_cast<void (*)(QTermWidget*, bool)>(slot);
    QTermWidget::connect(self, &QTermWidget::copyAvailable, [self, slotFunc](bool param1) {
        bool sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTermWidget_TermGetFocus(QTermWidget* self) {
    self->termGetFocus();
}

void QTermWidget_Connect_TermGetFocus(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::termGetFocus, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_TermLostFocus(QTermWidget* self) {
    self->termLostFocus();
}

void QTermWidget_Connect_TermLostFocus(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::termLostFocus, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_TermKeyPressed(QTermWidget* self, QKeyEvent* param1) {
    self->termKeyPressed(param1);
}

void QTermWidget_Connect_TermKeyPressed(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, QKeyEvent*) = reinterpret_cast<void (*)(QTermWidget*, QKeyEvent*)>(slot);
    QTermWidget::connect(self, &QTermWidget::termKeyPressed, [self, slotFunc](QKeyEvent* param1) {
        QKeyEvent* sigval1 = param1;
        slotFunc(self, sigval1);
    });
}

void QTermWidget_UrlActivated(QTermWidget* self, const QUrl* param1, bool fromContextMenu) {
    self->urlActivated(*param1, fromContextMenu);
}

void QTermWidget_Connect_UrlActivated(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, QUrl*, bool) = reinterpret_cast<void (*)(QTermWidget*, QUrl*, bool)>(slot);
    QTermWidget::connect(self, &QTermWidget::urlActivated, [self, slotFunc](const QUrl& param1, bool fromContextMenu) {
        const QUrl& param1_ret = param1;
        // Cast returned reference into pointer
        QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
        bool sigval2 = fromContextMenu;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTermWidget_Bell(QTermWidget* self, const libqt_string message) {
    QString message_QString = QString::fromUtf8(message.data, message.len);
    self->bell(message_QString);
}

void QTermWidget_Connect_Bell(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*) = reinterpret_cast<void (*)(QTermWidget*, const char*)>(slot);
    QTermWidget::connect(self, &QTermWidget::bell, [self, slotFunc](const QString& message) {
        const QString message_ret = message;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray message_b = message_ret.toUtf8();
        const char* message_str = static_cast<const char*>(malloc(message_b.length() + 1));
        memcpy((void*)message_str, message_b.data(), message_b.length());
        ((char*)message_str)[message_b.length()] = '\0';
        const char* sigval1 = message_str;
        slotFunc(self, sigval1);
        libqt_free(message_str);
    });
}

void QTermWidget_Activity(QTermWidget* self) {
    self->activity();
}

void QTermWidget_Connect_Activity(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::activity, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_Silence(QTermWidget* self) {
    self->silence();
}

void QTermWidget_Connect_Silence(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::silence, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_SendData(QTermWidget* self, const char* param1, int param2) {
    self->sendData(param1, static_cast<int>(param2));
}

void QTermWidget_Connect_SendData(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*, int) = reinterpret_cast<void (*)(QTermWidget*, const char*, int)>(slot);
    QTermWidget::connect(self, &QTermWidget::sendData, [self, slotFunc](const char* param1, int param2) {
        const char* sigval1 = (const char*)param1;
        int sigval2 = param2;
        slotFunc(self, sigval1, sigval2);
    });
}

void QTermWidget_ProfileChanged(QTermWidget* self, const libqt_string profile) {
    QString profile_QString = QString::fromUtf8(profile.data, profile.len);
    self->profileChanged(profile_QString);
}

void QTermWidget_Connect_ProfileChanged(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*) = reinterpret_cast<void (*)(QTermWidget*, const char*)>(slot);
    QTermWidget::connect(self, &QTermWidget::profileChanged, [self, slotFunc](const QString& profile) {
        const QString profile_ret = profile;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray profile_b = profile_ret.toUtf8();
        const char* profile_str = static_cast<const char*>(malloc(profile_b.length() + 1));
        memcpy((void*)profile_str, profile_b.data(), profile_b.length());
        ((char*)profile_str)[profile_b.length()] = '\0';
        const char* sigval1 = profile_str;
        slotFunc(self, sigval1);
        libqt_free(profile_str);
    });
}

void QTermWidget_TitleChanged(QTermWidget* self) {
    self->titleChanged();
}

void QTermWidget_Connect_TitleChanged(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self, &QTermWidget::titleChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QTermWidget_ReceivedData(QTermWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->receivedData(text_QString);
}

void QTermWidget_Connect_ReceivedData(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*) = reinterpret_cast<void (*)(QTermWidget*, const char*)>(slot);
    QTermWidget::connect(self, &QTermWidget::receivedData, [self, slotFunc](const QString& text) {
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

void QTermWidget_CopyClipboard(QTermWidget* self) {
    self->copyClipboard();
}

void QTermWidget_PasteClipboard(QTermWidget* self) {
    self->pasteClipboard();
}

void QTermWidget_PasteSelection(QTermWidget* self) {
    self->pasteSelection();
}

void QTermWidget_ZoomIn(QTermWidget* self) {
    self->zoomIn();
}

void QTermWidget_ZoomOut(QTermWidget* self) {
    self->zoomOut();
}

void QTermWidget_SetSize(QTermWidget* self, const QSize* size) {
    self->setSize(*size);
}

void QTermWidget_SetKeyBindings(QTermWidget* self, const libqt_string kb) {
    QString kb_QString = QString::fromUtf8(kb.data, kb.len);
    self->setKeyBindings(kb_QString);
}

void QTermWidget_Clear(QTermWidget* self) {
    self->clear();
}

void QTermWidget_ToggleShowSearchBar(QTermWidget* self) {
    self->toggleShowSearchBar();
}

void QTermWidget_SaveHistory(QTermWidget* self, QIODevice* device) {
    self->saveHistory(device);
}

libqt_string QTermWidget_Tr2(const char* s, const char* c) {
    QString _ret = QTermWidget::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTermWidget_Tr3(const char* s, const char* c, int n) {
    QString _ret = QTermWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Derived class handler implementation
QSize* QTermWidget_SizeHint(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return new QSize(vqtermwidget->sizeHint());
    } else {
        return new QSize(((VirtualQTermWidget*)self)->sizeHint());
    }
}

// Base class handler implementation
QSize* QTermWidget_QBaseSizeHint(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SizeHint_IsBase(true);
        return new QSize(vqtermwidget->sizeHint());
    } else {
        return new QSize(((VirtualQTermWidget*)self)->sizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSizeHint(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SizeHint_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTerminalSizeHint(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTerminalSizeHint(enabled);
    } else {
        self->QTermWidget::setTerminalSizeHint(enabled);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTerminalSizeHint(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalSizeHint_IsBase(true);
        vqtermwidget->setTerminalSizeHint(enabled);
    } else {
        self->QTermWidget::setTerminalSizeHint(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalSizeHint(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalSizeHint_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_TerminalSizeHint(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->terminalSizeHint();
    } else {
        return self->QTermWidget::terminalSizeHint();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseTerminalSizeHint(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TerminalSizeHint_IsBase(true);
        return vqtermwidget->terminalSizeHint();
    } else {
        return self->QTermWidget::terminalSizeHint();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTerminalSizeHint(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TerminalSizeHint_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_TerminalSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_StartShellProgram(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->startShellProgram();
    } else {
        self->QTermWidget::startShellProgram();
    }
}

// Base class handler implementation
void QTermWidget_QBaseStartShellProgram(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_StartShellProgram_IsBase(true);
        vqtermwidget->startShellProgram();
    } else {
        self->QTermWidget::startShellProgram();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnStartShellProgram(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_StartShellProgram_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_StartShellProgram_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_StartTerminalTeletype(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->startTerminalTeletype();
    } else {
        self->QTermWidget::startTerminalTeletype();
    }
}

// Base class handler implementation
void QTermWidget_QBaseStartTerminalTeletype(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_StartTerminalTeletype_IsBase(true);
        vqtermwidget->startTerminalTeletype();
    } else {
        self->QTermWidget::startTerminalTeletype();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnStartTerminalTeletype(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_StartTerminalTeletype_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_StartTerminalTeletype_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_GetShellPID(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->getShellPID();
    } else {
        return self->QTermWidget::getShellPID();
    }
}

// Base class handler implementation
int QTermWidget_QBaseGetShellPID(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetShellPID_IsBase(true);
        return vqtermwidget->getShellPID();
    } else {
        return self->QTermWidget::getShellPID();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetShellPID(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetShellPID_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetShellPID_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_GetForegroundProcessId(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->getForegroundProcessId();
    } else {
        return self->QTermWidget::getForegroundProcessId();
    }
}

// Base class handler implementation
int QTermWidget_QBaseGetForegroundProcessId(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetForegroundProcessId_IsBase(true);
        return vqtermwidget->getForegroundProcessId();
    } else {
        return self->QTermWidget::getForegroundProcessId();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetForegroundProcessId(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetForegroundProcessId_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetForegroundProcessId_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ChangeDir(QTermWidget* self, const libqt_string dir) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->changeDir(dir_QString);
    } else {
        self->QTermWidget::changeDir(dir_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseChangeDir(QTermWidget* self, const libqt_string dir) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChangeDir_IsBase(true);
        vqtermwidget->changeDir(dir_QString);
    } else {
        self->QTermWidget::changeDir(dir_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChangeDir(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChangeDir_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ChangeDir_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTerminalFont(QTermWidget* self, const QFont* font) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTerminalFont(*font);
    } else {
        self->QTermWidget::setTerminalFont(*font);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTerminalFont(QTermWidget* self, const QFont* font) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalFont_IsBase(true);
        vqtermwidget->setTerminalFont(*font);
    } else {
        self->QTermWidget::setTerminalFont(*font);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalFont(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalFont_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalFont_Callback>(slot));
    }
}

// Derived class handler implementation
QFont* QTermWidget_GetTerminalFont(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return new QFont(vqtermwidget->getTerminalFont());
    } else {
        return new QFont(((VirtualQTermWidget*)self)->getTerminalFont());
    }
}

// Base class handler implementation
QFont* QTermWidget_QBaseGetTerminalFont(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetTerminalFont_IsBase(true);
        return new QFont(vqtermwidget->getTerminalFont());
    } else {
        return new QFont(((VirtualQTermWidget*)self)->getTerminalFont());
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetTerminalFont(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetTerminalFont_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetTerminalFont_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTerminalOpacity(QTermWidget* self, double level) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTerminalOpacity(static_cast<qreal>(level));
    } else {
        self->QTermWidget::setTerminalOpacity(static_cast<qreal>(level));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTerminalOpacity(QTermWidget* self, double level) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalOpacity_IsBase(true);
        vqtermwidget->setTerminalOpacity(static_cast<qreal>(level));
    } else {
        self->QTermWidget::setTerminalOpacity(static_cast<qreal>(level));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalOpacity(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalOpacity_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalOpacity_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTerminalBackgroundImage(QTermWidget* self, const libqt_string backgroundImage) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTerminalBackgroundImage(backgroundImage_QString);
    } else {
        self->QTermWidget::setTerminalBackgroundImage(backgroundImage_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTerminalBackgroundImage(QTermWidget* self, const libqt_string backgroundImage) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalBackgroundImage_IsBase(true);
        vqtermwidget->setTerminalBackgroundImage(backgroundImage_QString);
    } else {
        self->QTermWidget::setTerminalBackgroundImage(backgroundImage_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalBackgroundImage(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalBackgroundImage_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalBackgroundImage_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTerminalBackgroundMode(QTermWidget* self, int mode) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTerminalBackgroundMode(static_cast<int>(mode));
    } else {
        self->QTermWidget::setTerminalBackgroundMode(static_cast<int>(mode));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTerminalBackgroundMode(QTermWidget* self, int mode) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalBackgroundMode_IsBase(true);
        vqtermwidget->setTerminalBackgroundMode(static_cast<int>(mode));
    } else {
        self->QTermWidget::setTerminalBackgroundMode(static_cast<int>(mode));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalBackgroundMode(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTerminalBackgroundMode_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalBackgroundMode_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetEnvironment(QTermWidget* self, const libqt_list /* of libqt_string */ environment) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QList<QString> environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setEnvironment(environment_QList);
    } else {
        self->QTermWidget::setEnvironment(environment_QList);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetEnvironment(QTermWidget* self, const libqt_list /* of libqt_string */ environment) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QList<QString> environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetEnvironment_IsBase(true);
        vqtermwidget->setEnvironment(environment_QList);
    } else {
        self->QTermWidget::setEnvironment(environment_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetEnvironment(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetEnvironment_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetEnvironment_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetShellProgram(QTermWidget* self, const libqt_string program) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString program_QString = QString::fromUtf8(program.data, program.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setShellProgram(program_QString);
    } else {
        self->QTermWidget::setShellProgram(program_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetShellProgram(QTermWidget* self, const libqt_string program) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString program_QString = QString::fromUtf8(program.data, program.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetShellProgram_IsBase(true);
        vqtermwidget->setShellProgram(program_QString);
    } else {
        self->QTermWidget::setShellProgram(program_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetShellProgram(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetShellProgram_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetShellProgram_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetWorkingDirectory(QTermWidget* self, const libqt_string dir) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setWorkingDirectory(dir_QString);
    } else {
        self->QTermWidget::setWorkingDirectory(dir_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetWorkingDirectory(QTermWidget* self, const libqt_string dir) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetWorkingDirectory_IsBase(true);
        vqtermwidget->setWorkingDirectory(dir_QString);
    } else {
        self->QTermWidget::setWorkingDirectory(dir_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetWorkingDirectory(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetWorkingDirectory_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetWorkingDirectory_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_WorkingDirectory(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->workingDirectory();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::workingDirectory();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseWorkingDirectory(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WorkingDirectory_IsBase(true);
        QString _ret = vqtermwidget->workingDirectory();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::workingDirectory();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWorkingDirectory(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WorkingDirectory_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_WorkingDirectory_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetArgs(QTermWidget* self, const libqt_list /* of libqt_string */ args) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setArgs(args_QList);
    } else {
        self->QTermWidget::setArgs(args_QList);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetArgs(QTermWidget* self, const libqt_list /* of libqt_string */ args) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetArgs_IsBase(true);
        vqtermwidget->setArgs(args_QList);
    } else {
        self->QTermWidget::setArgs(args_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetArgs(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetArgs_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetArgs_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetColorScheme(QTermWidget* self, const libqt_string name) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setColorScheme(name_QString);
    } else {
        self->QTermWidget::setColorScheme(name_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetColorScheme(QTermWidget* self, const libqt_string name) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetColorScheme_IsBase(true);
        vqtermwidget->setColorScheme(name_QString);
    } else {
        self->QTermWidget::setColorScheme(name_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetColorScheme(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetColorScheme_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetColorScheme_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of libqt_string */ QTermWidget_GetAvailableColorSchemes(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QList<QString> _ret = vqtermwidget->getAvailableColorSchemes();
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
    } else {
        QList<QString> _ret = self->QTermWidget::getAvailableColorSchemes();
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
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTermWidget_QBaseGetAvailableColorSchemes(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetAvailableColorSchemes_IsBase(true);
        QList<QString> _ret = vqtermwidget->getAvailableColorSchemes();
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
    } else {
        QList<QString> _ret = self->QTermWidget::getAvailableColorSchemes();
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
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetAvailableColorSchemes(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetAvailableColorSchemes_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetAvailableColorSchemes_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetHistorySize(QTermWidget* self, int lines) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setHistorySize(static_cast<int>(lines));
    } else {
        self->QTermWidget::setHistorySize(static_cast<int>(lines));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetHistorySize(QTermWidget* self, int lines) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetHistorySize_IsBase(true);
        vqtermwidget->setHistorySize(static_cast<int>(lines));
    } else {
        self->QTermWidget::setHistorySize(static_cast<int>(lines));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetHistorySize(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetHistorySize_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetHistorySize_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_HistorySize(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->historySize();
    } else {
        return self->QTermWidget::historySize();
    }
}

// Base class handler implementation
int QTermWidget_QBaseHistorySize(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HistorySize_IsBase(true);
        return vqtermwidget->historySize();
    } else {
        return self->QTermWidget::historySize();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHistorySize(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HistorySize_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_HistorySize_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetScrollBarPosition(QTermWidget* self, int scrollBarPosition) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
    } else {
        self->QTermWidget::setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetScrollBarPosition(QTermWidget* self, int scrollBarPosition) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetScrollBarPosition_IsBase(true);
        vqtermwidget->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
    } else {
        self->QTermWidget::setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetScrollBarPosition(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetScrollBarPosition_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetScrollBarPosition_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ScrollToEnd(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->scrollToEnd();
    } else {
        self->QTermWidget::scrollToEnd();
    }
}

// Base class handler implementation
void QTermWidget_QBaseScrollToEnd(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScrollToEnd_IsBase(true);
        vqtermwidget->scrollToEnd();
    } else {
        self->QTermWidget::scrollToEnd();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScrollToEnd(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScrollToEnd_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ScrollToEnd_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SendText(QTermWidget* self, const libqt_string text) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->sendText(text_QString);
    } else {
        self->QTermWidget::sendText(text_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSendText(QTermWidget* self, const libqt_string text) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SendText_IsBase(true);
        vqtermwidget->sendText(text_QString);
    } else {
        self->QTermWidget::sendText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSendText(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SendText_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SendText_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SendKeyEvent(QTermWidget* self, QKeyEvent* e) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->sendKeyEvent(e);
    } else {
        self->QTermWidget::sendKeyEvent(e);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSendKeyEvent(QTermWidget* self, QKeyEvent* e) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SendKeyEvent_IsBase(true);
        vqtermwidget->sendKeyEvent(e);
    } else {
        self->QTermWidget::sendKeyEvent(e);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSendKeyEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SendKeyEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SendKeyEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetFlowControlEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setFlowControlEnabled(enabled);
    } else {
        self->QTermWidget::setFlowControlEnabled(enabled);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetFlowControlEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetFlowControlEnabled_IsBase(true);
        vqtermwidget->setFlowControlEnabled(enabled);
    } else {
        self->QTermWidget::setFlowControlEnabled(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetFlowControlEnabled(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetFlowControlEnabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetFlowControlEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_FlowControlEnabled(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->flowControlEnabled();
    } else {
        return self->QTermWidget::flowControlEnabled();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseFlowControlEnabled(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FlowControlEnabled_IsBase(true);
        return vqtermwidget->flowControlEnabled();
    } else {
        return self->QTermWidget::flowControlEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFlowControlEnabled(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FlowControlEnabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FlowControlEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetFlowControlWarningEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setFlowControlWarningEnabled(enabled);
    } else {
        self->QTermWidget::setFlowControlWarningEnabled(enabled);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetFlowControlWarningEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetFlowControlWarningEnabled_IsBase(true);
        vqtermwidget->setFlowControlWarningEnabled(enabled);
    } else {
        self->QTermWidget::setFlowControlWarningEnabled(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetFlowControlWarningEnabled(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetFlowControlWarningEnabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetFlowControlWarningEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_KeyBindings(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->keyBindings();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::keyBindings();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseKeyBindings(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyBindings_IsBase(true);
        QString _ret = vqtermwidget->keyBindings();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::keyBindings();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyBindings(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyBindings_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyBindings_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetMotionAfterPasting(QTermWidget* self, int motionAfterPasting) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
    } else {
        self->QTermWidget::setMotionAfterPasting(static_cast<int>(motionAfterPasting));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetMotionAfterPasting(QTermWidget* self, int motionAfterPasting) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMotionAfterPasting_IsBase(true);
        vqtermwidget->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
    } else {
        self->QTermWidget::setMotionAfterPasting(static_cast<int>(motionAfterPasting));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMotionAfterPasting(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMotionAfterPasting_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMotionAfterPasting_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_HistoryLinesCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->historyLinesCount();
    } else {
        return self->QTermWidget::historyLinesCount();
    }
}

// Base class handler implementation
int QTermWidget_QBaseHistoryLinesCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HistoryLinesCount_IsBase(true);
        return vqtermwidget->historyLinesCount();
    } else {
        return self->QTermWidget::historyLinesCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHistoryLinesCount(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HistoryLinesCount_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_HistoryLinesCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_ScreenColumnsCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->screenColumnsCount();
    } else {
        return self->QTermWidget::screenColumnsCount();
    }
}

// Base class handler implementation
int QTermWidget_QBaseScreenColumnsCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScreenColumnsCount_IsBase(true);
        return vqtermwidget->screenColumnsCount();
    } else {
        return self->QTermWidget::screenColumnsCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScreenColumnsCount(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScreenColumnsCount_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ScreenColumnsCount_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_ScreenLinesCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->screenLinesCount();
    } else {
        return self->QTermWidget::screenLinesCount();
    }
}

// Base class handler implementation
int QTermWidget_QBaseScreenLinesCount(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScreenLinesCount_IsBase(true);
        return vqtermwidget->screenLinesCount();
    } else {
        return self->QTermWidget::screenLinesCount();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScreenLinesCount(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ScreenLinesCount_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ScreenLinesCount_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetSelectionStart(QTermWidget* self, int row, int column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
    } else {
        self->QTermWidget::setSelectionStart(static_cast<int>(row), static_cast<int>(column));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetSelectionStart(QTermWidget* self, int row, int column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSelectionStart_IsBase(true);
        vqtermwidget->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
    } else {
        self->QTermWidget::setSelectionStart(static_cast<int>(row), static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSelectionStart(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSelectionStart_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSelectionStart_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetSelectionEnd(QTermWidget* self, int row, int column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
    } else {
        self->QTermWidget::setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetSelectionEnd(QTermWidget* self, int row, int column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSelectionEnd_IsBase(true);
        vqtermwidget->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
    } else {
        self->QTermWidget::setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSelectionEnd(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSelectionEnd_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSelectionEnd_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_GetSelectionStart(QTermWidget* self, int* row, int* column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
    } else {
        self->QTermWidget::getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
    }
}

// Base class handler implementation
void QTermWidget_QBaseGetSelectionStart(QTermWidget* self, int* row, int* column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetSelectionStart_IsBase(true);
        vqtermwidget->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
    } else {
        self->QTermWidget::getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetSelectionStart(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetSelectionStart_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetSelectionStart_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_GetSelectionEnd(QTermWidget* self, int* row, int* column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
    } else {
        self->QTermWidget::getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
    }
}

// Base class handler implementation
void QTermWidget_QBaseGetSelectionEnd(QTermWidget* self, int* row, int* column) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetSelectionEnd_IsBase(true);
        vqtermwidget->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
    } else {
        self->QTermWidget::getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetSelectionEnd(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetSelectionEnd_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetSelectionEnd_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_SelectedText(QTermWidget* self, bool preserveLineBreaks) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->selectedText(preserveLineBreaks);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::selectedText(preserveLineBreaks);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseSelectedText(QTermWidget* self, bool preserveLineBreaks) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SelectedText_IsBase(true);
        QString _ret = vqtermwidget->selectedText(preserveLineBreaks);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::selectedText(preserveLineBreaks);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSelectedText(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SelectedText_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SelectedText_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetMonitorActivity(QTermWidget* self, bool monitorActivity) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setMonitorActivity(monitorActivity);
    } else {
        self->QTermWidget::setMonitorActivity(monitorActivity);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetMonitorActivity(QTermWidget* self, bool monitorActivity) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMonitorActivity_IsBase(true);
        vqtermwidget->setMonitorActivity(monitorActivity);
    } else {
        self->QTermWidget::setMonitorActivity(monitorActivity);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMonitorActivity(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMonitorActivity_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMonitorActivity_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetMonitorSilence(QTermWidget* self, bool monitorSilence) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setMonitorSilence(monitorSilence);
    } else {
        self->QTermWidget::setMonitorSilence(monitorSilence);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetMonitorSilence(QTermWidget* self, bool monitorSilence) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMonitorSilence_IsBase(true);
        vqtermwidget->setMonitorSilence(monitorSilence);
    } else {
        self->QTermWidget::setMonitorSilence(monitorSilence);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMonitorSilence(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMonitorSilence_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMonitorSilence_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetSilenceTimeout(QTermWidget* self, int seconds) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setSilenceTimeout(static_cast<int>(seconds));
    } else {
        self->QTermWidget::setSilenceTimeout(static_cast<int>(seconds));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetSilenceTimeout(QTermWidget* self, int seconds) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSilenceTimeout_IsBase(true);
        vqtermwidget->setSilenceTimeout(static_cast<int>(seconds));
    } else {
        self->QTermWidget::setSilenceTimeout(static_cast<int>(seconds));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSilenceTimeout(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetSilenceTimeout_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSilenceTimeout_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QAction* */ QTermWidget_FilterActions(QTermWidget* self, const QPoint* position) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QList<QAction*> _ret = vqtermwidget->filterActions(*position);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = self->QTermWidget::filterActions(*position);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QAction* */ QTermWidget_QBaseFilterActions(QTermWidget* self, const QPoint* position) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FilterActions_IsBase(true);
        QList<QAction*> _ret = vqtermwidget->filterActions(*position);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QAction*> _ret = self->QTermWidget::filterActions(*position);
        // Convert QList<> from C++ memory to manually-managed C memory
        QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size() + 1)));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = _ret[i];
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFilterActions(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FilterActions_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FilterActions_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_GetPtySlaveFd(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->getPtySlaveFd();
    } else {
        return self->QTermWidget::getPtySlaveFd();
    }
}

// Base class handler implementation
int QTermWidget_QBaseGetPtySlaveFd(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetPtySlaveFd_IsBase(true);
        return vqtermwidget->getPtySlaveFd();
    } else {
        return self->QTermWidget::getPtySlaveFd();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetPtySlaveFd(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetPtySlaveFd_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetPtySlaveFd_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetBlinkingCursor(QTermWidget* self, bool blink) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setBlinkingCursor(blink);
    } else {
        self->QTermWidget::setBlinkingCursor(blink);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetBlinkingCursor(QTermWidget* self, bool blink) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBlinkingCursor_IsBase(true);
        vqtermwidget->setBlinkingCursor(blink);
    } else {
        self->QTermWidget::setBlinkingCursor(blink);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBlinkingCursor(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBlinkingCursor_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBlinkingCursor_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetBidiEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setBidiEnabled(enabled);
    } else {
        self->QTermWidget::setBidiEnabled(enabled);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetBidiEnabled(QTermWidget* self, bool enabled) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBidiEnabled_IsBase(true);
        vqtermwidget->setBidiEnabled(enabled);
    } else {
        self->QTermWidget::setBidiEnabled(enabled);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBidiEnabled(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBidiEnabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBidiEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_IsBidiEnabled(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->isBidiEnabled();
    } else {
        return self->QTermWidget::isBidiEnabled();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseIsBidiEnabled(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsBidiEnabled_IsBase(true);
        return vqtermwidget->isBidiEnabled();
    } else {
        return self->QTermWidget::isBidiEnabled();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIsBidiEnabled(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsBidiEnabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_IsBidiEnabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetAutoClose(QTermWidget* self, bool autoClose) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setAutoClose(autoClose);
    } else {
        self->QTermWidget::setAutoClose(autoClose);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetAutoClose(QTermWidget* self, bool autoClose) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetAutoClose_IsBase(true);
        vqtermwidget->setAutoClose(autoClose);
    } else {
        self->QTermWidget::setAutoClose(autoClose);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetAutoClose(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetAutoClose_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetAutoClose_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_Title(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->title();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::title();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseTitle(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Title_IsBase(true);
        QString _ret = vqtermwidget->title();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::title();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTitle(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Title_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Title_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_Icon(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->icon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::icon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseIcon(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Icon_IsBase(true);
        QString _ret = vqtermwidget->icon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::icon();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIcon(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Icon_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Icon_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_IsTitleChanged(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->isTitleChanged();
    } else {
        return self->QTermWidget::isTitleChanged();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseIsTitleChanged(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsTitleChanged_IsBase(true);
        return vqtermwidget->isTitleChanged();
    } else {
        return self->QTermWidget::isTitleChanged();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIsTitleChanged(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsTitleChanged_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_IsTitleChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_BracketText(QTermWidget* self, libqt_string text) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->bracketText(text_QString);
    } else {
        self->QTermWidget::bracketText(text_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseBracketText(QTermWidget* self, libqt_string text) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_BracketText_IsBase(true);
        vqtermwidget->bracketText(text_QString);
    } else {
        self->QTermWidget::bracketText(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnBracketText(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_BracketText_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_BracketText_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DisableBracketedPasteMode(QTermWidget* self, bool disable) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->disableBracketedPasteMode(disable);
    } else {
        self->QTermWidget::disableBracketedPasteMode(disable);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDisableBracketedPasteMode(QTermWidget* self, bool disable) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DisableBracketedPasteMode_IsBase(true);
        vqtermwidget->disableBracketedPasteMode(disable);
    } else {
        self->QTermWidget::disableBracketedPasteMode(disable);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDisableBracketedPasteMode(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DisableBracketedPasteMode_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DisableBracketedPasteMode_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_BracketedPasteModeIsDisabled(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->bracketedPasteModeIsDisabled();
    } else {
        return self->QTermWidget::bracketedPasteModeIsDisabled();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseBracketedPasteModeIsDisabled(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_BracketedPasteModeIsDisabled_IsBase(true);
        return vqtermwidget->bracketedPasteModeIsDisabled();
    } else {
        return self->QTermWidget::bracketedPasteModeIsDisabled();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnBracketedPasteModeIsDisabled(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_BracketedPasteModeIsDisabled_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_BracketedPasteModeIsDisabled_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetMargin(QTermWidget* self, int margin) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setMargin(static_cast<int>(margin));
    } else {
        self->QTermWidget::setMargin(static_cast<int>(margin));
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetMargin(QTermWidget* self, int margin) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMargin_IsBase(true);
        vqtermwidget->setMargin(static_cast<int>(margin));
    } else {
        self->QTermWidget::setMargin(static_cast<int>(margin));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMargin(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetMargin_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMargin_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_GetMargin(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->getMargin();
    } else {
        return self->QTermWidget::getMargin();
    }
}

// Base class handler implementation
int QTermWidget_QBaseGetMargin(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetMargin_IsBase(true);
        return vqtermwidget->getMargin();
    } else {
        return self->QTermWidget::getMargin();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetMargin(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetMargin_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetMargin_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetDrawLineChars(QTermWidget* self, bool drawLineChars) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setDrawLineChars(drawLineChars);
    } else {
        self->QTermWidget::setDrawLineChars(drawLineChars);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetDrawLineChars(QTermWidget* self, bool drawLineChars) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetDrawLineChars_IsBase(true);
        vqtermwidget->setDrawLineChars(drawLineChars);
    } else {
        self->QTermWidget::setDrawLineChars(drawLineChars);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetDrawLineChars(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetDrawLineChars_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetDrawLineChars_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetBoldIntense(QTermWidget* self, bool boldIntense) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setBoldIntense(boldIntense);
    } else {
        self->QTermWidget::setBoldIntense(boldIntense);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetBoldIntense(QTermWidget* self, bool boldIntense) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBoldIntense_IsBase(true);
        vqtermwidget->setBoldIntense(boldIntense);
    } else {
        self->QTermWidget::setBoldIntense(boldIntense);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBoldIntense(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetBoldIntense_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBoldIntense_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetConfirmMultilinePaste(QTermWidget* self, bool confirmMultilinePaste) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setConfirmMultilinePaste(confirmMultilinePaste);
    } else {
        self->QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetConfirmMultilinePaste(QTermWidget* self, bool confirmMultilinePaste) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetConfirmMultilinePaste_IsBase(true);
        vqtermwidget->setConfirmMultilinePaste(confirmMultilinePaste);
    } else {
        self->QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetConfirmMultilinePaste(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetConfirmMultilinePaste_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetConfirmMultilinePaste_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetTrimPastedTrailingNewlines(QTermWidget* self, bool trimPastedTrailingNewlines) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    } else {
        self->QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetTrimPastedTrailingNewlines(QTermWidget* self, bool trimPastedTrailingNewlines) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTrimPastedTrailingNewlines_IsBase(true);
        vqtermwidget->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    } else {
        self->QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTrimPastedTrailingNewlines(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetTrimPastedTrailingNewlines_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTrimPastedTrailingNewlines_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_string QTermWidget_WordCharacters(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        QString _ret = vqtermwidget->wordCharacters();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::wordCharacters();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Base class handler implementation
libqt_string QTermWidget_QBaseWordCharacters(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WordCharacters_IsBase(true);
        QString _ret = vqtermwidget->wordCharacters();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QTermWidget::wordCharacters();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWordCharacters(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WordCharacters_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_WordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetWordCharacters(QTermWidget* self, const libqt_string chars) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString chars_QString = QString::fromUtf8(chars.data, chars.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setWordCharacters(chars_QString);
    } else {
        self->QTermWidget::setWordCharacters(chars_QString);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetWordCharacters(QTermWidget* self, const libqt_string chars) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QString chars_QString = QString::fromUtf8(chars.data, chars.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetWordCharacters_IsBase(true);
        vqtermwidget->setWordCharacters(chars_QString);
    } else {
        self->QTermWidget::setWordCharacters(chars_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetWordCharacters(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetWordCharacters_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetWordCharacters_Callback>(slot));
    }
}

// Derived class handler implementation
QTermWidgetInterface* QTermWidget_CreateWidget(const QTermWidget* self, int startnow) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->createWidget(static_cast<int>(startnow));
    } else {
        return self->QTermWidget::createWidget(static_cast<int>(startnow));
    }
}

// Base class handler implementation
QTermWidgetInterface* QTermWidget_QBaseCreateWidget(const QTermWidget* self, int startnow) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CreateWidget_IsBase(true);
        return vqtermwidget->createWidget(static_cast<int>(startnow));
    } else {
        return self->QTermWidget::createWidget(static_cast<int>(startnow));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCreateWidget(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CreateWidget_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_CreateWidget_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ResizeEvent(QTermWidget* self, QResizeEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->resizeEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->resizeEvent(param1);
    }
}

// Base class handler implementation
void QTermWidget_QBaseResizeEvent(QTermWidget* self, QResizeEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ResizeEvent_IsBase(true);
        vqtermwidget->resizeEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->resizeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnResizeEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ResizeEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ResizeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_DevType(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->devType();
    } else {
        return self->QTermWidget::devType();
    }
}

// Base class handler implementation
int QTermWidget_QBaseDevType(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DevType_IsBase(true);
        return vqtermwidget->devType();
    } else {
        return self->QTermWidget::devType();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDevType(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DevType_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DevType_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SetVisible(QTermWidget* self, bool visible) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setVisible(visible);
    } else {
        self->QTermWidget::setVisible(visible);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSetVisible(QTermWidget* self, bool visible) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetVisible_IsBase(true);
        vqtermwidget->setVisible(visible);
    } else {
        self->QTermWidget::setVisible(visible);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetVisible(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SetVisible_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SetVisible_Callback>(slot));
    }
}

// Derived class handler implementation
QSize* QTermWidget_MinimumSizeHint(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return new QSize(vqtermwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTermWidget*)self)->minimumSizeHint());
    }
}

// Base class handler implementation
QSize* QTermWidget_QBaseMinimumSizeHint(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MinimumSizeHint_IsBase(true);
        return new QSize(vqtermwidget->minimumSizeHint());
    } else {
        return new QSize(((VirtualQTermWidget*)self)->minimumSizeHint());
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMinimumSizeHint(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MinimumSizeHint_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MinimumSizeHint_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_HeightForWidth(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTermWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Base class handler implementation
int QTermWidget_QBaseHeightForWidth(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HeightForWidth_IsBase(true);
        return vqtermwidget->heightForWidth(static_cast<int>(param1));
    } else {
        return self->QTermWidget::heightForWidth(static_cast<int>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHeightForWidth(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HeightForWidth_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_HeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_HasHeightForWidth(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->hasHeightForWidth();
    } else {
        return self->QTermWidget::hasHeightForWidth();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseHasHeightForWidth(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HasHeightForWidth_IsBase(true);
        return vqtermwidget->hasHeightForWidth();
    } else {
        return self->QTermWidget::hasHeightForWidth();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHasHeightForWidth(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HasHeightForWidth_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_HasHeightForWidth_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintEngine* QTermWidget_PaintEngine(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->paintEngine();
    } else {
        return self->QTermWidget::paintEngine();
    }
}

// Base class handler implementation
QPaintEngine* QTermWidget_QBasePaintEngine(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_PaintEngine_IsBase(true);
        return vqtermwidget->paintEngine();
    } else {
        return self->QTermWidget::paintEngine();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnPaintEngine(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_PaintEngine_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_PaintEngine_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_Event(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->event(event);
    } else {
        return ((VirtualQTermWidget*)self)->event(event);
    }
}

// Base class handler implementation
bool QTermWidget_QBaseEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Event_IsBase(true);
        return vqtermwidget->event(event);
    } else {
        return ((VirtualQTermWidget*)self)->event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Event_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Event_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_MousePressEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->mousePressEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mousePressEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseMousePressEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MousePressEvent_IsBase(true);
        vqtermwidget->mousePressEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mousePressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMousePressEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MousePressEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MousePressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_MouseReleaseEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseReleaseEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseMouseReleaseEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseReleaseEvent_IsBase(true);
        vqtermwidget->mouseReleaseEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseReleaseEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_MouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseMouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseDoubleClickEvent_IsBase(true);
        vqtermwidget->mouseDoubleClickEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseDoubleClickEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseDoubleClickEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseDoubleClickEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseDoubleClickEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_MouseMoveEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseMoveEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseMouseMoveEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseMoveEvent_IsBase(true);
        vqtermwidget->mouseMoveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->mouseMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseMoveEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MouseMoveEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_WheelEvent(QTermWidget* self, QWheelEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->wheelEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->wheelEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseWheelEvent(QTermWidget* self, QWheelEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WheelEvent_IsBase(true);
        vqtermwidget->wheelEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->wheelEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWheelEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_WheelEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_WheelEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_KeyPressEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->keyPressEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->keyPressEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseKeyPressEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyPressEvent_IsBase(true);
        vqtermwidget->keyPressEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->keyPressEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyPressEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyPressEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyPressEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_KeyReleaseEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->keyReleaseEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseKeyReleaseEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyReleaseEvent_IsBase(true);
        vqtermwidget->keyReleaseEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->keyReleaseEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyReleaseEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_KeyReleaseEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyReleaseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_FocusInEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->focusInEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->focusInEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseFocusInEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusInEvent_IsBase(true);
        vqtermwidget->focusInEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->focusInEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusInEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusInEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusInEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_FocusOutEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->focusOutEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->focusOutEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseFocusOutEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusOutEvent_IsBase(true);
        vqtermwidget->focusOutEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->focusOutEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusOutEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusOutEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusOutEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_EnterEvent(QTermWidget* self, QEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->enterEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->enterEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseEnterEvent(QTermWidget* self, QEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_EnterEvent_IsBase(true);
        vqtermwidget->enterEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->enterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEnterEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_EnterEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_EnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_LeaveEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->leaveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->leaveEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseLeaveEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_LeaveEvent_IsBase(true);
        vqtermwidget->leaveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->leaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnLeaveEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_LeaveEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_LeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_PaintEvent(QTermWidget* self, QPaintEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->paintEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->paintEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBasePaintEvent(QTermWidget* self, QPaintEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_PaintEvent_IsBase(true);
        vqtermwidget->paintEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->paintEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnPaintEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_PaintEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_PaintEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_MoveEvent(QTermWidget* self, QMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->moveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->moveEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseMoveEvent(QTermWidget* self, QMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MoveEvent_IsBase(true);
        vqtermwidget->moveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->moveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMoveEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_MoveEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_MoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_CloseEvent(QTermWidget* self, QCloseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->closeEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->closeEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseCloseEvent(QTermWidget* self, QCloseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CloseEvent_IsBase(true);
        vqtermwidget->closeEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->closeEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCloseEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CloseEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_CloseEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ContextMenuEvent(QTermWidget* self, QContextMenuEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->contextMenuEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->contextMenuEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseContextMenuEvent(QTermWidget* self, QContextMenuEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ContextMenuEvent_IsBase(true);
        vqtermwidget->contextMenuEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->contextMenuEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnContextMenuEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ContextMenuEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ContextMenuEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_TabletEvent(QTermWidget* self, QTabletEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->tabletEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->tabletEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseTabletEvent(QTermWidget* self, QTabletEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TabletEvent_IsBase(true);
        vqtermwidget->tabletEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->tabletEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTabletEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TabletEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_TabletEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ActionEvent(QTermWidget* self, QActionEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->actionEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->actionEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseActionEvent(QTermWidget* self, QActionEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ActionEvent_IsBase(true);
        vqtermwidget->actionEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->actionEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnActionEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ActionEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ActionEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DragEnterEvent(QTermWidget* self, QDragEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->dragEnterEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragEnterEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDragEnterEvent(QTermWidget* self, QDragEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragEnterEvent_IsBase(true);
        vqtermwidget->dragEnterEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragEnterEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragEnterEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragEnterEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DragEnterEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DragMoveEvent(QTermWidget* self, QDragMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->dragMoveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragMoveEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDragMoveEvent(QTermWidget* self, QDragMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragMoveEvent_IsBase(true);
        vqtermwidget->dragMoveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragMoveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragMoveEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragMoveEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DragMoveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragLeaveEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragLeaveEvent_IsBase(true);
        vqtermwidget->dragLeaveEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dragLeaveEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragLeaveEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DragLeaveEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DragLeaveEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DropEvent(QTermWidget* self, QDropEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->dropEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dropEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDropEvent(QTermWidget* self, QDropEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DropEvent_IsBase(true);
        vqtermwidget->dropEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->dropEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDropEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DropEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DropEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ShowEvent(QTermWidget* self, QShowEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->showEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->showEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseShowEvent(QTermWidget* self, QShowEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ShowEvent_IsBase(true);
        vqtermwidget->showEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->showEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnShowEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ShowEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ShowEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_HideEvent(QTermWidget* self, QHideEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->hideEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->hideEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseHideEvent(QTermWidget* self, QHideEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HideEvent_IsBase(true);
        vqtermwidget->hideEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->hideEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHideEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_HideEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_HideEvent_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_NativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTermWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Base class handler implementation
bool QTermWidget_QBaseNativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_NativeEvent_IsBase(true);
        return vqtermwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        return ((VirtualQTermWidget*)self)->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnNativeEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_NativeEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_NativeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ChangeEvent(QTermWidget* self, QEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->changeEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->changeEvent(param1);
    }
}

// Base class handler implementation
void QTermWidget_QBaseChangeEvent(QTermWidget* self, QEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChangeEvent_IsBase(true);
        vqtermwidget->changeEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->changeEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChangeEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChangeEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ChangeEvent_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_Metric(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTermWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Base class handler implementation
int QTermWidget_QBaseMetric(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Metric_IsBase(true);
        return vqtermwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        return ((VirtualQTermWidget*)self)->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMetric(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Metric_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Metric_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_InitPainter(const QTermWidget* self, QPainter* painter) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->initPainter(painter);
    } else {
        ((VirtualQTermWidget*)self)->initPainter(painter);
    }
}

// Base class handler implementation
void QTermWidget_QBaseInitPainter(const QTermWidget* self, QPainter* painter) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InitPainter_IsBase(true);
        vqtermwidget->initPainter(painter);
    } else {
        ((VirtualQTermWidget*)self)->initPainter(painter);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInitPainter(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InitPainter_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_InitPainter_Callback>(slot));
    }
}

// Derived class handler implementation
QPaintDevice* QTermWidget_Redirected(const QTermWidget* self, QPoint* offset) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->redirected(offset);
    } else {
        return ((VirtualQTermWidget*)self)->redirected(offset);
    }
}

// Base class handler implementation
QPaintDevice* QTermWidget_QBaseRedirected(const QTermWidget* self, QPoint* offset) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Redirected_IsBase(true);
        return vqtermwidget->redirected(offset);
    } else {
        return ((VirtualQTermWidget*)self)->redirected(offset);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnRedirected(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Redirected_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Redirected_Callback>(slot));
    }
}

// Derived class handler implementation
QPainter* QTermWidget_SharedPainter(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->sharedPainter();
    } else {
        return ((VirtualQTermWidget*)self)->sharedPainter();
    }
}

// Base class handler implementation
QPainter* QTermWidget_QBaseSharedPainter(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SharedPainter_IsBase(true);
        return vqtermwidget->sharedPainter();
    } else {
        return ((VirtualQTermWidget*)self)->sharedPainter();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSharedPainter(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SharedPainter_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SharedPainter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_InputMethodEvent(QTermWidget* self, QInputMethodEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->inputMethodEvent(param1);
    }
}

// Base class handler implementation
void QTermWidget_QBaseInputMethodEvent(QTermWidget* self, QInputMethodEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InputMethodEvent_IsBase(true);
        vqtermwidget->inputMethodEvent(param1);
    } else {
        ((VirtualQTermWidget*)self)->inputMethodEvent(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInputMethodEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InputMethodEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_InputMethodEvent_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTermWidget_InputMethodQuery(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return new QVariant(vqtermwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTermWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Base class handler implementation
QVariant* QTermWidget_QBaseInputMethodQuery(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InputMethodQuery_IsBase(true);
        return new QVariant(vqtermwidget->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    } else {
        return new QVariant(((VirtualQTermWidget*)self)->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInputMethodQuery(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_InputMethodQuery_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_InputMethodQuery_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_FocusNextPrevChild(QTermWidget* self, bool next) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTermWidget*)self)->focusNextPrevChild(next);
    }
}

// Base class handler implementation
bool QTermWidget_QBaseFocusNextPrevChild(QTermWidget* self, bool next) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusNextPrevChild_IsBase(true);
        return vqtermwidget->focusNextPrevChild(next);
    } else {
        return ((VirtualQTermWidget*)self)->focusNextPrevChild(next);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusNextPrevChild(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusNextPrevChild_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusNextPrevChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_EventFilter(QTermWidget* self, QObject* watched, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->eventFilter(watched, event);
    } else {
        return self->QTermWidget::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTermWidget_QBaseEventFilter(QTermWidget* self, QObject* watched, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_EventFilter_IsBase(true);
        return vqtermwidget->eventFilter(watched, event);
    } else {
        return self->QTermWidget::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEventFilter(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_EventFilter_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_TimerEvent(QTermWidget* self, QTimerEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->timerEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseTimerEvent(QTermWidget* self, QTimerEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TimerEvent_IsBase(true);
        vqtermwidget->timerEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTimerEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_TimerEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ChildEvent(QTermWidget* self, QChildEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->childEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseChildEvent(QTermWidget* self, QChildEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChildEvent_IsBase(true);
        vqtermwidget->childEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChildEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ChildEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_CustomEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->customEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTermWidget_QBaseCustomEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CustomEvent_IsBase(true);
        vqtermwidget->customEvent(event);
    } else {
        ((VirtualQTermWidget*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCustomEvent(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_CustomEvent_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_ConnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->connectNotify(*signal);
    } else {
        ((VirtualQTermWidget*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTermWidget_QBaseConnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ConnectNotify_IsBase(true);
        vqtermwidget->connectNotify(*signal);
    } else {
        ((VirtualQTermWidget*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnConnectNotify(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_ConnectNotify_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_DisconnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTermWidget*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTermWidget_QBaseDisconnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DisconnectNotify_IsBase(true);
        vqtermwidget->disconnectNotify(*signal);
    } else {
        ((VirtualQTermWidget*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDisconnectNotify(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_DisconnectNotify_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SessionFinished(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->sessionFinished();
    } else {
        ((VirtualQTermWidget*)self)->sessionFinished();
    }
}

// Base class handler implementation
void QTermWidget_QBaseSessionFinished(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SessionFinished_IsBase(true);
        vqtermwidget->sessionFinished();
    } else {
        ((VirtualQTermWidget*)self)->sessionFinished();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSessionFinished(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SessionFinished_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SessionFinished_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_SelectionChanged(QTermWidget* self, bool textSelected) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->selectionChanged(textSelected);
    } else {
        ((VirtualQTermWidget*)self)->selectionChanged(textSelected);
    }
}

// Base class handler implementation
void QTermWidget_QBaseSelectionChanged(QTermWidget* self, bool textSelected) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SelectionChanged_IsBase(true);
        vqtermwidget->selectionChanged(textSelected);
    } else {
        ((VirtualQTermWidget*)self)->selectionChanged(textSelected);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSelectionChanged(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SelectionChanged_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SelectionChanged_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_UpdateMicroFocus(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->updateMicroFocus();
    } else {
        ((VirtualQTermWidget*)self)->updateMicroFocus();
    }
}

// Base class handler implementation
void QTermWidget_QBaseUpdateMicroFocus(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_UpdateMicroFocus_IsBase(true);
        vqtermwidget->updateMicroFocus();
    } else {
        ((VirtualQTermWidget*)self)->updateMicroFocus();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnUpdateMicroFocus(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_UpdateMicroFocus_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_UpdateMicroFocus_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_Create(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->create();
    } else {
        ((VirtualQTermWidget*)self)->create();
    }
}

// Base class handler implementation
void QTermWidget_QBaseCreate(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Create_IsBase(true);
        vqtermwidget->create();
    } else {
        ((VirtualQTermWidget*)self)->create();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCreate(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Create_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Create_Callback>(slot));
    }
}

// Derived class handler implementation
void QTermWidget_Destroy(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->destroy();
    } else {
        ((VirtualQTermWidget*)self)->destroy();
    }
}

// Base class handler implementation
void QTermWidget_QBaseDestroy(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Destroy_IsBase(true);
        vqtermwidget->destroy();
    } else {
        ((VirtualQTermWidget*)self)->destroy();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDestroy(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Destroy_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Destroy_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_FocusNextChild(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->focusNextChild();
    } else {
        return ((VirtualQTermWidget*)self)->focusNextChild();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseFocusNextChild(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusNextChild_IsBase(true);
        return vqtermwidget->focusNextChild();
    } else {
        return ((VirtualQTermWidget*)self)->focusNextChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusNextChild(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusNextChild_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusNextChild_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_FocusPreviousChild(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->focusPreviousChild();
    } else {
        return ((VirtualQTermWidget*)self)->focusPreviousChild();
    }
}

// Base class handler implementation
bool QTermWidget_QBaseFocusPreviousChild(QTermWidget* self) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusPreviousChild_IsBase(true);
        return vqtermwidget->focusPreviousChild();
    } else {
        return ((VirtualQTermWidget*)self)->focusPreviousChild();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusPreviousChild(QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_FocusPreviousChild_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusPreviousChild_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTermWidget_Sender(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->sender();
    } else {
        return ((VirtualQTermWidget*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTermWidget_QBaseSender(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Sender_IsBase(true);
        return vqtermwidget->sender();
    } else {
        return ((VirtualQTermWidget*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSender(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Sender_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_SenderSignalIndex(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->senderSignalIndex();
    } else {
        return ((VirtualQTermWidget*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTermWidget_QBaseSenderSignalIndex(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SenderSignalIndex_IsBase(true);
        return vqtermwidget->senderSignalIndex();
    } else {
        return ((VirtualQTermWidget*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSenderSignalIndex(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTermWidget_Receivers(const QTermWidget* self, const char* signal) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->receivers(signal);
    } else {
        return ((VirtualQTermWidget*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTermWidget_QBaseReceivers(const QTermWidget* self, const char* signal) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Receivers_IsBase(true);
        return vqtermwidget->receivers(signal);
    } else {
        return ((VirtualQTermWidget*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnReceivers(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_Receivers_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTermWidget_IsSignalConnected(const QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTermWidget*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTermWidget_QBaseIsSignalConnected(const QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsSignalConnected_IsBase(true);
        return vqtermwidget->isSignalConnected(*signal);
    } else {
        return ((VirtualQTermWidget*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIsSignalConnected(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_IsSignalConnected_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_IsSignalConnected_Callback>(slot));
    }
}

// Derived class handler implementation
double QTermWidget_GetDecodedMetricF(const QTermWidget* self, int metricA, int metricB) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        return vqtermwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTermWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Base class handler implementation
double QTermWidget_QBaseGetDecodedMetricF(const QTermWidget* self, int metricA, int metricB) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetDecodedMetricF_IsBase(true);
        return vqtermwidget->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else {
        return ((VirtualQTermWidget*)self)->getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    }
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetDecodedMetricF(const QTermWidget* self, intptr_t slot) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget && vqtermwidget->isVirtualQTermWidget) {
        vqtermwidget->setQTermWidget_GetDecodedMetricF_Callback(reinterpret_cast<VirtualQTermWidget::QTermWidget_GetDecodedMetricF_Callback>(slot));
    }
}

void QTermWidget_Delete(QTermWidget* self) {
    delete self;
}
