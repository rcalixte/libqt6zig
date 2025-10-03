#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <kde_terminal_interface.h>
#include "libkde_terminal_interface.h"
#include "libkde_terminal_interface.hxx"

void TerminalInterface_StartProgram(TerminalInterface* self, const libqt_string program, const libqt_list /* of libqt_string */ args) {
    QString program_QString = QString::fromUtf8(program.data, program.len);
    QList<QString> args_QList;
    args_QList.reserve(args.len);
    libqt_string* args_arr = static_cast<libqt_string*>(args.data);
    for (size_t i = 0; i < args.len; ++i) {
        QString args_arr_i_QString = QString::fromUtf8(args_arr[i].data, args_arr[i].len);
        args_QList.push_back(args_arr_i_QString);
    }
    self->startProgram(program_QString, args_QList);
}

void TerminalInterface_ShowShellInDir(TerminalInterface* self, const libqt_string dir) {
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    self->showShellInDir(dir_QString);
}

void TerminalInterface_SendInput(TerminalInterface* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->sendInput(text_QString);
}

int TerminalInterface_TerminalProcessId(TerminalInterface* self) {
    return self->terminalProcessId();
}

int TerminalInterface_ForegroundProcessId(TerminalInterface* self) {
    return self->foregroundProcessId();
}

libqt_string TerminalInterface_ForegroundProcessName(TerminalInterface* self) {
    QString _ret = self->foregroundProcessName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string TerminalInterface_CurrentWorkingDirectory(const TerminalInterface* self) {
    QString _ret = self->currentWorkingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ TerminalInterface_AvailableProfiles(const TerminalInterface* self) {
    QList<QString> _ret = self->availableProfiles();
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

libqt_string TerminalInterface_CurrentProfileName(const TerminalInterface* self) {
    QString _ret = self->currentProfileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool TerminalInterface_SetCurrentProfile(TerminalInterface* self, const libqt_string profileName) {
    QString profileName_QString = QString::fromUtf8(profileName.data, profileName.len);
    return self->setCurrentProfile(profileName_QString);
}

QVariant* TerminalInterface_ProfileProperty(const TerminalInterface* self, const libqt_string profileProperty) {
    QString profileProperty_QString = QString::fromUtf8(profileProperty.data, profileProperty.len);
    return new QVariant(self->profileProperty(profileProperty_QString));
}

void TerminalInterface_OperatorAssign(TerminalInterface* self, const TerminalInterface* param1) {
    self->operator=(*param1);
}

void TerminalInterface_Delete(TerminalInterface* self) {
    delete self;
}
