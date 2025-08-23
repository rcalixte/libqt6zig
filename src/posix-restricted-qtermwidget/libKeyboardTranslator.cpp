#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslator__Entry
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorManager
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorReader
#define WORKAROUND_INNER_CLASS_DEFINITION_Konsole__KeyboardTranslatorWriter
#include <QByteArray>
#include <QIODevice>
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <KeyboardTranslator.h>
#include "libKeyboardTranslator.h"
#include "libKeyboardTranslator.hxx"

Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new(const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return new Konsole::KeyboardTranslator(name_QString);
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslator_new2(const Konsole__KeyboardTranslator* param1) {
    return new Konsole::KeyboardTranslator(*param1);
}

libqt_string Konsole__KeyboardTranslator_Name(const Konsole__KeyboardTranslator* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Konsole__KeyboardTranslator_SetName(Konsole__KeyboardTranslator* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Konsole__KeyboardTranslator_Description(const Konsole__KeyboardTranslator* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Konsole__KeyboardTranslator_SetDescription(Konsole__KeyboardTranslator* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_FindEntry(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers) {
    return new Konsole::KeyboardTranslator::Entry(self->findEntry(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers)));
}

void Konsole__KeyboardTranslator_AddEntry(Konsole__KeyboardTranslator* self, const Konsole__KeyboardTranslator__Entry* entry) {
    self->addEntry(*entry);
}

void Konsole__KeyboardTranslator_ReplaceEntry(Konsole__KeyboardTranslator* self, const Konsole__KeyboardTranslator__Entry* existing, const Konsole__KeyboardTranslator__Entry* replacement) {
    self->replaceEntry(*existing, *replacement);
}

void Konsole__KeyboardTranslator_RemoveEntry(Konsole__KeyboardTranslator* self, const Konsole__KeyboardTranslator__Entry* entry) {
    self->removeEntry(*entry);
}

libqt_list /* of Konsole__KeyboardTranslator__Entry* */ Konsole__KeyboardTranslator_Entries(const Konsole__KeyboardTranslator* self) {
    QList<Konsole::KeyboardTranslator::Entry> _ret = self->entries();
    // Convert QList<> from C++ memory to manually-managed C memory
    Konsole__KeyboardTranslator__Entry** _arr = static_cast<Konsole__KeyboardTranslator__Entry**>(malloc(sizeof(Konsole__KeyboardTranslator__Entry*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new Konsole::KeyboardTranslator::Entry(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator_FindEntry3(const Konsole__KeyboardTranslator* self, int keyCode, int modifiers, int state) {
    return new Konsole::KeyboardTranslator::Entry(self->findEntry(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<Konsole::KeyboardTranslator::States>(state)));
}

void Konsole__KeyboardTranslator_Delete(Konsole__KeyboardTranslator* self) {
    delete self;
}

Konsole__KeyboardTranslatorReader* Konsole__KeyboardTranslatorReader_new(QIODevice* source) {
    return new Konsole::KeyboardTranslatorReader(source);
}

libqt_string Konsole__KeyboardTranslatorReader_Description(const Konsole__KeyboardTranslatorReader* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Konsole__KeyboardTranslatorReader_HasNextEntry(const Konsole__KeyboardTranslatorReader* self) {
    return self->hasNextEntry();
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslatorReader_NextEntry(Konsole__KeyboardTranslatorReader* self) {
    return new Konsole::KeyboardTranslator::Entry(self->nextEntry());
}

bool Konsole__KeyboardTranslatorReader_ParseError(Konsole__KeyboardTranslatorReader* self) {
    return self->parseError();
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslatorReader_CreateEntry(const libqt_string condition, const libqt_string result) {
    QString condition_QString = QString::fromUtf8(condition.data, condition.len);
    QString result_QString = QString::fromUtf8(result.data, result.len);
    return new Konsole::KeyboardTranslator::Entry(Konsole::KeyboardTranslatorReader::createEntry(condition_QString, result_QString));
}

void Konsole__KeyboardTranslatorReader_Delete(Konsole__KeyboardTranslatorReader* self) {
    delete self;
}

Konsole__KeyboardTranslatorWriter* Konsole__KeyboardTranslatorWriter_new(QIODevice* destination) {
    return new Konsole::KeyboardTranslatorWriter(destination);
}

void Konsole__KeyboardTranslatorWriter_WriteHeader(Konsole__KeyboardTranslatorWriter* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->writeHeader(description_QString);
}

void Konsole__KeyboardTranslatorWriter_WriteEntry(Konsole__KeyboardTranslatorWriter* self, const Konsole__KeyboardTranslator__Entry* entry) {
    self->writeEntry(*entry);
}

void Konsole__KeyboardTranslatorWriter_Delete(Konsole__KeyboardTranslatorWriter* self) {
    delete self;
}

Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_new() {
    return new Konsole::KeyboardTranslatorManager();
}

void Konsole__KeyboardTranslatorManager_AddTranslator(Konsole__KeyboardTranslatorManager* self, Konsole__KeyboardTranslator* translator) {
    self->addTranslator(translator);
}

bool Konsole__KeyboardTranslatorManager_DeleteTranslator(Konsole__KeyboardTranslatorManager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return self->deleteTranslator(name_QString);
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_DefaultTranslator(Konsole__KeyboardTranslatorManager* self) {
    return (Konsole__KeyboardTranslator*)self->defaultTranslator();
}

Konsole__KeyboardTranslator* Konsole__KeyboardTranslatorManager_FindTranslator(Konsole__KeyboardTranslatorManager* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    return (Konsole__KeyboardTranslator*)self->findTranslator(name_QString);
}

libqt_list /* of libqt_string */ Konsole__KeyboardTranslatorManager_AllTranslators(Konsole__KeyboardTranslatorManager* self) {
    QList<QString> _ret = self->allTranslators();
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

Konsole__KeyboardTranslatorManager* Konsole__KeyboardTranslatorManager_Instance() {
    return Konsole::KeyboardTranslatorManager::instance();
}

void Konsole__KeyboardTranslatorManager_Delete(Konsole__KeyboardTranslatorManager* self) {
    delete self;
}

int Konsole_OneOrZero(int param1) {
    return Konsole::oneOrZero(static_cast<int>(param1));
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new() {
    return new Konsole::KeyboardTranslator::Entry();
}

Konsole__KeyboardTranslator__Entry* Konsole__KeyboardTranslator__Entry_new2(const Konsole__KeyboardTranslator__Entry* param1) {
    return new Konsole::KeyboardTranslator::Entry(*param1);
}

bool Konsole__KeyboardTranslator__Entry_IsNull(const Konsole__KeyboardTranslator__Entry* self) {
    return self->isNull();
}

int Konsole__KeyboardTranslator__Entry_Command(const Konsole__KeyboardTranslator__Entry* self) {
    return static_cast<int>(self->command());
}

void Konsole__KeyboardTranslator__Entry_SetCommand(Konsole__KeyboardTranslator__Entry* self, int command) {
    self->setCommand(static_cast<Konsole::KeyboardTranslator::Command>(command));
}

libqt_string Konsole__KeyboardTranslator__Entry_Text(const Konsole__KeyboardTranslator__Entry* self) {
    QByteArray _qb = self->text();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Konsole__KeyboardTranslator__Entry_SetText(Konsole__KeyboardTranslator__Entry* self, const libqt_string text) {
    QByteArray text_QByteArray(text.data, text.len);
    self->setText(text_QByteArray);
}

libqt_string Konsole__KeyboardTranslator__Entry_EscapedText(const Konsole__KeyboardTranslator__Entry* self) {
    QByteArray _qb = self->escapedText();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Konsole__KeyboardTranslator__Entry_KeyCode(const Konsole__KeyboardTranslator__Entry* self) {
    return self->keyCode();
}

void Konsole__KeyboardTranslator__Entry_SetKeyCode(Konsole__KeyboardTranslator__Entry* self, int keyCode) {
    self->setKeyCode(static_cast<int>(keyCode));
}

int Konsole__KeyboardTranslator__Entry_Modifiers(const Konsole__KeyboardTranslator__Entry* self) {
    return static_cast<int>(self->modifiers());
}

int Konsole__KeyboardTranslator__Entry_ModifierMask(const Konsole__KeyboardTranslator__Entry* self) {
    return static_cast<int>(self->modifierMask());
}

void Konsole__KeyboardTranslator__Entry_SetModifiers(Konsole__KeyboardTranslator__Entry* self, int modifiers) {
    self->setModifiers(static_cast<Qt::KeyboardModifiers>(modifiers));
}

void Konsole__KeyboardTranslator__Entry_SetModifierMask(Konsole__KeyboardTranslator__Entry* self, int modifiers) {
    self->setModifierMask(static_cast<Qt::KeyboardModifiers>(modifiers));
}

int Konsole__KeyboardTranslator__Entry_State(const Konsole__KeyboardTranslator__Entry* self) {
    return static_cast<int>(self->state());
}

int Konsole__KeyboardTranslator__Entry_StateMask(const Konsole__KeyboardTranslator__Entry* self) {
    return static_cast<int>(self->stateMask());
}

void Konsole__KeyboardTranslator__Entry_SetState(Konsole__KeyboardTranslator__Entry* self, int state) {
    self->setState(static_cast<QFlags<Konsole::KeyboardTranslator::State>>(state));
}

void Konsole__KeyboardTranslator__Entry_SetStateMask(Konsole__KeyboardTranslator__Entry* self, int mask) {
    self->setStateMask(static_cast<QFlags<Konsole::KeyboardTranslator::State>>(mask));
}

libqt_string Konsole__KeyboardTranslator__Entry_ConditionToString(const Konsole__KeyboardTranslator__Entry* self) {
    QString _ret = self->conditionToString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_ResultToString(const Konsole__KeyboardTranslator__Entry* self) {
    QString _ret = self->resultToString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool Konsole__KeyboardTranslator__Entry_Matches(const Konsole__KeyboardTranslator__Entry* self, int keyCode, int modifiers, int flags) {
    return self->matches(static_cast<int>(keyCode), static_cast<Qt::KeyboardModifiers>(modifiers), static_cast<QFlags<Konsole::KeyboardTranslator::State>>(flags));
}

bool Konsole__KeyboardTranslator__Entry_OperatorEqual(const Konsole__KeyboardTranslator__Entry* self, const Konsole__KeyboardTranslator__Entry* rhs) {
    return (*self == *rhs);
}

libqt_string Konsole__KeyboardTranslator__Entry_Text1(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
    QByteArray _qb = self->text(expandWildCards);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_Text2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
    QByteArray _qb = self->text(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_EscapedText1(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
    QByteArray _qb = self->escapedText(expandWildCards);
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_EscapedText2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
    QByteArray _qb = self->escapedText(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_ResultToString1(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards) {
    QString _ret = self->resultToString(expandWildCards);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Konsole__KeyboardTranslator__Entry_ResultToString2(const Konsole__KeyboardTranslator__Entry* self, bool expandWildCards, int modifiers) {
    QString _ret = self->resultToString(expandWildCards, static_cast<Qt::KeyboardModifiers>(modifiers));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Konsole__KeyboardTranslator__Entry_Delete(Konsole__KeyboardTranslator__Entry* self) {
    delete self;
}
