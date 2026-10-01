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

QTermWidgetInterface* QTermWidget_AsQTermWidgetInterface(const QTermWidget* self) {
    return const_cast<QTermWidget*>(self);
}

QTermWidget* QTermWidget_FromQTermWidgetInterface(const QTermWidgetInterface* _qtermwidgetinterface) {
    return dynamic_cast<QTermWidget*>(const_cast<QTermWidgetInterface*>(_qtermwidgetinterface));
}

QMetaObject* QTermWidget_MetaObject(const QTermWidget* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTermWidget_Metacast(QTermWidget* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTermWidget_Metacall(QTermWidget* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTermWidget_Tr(const char* s) {
    auto _ret = QTermWidget::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QSize* QTermWidget_SizeHint(const QTermWidget* self) {
    return new QSize(self->sizeHint());
}

void QTermWidget_SetTerminalSizeHint(QTermWidget* self, bool enabled) {
    self->setTerminalSizeHint(enabled);
}

bool QTermWidget_TerminalSizeHint(QTermWidget* self) {
    return self->terminalSizeHint();
}

void QTermWidget_StartShellProgram(QTermWidget* self) {
    self->startShellProgram();
}

void QTermWidget_StartTerminalTeletype(QTermWidget* self) {
    self->startTerminalTeletype();
}

int QTermWidget_GetShellPID(QTermWidget* self) {
    return self->getShellPID();
}

int QTermWidget_GetForegroundProcessId(QTermWidget* self) {
    return self->getForegroundProcessId();
}

void QTermWidget_ChangeDir(QTermWidget* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->changeDir(dir_QString);
}

void QTermWidget_SetTerminalFont(QTermWidget* self, const QFont* font) {
    self->setTerminalFont(*font);
}

QFont* QTermWidget_GetTerminalFont(QTermWidget* self) {
    return new QFont(self->getTerminalFont());
}

void QTermWidget_SetTerminalOpacity(QTermWidget* self, double level) {
    self->setTerminalOpacity(static_cast<qreal>(level));
}

void QTermWidget_SetTerminalBackgroundImage(QTermWidget* self, const libqt_string backgroundImage) {
    QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
    self->setTerminalBackgroundImage(backgroundImage_QString);
}

void QTermWidget_SetTerminalBackgroundMode(QTermWidget* self, int mode) {
    self->setTerminalBackgroundMode(static_cast<int>(mode));
}

void QTermWidget_SetEnvironment(QTermWidget* self, const libqt_list /* of libqt_string */ environment) {
    QList<QString> environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    self->setEnvironment(environment_QList);
}

void QTermWidget_SetShellProgram(QTermWidget* self, const libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    self->setShellProgram(program_QString);
}

void QTermWidget_SetWorkingDirectory(QTermWidget* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->setWorkingDirectory(dir_QString);
}

libqt_string QTermWidget_WorkingDirectory(QTermWidget* self) {
    auto _ret = self->workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidget_SetArgs(QTermWidget* self, const libqt_list /* of libqt_string */ args) {
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    self->setArgs(args_QList);
}

void QTermWidget_SetColorScheme(QTermWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setColorScheme(name_QString);
}

libqt_list /* of libqt_string */ QTermWidget_GetAvailableColorSchemes(QTermWidget* self) {
    QList<QString> _ret = self->getAvailableColorSchemes();
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

libqt_list /* of libqt_string */ QTermWidget_AvailableColorSchemes() {
    QList<QString> _ret = QTermWidget::availableColorSchemes();
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

void QTermWidget_AddCustomColorSchemeDir(const libqt_string custom_dir) {
    QString custom_dir_QString = QString::fromUtf8(custom_dir.data, custom_dir.len);
    QTermWidget::addCustomColorSchemeDir(custom_dir_QString);
}

void QTermWidget_SetHistorySize(QTermWidget* self, int lines) {
    self->setHistorySize(static_cast<int>(lines));
}

int QTermWidget_HistorySize(const QTermWidget* self) {
    return self->historySize();
}

void QTermWidget_SetScrollBarPosition(QTermWidget* self, int scrollBarPosition) {
    self->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
}

void QTermWidget_ScrollToEnd(QTermWidget* self) {
    self->scrollToEnd();
}

void QTermWidget_SendText(QTermWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->sendText(text_QString);
}

void QTermWidget_SendKeyEvent(QTermWidget* self, QKeyEvent* e) {
    self->sendKeyEvent(e);
}

void QTermWidget_SetFlowControlEnabled(QTermWidget* self, bool enabled) {
    self->setFlowControlEnabled(enabled);
}

bool QTermWidget_FlowControlEnabled(QTermWidget* self) {
    return self->flowControlEnabled();
}

void QTermWidget_SetFlowControlWarningEnabled(QTermWidget* self, bool enabled) {
    self->setFlowControlWarningEnabled(enabled);
}

libqt_list /* of libqt_string */ QTermWidget_AvailableKeyBindings() {
    QList<QString> _ret = QTermWidget::availableKeyBindings();
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

libqt_string QTermWidget_KeyBindings(QTermWidget* self) {
    auto _ret = self->keyBindings();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidget_SetMotionAfterPasting(QTermWidget* self, int motionAfterPasting) {
    self->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
}

int QTermWidget_HistoryLinesCount(QTermWidget* self) {
    return self->historyLinesCount();
}

int QTermWidget_ScreenColumnsCount(QTermWidget* self) {
    return self->screenColumnsCount();
}

int QTermWidget_ScreenLinesCount(QTermWidget* self) {
    return self->screenLinesCount();
}

void QTermWidget_SetSelectionStart(QTermWidget* self, int row, int column) {
    self->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidget_SetSelectionEnd(QTermWidget* self, int row, int column) {
    self->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidget_GetSelectionStart(QTermWidget* self, int* row, int* column) {
    self->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
}

void QTermWidget_GetSelectionEnd(QTermWidget* self, int* row, int* column) {
    self->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
}

libqt_string QTermWidget_SelectedText(QTermWidget* self, bool preserveLineBreaks) {
    auto _ret = self->selectedText(preserveLineBreaks);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidget_SetMonitorActivity(QTermWidget* self, bool monitorActivity) {
    self->setMonitorActivity(monitorActivity);
}

void QTermWidget_SetMonitorSilence(QTermWidget* self, bool monitorSilence) {
    self->setMonitorSilence(monitorSilence);
}

void QTermWidget_SetSilenceTimeout(QTermWidget* self, int seconds) {
    self->setSilenceTimeout(static_cast<int>(seconds));
}

Konsole__Filter__HotSpot* QTermWidget_GetHotSpotAt(const QTermWidget* self, const QPoint* pos) {
    return self->getHotSpotAt(*pos);
}

Konsole__Filter__HotSpot* QTermWidget_GetHotSpotAt2(const QTermWidget* self, int row, int column) {
    return self->getHotSpotAt(static_cast<int>(row), static_cast<int>(column));
}

libqt_list /* of QAction* */ QTermWidget_FilterActions(QTermWidget* self, const QPoint* position) {
    QList<QAction*> _ret = self->filterActions(*position);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QTermWidget_GetPtySlaveFd(const QTermWidget* self) {
    return self->getPtySlaveFd();
}

void QTermWidget_SetKeyboardCursorShape(QTermWidget* self, int shape) {
    self->setKeyboardCursorShape(static_cast<Konsole::Emulation::KeyboardCursorShape>(shape));
}

void QTermWidget_SetBlinkingCursor(QTermWidget* self, bool blink) {
    self->setBlinkingCursor(blink);
}

void QTermWidget_SetBidiEnabled(QTermWidget* self, bool enabled) {
    self->setBidiEnabled(enabled);
}

bool QTermWidget_IsBidiEnabled(QTermWidget* self) {
    return self->isBidiEnabled();
}

void QTermWidget_SetAutoClose(QTermWidget* self, bool autoClose) {
    self->setAutoClose(autoClose);
}

libqt_string QTermWidget_Title(const QTermWidget* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTermWidget_Icon(const QTermWidget* self) {
    auto _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTermWidget_IsTitleChanged(const QTermWidget* self) {
    return self->isTitleChanged();
}

void QTermWidget_BracketText(QTermWidget* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->bracketText(text_QString);
}

void QTermWidget_DisableBracketedPasteMode(QTermWidget* self, bool disable) {
    self->disableBracketedPasteMode(disable);
}

bool QTermWidget_BracketedPasteModeIsDisabled(const QTermWidget* self) {
    return self->bracketedPasteModeIsDisabled();
}

void QTermWidget_SetMargin(QTermWidget* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

int QTermWidget_GetMargin(const QTermWidget* self) {
    return self->getMargin();
}

void QTermWidget_SetDrawLineChars(QTermWidget* self, bool drawLineChars) {
    self->setDrawLineChars(drawLineChars);
}

void QTermWidget_SetBoldIntense(QTermWidget* self, bool boldIntense) {
    self->setBoldIntense(boldIntense);
}

void QTermWidget_SetConfirmMultilinePaste(QTermWidget* self, bool confirmMultilinePaste) {
    self->setConfirmMultilinePaste(confirmMultilinePaste);
}

void QTermWidget_SetTrimPastedTrailingNewlines(QTermWidget* self, bool trimPastedTrailingNewlines) {
    self->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
}

libqt_string QTermWidget_WordCharacters(const QTermWidget* self) {
    auto _ret = self->wordCharacters();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidget_SetWordCharacters(QTermWidget* self, const libqt_string chars) {
    QString chars_QString = QString::fromUtf8(chars.data, chars.len);
    self->setWordCharacters(chars_QString);
}

QTermWidgetInterface* QTermWidget_CreateWidget(const QTermWidget* self, int startnow) {
    return self->createWidget(static_cast<int>(startnow));
}

void QTermWidget_Finished(QTermWidget* self) {
    self->finished();
}

void QTermWidget_Connect_Finished(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::finished),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_CopyAvailable(QTermWidget* self, bool param1) {
    self->copyAvailable(param1);
}

void QTermWidget_Connect_CopyAvailable(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, bool) = reinterpret_cast<void (*)(QTermWidget*, bool)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(bool)>(&QTermWidget::copyAvailable),
                         [self, slotFunc](bool param1) {
                             bool sigval1 = param1;
                             slotFunc(self, sigval1);
                         });
}

void QTermWidget_TermGetFocus(QTermWidget* self) {
    self->termGetFocus();
}

void QTermWidget_Connect_TermGetFocus(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::termGetFocus),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_TermLostFocus(QTermWidget* self) {
    self->termLostFocus();
}

void QTermWidget_Connect_TermLostFocus(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::termLostFocus),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_TermKeyPressed(QTermWidget* self, QKeyEvent* param1) {
    self->termKeyPressed(param1);
}

void QTermWidget_Connect_TermKeyPressed(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, QKeyEvent*) = reinterpret_cast<void (*)(QTermWidget*, QKeyEvent*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(QKeyEvent*)>(&QTermWidget::termKeyPressed),
                         [self, slotFunc](QKeyEvent* param1) {
                             QKeyEvent* sigval1 = param1;
                             slotFunc(self, sigval1);
                         });
}

void QTermWidget_UrlActivated(QTermWidget* self, const QUrl* param1, bool fromContextMenu) {
    self->urlActivated(*param1, fromContextMenu);
}

void QTermWidget_Connect_UrlActivated(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, QUrl*, bool) = reinterpret_cast<void (*)(QTermWidget*, QUrl*, bool)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(const QUrl&, bool)>(&QTermWidget::urlActivated),
                         [self, slotFunc](const QUrl& param1, bool fromContextMenu) {
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
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::bell),
                         [self, slotFunc](const QString& message) {
                             const auto message_ret = message;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray message_b = message_ret.toUtf8();
                             auto message_str_len = message_b.length();
                             const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
                             memcpy((void*)message_str, message_b.data(), message_str_len);
                             ((char*)message_str)[message_str_len] = '\0';
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
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::activity),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_Silence(QTermWidget* self) {
    self->silence();
}

void QTermWidget_Connect_Silence(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*) = reinterpret_cast<void (*)(QTermWidget*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::silence),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_SendData(QTermWidget* self, const char* param1, int param2) {
    self->sendData(param1, static_cast<int>(param2));
}

void QTermWidget_Connect_SendData(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*, int) = reinterpret_cast<void (*)(QTermWidget*, const char*, int)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(const char*, int)>(&QTermWidget::sendData),
                         [self, slotFunc](const char* param1, int param2) {
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
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::profileChanged),
                         [self, slotFunc](const QString& profile) {
                             const auto profile_ret = profile;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray profile_b = profile_ret.toUtf8();
                             auto profile_str_len = profile_b.length();
                             const char* profile_str = static_cast<const char*>(malloc(profile_str_len + 1));
                             memcpy((void*)profile_str, profile_b.data(), profile_str_len);
                             ((char*)profile_str)[profile_str_len] = '\0';
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
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)()>(&QTermWidget::titleChanged),
                         [self, slotFunc]() {
                             slotFunc(self);
                         });
}

void QTermWidget_ReceivedData(QTermWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->receivedData(text_QString);
}

void QTermWidget_Connect_ReceivedData(QTermWidget* self, intptr_t slot) {
    void (*slotFunc)(QTermWidget*, const char*) = reinterpret_cast<void (*)(QTermWidget*, const char*)>(slot);
    QTermWidget::connect(self,
                         static_cast<void (QTermWidget::*)(const QString&)>(&QTermWidget::receivedData),
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

void QTermWidget_ResizeEvent(QTermWidget* self, QResizeEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->resizeEvent(param1);
    }
}

libqt_string QTermWidget_Tr2(const char* s, const char* c) {
    auto _ret = QTermWidget::tr(s, c);
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
    auto _ret = QTermWidget::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* QTermWidget_SuperMetaObject(const QTermWidget* self) {
    return (QMetaObject*)self->QTermWidget::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMetaObject(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_metaobject_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTermWidget_SuperMetacast(QTermWidget* self, const char* param1) {
    return self->QTermWidget::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMetacast(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_metacast_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperMetacall(QTermWidget* self, int param1, int param2, void** param3) {
    return self->QTermWidget::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMetacall(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_metacall_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QTermWidget_SuperSizeHint(const QTermWidget* self) {
    return new QSize(self->QTermWidget::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSizeHint(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_sizehint_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SizeHint_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTerminalSizeHint(QTermWidget* self, bool enabled) {
    self->QTermWidget::setTerminalSizeHint(enabled);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalSizeHint(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setterminalsizehint_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalSizeHint_Callback>(slot);
}

// Base class handler implementation
bool QTermWidget_SuperTerminalSizeHint(QTermWidget* self) {
    return self->QTermWidget::terminalSizeHint();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTerminalSizeHint(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_terminalsizehint_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_TerminalSizeHint_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperStartShellProgram(QTermWidget* self) {
    self->QTermWidget::startShellProgram();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnStartShellProgram(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_startshellprogram_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_StartShellProgram_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperStartTerminalTeletype(QTermWidget* self) {
    self->QTermWidget::startTerminalTeletype();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnStartTerminalTeletype(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_startterminalteletype_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_StartTerminalTeletype_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperGetShellPID(QTermWidget* self) {
    return self->QTermWidget::getShellPID();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetShellPID(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getshellpid_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetShellPID_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperGetForegroundProcessId(QTermWidget* self) {
    return self->QTermWidget::getForegroundProcessId();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetForegroundProcessId(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getforegroundprocessid_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetForegroundProcessId_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperChangeDir(QTermWidget* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->QTermWidget::changeDir(dir_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChangeDir(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_changedir_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ChangeDir_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTerminalFont(QTermWidget* self, const QFont* font) {
    self->QTermWidget::setTerminalFont(*font);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalFont(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setterminalfont_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalFont_Callback>(slot);
}

// Base class handler implementation
QFont* QTermWidget_SuperGetTerminalFont(QTermWidget* self) {
    return new QFont(self->QTermWidget::getTerminalFont());
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetTerminalFont(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getterminalfont_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetTerminalFont_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTerminalOpacity(QTermWidget* self, double level) {
    self->QTermWidget::setTerminalOpacity(static_cast<qreal>(level));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalOpacity(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setterminalopacity_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalOpacity_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTerminalBackgroundImage(QTermWidget* self, const libqt_string backgroundImage) {
    QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
    self->QTermWidget::setTerminalBackgroundImage(backgroundImage_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalBackgroundImage(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setterminalbackgroundimage_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalBackgroundImage_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTerminalBackgroundMode(QTermWidget* self, int mode) {
    self->QTermWidget::setTerminalBackgroundMode(static_cast<int>(mode));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTerminalBackgroundMode(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setterminalbackgroundmode_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTerminalBackgroundMode_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetEnvironment(QTermWidget* self, const libqt_list /* of libqt_string */ environment) {
    QList<QString> environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    self->QTermWidget::setEnvironment(environment_QList);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetEnvironment(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setenvironment_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetEnvironment_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetShellProgram(QTermWidget* self, const libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    self->QTermWidget::setShellProgram(program_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetShellProgram(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setshellprogram_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetShellProgram_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetWorkingDirectory(QTermWidget* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->QTermWidget::setWorkingDirectory(dir_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetWorkingDirectory(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setworkingdirectory_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetWorkingDirectory_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperWorkingDirectory(QTermWidget* self) {
    auto _ret = self->QTermWidget::workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWorkingDirectory(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_workingdirectory_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_WorkingDirectory_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetArgs(QTermWidget* self, const libqt_list /* of libqt_string */ args) {
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    self->QTermWidget::setArgs(args_QList);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetArgs(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setargs_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetArgs_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetColorScheme(QTermWidget* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->QTermWidget::setColorScheme(name_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetColorScheme(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setcolorscheme_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetColorScheme_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QTermWidget_SuperGetAvailableColorSchemes(QTermWidget* self) {
    QList<QString> _ret = self->QTermWidget::getAvailableColorSchemes();
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

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetAvailableColorSchemes(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getavailablecolorschemes_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetAvailableColorSchemes_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetHistorySize(QTermWidget* self, int lines) {
    self->QTermWidget::setHistorySize(static_cast<int>(lines));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetHistorySize(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_sethistorysize_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetHistorySize_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperHistorySize(const QTermWidget* self) {
    return self->QTermWidget::historySize();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHistorySize(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_historysize_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_HistorySize_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetScrollBarPosition(QTermWidget* self, int scrollBarPosition) {
    self->QTermWidget::setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetScrollBarPosition(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setscrollbarposition_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetScrollBarPosition_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperScrollToEnd(QTermWidget* self) {
    self->QTermWidget::scrollToEnd();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScrollToEnd(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_scrolltoend_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ScrollToEnd_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSendText(QTermWidget* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QTermWidget::sendText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSendText(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_sendtext_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SendText_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSendKeyEvent(QTermWidget* self, QKeyEvent* e) {
    self->QTermWidget::sendKeyEvent(e);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSendKeyEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_sendkeyevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SendKeyEvent_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetFlowControlEnabled(QTermWidget* self, bool enabled) {
    self->QTermWidget::setFlowControlEnabled(enabled);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetFlowControlEnabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setflowcontrolenabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetFlowControlEnabled_Callback>(slot);
}

// Base class handler implementation
bool QTermWidget_SuperFlowControlEnabled(QTermWidget* self) {
    return self->QTermWidget::flowControlEnabled();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFlowControlEnabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_flowcontrolenabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_FlowControlEnabled_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetFlowControlWarningEnabled(QTermWidget* self, bool enabled) {
    self->QTermWidget::setFlowControlWarningEnabled(enabled);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetFlowControlWarningEnabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setflowcontrolwarningenabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetFlowControlWarningEnabled_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperKeyBindings(QTermWidget* self) {
    auto _ret = self->QTermWidget::keyBindings();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyBindings(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_keybindings_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyBindings_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetMotionAfterPasting(QTermWidget* self, int motionAfterPasting) {
    self->QTermWidget::setMotionAfterPasting(static_cast<int>(motionAfterPasting));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMotionAfterPasting(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setmotionafterpasting_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMotionAfterPasting_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperHistoryLinesCount(QTermWidget* self) {
    return self->QTermWidget::historyLinesCount();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHistoryLinesCount(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_historylinescount_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_HistoryLinesCount_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperScreenColumnsCount(QTermWidget* self) {
    return self->QTermWidget::screenColumnsCount();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScreenColumnsCount(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_screencolumnscount_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ScreenColumnsCount_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperScreenLinesCount(QTermWidget* self) {
    return self->QTermWidget::screenLinesCount();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnScreenLinesCount(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_screenlinescount_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ScreenLinesCount_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetSelectionStart(QTermWidget* self, int row, int column) {
    self->QTermWidget::setSelectionStart(static_cast<int>(row), static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSelectionStart(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setselectionstart_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSelectionStart_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetSelectionEnd(QTermWidget* self, int row, int column) {
    self->QTermWidget::setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSelectionEnd(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setselectionend_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSelectionEnd_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperGetSelectionStart(QTermWidget* self, int* row, int* column) {
    self->QTermWidget::getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetSelectionStart(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getselectionstart_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetSelectionStart_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperGetSelectionEnd(QTermWidget* self, int* row, int* column) {
    self->QTermWidget::getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetSelectionEnd(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_getselectionend_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetSelectionEnd_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperSelectedText(QTermWidget* self, bool preserveLineBreaks) {
    auto _ret = self->QTermWidget::selectedText(preserveLineBreaks);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSelectedText(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_selectedtext_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SelectedText_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetMonitorActivity(QTermWidget* self, bool monitorActivity) {
    self->QTermWidget::setMonitorActivity(monitorActivity);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMonitorActivity(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setmonitoractivity_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMonitorActivity_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetMonitorSilence(QTermWidget* self, bool monitorSilence) {
    self->QTermWidget::setMonitorSilence(monitorSilence);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMonitorSilence(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setmonitorsilence_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMonitorSilence_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetSilenceTimeout(QTermWidget* self, int seconds) {
    self->QTermWidget::setSilenceTimeout(static_cast<int>(seconds));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetSilenceTimeout(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setsilencetimeout_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetSilenceTimeout_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QAction* */ QTermWidget_SuperFilterActions(QTermWidget* self, const QPoint* position) {
    QList<QAction*> _ret = self->QTermWidget::filterActions(*position);
    // Convert QList<> from C++ memory to manually-managed C memory
    QAction** _arr = static_cast<QAction**>(malloc(sizeof(QAction*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFilterActions(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_filteractions_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_FilterActions_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperGetPtySlaveFd(const QTermWidget* self) {
    return self->QTermWidget::getPtySlaveFd();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetPtySlaveFd(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_getptyslavefd_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetPtySlaveFd_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetBlinkingCursor(QTermWidget* self, bool blink) {
    self->QTermWidget::setBlinkingCursor(blink);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBlinkingCursor(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setblinkingcursor_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBlinkingCursor_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetBidiEnabled(QTermWidget* self, bool enabled) {
    self->QTermWidget::setBidiEnabled(enabled);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBidiEnabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setbidienabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBidiEnabled_Callback>(slot);
}

// Base class handler implementation
bool QTermWidget_SuperIsBidiEnabled(QTermWidget* self) {
    return self->QTermWidget::isBidiEnabled();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIsBidiEnabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_isbidienabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_IsBidiEnabled_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetAutoClose(QTermWidget* self, bool autoClose) {
    self->QTermWidget::setAutoClose(autoClose);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetAutoClose(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setautoclose_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetAutoClose_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperTitle(const QTermWidget* self) {
    auto _ret = self->QTermWidget::title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTitle(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_title_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Title_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperIcon(const QTermWidget* self) {
    auto _ret = self->QTermWidget::icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIcon(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_icon_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Icon_Callback>(slot);
}

// Base class handler implementation
bool QTermWidget_SuperIsTitleChanged(const QTermWidget* self) {
    return self->QTermWidget::isTitleChanged();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnIsTitleChanged(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_istitlechanged_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_IsTitleChanged_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperBracketText(QTermWidget* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->QTermWidget::bracketText(text_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnBracketText(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_brackettext_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_BracketText_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperDisableBracketedPasteMode(QTermWidget* self, bool disable) {
    self->QTermWidget::disableBracketedPasteMode(disable);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDisableBracketedPasteMode(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_disablebracketedpastemode_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DisableBracketedPasteMode_Callback>(slot);
}

// Base class handler implementation
bool QTermWidget_SuperBracketedPasteModeIsDisabled(const QTermWidget* self) {
    return self->QTermWidget::bracketedPasteModeIsDisabled();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnBracketedPasteModeIsDisabled(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_bracketedpastemodeisdisabled_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_BracketedPasteModeIsDisabled_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetMargin(QTermWidget* self, int margin) {
    self->QTermWidget::setMargin(static_cast<int>(margin));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetMargin(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setmargin_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetMargin_Callback>(slot);
}

// Base class handler implementation
int QTermWidget_SuperGetMargin(const QTermWidget* self) {
    return self->QTermWidget::getMargin();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnGetMargin(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_getmargin_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_GetMargin_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetDrawLineChars(QTermWidget* self, bool drawLineChars) {
    self->QTermWidget::setDrawLineChars(drawLineChars);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetDrawLineChars(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setdrawlinechars_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetDrawLineChars_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetBoldIntense(QTermWidget* self, bool boldIntense) {
    self->QTermWidget::setBoldIntense(boldIntense);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetBoldIntense(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setboldintense_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetBoldIntense_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetConfirmMultilinePaste(QTermWidget* self, bool confirmMultilinePaste) {
    self->QTermWidget::setConfirmMultilinePaste(confirmMultilinePaste);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetConfirmMultilinePaste(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setconfirmmultilinepaste_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetConfirmMultilinePaste_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetTrimPastedTrailingNewlines(QTermWidget* self, bool trimPastedTrailingNewlines) {
    self->QTermWidget::setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetTrimPastedTrailingNewlines(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_settrimpastedtrailingnewlines_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetTrimPastedTrailingNewlines_Callback>(slot);
}

// Base class handler implementation
libqt_string QTermWidget_SuperWordCharacters(const QTermWidget* self) {
    auto _ret = self->QTermWidget::wordCharacters();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWordCharacters(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_wordcharacters_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_WordCharacters_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperSetWordCharacters(QTermWidget* self, const libqt_string chars) {
    QString chars_QString = QString::fromUtf8(chars.data, chars.len);
    self->QTermWidget::setWordCharacters(chars_QString);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetWordCharacters(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setwordcharacters_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetWordCharacters_Callback>(slot);
}

// Base class handler implementation
QTermWidgetInterface* QTermWidget_SuperCreateWidget(const QTermWidget* self, int startnow) {
    return self->QTermWidget::createWidget(static_cast<int>(startnow));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCreateWidget(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_createwidget_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_CreateWidget_Callback>(slot);
}

// Base class handler implementation
void QTermWidget_SuperResizeEvent(QTermWidget* self, QResizeEvent* param1) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTermWidget::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnResizeEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_resizeevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTermWidget_DevType(const QTermWidget* self) {
    return self->devType();
}

// Base class handler implementation
int QTermWidget_SuperDevType(const QTermWidget* self) {
    return self->QTermWidget::devType();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDevType(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_devtype_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DevType_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_SetVisible(QTermWidget* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QTermWidget_SuperSetVisible(QTermWidget* self, bool visible) {
    self->QTermWidget::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSetVisible(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_setvisible_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QTermWidget_MinimumSizeHint(const QTermWidget* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QTermWidget_SuperMinimumSizeHint(const QTermWidget* self) {
    return new QSize(self->QTermWidget::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMinimumSizeHint(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_minimumsizehint_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QTermWidget_HeightForWidth(const QTermWidget* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QTermWidget_SuperHeightForWidth(const QTermWidget* self, int param1) {
    return self->QTermWidget::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHeightForWidth(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_heightforwidth_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QTermWidget_HasHeightForWidth(const QTermWidget* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QTermWidget_SuperHasHeightForWidth(const QTermWidget* self) {
    return self->QTermWidget::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHasHeightForWidth(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_hasheightforwidth_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QTermWidget_PaintEngine(const QTermWidget* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QTermWidget_SuperPaintEngine(const QTermWidget* self) {
    return self->QTermWidget::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnPaintEngine(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_paintengine_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QTermWidget_Event(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        return vqtermwidget->event(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTermWidget_SuperEvent(QTermWidget* self, QEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        return vqtermwidget->QTermWidget::event(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_event_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Event_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_MousePressEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperMousePressEvent(QTermWidget* self, QMouseEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMousePressEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_mousepressevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_MouseReleaseEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperMouseReleaseEvent(QTermWidget* self, QMouseEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseReleaseEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_mousereleaseevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_MouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperMouseDoubleClickEvent(QTermWidget* self, QMouseEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseDoubleClickEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_mousedoubleclickevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_MouseMoveEvent(QTermWidget* self, QMouseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperMouseMoveEvent(QTermWidget* self, QMouseEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMouseMoveEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_mousemoveevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_WheelEvent(QTermWidget* self, QWheelEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperWheelEvent(QTermWidget* self, QWheelEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnWheelEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_wheelevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_KeyPressEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperKeyPressEvent(QTermWidget* self, QKeyEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyPressEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_keypressevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_KeyReleaseEvent(QTermWidget* self, QKeyEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperKeyReleaseEvent(QTermWidget* self, QKeyEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnKeyReleaseEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_keyreleaseevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_FocusInEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperFocusInEvent(QTermWidget* self, QFocusEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusInEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_focusinevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_FocusOutEvent(QTermWidget* self, QFocusEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperFocusOutEvent(QTermWidget* self, QFocusEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusOutEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_focusoutevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_EnterEvent(QTermWidget* self, QEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperEnterEvent(QTermWidget* self, QEnterEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEnterEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_enterevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_LeaveEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperLeaveEvent(QTermWidget* self, QEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnLeaveEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_leaveevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_PaintEvent(QTermWidget* self, QPaintEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperPaintEvent(QTermWidget* self, QPaintEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnPaintEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_paintevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_MoveEvent(QTermWidget* self, QMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperMoveEvent(QTermWidget* self, QMoveEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMoveEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_moveevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_CloseEvent(QTermWidget* self, QCloseEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->closeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperCloseEvent(QTermWidget* self, QCloseEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::closeEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCloseEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_closeevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ContextMenuEvent(QTermWidget* self, QContextMenuEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->contextMenuEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperContextMenuEvent(QTermWidget* self, QContextMenuEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::contextMenuEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnContextMenuEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_contextmenuevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_TabletEvent(QTermWidget* self, QTabletEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperTabletEvent(QTermWidget* self, QTabletEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTabletEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_tabletevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ActionEvent(QTermWidget* self, QActionEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperActionEvent(QTermWidget* self, QActionEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnActionEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_actionevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_DragEnterEvent(QTermWidget* self, QDragEnterEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperDragEnterEvent(QTermWidget* self, QDragEnterEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragEnterEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_dragenterevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_DragMoveEvent(QTermWidget* self, QDragMoveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperDragMoveEvent(QTermWidget* self, QDragMoveEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragMoveEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_dragmoveevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_DragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperDragLeaveEvent(QTermWidget* self, QDragLeaveEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDragLeaveEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_dragleaveevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_DropEvent(QTermWidget* self, QDropEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperDropEvent(QTermWidget* self, QDropEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDropEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_dropevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ShowEvent(QTermWidget* self, QShowEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->showEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperShowEvent(QTermWidget* self, QShowEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::showEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnShowEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_showevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_HideEvent(QTermWidget* self, QHideEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperHideEvent(QTermWidget* self, QHideEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnHideEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_hideevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QTermWidget_NativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        return vqtermwidget->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QTermWidget::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTermWidget_SuperNativeEvent(QTermWidget* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        return vqtermwidget->QTermWidget::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QTermWidget::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnNativeEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_nativeevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ChangeEvent(QTermWidget* self, QEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperChangeEvent(QTermWidget* self, QEvent* param1) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTermWidget::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChangeEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_changeevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QTermWidget_Metric(const QTermWidget* self, int param1) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget) {
        return vqtermwidget->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QTermWidget::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QTermWidget_SuperMetric(const QTermWidget* self, int param1) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->QTermWidget::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QTermWidget::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnMetric(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_metric_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Metric_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_InitPainter(const QTermWidget* self, QPainter* painter) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget) {
        vqtermwidget->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperInitPainter(const QTermWidget* self, QPainter* painter) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        vqtermwidget->QTermWidget::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QTermWidget::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInitPainter(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_initpainter_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QTermWidget_Redirected(const QTermWidget* self, QPoint* offset) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget) {
        return vqtermwidget->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QTermWidget_SuperRedirected(const QTermWidget* self, QPoint* offset) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->QTermWidget::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QTermWidget::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnRedirected(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_redirected_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QTermWidget_SharedPainter(const QTermWidget* self) {
    auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self));
    if (vqtermwidget) {
        return vqtermwidget->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QTermWidget::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QTermWidget_SuperSharedPainter(const QTermWidget* self) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->QTermWidget::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QTermWidget::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnSharedPainter(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_sharedpainter_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_InputMethodEvent(QTermWidget* self, QInputMethodEvent* param1) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperInputMethodEvent(QTermWidget* self, QInputMethodEvent* param1) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QTermWidget::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInputMethodEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_inputmethodevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QTermWidget_InputMethodQuery(const QTermWidget* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QTermWidget_SuperInputMethodQuery(const QTermWidget* self, int param1) {
    return new QVariant(self->QTermWidget::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnInputMethodQuery(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self)))
        vqtermwidget->qtermwidget_inputmethodquery_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QTermWidget_FocusNextPrevChild(QTermWidget* self, bool next) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        return vqtermwidget->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QTermWidget_SuperFocusNextPrevChild(QTermWidget* self, bool next) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        return vqtermwidget->QTermWidget::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QTermWidget::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnFocusNextPrevChild(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_focusnextprevchild_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QTermWidget_EventFilter(QTermWidget* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTermWidget_SuperEventFilter(QTermWidget* self, QObject* watched, QEvent* event) {
    return self->QTermWidget::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnEventFilter(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_eventfilter_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_TimerEvent(QTermWidget* self, QTimerEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperTimerEvent(QTermWidget* self, QTimerEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnTimerEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_timerevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ChildEvent(QTermWidget* self, QChildEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperChildEvent(QTermWidget* self, QChildEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnChildEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_childevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_CustomEvent(QTermWidget* self, QEvent* event) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperCustomEvent(QTermWidget* self, QEvent* event) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTermWidget::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnCustomEvent(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_customevent_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_ConnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperConnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTermWidget::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnConnectNotify(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_connectnotify_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTermWidget_DisconnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self);
    if (vqtermwidget) {
        vqtermwidget->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTermWidget::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTermWidget_SuperDisconnectNotify(QTermWidget* self, const QMetaMethod* signal) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->QTermWidget::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTermWidget::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTermWidget_OnDisconnectNotify(QTermWidget* self, intptr_t slot) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self))
        vqtermwidget->qtermwidget_disconnectnotify_callback = reinterpret_cast<VirtualQTermWidget::QTermWidget_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QTermWidget_SessionFinished(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->VirtualQTermWidget::sessionFinished();
    } else
        qFatal("Error: Protected method QTermWidget::sessionFinished called without a directly constructed type");
}

// Derived class protected handler implementation
void QTermWidget_SelectionChanged(QTermWidget* self, bool textSelected) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->VirtualQTermWidget::selectionChanged(textSelected);
    } else
        qFatal("Error: Protected method QTermWidget::selectionChanged called without a directly constructed type");
}

// Derived class protected handler implementation
void QTermWidget_UpdateMicroFocus(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->VirtualQTermWidget::updateMicroFocus();
    } else
        qFatal("Error: Protected method QTermWidget::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QTermWidget_Create(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->VirtualQTermWidget::create();
    } else
        qFatal("Error: Protected method QTermWidget::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QTermWidget_Destroy(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        vqtermwidget->VirtualQTermWidget::destroy();
    } else
        qFatal("Error: Protected method QTermWidget::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTermWidget_FocusNextChild(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        return vqtermwidget->VirtualQTermWidget::focusNextChild();
    } else
        qFatal("Error: Protected method QTermWidget::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTermWidget_FocusPreviousChild(QTermWidget* self) {
    if (auto* vqtermwidget = dynamic_cast<VirtualQTermWidget*>(self)) {
        return vqtermwidget->VirtualQTermWidget::focusPreviousChild();
    } else
        qFatal("Error: Protected method QTermWidget::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTermWidget_Sender(const QTermWidget* self) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->VirtualQTermWidget::sender();
    } else
        qFatal("Error: Protected method QTermWidget::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTermWidget_SenderSignalIndex(const QTermWidget* self) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->VirtualQTermWidget::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTermWidget::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTermWidget_Receivers(const QTermWidget* self, const char* signal) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->VirtualQTermWidget::receivers(signal);
    } else
        qFatal("Error: Protected method QTermWidget::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTermWidget_IsSignalConnected(const QTermWidget* self, const QMetaMethod* signal) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->VirtualQTermWidget::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTermWidget::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QTermWidget_GetDecodedMetricF(const QTermWidget* self, int metricA, int metricB) {
    if (auto* vqtermwidget = const_cast<VirtualQTermWidget*>(dynamic_cast<const VirtualQTermWidget*>(self))) {
        return vqtermwidget->VirtualQTermWidget::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QTermWidget::getDecodedMetricF called without a directly constructed type");
}

void QTermWidget_Delete(QTermWidget* self) {
    delete self;
}
