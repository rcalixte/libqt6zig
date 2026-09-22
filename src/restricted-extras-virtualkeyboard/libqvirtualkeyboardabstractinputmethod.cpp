#include <QChildEvent>
#include <QEvent>
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
#include <QVirtualKeyboardTrace>
#include <qvirtualkeyboardabstractinputmethod.h>
#include "libqvirtualkeyboardabstractinputmethod.h"
#include "libqvirtualkeyboardabstractinputmethod.hxx"

QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardAbstractInputMethod_new() {
    return new VirtualQVirtualKeyboardAbstractInputMethod();
}

QVirtualKeyboardAbstractInputMethod* QVirtualKeyboardAbstractInputMethod_new2(QObject* parent) {
    return new VirtualQVirtualKeyboardAbstractInputMethod(parent);
}

QMetaObject* QVirtualKeyboardAbstractInputMethod_MetaObject(const QVirtualKeyboardAbstractInputMethod* self) {
    return (QMetaObject*)self->metaObject();
}

void* QVirtualKeyboardAbstractInputMethod_Metacast(QVirtualKeyboardAbstractInputMethod* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QVirtualKeyboardAbstractInputMethod_Metacall(QVirtualKeyboardAbstractInputMethod* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QVirtualKeyboardAbstractInputMethod_Tr(const char* s) {
    auto _ret = QVirtualKeyboardAbstractInputMethod::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QVirtualKeyboardInputContext* QVirtualKeyboardAbstractInputMethod_InputContext(const QVirtualKeyboardAbstractInputMethod* self) {
    return self->inputContext();
}

QVirtualKeyboardInputEngine* QVirtualKeyboardAbstractInputMethod_InputEngine(const QVirtualKeyboardAbstractInputMethod* self) {
    return self->inputEngine();
}

libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_InputModes(QVirtualKeyboardAbstractInputMethod* self, const libqt_string locale) {
    QString locale_QString = QString::fromUtf8(locale.data, locale.len);
    QList<QVirtualKeyboardInputEngine::InputMode> _ret = self->inputModes(locale_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

bool QVirtualKeyboardAbstractInputMethod_SetInputMode(QVirtualKeyboardAbstractInputMethod* self, const libqt_string locale, int inputMode) {
    QString locale_QString = QString::fromUtf8(locale.data, locale.len);
    return self->setInputMode(locale_QString, static_cast<QVirtualKeyboardInputEngine::InputMode>(inputMode));
}

bool QVirtualKeyboardAbstractInputMethod_SetTextCase(QVirtualKeyboardAbstractInputMethod* self, int textCase) {
    return self->setTextCase(static_cast<QVirtualKeyboardInputEngine::TextCase>(textCase));
}

bool QVirtualKeyboardAbstractInputMethod_KeyEvent(QVirtualKeyboardAbstractInputMethod* self, int key, const libqt_string text, int modifiers) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    return self->keyEvent(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers));
}

libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SelectionLists(QVirtualKeyboardAbstractInputMethod* self) {
    QList<QVirtualKeyboardSelectionListModel::Type> _ret = self->selectionLists();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QVirtualKeyboardAbstractInputMethod_SelectionListItemCount(QVirtualKeyboardAbstractInputMethod* self, int typeVal) {
    return self->selectionListItemCount(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
}

QVariant* QVirtualKeyboardAbstractInputMethod_SelectionListData(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index, int role) {
    return new QVariant(self->selectionListData(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index), static_cast<QVirtualKeyboardSelectionListModel::Role>(role)));
}

void QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    self->selectionListItemSelected(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

bool QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    return self->selectionListRemoveItem(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes(const QVirtualKeyboardAbstractInputMethod* self) {
    QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> _ret = self->patternRecognitionModes();
    // Convert QList<> from C++ memory to manually-managed C memory
    int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = static_cast<int>(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

QVirtualKeyboardTrace* QVirtualKeyboardAbstractInputMethod_TraceBegin(QVirtualKeyboardAbstractInputMethod* self, int traceId, int patternRecognitionMode, const libqt_map /* of libqt_string to QVariant* */ traceCaptureDeviceInfo, const libqt_map /* of libqt_string to QVariant* */ traceScreenInfo) {
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

bool QVirtualKeyboardAbstractInputMethod_TraceEnd(QVirtualKeyboardAbstractInputMethod* self, QVirtualKeyboardTrace* trace) {
    return self->traceEnd(trace);
}

bool QVirtualKeyboardAbstractInputMethod_Reselect(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition, const int* reselectFlags) {
    return self->reselect(static_cast<int>(cursorPosition), (const QVirtualKeyboardInputEngine::ReselectFlags&)(*reselectFlags));
}

bool QVirtualKeyboardAbstractInputMethod_ClickPreeditText(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition) {
    return self->clickPreeditText(static_cast<int>(cursorPosition));
}

void QVirtualKeyboardAbstractInputMethod_SelectionListChanged(QVirtualKeyboardAbstractInputMethod* self, int typeVal) {
    self->selectionListChanged(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
}

void QVirtualKeyboardAbstractInputMethod_Connect_SelectionListChanged(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardAbstractInputMethod*, int) = reinterpret_cast<void (*)(QVirtualKeyboardAbstractInputMethod*, int)>(slot);
    QVirtualKeyboardAbstractInputMethod::connect(self, &QVirtualKeyboardAbstractInputMethod::selectionListChanged, [self, slotFunc](QVirtualKeyboardSelectionListModel::Type typeVal) {
        int sigval1 = static_cast<int>(typeVal);
        slotFunc(self, sigval1);
    });
}

void QVirtualKeyboardAbstractInputMethod_SelectionListActiveItemChanged(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    self->selectionListActiveItemChanged(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

void QVirtualKeyboardAbstractInputMethod_Connect_SelectionListActiveItemChanged(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardAbstractInputMethod*, int, int) = reinterpret_cast<void (*)(QVirtualKeyboardAbstractInputMethod*, int, int)>(slot);
    QVirtualKeyboardAbstractInputMethod::connect(self, &QVirtualKeyboardAbstractInputMethod::selectionListActiveItemChanged, [self, slotFunc](QVirtualKeyboardSelectionListModel::Type typeVal, int index) {
        int sigval1 = static_cast<int>(typeVal);
        int sigval2 = index;
        slotFunc(self, sigval1, sigval2);
    });
}

void QVirtualKeyboardAbstractInputMethod_SelectionListsChanged(QVirtualKeyboardAbstractInputMethod* self) {
    self->selectionListsChanged();
}

void QVirtualKeyboardAbstractInputMethod_Connect_SelectionListsChanged(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardAbstractInputMethod*) = reinterpret_cast<void (*)(QVirtualKeyboardAbstractInputMethod*)>(slot);
    QVirtualKeyboardAbstractInputMethod::connect(self, &QVirtualKeyboardAbstractInputMethod::selectionListsChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QVirtualKeyboardAbstractInputMethod_Reset(QVirtualKeyboardAbstractInputMethod* self) {
    self->reset();
}

void QVirtualKeyboardAbstractInputMethod_Update(QVirtualKeyboardAbstractInputMethod* self) {
    self->update();
}

void QVirtualKeyboardAbstractInputMethod_ClearInputMode(QVirtualKeyboardAbstractInputMethod* self) {
    self->clearInputMode();
}

libqt_string QVirtualKeyboardAbstractInputMethod_Tr2(const char* s, const char* c) {
    auto _ret = QVirtualKeyboardAbstractInputMethod::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QVirtualKeyboardAbstractInputMethod_Tr3(const char* s, const char* c, int n) {
    auto _ret = QVirtualKeyboardAbstractInputMethod::tr(s, c, static_cast<int>(n));
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
QMetaObject* QVirtualKeyboardAbstractInputMethod_SuperMetaObject(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_MetaObject_IsBase(true);
        return (QMetaObject*)vqvirtualkeyboardabstractinputmethod->metaObject();
    } else {
        return (QMetaObject*)self->QVirtualKeyboardAbstractInputMethod::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetaObject(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_MetaObject_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_MetaObject_Callback>(slot));
}

// Base class handler implementation
void* QVirtualKeyboardAbstractInputMethod_SuperMetacast(QVirtualKeyboardAbstractInputMethod* self, const char* param1) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Metacast_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->qt_metacast(param1);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetacast(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Metacast_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Metacast_Callback>(slot));
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperMetacall(QVirtualKeyboardAbstractInputMethod* self, int param1, int param2, void** param3) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Metacall_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetacall(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Metacall_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Metacall_Callback>(slot));
}

// Base class handler implementation
libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SuperInputModes(QVirtualKeyboardAbstractInputMethod* self, const libqt_string locale) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    QString locale_QString = QString::fromUtf8(locale.data, locale.len);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_InputModes_IsBase(true);
        QList<QVirtualKeyboardInputEngine::InputMode> _ret = vqvirtualkeyboardabstractinputmethod->inputModes(locale_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVirtualKeyboardInputEngine::InputMode> _ret = ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->inputModes(locale_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnInputModes(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_InputModes_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_InputModes_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperSetInputMode(QVirtualKeyboardAbstractInputMethod* self, const libqt_string locale, int inputMode) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    QString locale_QString = QString::fromUtf8(locale.data, locale.len);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SetInputMode_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->setInputMode(locale_QString, static_cast<QVirtualKeyboardInputEngine::InputMode>(inputMode));
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->setInputMode(locale_QString, static_cast<QVirtualKeyboardInputEngine::InputMode>(inputMode));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSetInputMode(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SetInputMode_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperSetTextCase(QVirtualKeyboardAbstractInputMethod* self, int textCase) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SetTextCase_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->setTextCase(static_cast<QVirtualKeyboardInputEngine::TextCase>(textCase));
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->setTextCase(static_cast<QVirtualKeyboardInputEngine::TextCase>(textCase));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSetTextCase(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SetTextCase_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperKeyEvent(QVirtualKeyboardAbstractInputMethod* self, int key, const libqt_string text, int modifiers) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    QString text_QString = QString::fromUtf8(text.data, text.len);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_KeyEvent_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->keyEvent(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers));
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->keyEvent(static_cast<Qt::Key>(key), text_QString, static_cast<Qt::KeyboardModifiers>(modifiers));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnKeyEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_KeyEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback>(slot));
}

// Base class handler implementation
libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SuperSelectionLists(QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionLists_IsBase(true);
        QList<QVirtualKeyboardSelectionListModel::Type> _ret = vqvirtualkeyboardabstractinputmethod->selectionLists();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVirtualKeyboardSelectionListModel::Type> _ret = self->QVirtualKeyboardAbstractInputMethod::selectionLists();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionLists(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionLists_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback>(slot));
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemCount(QVirtualKeyboardAbstractInputMethod* self, int typeVal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListItemCount_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->selectionListItemCount(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::selectionListItemCount(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListItemCount(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback>(slot));
}

// Base class handler implementation
QVariant* QVirtualKeyboardAbstractInputMethod_SuperSelectionListData(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index, int role) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListData_IsBase(true);
        return new QVariant(vqvirtualkeyboardabstractinputmethod->selectionListData(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index), static_cast<QVirtualKeyboardSelectionListModel::Role>(role)));
    } else {
        return new QVariant(((VirtualQVirtualKeyboardAbstractInputMethod*)self)->selectionListData(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index), static_cast<QVirtualKeyboardSelectionListModel::Role>(role)));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListData(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListData_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback>(slot));
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemSelected(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->selectionListItemSelected(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
    } else {
        self->QVirtualKeyboardAbstractInputMethod::selectionListItemSelected(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListItemSelected(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperSelectionListRemoveItem(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->selectionListRemoveItem(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::selectionListRemoveItem(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListRemoveItem(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback>(slot));
}

// Base class handler implementation
libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SuperPatternRecognitionModes(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_IsBase(true);
        QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> _ret = vqvirtualkeyboardabstractinputmethod->patternRecognitionModes();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
        QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> _ret = self->QVirtualKeyboardAbstractInputMethod::patternRecognitionModes();
        // Convert QList<> from C++ memory to manually-managed C memory
        int* _arr = static_cast<int*>(malloc(sizeof(int) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = static_cast<int>(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnPatternRecognitionModes(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback>(slot));
}

// Base class handler implementation
QVirtualKeyboardTrace* QVirtualKeyboardAbstractInputMethod_SuperTraceBegin(QVirtualKeyboardAbstractInputMethod* self, int traceId, int patternRecognitionMode, const libqt_map /* of libqt_string to QVariant* */ traceCaptureDeviceInfo, const libqt_map /* of libqt_string to QVariant* */ traceScreenInfo) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
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
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TraceBegin_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->traceBegin(static_cast<int>(traceId), static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(patternRecognitionMode), traceCaptureDeviceInfo_QMap, traceScreenInfo_QMap);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::traceBegin(static_cast<int>(traceId), static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(patternRecognitionMode), traceCaptureDeviceInfo_QMap, traceScreenInfo_QMap);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTraceBegin(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TraceBegin_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperTraceEnd(QVirtualKeyboardAbstractInputMethod* self, QVirtualKeyboardTrace* trace) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TraceEnd_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->traceEnd(trace);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::traceEnd(trace);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTraceEnd(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TraceEnd_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperReselect(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition, const int* reselectFlags) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Reselect_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->reselect(static_cast<int>(cursorPosition), (const QVirtualKeyboardInputEngine::ReselectFlags&)(*reselectFlags));
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::reselect(static_cast<int>(cursorPosition), (const QVirtualKeyboardInputEngine::ReselectFlags&)(*reselectFlags));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnReselect(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Reselect_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Reselect_Callback>(slot));
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperClickPreeditText(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ClickPreeditText_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->clickPreeditText(static_cast<int>(cursorPosition));
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::clickPreeditText(static_cast<int>(cursorPosition));
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnClickPreeditText(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback>(slot));
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperReset(QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Reset_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->reset();
    } else {
        self->QVirtualKeyboardAbstractInputMethod::reset();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnReset(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Reset_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Reset_Callback>(slot));
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperUpdate(QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Update_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->update();
    } else {
        self->QVirtualKeyboardAbstractInputMethod::update();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnUpdate(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Update_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Update_Callback>(slot));
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperClearInputMode(QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ClearInputMode_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->clearInputMode();
    } else {
        self->QVirtualKeyboardAbstractInputMethod::clearInputMode();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnClearInputMode(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardAbstractInputMethod_Event(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->event(event);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::event(event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Event_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->event(event);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Event_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Event_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardAbstractInputMethod_EventFilter(QVirtualKeyboardAbstractInputMethod* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperEventFilter(QVirtualKeyboardAbstractInputMethod* self, QObject* watched, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_EventFilter_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->eventFilter(watched, event);
    } else {
        return self->QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnEventFilter(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_EventFilter_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_EventFilter_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_TimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperTimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TimerEvent_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->timerEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTimerEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_TimerEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_ChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ChildEvent_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->childEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnChildEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ChildEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_CustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperCustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_CustomEvent_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->customEvent(event);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnCustomEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_CustomEvent_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_ConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ConnectNotify_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->connectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnConnectNotify(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback>(slot));
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_DisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_DisconnectNotify_IsBase(true);
        vqvirtualkeyboardabstractinputmethod->disconnectNotify(*signal);
    } else {
        ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback>(slot));
}

// Derived class handler implementation
QObject* QVirtualKeyboardAbstractInputMethod_Sender(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->sender();
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->sender();
    }
}

// Base class handler implementation
QObject* QVirtualKeyboardAbstractInputMethod_SuperSender(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Sender_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->sender();
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSender(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Sender_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Sender_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardAbstractInputMethod_SenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperSenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SenderSignalIndex_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->senderSignalIndex();
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SenderSignalIndex_Callback>(slot));
}

// Derived class handler implementation
int QVirtualKeyboardAbstractInputMethod_Receivers(const QVirtualKeyboardAbstractInputMethod* self, const char* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperReceivers(const QVirtualKeyboardAbstractInputMethod* self, const char* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Receivers_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->receivers(signal);
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnReceivers(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_Receivers_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Receivers_Callback>(slot));
}

// Derived class handler implementation
bool QVirtualKeyboardAbstractInputMethod_IsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        return vqvirtualkeyboardabstractinputmethod->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperIsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod) {
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_IsSignalConnected_IsBase(true);
        return vqvirtualkeyboardabstractinputmethod->isSignalConnected(*signal);
    } else {
        return ((VirtualQVirtualKeyboardAbstractInputMethod*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnIsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self));
    if (vqvirtualkeyboardabstractinputmethod && vqvirtualkeyboardabstractinputmethod->isVirtualQVirtualKeyboardAbstractInputMethod)
        vqvirtualkeyboardabstractinputmethod->setQVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback(reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_IsSignalConnected_Callback>(slot));
}

void QVirtualKeyboardAbstractInputMethod_Delete(QVirtualKeyboardAbstractInputMethod* self) {
    delete self;
}
