#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QVector>
#define WORKAROUND_INNER_CLASS_DEFINITION_TextEditTextToSpeech__TextToSpeech
#include <texttospeech.h>
#include "libtexttospeech.h"
#include "libtexttospeech.hxx"

QMetaObject* TextEditTextToSpeech__TextToSpeech_MetaObject(const TextEditTextToSpeech__TextToSpeech* self) {
    return (QMetaObject*)self->metaObject();
}

void* TextEditTextToSpeech__TextToSpeech_Metacast(TextEditTextToSpeech__TextToSpeech* self, const char* param1) {
    return self->qt_metacast(param1);
}

int TextEditTextToSpeech__TextToSpeech_Metacall(TextEditTextToSpeech__TextToSpeech* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

TextEditTextToSpeech__TextToSpeech* TextEditTextToSpeech__TextToSpeech_Self() {
    return TextEditTextToSpeech::TextToSpeech::self();
}

bool TextEditTextToSpeech__TextToSpeech_IsReady(const TextEditTextToSpeech__TextToSpeech* self) {
    return self->isReady();
}

double TextEditTextToSpeech__TextToSpeech_Volume(const TextEditTextToSpeech__TextToSpeech* self) {
    return self->volume();
}

libqt_list /* of QLocale* */ TextEditTextToSpeech__TextToSpeech_AvailableLocales(const TextEditTextToSpeech__TextToSpeech* self) {
    QVector<QLocale> _ret = self->availableLocales();
    // Convert QVector<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ TextEditTextToSpeech__TextToSpeech_AvailableEngines(const TextEditTextToSpeech__TextToSpeech* self) {
    QList<QString> _ret = self->availableEngines();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

libqt_list /* of libqt_string */ TextEditTextToSpeech__TextToSpeech_AvailableVoices(const TextEditTextToSpeech__TextToSpeech* self) {
    QList<QString> _ret = self->availableVoices();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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

QLocale* TextEditTextToSpeech__TextToSpeech_Locale(const TextEditTextToSpeech__TextToSpeech* self) {
    return new QLocale(self->locale());
}

void TextEditTextToSpeech__TextToSpeech_ReloadSettings(TextEditTextToSpeech__TextToSpeech* self) {
    self->reloadSettings();
}

void TextEditTextToSpeech__TextToSpeech_Say(TextEditTextToSpeech__TextToSpeech* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void TextEditTextToSpeech__TextToSpeech_Stop(TextEditTextToSpeech__TextToSpeech* self) {
    self->stop();
}

void TextEditTextToSpeech__TextToSpeech_Pause(TextEditTextToSpeech__TextToSpeech* self) {
    self->pause();
}

void TextEditTextToSpeech__TextToSpeech_Resume(TextEditTextToSpeech__TextToSpeech* self) {
    self->resume();
}

void TextEditTextToSpeech__TextToSpeech_SetRate(TextEditTextToSpeech__TextToSpeech* self, double rate) {
    self->setRate(static_cast<double>(rate));
}

void TextEditTextToSpeech__TextToSpeech_SetPitch(TextEditTextToSpeech__TextToSpeech* self, double pitch) {
    self->setPitch(static_cast<double>(pitch));
}

void TextEditTextToSpeech__TextToSpeech_SetVolume(TextEditTextToSpeech__TextToSpeech* self, double volume) {
    self->setVolume(static_cast<double>(volume));
}

void TextEditTextToSpeech__TextToSpeech_SetLocale(const TextEditTextToSpeech__TextToSpeech* self, const QLocale* locale) {
    self->setLocale(*locale);
}

void TextEditTextToSpeech__TextToSpeech_StateChanged(TextEditTextToSpeech__TextToSpeech* self, int param1) {
    self->stateChanged(static_cast<TextEditTextToSpeech::TextToSpeech::State>(param1));
}

void TextEditTextToSpeech__TextToSpeech_Connect_StateChanged(TextEditTextToSpeech__TextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(TextEditTextToSpeech__TextToSpeech*, int) = reinterpret_cast<void (*)(TextEditTextToSpeech__TextToSpeech*, int)>(slot);
    TextEditTextToSpeech::TextToSpeech::connect(self, &TextEditTextToSpeech::TextToSpeech::stateChanged, [self, slotFunc](TextEditTextToSpeech::TextToSpeech::State param1) {
        int sigval1 = static_cast<int>(param1);
        slotFunc(self, sigval1);
    });
}

void TextEditTextToSpeech__TextToSpeech_Delete(TextEditTextToSpeech__TextToSpeech* self) {
    delete self;
}
