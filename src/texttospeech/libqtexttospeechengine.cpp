#include <QAudioFormat>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTextToSpeechEngine>
#include <QTimerEvent>
#include <QVariant>
#include <QVoice>
#include <qtexttospeechengine.h>
#include "libqtexttospeechengine.h"
#include "libqtexttospeechengine.hxx"

QTextToSpeechEngine* QTextToSpeechEngine_new() {
    return new VirtualQTextToSpeechEngine();
}

QTextToSpeechEngine* QTextToSpeechEngine_new2(QObject* parent) {
    return new VirtualQTextToSpeechEngine(parent);
}

QMetaObject* QTextToSpeechEngine_MetaObject(const QTextToSpeechEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QTextToSpeechEngine_Metacast(QTextToSpeechEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QTextToSpeechEngine_Metacall(QTextToSpeechEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QTextToSpeechEngine_Tr(const char* s) {
    auto _ret = QTextToSpeechEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QTextToSpeechEngine_Capabilities(const QTextToSpeechEngine* self) {
    return static_cast<int>(self->capabilities());
}

libqt_list /* of QLocale* */ QTextToSpeechEngine_AvailableLocales(const QTextToSpeechEngine* self) {
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

libqt_list /* of QVoice* */ QTextToSpeechEngine_AvailableVoices(const QTextToSpeechEngine* self) {
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

void QTextToSpeechEngine_Say(QTextToSpeechEngine* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->say(text_QString);
}

void QTextToSpeechEngine_Synthesize(QTextToSpeechEngine* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->synthesize(text_QString);
}

void QTextToSpeechEngine_Stop(QTextToSpeechEngine* self, int boundaryHint) {
    self->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
}

void QTextToSpeechEngine_Pause(QTextToSpeechEngine* self, int boundaryHint) {
    self->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
}

void QTextToSpeechEngine_Resume(QTextToSpeechEngine* self) {
    self->resume();
}

double QTextToSpeechEngine_Rate(const QTextToSpeechEngine* self) {
    return self->rate();
}

bool QTextToSpeechEngine_SetRate(QTextToSpeechEngine* self, double rate) {
    return self->setRate(static_cast<double>(rate));
}

double QTextToSpeechEngine_Pitch(const QTextToSpeechEngine* self) {
    return self->pitch();
}

bool QTextToSpeechEngine_SetPitch(QTextToSpeechEngine* self, double pitch) {
    return self->setPitch(static_cast<double>(pitch));
}

QLocale* QTextToSpeechEngine_Locale(const QTextToSpeechEngine* self) {
    return new QLocale(self->locale());
}

bool QTextToSpeechEngine_SetLocale(QTextToSpeechEngine* self, const QLocale* locale) {
    return self->setLocale(*locale);
}

double QTextToSpeechEngine_Volume(const QTextToSpeechEngine* self) {
    return self->volume();
}

bool QTextToSpeechEngine_SetVolume(QTextToSpeechEngine* self, double volume) {
    return self->setVolume(static_cast<double>(volume));
}

QVoice* QTextToSpeechEngine_Voice(const QTextToSpeechEngine* self) {
    return new QVoice(self->voice());
}

bool QTextToSpeechEngine_SetVoice(QTextToSpeechEngine* self, const QVoice* voice) {
    return self->setVoice(*voice);
}

int QTextToSpeechEngine_State(const QTextToSpeechEngine* self) {
    return static_cast<int>(self->state());
}

int QTextToSpeechEngine_ErrorReason(const QTextToSpeechEngine* self) {
    return static_cast<int>(self->errorReason());
}

libqt_string QTextToSpeechEngine_ErrorString(const QTextToSpeechEngine* self) {
    auto _ret = self->errorString();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QTextToSpeechEngine_StateChanged(QTextToSpeechEngine* self, int state) {
    self->stateChanged(static_cast<QTextToSpeech::State>(state));
}

void QTextToSpeechEngine_Connect_StateChanged(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, int) = reinterpret_cast<void (*)(QTextToSpeechEngine*, int)>(slot);
    QTextToSpeechEngine::connect(self,
                                 static_cast<void (QTextToSpeechEngine::*)(QTextToSpeech::State)>(&QTextToSpeechEngine::stateChanged),
                                 [self, slotFunc](QTextToSpeech::State state) {
                                     int sigval1 = static_cast<int>(state);
                                     slotFunc(self, sigval1);
                                 });
}

void QTextToSpeechEngine_ErrorOccurred(QTextToSpeechEngine* self, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(static_cast<QTextToSpeech::ErrorReason>(errorVal), errorString_QString);
}

void QTextToSpeechEngine_Connect_ErrorOccurred(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, int, const char*) = reinterpret_cast<void (*)(QTextToSpeechEngine*, int, const char*)>(slot);
    QTextToSpeechEngine::connect(self,
                                 static_cast<void (QTextToSpeechEngine::*)(QTextToSpeech::ErrorReason, const QString&)>(&QTextToSpeechEngine::errorOccurred),
                                 [self, slotFunc](QTextToSpeech::ErrorReason errorVal, const QString& errorString) {
                                     int sigval1 = static_cast<int>(errorVal);
                                     const auto errorString_ret = errorString;
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

void QTextToSpeechEngine_SayingWord(QTextToSpeechEngine* self, const libqt_string word, ptrdiff_t start, ptrdiff_t length) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->sayingWord(word_QString, (qsizetype)(start), (qsizetype)(length));
}

void QTextToSpeechEngine_Connect_SayingWord(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, const char*, ptrdiff_t, ptrdiff_t) = reinterpret_cast<void (*)(QTextToSpeechEngine*, const char*, ptrdiff_t, ptrdiff_t)>(slot);
    QTextToSpeechEngine::connect(self,
                                 static_cast<void (QTextToSpeechEngine::*)(const QString&, qsizetype, qsizetype)>(&QTextToSpeechEngine::sayingWord),
                                 [self, slotFunc](const QString& word, qsizetype start, qsizetype length) {
                                     const auto word_ret = word;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray word_b = word_ret.toUtf8();
                                     auto word_str_len = word_b.length();
                                     const char* word_str = static_cast<const char*>(malloc(word_str_len + 1));
                                     memcpy((void*)word_str, word_b.data(), word_str_len);
                                     ((char*)word_str)[word_str_len] = '\0';
                                     const char* sigval1 = word_str;
                                     ptrdiff_t sigval2 = static_cast<ptrdiff_t>(start);
                                     ptrdiff_t sigval3 = static_cast<ptrdiff_t>(length);
                                     slotFunc(self, sigval1, sigval2, sigval3);
                                     libqt_free(word_str);
                                 });
}

void QTextToSpeechEngine_Synthesized(QTextToSpeechEngine* self, const QAudioFormat* format, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->synthesized(*format, data_QByteArray);
}

void QTextToSpeechEngine_Connect_Synthesized(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, QAudioFormat*, libqt_string) = reinterpret_cast<void (*)(QTextToSpeechEngine*, QAudioFormat*, libqt_string)>(slot);
    QTextToSpeechEngine::connect(self,
                                 static_cast<void (QTextToSpeechEngine::*)(const QAudioFormat&, const QByteArray&)>(&QTextToSpeechEngine::synthesized),
                                 [self, slotFunc](const QAudioFormat& format, const QByteArray& data) {
                                     const QAudioFormat& format_ret = format;
                                     // Cast returned reference into pointer
                                     QAudioFormat* sigval1 = const_cast<QAudioFormat*>(&format_ret);
                                     const QByteArray data_qb = data;
                                     libqt_string data_str;
                                     data_str.len = data_qb.length();
                                     data_str.data = static_cast<char*>(malloc(data_str.len));
                                     memcpy((void*)data_str.data, data_qb.data(), data_str.len);
                                     libqt_string sigval2 = data_str;
                                     slotFunc(self, sigval1, sigval2);
                                     libqt_free(data_str.data);
                                 });
}

libqt_string QTextToSpeechEngine_Tr2(const char* s, const char* c) {
    auto _ret = QTextToSpeechEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QTextToSpeechEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QTextToSpeechEngine::tr(s, c, static_cast<int>(n));
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
QMetaObject* QTextToSpeechEngine_SuperMetaObject(const QTextToSpeechEngine* self) {
    return (QMetaObject*)self->QTextToSpeechEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetaObject(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_metaobject_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QTextToSpeechEngine_SuperMetacast(QTextToSpeechEngine* self, const char* param1) {
    return self->QTextToSpeechEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetacast(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_metacast_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QTextToSpeechEngine_SuperMetacall(QTextToSpeechEngine* self, int param1, int param2, void** param3) {
    return self->QTextToSpeechEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetacall(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_metacall_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Metacall_Callback>(slot);
}

// Base class handler implementation
int QTextToSpeechEngine_SuperCapabilities(const QTextToSpeechEngine* self) {
    return static_cast<int>(self->QTextToSpeechEngine::capabilities());
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnCapabilities(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_capabilities_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Capabilities_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnAvailableLocales(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_availablelocales_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_AvailableLocales_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnAvailableVoices(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_availablevoices_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_AvailableVoices_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSay(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_say_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Say_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSynthesize(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_synthesize_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Synthesize_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnStop(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_stop_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Stop_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnPause(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_pause_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Pause_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnResume(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_resume_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Resume_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnRate(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_rate_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Rate_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetRate(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_setrate_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetRate_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnPitch(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_pitch_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Pitch_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetPitch(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_setpitch_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetPitch_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnLocale(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_locale_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Locale_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetLocale(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_setlocale_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetLocale_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnVolume(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_volume_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Volume_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetVolume(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_setvolume_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetVolume_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnVoice(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_voice_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Voice_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetVoice(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_setvoice_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetVoice_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnState(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_state_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_State_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnErrorReason(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_errorreason_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ErrorReason_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnErrorString(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self)))
        vqtexttospeechengine->qtexttospeechengine_errorstring_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ErrorString_Callback>(slot);
}

// Derived class handler implementation
bool QTextToSpeechEngine_Event(QTextToSpeechEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperEvent(QTextToSpeechEngine* self, QEvent* event) {
    return self->QTextToSpeechEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnEvent(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_event_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QTextToSpeechEngine_EventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperEventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event) {
    return self->QTextToSpeechEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnEventFilter(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_eventfilter_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QTextToSpeechEngine_TimerEvent(QTextToSpeechEngine* self, QTimerEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine) {
        vqtexttospeechengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextToSpeechEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperTimerEvent(QTextToSpeechEngine* self, QTimerEvent* event) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self)) {
        vqtexttospeechengine->QTextToSpeechEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextToSpeechEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnTimerEvent(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_timerevent_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextToSpeechEngine_ChildEvent(QTextToSpeechEngine* self, QChildEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine) {
        vqtexttospeechengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextToSpeechEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperChildEvent(QTextToSpeechEngine* self, QChildEvent* event) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self)) {
        vqtexttospeechengine->QTextToSpeechEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextToSpeechEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnChildEvent(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_childevent_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextToSpeechEngine_CustomEvent(QTextToSpeechEngine* self, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine) {
        vqtexttospeechengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QTextToSpeechEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperCustomEvent(QTextToSpeechEngine* self, QEvent* event) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self)) {
        vqtexttospeechengine->QTextToSpeechEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QTextToSpeechEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnCustomEvent(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_customevent_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QTextToSpeechEngine_ConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine) {
        vqtexttospeechengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextToSpeechEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self)) {
        vqtexttospeechengine->QTextToSpeechEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextToSpeechEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnConnectNotify(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_connectnotify_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QTextToSpeechEngine_DisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine) {
        vqtexttospeechengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QTextToSpeechEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperDisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self)) {
        vqtexttospeechengine->QTextToSpeechEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QTextToSpeechEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnDisconnectNotify(QTextToSpeechEngine* self, intptr_t slot) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        vqtexttospeechengine->qtexttospeechengine_disconnectnotify_callback = reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_DisconnectNotify_Callback>(slot);
}

// Derived class handler implementation
QVoice* QTextToSpeechEngine_CreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        return new QVoice(vqtexttospeechengine->createVoice(name_QString, *locale, static_cast<QVoice::Gender>(gender), static_cast<QVoice::Age>(age), *data));
    qFatal("Error: Protected method QTextToSpeechEngine::createVoice called without a directly constructed type");
}

// Derived class handler implementation
QVariant* QTextToSpeechEngine_VoiceData(QTextToSpeechEngine* self, const QVoice* voice) {
    if (auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self))
        return new QVariant(vqtexttospeechengine->voiceData(*voice));
    qFatal("Error: Protected method QTextToSpeechEngine::voiceData called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QTextToSpeechEngine_Sender(const QTextToSpeechEngine* self) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self))) {
        return vqtexttospeechengine->VirtualQTextToSpeechEngine::sender();
    } else
        qFatal("Error: Protected method QTextToSpeechEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextToSpeechEngine_SenderSignalIndex(const QTextToSpeechEngine* self) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self))) {
        return vqtexttospeechengine->VirtualQTextToSpeechEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QTextToSpeechEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QTextToSpeechEngine_Receivers(const QTextToSpeechEngine* self, const char* signal) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self))) {
        return vqtexttospeechengine->VirtualQTextToSpeechEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QTextToSpeechEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QTextToSpeechEngine_IsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal) {
    if (auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self))) {
        return vqtexttospeechengine->VirtualQTextToSpeechEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QTextToSpeechEngine::isSignalConnected called without a directly constructed type");
}

void QTextToSpeechEngine_Delete(QTextToSpeechEngine* self) {
    delete self;
}
