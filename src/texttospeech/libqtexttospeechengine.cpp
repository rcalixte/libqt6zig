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
#include <QByteArray>
#include <cstring>
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
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQTextToSpeechEngine*)self)->metaObject();
    }
}

void* QTextToSpeechEngine_Metacast(QTextToSpeechEngine* self, const char* param1) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->qt_metacast(param1);
    }
}

int QTextToSpeechEngine_Metacall(QTextToSpeechEngine* self, int param1, int param2, void** param3) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

int QTextToSpeechEngine_Capabilities(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return static_cast<int>(self->capabilities());
    } else {
        return static_cast<int>(((VirtualQTextToSpeechEngine*)self)->capabilities());
    }
}

libqt_list /* of QLocale* */ QTextToSpeechEngine_AvailableLocales(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        QList<QLocale> _ret = vqtexttospeechengine->availableLocales();
        // Convert QList<> from C++ memory to manually-managed C memory
        QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QLocale(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QLocale> _ret = ((VirtualQTextToSpeechEngine*)self)->availableLocales();
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
}

libqt_list /* of QVoice* */ QTextToSpeechEngine_AvailableVoices(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        QList<QVoice> _ret = vqtexttospeechengine->availableVoices();
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
        QList<QVoice> _ret = ((VirtualQTextToSpeechEngine*)self)->availableVoices();
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

void QTextToSpeechEngine_Say(QTextToSpeechEngine* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->say(text_QString);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->say(text_QString);
    }
}

void QTextToSpeechEngine_Synthesize(QTextToSpeechEngine* self, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->synthesize(text_QString);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->synthesize(text_QString);
    }
}

void QTextToSpeechEngine_Stop(QTextToSpeechEngine* self, int boundaryHint) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    } else {
        ((VirtualQTextToSpeechEngine*)self)->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    }
}

void QTextToSpeechEngine_Pause(QTextToSpeechEngine* self, int boundaryHint) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    } else {
        ((VirtualQTextToSpeechEngine*)self)->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    }
}

void QTextToSpeechEngine_Resume(QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->resume();
    } else {
        ((VirtualQTextToSpeechEngine*)self)->resume();
    }
}

double QTextToSpeechEngine_Rate(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->rate();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->rate();
    }
}

bool QTextToSpeechEngine_SetRate(QTextToSpeechEngine* self, double rate) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->setRate(static_cast<double>(rate));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setRate(static_cast<double>(rate));
    }
}

double QTextToSpeechEngine_Pitch(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->pitch();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->pitch();
    }
}

bool QTextToSpeechEngine_SetPitch(QTextToSpeechEngine* self, double pitch) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->setPitch(static_cast<double>(pitch));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setPitch(static_cast<double>(pitch));
    }
}

QLocale* QTextToSpeechEngine_Locale(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return new QLocale(vqtexttospeechengine->locale());
    } else {
        return new QLocale(((VirtualQTextToSpeechEngine*)self)->locale());
    }
}

bool QTextToSpeechEngine_SetLocale(QTextToSpeechEngine* self, const QLocale* locale) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->setLocale(*locale);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setLocale(*locale);
    }
}

double QTextToSpeechEngine_Volume(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->volume();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->volume();
    }
}

bool QTextToSpeechEngine_SetVolume(QTextToSpeechEngine* self, double volume) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->setVolume(static_cast<double>(volume));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setVolume(static_cast<double>(volume));
    }
}

QVoice* QTextToSpeechEngine_Voice(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return new QVoice(vqtexttospeechengine->voice());
    } else {
        return new QVoice(((VirtualQTextToSpeechEngine*)self)->voice());
    }
}

bool QTextToSpeechEngine_SetVoice(QTextToSpeechEngine* self, const QVoice* voice) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->setVoice(*voice);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setVoice(*voice);
    }
}

int QTextToSpeechEngine_State(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return static_cast<int>(vqtexttospeechengine->state());
    } else {
        return static_cast<int>(((VirtualQTextToSpeechEngine*)self)->state());
    }
}

int QTextToSpeechEngine_ErrorReason(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return static_cast<int>(vqtexttospeechengine->errorReason());
    } else {
        return static_cast<int>(((VirtualQTextToSpeechEngine*)self)->errorReason());
    }
}

libqt_string QTextToSpeechEngine_ErrorString(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<const VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        QString _ret = vqtexttospeechengine->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQTextToSpeechEngine*)self)->errorString();
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

void QTextToSpeechEngine_StateChanged(QTextToSpeechEngine* self, int state) {
    self->stateChanged(static_cast<QTextToSpeech::State>(state));
}

void QTextToSpeechEngine_Connect_StateChanged(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, int) = reinterpret_cast<void (*)(QTextToSpeechEngine*, int)>(slot);
    QTextToSpeechEngine::connect(self, &QTextToSpeechEngine::stateChanged, [self, slotFunc](QTextToSpeech::State state) {
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
    QTextToSpeechEngine::connect(self, &QTextToSpeechEngine::errorOccurred, [self, slotFunc](QTextToSpeech::ErrorReason errorVal, const QString& errorString) {
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

void QTextToSpeechEngine_SayingWord(QTextToSpeechEngine* self, const libqt_string word, ptrdiff_t start, ptrdiff_t length) {
    QString word_QString = QString::fromUtf8(word.data, word.len);
    self->sayingWord(word_QString, (qsizetype)(start), (qsizetype)(length));
}

void QTextToSpeechEngine_Connect_SayingWord(QTextToSpeechEngine* self, intptr_t slot) {
    void (*slotFunc)(QTextToSpeechEngine*, const char*, ptrdiff_t, ptrdiff_t) = reinterpret_cast<void (*)(QTextToSpeechEngine*, const char*, ptrdiff_t, ptrdiff_t)>(slot);
    QTextToSpeechEngine::connect(self, &QTextToSpeechEngine::sayingWord, [self, slotFunc](const QString& word, qsizetype start, qsizetype length) {
        const QString word_ret = word;
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
    QTextToSpeechEngine::connect(self, &QTextToSpeechEngine::synthesized, [self, slotFunc](const QAudioFormat& format, const QByteArray& data) {
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

// Base class handler implementation
QMetaObject* QTextToSpeechEngine_SuperMetaObject(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_MetaObject_IsBase(true);
        return (QMetaObject*)vqtexttospeechengine->metaObject();
    } else {
        return (QMetaObject*)self->QTextToSpeechEngine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetaObject(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_MetaObject_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QTextToSpeechEngine_SuperMetacast(QTextToSpeechEngine* self, const char* param1) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Metacast_IsBase(true);
        return vqtexttospeechengine->qt_metacast(param1);
    } else {
        return self->QTextToSpeechEngine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetacast(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Metacast_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperMetacall(QTextToSpeechEngine* self, int param1, int param2, void** param3) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Metacall_IsBase(true);
        return vqtexttospeechengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QTextToSpeechEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnMetacall(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Metacall_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperCapabilities(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Capabilities_IsBase(true);
        return static_cast<int>(vqtexttospeechengine->capabilities());
    } else {
        return static_cast<int>(self->QTextToSpeechEngine::capabilities());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnCapabilities(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Capabilities_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Capabilities_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QLocale* */ QTextToSpeechEngine_SuperAvailableLocales(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_AvailableLocales_IsBase(true);
        QList<QLocale> _ret = vqtexttospeechengine->availableLocales();
        // Convert QList<> from C++ memory to manually-managed C memory
        QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QLocale(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QLocale> _ret = ((VirtualQTextToSpeechEngine*)self)->availableLocales();
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
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnAvailableLocales(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_AvailableLocales_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_AvailableLocales_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QVoice* */ QTextToSpeechEngine_SuperAvailableVoices(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_AvailableVoices_IsBase(true);
        QList<QVoice> _ret = vqtexttospeechengine->availableVoices();
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
        QList<QVoice> _ret = ((VirtualQTextToSpeechEngine*)self)->availableVoices();
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
void QTextToSpeechEngine_OnAvailableVoices(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_AvailableVoices_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_AvailableVoices_Callback>(slot));
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperSay(QTextToSpeechEngine* self, const libqt_string text) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Say_IsBase(true);
        vqtexttospeechengine->say(text_QString);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->say(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSay(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Say_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Say_Callback>(slot));
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperSynthesize(QTextToSpeechEngine* self, const libqt_string text) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Synthesize_IsBase(true);
        vqtexttospeechengine->synthesize(text_QString);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->synthesize(text_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSynthesize(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Synthesize_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Synthesize_Callback>(slot));
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperStop(QTextToSpeechEngine* self, int boundaryHint) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Stop_IsBase(true);
        vqtexttospeechengine->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    } else {
        ((VirtualQTextToSpeechEngine*)self)->stop(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnStop(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Stop_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Stop_Callback>(slot));
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperPause(QTextToSpeechEngine* self, int boundaryHint) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Pause_IsBase(true);
        vqtexttospeechengine->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    } else {
        ((VirtualQTextToSpeechEngine*)self)->pause(static_cast<QTextToSpeech::BoundaryHint>(boundaryHint));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnPause(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Pause_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Pause_Callback>(slot));
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperResume(QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Resume_IsBase(true);
        vqtexttospeechengine->resume();
    } else {
        ((VirtualQTextToSpeechEngine*)self)->resume();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnResume(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Resume_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Resume_Callback>(slot));
    }
}

// Base class handler implementation
double QTextToSpeechEngine_SuperRate(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Rate_IsBase(true);
        return vqtexttospeechengine->rate();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->rate();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnRate(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Rate_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Rate_Callback>(slot));
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperSetRate(QTextToSpeechEngine* self, double rate) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetRate_IsBase(true);
        return vqtexttospeechengine->setRate(static_cast<double>(rate));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setRate(static_cast<double>(rate));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetRate(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetRate_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetRate_Callback>(slot));
    }
}

// Base class handler implementation
double QTextToSpeechEngine_SuperPitch(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Pitch_IsBase(true);
        return vqtexttospeechengine->pitch();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->pitch();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnPitch(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Pitch_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Pitch_Callback>(slot));
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperSetPitch(QTextToSpeechEngine* self, double pitch) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetPitch_IsBase(true);
        return vqtexttospeechengine->setPitch(static_cast<double>(pitch));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setPitch(static_cast<double>(pitch));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetPitch(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetPitch_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetPitch_Callback>(slot));
    }
}

// Base class handler implementation
QLocale* QTextToSpeechEngine_SuperLocale(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Locale_IsBase(true);
        return new QLocale(vqtexttospeechengine->locale());
    } else {
        return new QLocale(((VirtualQTextToSpeechEngine*)self)->locale());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnLocale(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Locale_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Locale_Callback>(slot));
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperSetLocale(QTextToSpeechEngine* self, const QLocale* locale) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetLocale_IsBase(true);
        return vqtexttospeechengine->setLocale(*locale);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setLocale(*locale);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetLocale(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetLocale_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetLocale_Callback>(slot));
    }
}

// Base class handler implementation
double QTextToSpeechEngine_SuperVolume(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Volume_IsBase(true);
        return vqtexttospeechengine->volume();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->volume();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnVolume(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Volume_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Volume_Callback>(slot));
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperSetVolume(QTextToSpeechEngine* self, double volume) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetVolume_IsBase(true);
        return vqtexttospeechengine->setVolume(static_cast<double>(volume));
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setVolume(static_cast<double>(volume));
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetVolume(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetVolume_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetVolume_Callback>(slot));
    }
}

// Base class handler implementation
QVoice* QTextToSpeechEngine_SuperVoice(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Voice_IsBase(true);
        return new QVoice(vqtexttospeechengine->voice());
    } else {
        return new QVoice(((VirtualQTextToSpeechEngine*)self)->voice());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnVoice(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Voice_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Voice_Callback>(slot));
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperSetVoice(QTextToSpeechEngine* self, const QVoice* voice) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetVoice_IsBase(true);
        return vqtexttospeechengine->setVoice(*voice);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->setVoice(*voice);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSetVoice(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SetVoice_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SetVoice_Callback>(slot));
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperState(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_State_IsBase(true);
        return static_cast<int>(vqtexttospeechengine->state());
    } else {
        return static_cast<int>(((VirtualQTextToSpeechEngine*)self)->state());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnState(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_State_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_State_Callback>(slot));
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperErrorReason(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ErrorReason_IsBase(true);
        return static_cast<int>(vqtexttospeechengine->errorReason());
    } else {
        return static_cast<int>(((VirtualQTextToSpeechEngine*)self)->errorReason());
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnErrorReason(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ErrorReason_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ErrorReason_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QTextToSpeechEngine_SuperErrorString(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ErrorString_IsBase(true);
        QString _ret = vqtexttospeechengine->errorString();
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQTextToSpeechEngine*)self)->errorString();
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
void QTextToSpeechEngine_OnErrorString(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ErrorString_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ErrorString_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeechEngine_Event(QTextToSpeechEngine* self, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->event(event);
    } else {
        return self->QTextToSpeechEngine::event(event);
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperEvent(QTextToSpeechEngine* self, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Event_IsBase(true);
        return vqtexttospeechengine->event(event);
    } else {
        return self->QTextToSpeechEngine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnEvent(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Event_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeechEngine_EventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->eventFilter(watched, event);
    } else {
        return self->QTextToSpeechEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperEventFilter(QTextToSpeechEngine* self, QObject* watched, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_EventFilter_IsBase(true);
        return vqtexttospeechengine->eventFilter(watched, event);
    } else {
        return self->QTextToSpeechEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnEventFilter(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_EventFilter_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeechEngine_TimerEvent(QTextToSpeechEngine* self, QTimerEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->timerEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperTimerEvent(QTextToSpeechEngine* self, QTimerEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_TimerEvent_IsBase(true);
        vqtexttospeechengine->timerEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnTimerEvent(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_TimerEvent_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeechEngine_ChildEvent(QTextToSpeechEngine* self, QChildEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->childEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperChildEvent(QTextToSpeechEngine* self, QChildEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ChildEvent_IsBase(true);
        vqtexttospeechengine->childEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnChildEvent(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ChildEvent_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeechEngine_CustomEvent(QTextToSpeechEngine* self, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->customEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperCustomEvent(QTextToSpeechEngine* self, QEvent* event) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_CustomEvent_IsBase(true);
        vqtexttospeechengine->customEvent(event);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnCustomEvent(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_CustomEvent_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeechEngine_ConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->connectNotify(*signal);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperConnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ConnectNotify_IsBase(true);
        vqtexttospeechengine->connectNotify(*signal);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnConnectNotify(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QTextToSpeechEngine_DisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->disconnectNotify(*signal);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QTextToSpeechEngine_SuperDisconnectNotify(QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_DisconnectNotify_IsBase(true);
        vqtexttospeechengine->disconnectNotify(*signal);
    } else {
        ((VirtualQTextToSpeechEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnDisconnectNotify(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QVoice* QTextToSpeechEngine_CreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return new QVoice(vqtexttospeechengine->createVoice(name_QString, *locale, static_cast<QVoice::Gender>(gender), static_cast<QVoice::Age>(age), *data));
    }
    return {};
}

// Base class handler implementation
QVoice* QTextToSpeechEngine_SuperCreateVoice(QTextToSpeechEngine* self, const libqt_string name, const QLocale* locale, int gender, int age, const QVariant* data) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    QString name_QString = QString::fromUtf8(name.data, name.len);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_CreateVoice_IsBase(true);
        return new QVoice(vqtexttospeechengine->createVoice(name_QString, *locale, static_cast<QVoice::Gender>(gender), static_cast<QVoice::Age>(age), *data));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnCreateVoice(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_CreateVoice_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_CreateVoice_Callback>(slot));
    }
}

// Derived class handler implementation
QVariant* QTextToSpeechEngine_VoiceData(QTextToSpeechEngine* self, const QVoice* voice) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return new QVariant(vqtexttospeechengine->voiceData(*voice));
    }
    return {};
}

// Base class handler implementation
QVariant* QTextToSpeechEngine_SuperVoiceData(QTextToSpeechEngine* self, const QVoice* voice) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_VoiceData_IsBase(true);
        return new QVariant(vqtexttospeechengine->voiceData(*voice));
    }
    return {};
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnVoiceData(QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = dynamic_cast<VirtualQTextToSpeechEngine*>(self);
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_VoiceData_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_VoiceData_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QTextToSpeechEngine_Sender(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->sender();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QTextToSpeechEngine_SuperSender(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Sender_IsBase(true);
        return vqtexttospeechengine->sender();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSender(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Sender_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextToSpeechEngine_SenderSignalIndex(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->senderSignalIndex();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperSenderSignalIndex(const QTextToSpeechEngine* self) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SenderSignalIndex_IsBase(true);
        return vqtexttospeechengine->senderSignalIndex();
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnSenderSignalIndex(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QTextToSpeechEngine_Receivers(const QTextToSpeechEngine* self, const char* signal) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->receivers(signal);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QTextToSpeechEngine_SuperReceivers(const QTextToSpeechEngine* self, const char* signal) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Receivers_IsBase(true);
        return vqtexttospeechengine->receivers(signal);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnReceivers(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_Receivers_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QTextToSpeechEngine_IsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        return vqtexttospeechengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QTextToSpeechEngine_SuperIsSignalConnected(const QTextToSpeechEngine* self, const QMetaMethod* signal) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_IsSignalConnected_IsBase(true);
        return vqtexttospeechengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQTextToSpeechEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QTextToSpeechEngine_OnIsSignalConnected(const QTextToSpeechEngine* self, intptr_t slot) {
    auto* vqtexttospeechengine = const_cast<VirtualQTextToSpeechEngine*>(dynamic_cast<const VirtualQTextToSpeechEngine*>(self));
    if (vqtexttospeechengine && vqtexttospeechengine->isVirtualQTextToSpeechEngine) {
        vqtexttospeechengine->setQTextToSpeechEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQTextToSpeechEngine::QTextToSpeechEngine_IsSignalConnected_Callback>(slot));
    }
}

void QTextToSpeechEngine_Delete(QTextToSpeechEngine* self) {
    delete self;
}
