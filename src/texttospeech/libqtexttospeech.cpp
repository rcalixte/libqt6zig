#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTextToSpeech>
#include <QTimerEvent>
#include <QVariant>
#include <QVoice>
#include <qtexttospeech.h>
#include "libqtexttospeech.h"
#include "libqtexttospeech.hxx"

QTextToSpeech* QTextToSpeech_new() {
    return new VirtualQTextToSpeech();
}

QTextToSpeech* QTextToSpeech_new2(const libqt_string engine) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    return new VirtualQTextToSpeech(engine_QString);
}

QTextToSpeech* QTextToSpeech_new3(const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    QMap<QString, QVariant> params_QMap;
    libqt_string* params_karr = static_cast<libqt_string*>(params.keys);
    QVariant** params_varr = static_cast<QVariant**>(params.values);
    for (size_t i = 0; i < params.len; ++i) {
        QString params_karr_i_QString = QString::fromUtf8(params_karr[i].data, params_karr[i].len);
        params_QMap[params_karr_i_QString] = *(params_varr[i]);
    }
    return new VirtualQTextToSpeech(engine_QString, params_QMap);
}

QTextToSpeech* QTextToSpeech_new4(QObject* parent) {
    return new VirtualQTextToSpeech(parent);
}

QTextToSpeech* QTextToSpeech_new5(const libqt_string engine, QObject* parent) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    return new VirtualQTextToSpeech(engine_QString, parent);
}

QTextToSpeech* QTextToSpeech_new6(const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params, QObject* parent) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    QMap<QString, QVariant> params_QMap;
    libqt_string* params_karr = static_cast<libqt_string*>(params.keys);
    QVariant** params_varr = static_cast<QVariant**>(params.values);
    for (size_t i = 0; i < params.len; ++i) {
        QString params_karr_i_QString = QString::fromUtf8(params_karr[i].data, params_karr[i].len);
        params_QMap[params_karr_i_QString] = *(params_varr[i]);
    }
    return new VirtualQTextToSpeech(engine_QString, params_QMap, parent);
}

QMetaObject* QTextToSpeech_MetaObject(const QTextToSpeech* self) {
    auto* vqtexttospeech = dynamic_cast<const VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQTextToSpeech*)self)->metaObject();
    }
}

void* QTextToSpeech_Metacast(QTextToSpeech* self, const char* param1) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQTextToSpeech*)self)->qt_metacast(param1);
    }
}

int QTextToSpeech_Metacall(QTextToSpeech* self, int param1, int param2, void** param3) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextToSpeech*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

bool QTextToSpeech_SetEngine(QTextToSpeech* self, const libqt_string engine) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    return self->setEngine(engine_QString);
}

libqt_string QTextToSpeech_Engine(const QTextToSpeech* self) {
    QString _ret = self->engine();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTextToSpeech_EngineCapabilities(const QTextToSpeech* self) {
    return static_cast<int>(self->engineCapabilities());
}

int QTextToSpeech_State(const QTextToSpeech* self) {
    return static_cast<int>(self->state());
}

int QTextToSpeech_ErrorReason(const QTextToSpeech* self) {
    return static_cast<int>(self->errorReason());
}

libqt_string QTextToSpeech_ErrorString(const QTextToSpeech* self) {
    QString _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of QLocale* */ QTextToSpeech_AvailableLocales(const QTextToSpeech* self) {
    QList<QLocale> _ret = self->availableLocales();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QLocale* QTextToSpeech_Locale(const QTextToSpeech* self) {
    return new QLocale(self->locale());
}

QVoice* QTextToSpeech_Voice(const QTextToSpeech* self) {
    return new QVoice(self->voice());
}

libqt_list /* of QVoice* */ QTextToSpeech_AvailableVoices(const QTextToSpeech* self) {
    QList<QVoice> _ret = self->availableVoices();
    // Convert QList<> from C++ memory to manually-managed C memory
    QVoice** _arr = static_cast<QVoice**>(malloc(sizeof(QVoice*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QVoice(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

double QTextToSpeech_Rate(const QTextToSpeech* self) {
    return self->rate();
}

double QTextToSpeech_Pitch(const QTextToSpeech* self) {
    return self->pitch();
}

double QTextToSpeech_Volume(const QTextToSpeech* self) {
    return self->volume();
}

libqt_list /* of libqt_string */ QTextToSpeech_AvailableEngines() {
    QList<QString> _ret = QTextToSpeech::availableEngines();
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

void QTextToSpeech_Say(QTextToSpeech* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

ptrdiff_t QTextToSpeech_Enqueue(QTextToSpeech* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return static_cast<ptrdiff_t>(self->enqueue(text_QString));
}

void QTextToSpeech_Stop(QTextToSpeech* self) {
    self->stop();
}

void QTextToSpeech_Pause(QTextToSpeech* self) {
    self->pause();
}

void QTextToSpeech_Resume(QTextToSpeech* self) {
    self->resume();
}

void QTextToSpeech_SetLocale(QTextToSpeech* self, const QLocale* locale) {
    self->setLocale(*locale);
}

void QTextToSpeech_SetRate(QTextToSpeech* self, double rate) {
    self->setRate(static_cast<double>(rate));
}

void QTextToSpeech_SetPitch(QTextToSpeech* self, double pitch) {
    self->setPitch(static_cast<double>(pitch));
}

void QTextToSpeech_SetVolume(QTextToSpeech* self, double volume) {
    self->setVolume(static_cast<double>(volume));
}

void QTextToSpeech_SetVoice(QTextToSpeech* self, const QVoice* voice) {
    self->setVoice(*voice);
}

void QTextToSpeech_EngineChanged(QTextToSpeech* self, const libqt_string engine) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    self->engineChanged(engine_QString);
}

void QTextToSpeech_Connect_EngineChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, const char*) = reinterpret_cast<void (*)(QTextToSpeech*, const char*)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::engineChanged, [self, slotFunc](const QString& engine) {
        const QString engine_ret = engine;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray engine_b = engine_ret.toUtf8();
        auto engine_str_len = engine_b.length();
        const char* engine_str = static_cast<const char*>(malloc(engine_str_len + 1));
        memcpy((void*)engine_str, engine_b.data(), engine_str_len);
        ((char*)engine_str)[engine_str_len] = '\0';
        const char* sigval1 = engine_str;
        slotFunc(self, sigval1);
        libqt_free(engine_str);
    });
}

void QTextToSpeech_StateChanged(QTextToSpeech* self, int state) {
    self->stateChanged(static_cast<QTextToSpeech::State>(state));
}

void QTextToSpeech_Connect_StateChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, int) = reinterpret_cast<void (*)(QTextToSpeech*, int)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::stateChanged, [self, slotFunc](QTextToSpeech::State state) {
        int sigval1 = static_cast<int>(state);
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_ErrorOccurred(QTextToSpeech* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QTextToSpeech::ErrorReason>(errorVal), errorString_QString);
}

void QTextToSpeech_Connect_ErrorOccurred(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, int, const char*) = reinterpret_cast<void (*)(QTextToSpeech*, int, const char*)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::errorOccurred, [self, slotFunc](QTextToSpeech::ErrorReason errorVal, const QString& errorString) {
        int sigval1 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        auto errorString_str_len = errorString_b.length();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
        ((char*)errorString_str)[errorString_str_len] = '\0';
        const char* sigval2 = errorString_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(errorString_str);
    });
}

void QTextToSpeech_LocaleChanged(QTextToSpeech* self, const QLocale* locale) {
    self->localeChanged(*locale);
}

void QTextToSpeech_Connect_LocaleChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, QLocale*) = reinterpret_cast<void (*)(QTextToSpeech*, QLocale*)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::localeChanged, [self, slotFunc](const QLocale& locale) {
        const QLocale& locale_ret = locale;
        // Cast returned reference into pointer
        QLocale* sigval1 = const_cast<QLocale*>(&locale_ret);
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_RateChanged(QTextToSpeech* self, double rate) {
    self->rateChanged(static_cast<double>(rate));
}

void QTextToSpeech_Connect_RateChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, double) = reinterpret_cast<void (*)(QTextToSpeech*, double)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::rateChanged, [self, slotFunc](double rate) {
        double sigval1 = rate;
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_PitchChanged(QTextToSpeech* self, double pitch) {
    self->pitchChanged(static_cast<double>(pitch));
}

void QTextToSpeech_Connect_PitchChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, double) = reinterpret_cast<void (*)(QTextToSpeech*, double)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::pitchChanged, [self, slotFunc](double pitch) {
        double sigval1 = pitch;
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_VolumeChanged(QTextToSpeech* self, double volume) {
    self->volumeChanged(static_cast<double>(volume));
}

void QTextToSpeech_Connect_VolumeChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, double) = reinterpret_cast<void (*)(QTextToSpeech*, double)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::volumeChanged, [self, slotFunc](double volume) {
        double sigval1 = volume;
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_VoiceChanged(QTextToSpeech* self, const QVoice* voice) {
    self->voiceChanged(*voice);
}

void QTextToSpeech_Connect_VoiceChanged(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, QVoice*) = reinterpret_cast<void (*)(QTextToSpeech*, QVoice*)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::voiceChanged, [self, slotFunc](const QVoice& voice) {
        const QVoice& voice_ret = voice;
        // Cast returned reference into pointer
        QVoice* sigval1 = const_cast<QVoice*>(&voice_ret);
        slotFunc(self, sigval1);
    });
}

void QTextToSpeech_SayingWord(QTextToSpeech* self, const libqt_string word, ptrdiff_t id, ptrdiff_t start, ptrdiff_t length) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->sayingWord(word_QString, (qsizetype)(id), (qsizetype)(start), (qsizetype)(length));
}

void QTextToSpeech_Connect_SayingWord(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, const char*, ptrdiff_t, ptrdiff_t, ptrdiff_t) = reinterpret_cast<void (*)(QTextToSpeech*, const char*, ptrdiff_t, ptrdiff_t, ptrdiff_t)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::sayingWord, [self, slotFunc](const QString& word, qsizetype id, qsizetype start, qsizetype length) {
        const QString word_ret = word;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray word_b = word_ret.toUtf8();
        auto word_str_len = word_b.length();
        const char* word_str = static_cast<const char*>(malloc(word_str_len + 1));
        memcpy((void*)word_str, word_b.data(), word_str_len);
        ((char*)word_str)[word_str_len] = '\0';
        const char* sigval1 = word_str;
        ptrdiff_t sigval2 = static_cast<ptrdiff_t>(id);
        ptrdiff_t sigval3 = static_cast<ptrdiff_t>(start);
        ptrdiff_t sigval4 = static_cast<ptrdiff_t>(length);
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(word_str);
    });
}

void QTextToSpeech_AboutToSynthesize(QTextToSpeech* self, ptrdiff_t id) {
    self->aboutToSynthesize((qsizetype)(id));
}

void QTextToSpeech_Connect_AboutToSynthesize(QTextToSpeech* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeech*, ptrdiff_t) = reinterpret_cast<void (*)(QTextToSpeech*, ptrdiff_t)>(slot);
    QTextToSpeech::connect(self, &QTextToSpeech::aboutToSynthesize, [self, slotFunc](qsizetype id) {
        ptrdiff_t sigval1 = static_cast<ptrdiff_t>(id);
        slotFunc(self, sigval1);
    });
}

bool QTextToSpeech_SetEngine2(QTextToSpeech* self, const libqt_string engine, const libqt_map /* of libqt_string to QVariant* */ params) {
    QString engine_QString = QString::fromUtf8(engine.data, engine.len);
    QMap<QString, QVariant> params_QMap;
    libqt_string* params_karr = static_cast<libqt_string*>(params.keys);
    QVariant** params_varr = static_cast<QVariant**>(params.values);
    for (size_t i = 0; i < params.len; ++i) {
        QString params_karr_i_QString = QString::fromUtf8(params_karr[i].data, params_karr[i].len);
        params_QMap[params_karr_i_QString] = *(params_varr[i]);
    }
    return self->setEngine(engine_QString, params_QMap);
}

void QTextToSpeech_Stop1(QTextToSpeech* self, int boundaryHint) {
    self->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
}

void QTextToSpeech_Pause1(QTextToSpeech* self, int boundaryHint) {
    self->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
}

// Base class handler implementation
QMetaObject* QTextToSpeech_SuperMetaObject(const QTextToSpeech* self) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_MetaObject_IsBase(true);
        return (QMetaObject*)vqtexttospeech->metaObject();
    } else {
        return (QMetaObject*)self->QTextToSpeech::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnMetaObject(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_MetaObject_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QTextToSpeech_SuperMetacast(QTextToSpeech* self, const char* param1) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Metacast_IsBase(true);
        return vqtexttospeech->qt_metacast(param1);
    } else {
        return self->QTextToSpeech::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnMetacast(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Metacast_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QTextToSpeech_SuperMetacall(QTextToSpeech* self, int param1, int param2, void** param3) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Metacall_IsBase(true);
        return vqtexttospeech->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QTextToSpeech::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnMetacall(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Metacall_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_Metacall_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeech_Event(QTextToSpeech* self, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->event(event);
    } else {
        return self->QTextToSpeech::event(event);
    }
}

// Base class handler implementation
bool QTextToSpeech_SuperEvent(QTextToSpeech* self, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Event_IsBase(true);
        return vqtexttospeech->event(event);
    } else {
        return self->QTextToSpeech::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnEvent(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Event_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeech_EventFilter(QTextToSpeech* self, QObject* watched, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->eventFilter(watched, event);
    } else {
        return self->QTextToSpeech::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextToSpeech_SuperEventFilter(QTextToSpeech* self, QObject* watched, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_EventFilter_IsBase(true);
        return vqtexttospeech->eventFilter(watched, event);
    } else {
        return self->QTextToSpeech::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnEventFilter(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_EventFilter_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeech_TimerEvent(QTextToSpeech* self, QTimerEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->timerEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeech_SuperTimerEvent(QTextToSpeech* self, QTimerEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_TimerEvent_IsBase(true);
        vqtexttospeech->timerEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnTimerEvent(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_TimerEvent_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeech_ChildEvent(QTextToSpeech* self, QChildEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->childEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeech_SuperChildEvent(QTextToSpeech* self, QChildEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_ChildEvent_IsBase(true);
        vqtexttospeech->childEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnChildEvent(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_ChildEvent_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeech_CustomEvent(QTextToSpeech* self, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->customEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeech_SuperCustomEvent(QTextToSpeech* self, QEvent* event) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_CustomEvent_IsBase(true);
        vqtexttospeech->customEvent(event);
    } else {
        ((VirtualQTextToSpeech*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnCustomEvent(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_CustomEvent_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeech_ConnectNotify(QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->connectNotify(*signal);
    } else {
        ((VirtualQTextToSpeech*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextToSpeech_SuperConnectNotify(QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_ConnectNotify_IsBase(true);
        vqtexttospeech->connectNotify(*signal);
    } else {
        ((VirtualQTextToSpeech*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnConnectNotify(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_ConnectNotify_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeech_DisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->disconnectNotify(*signal);
    } else {
        ((VirtualQTextToSpeech*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextToSpeech_SuperDisconnectNotify(QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_DisconnectNotify_IsBase(true);
        vqtexttospeech->disconnectNotify(*signal);
    } else {
        ((VirtualQTextToSpeech*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnDisconnectNotify(QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = dynamic_cast<VirtualQTextToSpeech*>(self);
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
libqt_list /* of QVoice* */ QTextToSpeech_AllVoices(const QTextToSpeech* self, const QLocale* locale) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        QList<QVoice> _ret = vqtexttospeech->allVoices(locale);
        // Convert QList<> from C++ memory to manually-managed C memory
        QVoice** _arr = static_cast<QVoice**>(malloc(sizeof(QVoice*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVoice(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVoice> _ret = ((VirtualQTextToSpeech*)self)->allVoices(locale);
        // Convert QList<> from C++ memory to manually-managed C memory
        QVoice** _arr = static_cast<QVoice**>(malloc(sizeof(QVoice*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVoice(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Base class handler implementation
libqt_list /* of QVoice* */ QTextToSpeech_SuperAllVoices(const QTextToSpeech* self, const QLocale* locale) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_AllVoices_IsBase(true);
        QList<QVoice> _ret = vqtexttospeech->allVoices(locale);
        // Convert QList<> from C++ memory to manually-managed C memory
        QVoice** _arr = static_cast<QVoice**>(malloc(sizeof(QVoice*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVoice(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVoice> _ret = ((VirtualQTextToSpeech*)self)->allVoices(locale);
        // Convert QList<> from C++ memory to manually-managed C memory
        QVoice** _arr = static_cast<QVoice**>(malloc(sizeof(QVoice*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QVoice(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnAllVoices(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_AllVoices_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_AllVoices_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextToSpeech_Sender(const QTextToSpeech* self) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->sender();
    } else {
        return ((VirtualQTextToSpeech*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextToSpeech_SuperSender(const QTextToSpeech* self) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Sender_IsBase(true);
        return vqtexttospeech->sender();
    } else {
        return ((VirtualQTextToSpeech*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnSender(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Sender_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextToSpeech_SenderSignalIndex(const QTextToSpeech* self) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->senderSignalIndex();
    } else {
        return ((VirtualQTextToSpeech*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextToSpeech_SuperSenderSignalIndex(const QTextToSpeech* self) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_SenderSignalIndex_IsBase(true);
        return vqtexttospeech->senderSignalIndex();
    } else {
        return ((VirtualQTextToSpeech*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnSenderSignalIndex(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextToSpeech_Receivers(const QTextToSpeech* self, const char* signal) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->receivers(signal);
    } else {
        return ((VirtualQTextToSpeech*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextToSpeech_SuperReceivers(const QTextToSpeech* self, const char* signal) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Receivers_IsBase(true);
        return vqtexttospeech->receivers(signal);
    } else {
        return ((VirtualQTextToSpeech*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnReceivers(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_Receivers_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeech_IsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        return vqtexttospeech->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextToSpeech*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextToSpeech_SuperIsSignalConnected(const QTextToSpeech* self, const QMetaMethod* signal) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_IsSignalConnected_IsBase(true);
        return vqtexttospeech->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextToSpeech*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeech_OnIsSignalConnected(const QTextToSpeech* self, intptr_t slot) {
    auto* vqtexttospeech = const_cast<VirtualQTextToSpeech*>(dynamic_cast<const VirtualQTextToSpeech*>(self));
    if (vqtexttospeech && vqtexttospeech->isVirtualQTextToSpeech) {
        vqtexttospeech->setQTextToSpeech_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextToSpeech::QTextToSpeech_IsSignalConnected_Callback>(slot));
    }
}

void QTextToSpeech_Delete(QTextToSpeech* self) {
    delete self;
}
