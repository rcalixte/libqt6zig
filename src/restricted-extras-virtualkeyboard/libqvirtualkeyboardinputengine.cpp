#include <QList>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <QVariant>
#include <QVirtualKeyboardAbstractInputMethod>
#include <QVirtualKeyboardInputContext>
#include <QVirtualKeyboardInputEngine>
#include <QVirtualKeyboardSelectionListModel>
#include <QVirtualKeyboardTrace>
#include <qvirtualkeyboardinputengine.h>
#include "libqvirtualkeyboardinputengine.h"
#include "libqvirtualkeyboardinputengine.hxx"

QMetaObject* QVirtualKeyboardInputEngine_MetaObject(const QVirtualKeyboardInputEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardInputEngine_Metacast(QVirtualKeyboardInputEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardInputEngine_Metacall(QVirtualKeyboardInputEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardInputEngine_Tr(const char* s) {
    auto _ret = QVirtualKeyboardInputEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

bool QVirtualKeyboardInputEngine_VirtualKeyPress(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers, bool repeat) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->virtualKeyPress(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers), repeat);
}

void QVirtualKeyboardInputEngine_VirtualKeyCancel(QVirtualKeyboardInputEngine* self) {
    self->virtualKeyCancel();
}

bool QVirtualKeyboardInputEngine_VirtualKeyRelease(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->virtualKeyRelease(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers));
}

bool QVirtualKeyboardInputEngine_VirtualKeyClick(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->virtualKeyClick(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers));
}

QVirtualKeyboardInputContext* QVirtualKeyboardInputEngine_InputContext(const QVirtualKeyboardInputEngine* self) {
    return self->inputContext();
}

int QVirtualKeyboardInputEngine_ActiveKey(const QVirtualKeyboardInputEngine* self) {
    return static_cast<int>(self->activeKey());
}

int QVirtualKeyboardInputEngine_PreviousKey(const QVirtualKeyboardInputEngine* self) {
    return static_cast<int>(self->previousKey());
}

QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardInputEngine_InputMethod(const QVirtualKeyboardInputEngine* self) {
    return self->inputMethod();
}

void QVirtualKeyboardInputEngine_SetInputMethod(QVirtualKeyboardInputEngine* self, QVirtualKeyboardAbstractInputMethod* inputMethod) {
    self->setInputMethod(inputMethod);
}

libqt_list /* of int */ QVirtualKeyboardInputEngine_InputModes(const QVirtualKeyboardInputEngine* self) {
    QList<int> _ret = self->inputModes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QVirtualKeyboardInputEngine_InputMode(const QVirtualKeyboardInputEngine* self) {
    return static_cast<int>(self->inputMode());
}

void QVirtualKeyboardInputEngine_SetInputMode(QVirtualKeyboardInputEngine* self, int inputMode) {
    self->setInputMode(static_cast<QVirtualKeyboardInputEngine::InputMode>(inputMode));
}

QVirtualKeyboardSelectionListModel* QVirtualKeyboardInputEngine_WordCandidateListModel(const QVirtualKeyboardInputEngine* self) {
    return self->wordCandidateListModel();
}

bool QVirtualKeyboardInputEngine_WordCandidateListVisibleHint(const QVirtualKeyboardInputEngine* self) {
    return self->wordCandidateListVisibleHint();
}

libqt_list /* of int */ QVirtualKeyboardInputEngine_PatternRecognitionModes(const QVirtualKeyboardInputEngine* self) {
    QList<int> _ret = self->patternRecognitionModes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QVirtualKeyboardTrace* QVirtualKeyboardInputEngine_TraceBegin(QVirtualKeyboardInputEngine* self, int traceId, int patternRecognitionMode, const libqt_map /* of libqt_string to QVariant* */ traceCaptureDeviceInfo, const libqt_map /* of libqt_string to QVariant* */ traceScreenInfo) {
    QMap<QString, QVariant> traceCaptureDeviceInfo_QMap;
    libqt_string* traceCaptureDeviceInfo_karr = static_cast<libqt_string*>(traceCaptureDeviceInfo.keys);
    QVariant** traceCaptureDeviceInfo_varr = static_cast<QVariant**>(traceCaptureDeviceInfo.values);
    for (size_t i = 0; i < traceCaptureDeviceInfo.len; ++i) {
        QString traceCaptureDeviceInfo_karr_i_QString = QString::fromUtf8(traceCaptureDeviceInfo_karr[i].data, traceCaptureDeviceInfo_karr[i].len);
        traceCaptureDeviceInfo_QMap.insert(traceCaptureDeviceInfo_karr_i_QString, *(traceCaptureDeviceInfo_varr[i]));
    }
    QMap<QString, QVariant> traceScreenInfo_QMap;
    libqt_string* traceScreenInfo_karr = static_cast<libqt_string*>(traceScreenInfo.keys);
    QVariant** traceScreenInfo_varr = static_cast<QVariant**>(traceScreenInfo.values);
    for (size_t i = 0; i < traceScreenInfo.len; ++i) {
        QString traceScreenInfo_karr_i_QString = QString::fromUtf8(traceScreenInfo_karr[i].data, traceScreenInfo_karr[i].len);
        traceScreenInfo_QMap.insert(traceScreenInfo_karr_i_QString, *(traceScreenInfo_varr[i]));
    }
    return self->traceBegin(static_cast<int>(traceId), static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(patternRecognitionMode), traceCaptureDeviceInfo_QMap, traceScreenInfo_QMap);
}

bool QVirtualKeyboardInputEngine_TraceEnd(QVirtualKeyboardInputEngine* self, QVirtualKeyboardTrace* trace) {
    return self->traceEnd(trace);
}

bool QVirtualKeyboardInputEngine_Reselect(QVirtualKeyboardInputEngine* self, int cursorPosition, const int* reselectFlags) {
    return self->reselect(static_cast<int>(cursorPosition), (const QVirtualKeyboardInputEngine::ReselectFlags&)(*reselectFlags));
}

bool QVirtualKeyboardInputEngine_ClickPreeditText(QVirtualKeyboardInputEngine* self, int cursorPosition) {
    return self->clickPreeditText(static_cast<int>(cursorPosition));
}

void QVirtualKeyboardInputEngine_VirtualKeyClicked(QVirtualKeyboardInputEngine* self, int key, const libqt_string text, int modifiers, bool isAutoRepeat) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->virtualKeyClicked(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers), isAutoRepeat);
}

void QVirtualKeyboardInputEngine_Connect_VirtualKeyClicked(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*, int, const char*, int, bool) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*, int, const char*, int, bool)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::virtualKeyClicked, [self, slotFunc](Qt::Key key, const QString& text, Qt::KeyboardModifiers modifiers, bool isAutoRepeat) {
        int sigval1 = static_cast<int>(key);
        const auto text_ret = text;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray text_b = text_ret.toUtf8();
        auto text_str_len = text_b.length();
        const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
        memcpy((void*)text_str, text_b.data(), text_str_len);
        ((char*)text_str)[text_str_len] = '\0';
        const char* sigval2 = text_str;
        int sigval3 = static_cast<int>(modifiers);
        bool sigval4 = isAutoRepeat;
        slotFunc(self, sigval1, sigval2, sigval3, sigval4);
        libqt_free(text_str);
    });
}

void QVirtualKeyboardInputEngine_ActiveKeyChanged(QVirtualKeyboardInputEngine* self, int key) {
    self->activeKeyChanged(static_cast<Qt::Key>(key));
}

void QVirtualKeyboardInputEngine_Connect_ActiveKeyChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*, int) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*, int)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::activeKeyChanged, [self, slotFunc](Qt::Key key) {
        int sigval1 = static_cast<int>(key);
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardInputEngine_PreviousKeyChanged(QVirtualKeyboardInputEngine* self, int key) {
    self->previousKeyChanged(static_cast<Qt::Key>(key));
}

void QVirtualKeyboardInputEngine_Connect_PreviousKeyChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*, int) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*, int)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::previousKeyChanged, [self, slotFunc](Qt::Key key) {
        int sigval1 = static_cast<int>(key);
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardInputEngine_InputMethodChanged(QVirtualKeyboardInputEngine* self) {
    self->inputMethodChanged();
}

void QVirtualKeyboardInputEngine_Connect_InputMethodChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::inputMethodChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_InputMethodReset(QVirtualKeyboardInputEngine* self) {
    self->inputMethodReset();
}

void QVirtualKeyboardInputEngine_Connect_InputMethodReset(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::inputMethodReset, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_InputMethodUpdate(QVirtualKeyboardInputEngine* self) {
    self->inputMethodUpdate();
}

void QVirtualKeyboardInputEngine_Connect_InputMethodUpdate(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::inputMethodUpdate, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_InputModesChanged(QVirtualKeyboardInputEngine* self) {
    self->inputModesChanged();
}

void QVirtualKeyboardInputEngine_Connect_InputModesChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::inputModesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_InputModeChanged(QVirtualKeyboardInputEngine* self) {
    self->inputModeChanged();
}

void QVirtualKeyboardInputEngine_Connect_InputModeChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::inputModeChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_PatternRecognitionModesChanged(QVirtualKeyboardInputEngine* self) {
    self->patternRecognitionModesChanged();
}

void QVirtualKeyboardInputEngine_Connect_PatternRecognitionModesChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::patternRecognitionModesChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_WordCandidateListModelChanged(QVirtualKeyboardInputEngine* self) {
    self->wordCandidateListModelChanged();
}

void QVirtualKeyboardInputEngine_Connect_WordCandidateListModelChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::wordCandidateListModelChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardInputEngine_WordCandidateListVisibleHintChanged(QVirtualKeyboardInputEngine* self) {
    self->wordCandidateListVisibleHintChanged();
}

void QVirtualKeyboardInputEngine_Connect_WordCandidateListVisibleHintChanged(QVirtualKeyboardInputEngine* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardInputEngine*) = reinterpret_cast<void (*)(QVirtualKeyboardInputEngine*)>(slot);
    QVirtualKeyboardInputEngine::connect(self, &QVirtualKeyboardInputEngine::wordCandidateListVisibleHintChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

libqt_string QVirtualKeyboardInputEngine_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardInputEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardInputEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardInputEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QVirtualKeyboardInputEngine_Delete(QVirtualKeyboardInputEngine* self) {
    delete self;
}

unsigned int qvirtualkeyboardinputengine_h_QHash(int key, unsigned int seed) {
    return static_cast<unsigned int>(qHash(static_cast<QVirtualKeyboardInputEngine::InputMode>(key), static_cast<uint>(seed)));
}
