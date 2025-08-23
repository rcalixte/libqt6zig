#include <QAction>
#include <QFont>
#include <QKeyEvent>
#include <QList>
#include <QPoint>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qtermwidget_interface.h>
#include "libqtermwidget_interface.h"
#include "libqtermwidget_interface.hxx"

void QTermWidgetInterface_SetTerminalSizeHint(QTermWidgetInterface* self, bool enabled) {
    self->setTerminalSizeHint(enabled);
}

bool QTermWidgetInterface_TerminalSizeHint(QTermWidgetInterface* self) {
    return self->terminalSizeHint();
}

void QTermWidgetInterface_StartShellProgram(QTermWidgetInterface* self) {
    self->startShellProgram();
}

void QTermWidgetInterface_StartTerminalTeletype(QTermWidgetInterface* self) {
    self->startTerminalTeletype();
}

int QTermWidgetInterface_GetShellPID(QTermWidgetInterface* self) {
    return self->getShellPID();
}

int QTermWidgetInterface_GetForegroundProcessId(QTermWidgetInterface* self) {
    return self->getForegroundProcessId();
}

void QTermWidgetInterface_ChangeDir(QTermWidgetInterface* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->changeDir(dir_QString);
}

void QTermWidgetInterface_SetTerminalFont(QTermWidgetInterface* self, const QFont* font) {
    self->setTerminalFont(*font);
}

QFont* QTermWidgetInterface_GetTerminalFont(QTermWidgetInterface* self) {
    return new QFont(self->getTerminalFont());
}

void QTermWidgetInterface_SetTerminalOpacity(QTermWidgetInterface* self, double level) {
    self->setTerminalOpacity(static_cast<qreal>(level));
}

void QTermWidgetInterface_SetTerminalBackgroundImage(QTermWidgetInterface* self, const libqt_string backgroundImage) {
    QString backgroundImage_QString = QString::fromUtf8(backgroundImage.data, backgroundImage.len);
    self->setTerminalBackgroundImage(backgroundImage_QString);
}

void QTermWidgetInterface_SetTerminalBackgroundMode(QTermWidgetInterface* self, int mode) {
    self->setTerminalBackgroundMode(static_cast<int>(mode));
}

void QTermWidgetInterface_SetEnvironment(QTermWidgetInterface* self, const libqt_list /* of libqt_string */ environment) {
    QList<QString> environment_QList;
    environment_QList.reserve(environment.len);
    libqt_string* environment_arr = static_cast<libqt_string*>(environment.data);
    for (size_t i = 0; i < environment.len; ++i) {
        QString environment_arr_i_QString = QString::fromUtf8(environment_arr[i].data, environment_arr[i].len);
        environment_QList.push_back(environment_arr_i_QString);
    }
    self->setEnvironment(environment_QList);
}

void QTermWidgetInterface_SetShellProgram(QTermWidgetInterface* self, const libqt_string program) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    self->setShellProgram(program_QString);
}

void QTermWidgetInterface_SetWorkingDirectory(QTermWidgetInterface* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->setWorkingDirectory(dir_QString);
}

libqt_string QTermWidgetInterface_WorkingDirectory(QTermWidgetInterface* self) {
    QString _ret = self->workingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidgetInterface_SetArgs(QTermWidgetInterface* self, const libqt_list /* of libqt_string */ args) {
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    self->setArgs(args_QList);
}

void QTermWidgetInterface_SetColorScheme(QTermWidgetInterface* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setColorScheme(name_QString);
}

libqt_list /* of libqt_string */ QTermWidgetInterface_GetAvailableColorSchemes(QTermWidgetInterface* self) {
    QList<QString> _ret = self->getAvailableColorSchemes();
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

void QTermWidgetInterface_SetHistorySize(QTermWidgetInterface* self, int lines) {
    self->setHistorySize(static_cast<int>(lines));
}

int QTermWidgetInterface_HistorySize(const QTermWidgetInterface* self) {
    return self->historySize();
}

void QTermWidgetInterface_SetScrollBarPosition(QTermWidgetInterface* self, int scrollBarPosition) {
    self->setScrollBarPosition(static_cast<QTermWidgetInterface::ScrollBarPosition>(scrollBarPosition));
}

void QTermWidgetInterface_ScrollToEnd(QTermWidgetInterface* self) {
    self->scrollToEnd();
}

void QTermWidgetInterface_SendText(QTermWidgetInterface* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->sendText(text_QString);
}

void QTermWidgetInterface_SendKeyEvent(QTermWidgetInterface* self, QKeyEvent* e) {
    self->sendKeyEvent(e);
}

void QTermWidgetInterface_SetFlowControlEnabled(QTermWidgetInterface* self, bool enabled) {
    self->setFlowControlEnabled(enabled);
}

bool QTermWidgetInterface_FlowControlEnabled(QTermWidgetInterface* self) {
    return self->flowControlEnabled();
}

void QTermWidgetInterface_SetFlowControlWarningEnabled(QTermWidgetInterface* self, bool enabled) {
    self->setFlowControlWarningEnabled(enabled);
}

libqt_string QTermWidgetInterface_KeyBindings(QTermWidgetInterface* self) {
    QString _ret = self->keyBindings();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidgetInterface_SetMotionAfterPasting(QTermWidgetInterface* self, int motionAfterPasting) {
    self->setMotionAfterPasting(static_cast<int>(motionAfterPasting));
}

int QTermWidgetInterface_HistoryLinesCount(QTermWidgetInterface* self) {
    return self->historyLinesCount();
}

int QTermWidgetInterface_ScreenColumnsCount(QTermWidgetInterface* self) {
    return self->screenColumnsCount();
}

int QTermWidgetInterface_ScreenLinesCount(QTermWidgetInterface* self) {
    return self->screenLinesCount();
}

void QTermWidgetInterface_SetSelectionStart(QTermWidgetInterface* self, int row, int column) {
    self->setSelectionStart(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidgetInterface_SetSelectionEnd(QTermWidgetInterface* self, int row, int column) {
    self->setSelectionEnd(static_cast<int>(row), static_cast<int>(column));
}

void QTermWidgetInterface_GetSelectionStart(QTermWidgetInterface* self, int* row, int* column) {
    self->getSelectionStart(static_cast<int&>(*row), static_cast<int&>(*column));
}

void QTermWidgetInterface_GetSelectionEnd(QTermWidgetInterface* self, int* row, int* column) {
    self->getSelectionEnd(static_cast<int&>(*row), static_cast<int&>(*column));
}

libqt_string QTermWidgetInterface_SelectedText(QTermWidgetInterface* self, bool preserveLineBreaks) {
    QString _ret = self->selectedText(preserveLineBreaks);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidgetInterface_SetMonitorActivity(QTermWidgetInterface* self, bool monitorActivity) {
    self->setMonitorActivity(monitorActivity);
}

void QTermWidgetInterface_SetMonitorSilence(QTermWidgetInterface* self, bool monitorSilence) {
    self->setMonitorSilence(monitorSilence);
}

void QTermWidgetInterface_SetSilenceTimeout(QTermWidgetInterface* self, int seconds) {
    self->setSilenceTimeout(static_cast<int>(seconds));
}

libqt_list /* of QAction* */ QTermWidgetInterface_FilterActions(QTermWidgetInterface* self, const QPoint* position) {
    QList<QAction*> _ret = self->filterActions(*position);
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

int QTermWidgetInterface_GetPtySlaveFd(const QTermWidgetInterface* self) {
    return self->getPtySlaveFd();
}

void QTermWidgetInterface_SetBlinkingCursor(QTermWidgetInterface* self, bool blink) {
    self->setBlinkingCursor(blink);
}

void QTermWidgetInterface_SetBidiEnabled(QTermWidgetInterface* self, bool enabled) {
    self->setBidiEnabled(enabled);
}

bool QTermWidgetInterface_IsBidiEnabled(QTermWidgetInterface* self) {
    return self->isBidiEnabled();
}

void QTermWidgetInterface_SetAutoClose(QTermWidgetInterface* self, bool autoClose) {
    self->setAutoClose(autoClose);
}

libqt_string QTermWidgetInterface_Title(const QTermWidgetInterface* self) {
    QString _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTermWidgetInterface_Icon(const QTermWidgetInterface* self) {
    QString _ret = self->icon();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QTermWidgetInterface_IsTitleChanged(const QTermWidgetInterface* self) {
    return self->isTitleChanged();
}

void QTermWidgetInterface_BracketText(QTermWidgetInterface* self, libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->bracketText(text_QString);
}

void QTermWidgetInterface_DisableBracketedPasteMode(QTermWidgetInterface* self, bool disable) {
    self->disableBracketedPasteMode(disable);
}

bool QTermWidgetInterface_BracketedPasteModeIsDisabled(const QTermWidgetInterface* self) {
    return self->bracketedPasteModeIsDisabled();
}

void QTermWidgetInterface_SetMargin(QTermWidgetInterface* self, int margin) {
    self->setMargin(static_cast<int>(margin));
}

int QTermWidgetInterface_GetMargin(const QTermWidgetInterface* self) {
    return self->getMargin();
}

void QTermWidgetInterface_SetDrawLineChars(QTermWidgetInterface* self, bool drawLineChars) {
    self->setDrawLineChars(drawLineChars);
}

void QTermWidgetInterface_SetBoldIntense(QTermWidgetInterface* self, bool boldIntense) {
    self->setBoldIntense(boldIntense);
}

void QTermWidgetInterface_SetConfirmMultilinePaste(QTermWidgetInterface* self, bool confirmMultilinePaste) {
    self->setConfirmMultilinePaste(confirmMultilinePaste);
}

void QTermWidgetInterface_SetTrimPastedTrailingNewlines(QTermWidgetInterface* self, bool trimPastedTrailingNewlines) {
    self->setTrimPastedTrailingNewlines(trimPastedTrailingNewlines);
}

libqt_string QTermWidgetInterface_WordCharacters(const QTermWidgetInterface* self) {
    QString _ret = self->wordCharacters();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTermWidgetInterface_SetWordCharacters(QTermWidgetInterface* self, const libqt_string chars) {
    QString chars_QString = QString::fromUtf8(chars.data, chars.len);
    self->setWordCharacters(chars_QString);
}

QTermWidgetInterface* QTermWidgetInterface_CreateWidget(const QTermWidgetInterface* self, int startnow) {
    return self->createWidget(static_cast<int>(startnow));
}

void QTermWidgetInterface_OperatorAssign(QTermWidgetInterface* self, const QTermWidgetInterface* param1) {
    self->operator=(*param1);
}

void QTermWidgetInterface_Delete(QTermWidgetInterface* self) {
    delete self;
}
