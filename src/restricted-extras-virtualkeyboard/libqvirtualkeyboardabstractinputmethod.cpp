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
    QVirtualKeyboardAbstractInputMethod::connect(self,
                                                 static_cast<void (QVirtualKeyboardAbstractInputMethod::*)(QVirtualKeyboardSelectionListModel::Type)>(&QVirtualKeyboardAbstractInputMethod::selectionListChanged),
                                                 [self, slotFunc](QVirtualKeyboardSelectionListModel::Type typeVal) {
                                                     int sigval1 = static_cast<int>(typeVal);
                                                     slotFunc(self, sigval1);
                                                 });
}

void QVirtualKeyboardAbstractInputMethod_SelectionListActiveItemChanged(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    self->selectionListActiveItemChanged(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

void QVirtualKeyboardAbstractInputMethod_Connect_SelectionListActiveItemChanged(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    void (*slotFunc)(QVirtualKeyboardAbstractInputMethod*, int, int) = reinterpret_cast<void (*)(QVirtualKeyboardAbstractInputMethod*, int, int)>(slot);
    QVirtualKeyboardAbstractInputMethod::connect(self,
                                                 static_cast<void (QVirtualKeyboardAbstractInputMethod::*)(QVirtualKeyboardSelectionListModel::Type, int)>(&QVirtualKeyboardAbstractInputMethod::selectionListActiveItemChanged),
                                                 [self, slotFunc](QVirtualKeyboardSelectionListModel::Type typeVal, int index) {
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
    QVirtualKeyboardAbstractInputMethod::connect(self,
                                                 static_cast<void (QVirtualKeyboardAbstractInputMethod::*)()>(&QVirtualKeyboardAbstractInputMethod::selectionListsChanged),
                                                 [self, slotFunc]() {
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
    return (QMetaObject*)self->QVirtualKeyboardAbstractInputMethod::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetaObject(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self)))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_metaobject_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QVirtualKeyboardAbstractInputMethod_SuperMetacast(QVirtualKeyboardAbstractInputMethod* self, const char* param1) {
    return self->QVirtualKeyboardAbstractInputMethod::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetacast(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_metacast_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Metacast_Callback>(slot);
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperMetacall(QVirtualKeyboardAbstractInputMethod* self, int param1, int param2, void** param3) {
    return self->QVirtualKeyboardAbstractInputMethod::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnMetacall(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_metacall_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Metacall_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnInputModes(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_inputmodes_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_InputModes_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSetInputMode(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_setinputmode_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSetTextCase(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_settextcase_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback>(slot);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnKeyEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_keyevent_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SuperSelectionLists(QVirtualKeyboardAbstractInputMethod* self) {
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

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionLists(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_selectionlists_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback>(slot);
}

// Base class handler implementation
int QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemCount(QVirtualKeyboardAbstractInputMethod* self, int typeVal) {
    return self->QVirtualKeyboardAbstractInputMethod::selectionListItemCount(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListItemCount(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback>(slot);
}

// Base class handler implementation
QVariant* QVirtualKeyboardAbstractInputMethod_SuperSelectionListData(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index, int role) {
    return new QVariant(self->QVirtualKeyboardAbstractInputMethod::selectionListData(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index), static_cast<QVirtualKeyboardSelectionListModel::Role>(role)));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListData(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_selectionlistdata_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback>(slot);
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperSelectionListItemSelected(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    self->QVirtualKeyboardAbstractInputMethod::selectionListItemSelected(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListItemSelected(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback>(slot);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperSelectionListRemoveItem(QVirtualKeyboardAbstractInputMethod* self, int typeVal, int index) {
    return self->QVirtualKeyboardAbstractInputMethod::selectionListRemoveItem(static_cast<QVirtualKeyboardSelectionListModel::Type>(typeVal), static_cast<int>(index));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnSelectionListRemoveItem(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of int */ QVirtualKeyboardAbstractInputMethod_SuperPatternRecognitionModes(const QVirtualKeyboardAbstractInputMethod* self) {
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

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnPatternRecognitionModes(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self)))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback>(slot);
}

// Base class handler implementation
QVirtualKeyboardTrace* QVirtualKeyboardAbstractInputMethod_SuperTraceBegin(QVirtualKeyboardAbstractInputMethod* self, int traceId, int patternRecognitionMode, const libqt_map /* of libqt_string to QVariant* */ traceCaptureDeviceInfo, const libqt_map /* of libqt_string to QVariant* */ traceScreenInfo) {
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
    return self->QVirtualKeyboardAbstractInputMethod::traceBegin(static_cast<int>(traceId), static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(patternRecognitionMode), traceCaptureDeviceInfo_QMap, traceScreenInfo_QMap);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTraceBegin(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_tracebegin_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback>(slot);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperTraceEnd(QVirtualKeyboardAbstractInputMethod* self, QVirtualKeyboardTrace* trace) {
    return self->QVirtualKeyboardAbstractInputMethod::traceEnd(trace);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTraceEnd(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_traceend_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback>(slot);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperReselect(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition, const int* reselectFlags) {
    return self->QVirtualKeyboardAbstractInputMethod::reselect(static_cast<int>(cursorPosition), (const QVirtualKeyboardInputEngine::ReselectFlags&)(*reselectFlags));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnReselect(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_reselect_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Reselect_Callback>(slot);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperClickPreeditText(QVirtualKeyboardAbstractInputMethod* self, int cursorPosition) {
    return self->QVirtualKeyboardAbstractInputMethod::clickPreeditText(static_cast<int>(cursorPosition));
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnClickPreeditText(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_clickpreedittext_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback>(slot);
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperReset(QVirtualKeyboardAbstractInputMethod* self) {
    self->QVirtualKeyboardAbstractInputMethod::reset();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnReset(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_reset_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Reset_Callback>(slot);
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperUpdate(QVirtualKeyboardAbstractInputMethod* self) {
    self->QVirtualKeyboardAbstractInputMethod::update();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnUpdate(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_update_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Update_Callback>(slot);
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperClearInputMode(QVirtualKeyboardAbstractInputMethod* self) {
    self->QVirtualKeyboardAbstractInputMethod::clearInputMode();
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnClearInputMode(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_clearinputmode_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardAbstractInputMethod_Event(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    return self->QVirtualKeyboardAbstractInputMethod::event(event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_event_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_Event_Callback>(slot);
}

// Derived class handler implementation
bool QVirtualKeyboardAbstractInputMethod_EventFilter(QVirtualKeyboardAbstractInputMethod* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QVirtualKeyboardAbstractInputMethod_SuperEventFilter(QVirtualKeyboardAbstractInputMethod* self, QObject* watched, QEvent* event) {
    return self->QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnEventFilter(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_eventfilter_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_TimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod) {
        vqvirtualkeyboardabstractinputmethod->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperTimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self)) {
        vqvirtualkeyboardabstractinputmethod->QVirtualKeyboardAbstractInputMethod::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnTimerEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_timerevent_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_ChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod) {
        vqvirtualkeyboardabstractinputmethod->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self)) {
        vqvirtualkeyboardabstractinputmethod->QVirtualKeyboardAbstractInputMethod::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnChildEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_childevent_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_CustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod) {
        vqvirtualkeyboardabstractinputmethod->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperCustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self)) {
        vqvirtualkeyboardabstractinputmethod->QVirtualKeyboardAbstractInputMethod::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnCustomEvent(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_customevent_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_ConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod) {
        vqvirtualkeyboardabstractinputmethod->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self)) {
        vqvirtualkeyboardabstractinputmethod->QVirtualKeyboardAbstractInputMethod::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnConnectNotify(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_connectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QVirtualKeyboardAbstractInputMethod_DisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self);
    if (vqvirtualkeyboardabstractinputmethod) {
        vqvirtualkeyboardabstractinputmethod->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self)) {
        vqvirtualkeyboardabstractinputmethod->QVirtualKeyboardAbstractInputMethod::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QVirtualKeyboardAbstractInputMethod::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QVirtualKeyboardAbstractInputMethod_OnDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, intptr_t slot) {
    if (auto* vqvirtualkeyboardabstractinputmethod = dynamic_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(self))
        vqvirtualkeyboardabstractinputmethod->qvirtualkeyboardabstractinputmethod_disconnectnotify_callback = reinterpret_cast<VirtualQVirtualKeyboardAbstractInputMethod::QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* QVirtualKeyboardAbstractInputMethod_Sender(const QVirtualKeyboardAbstractInputMethod* self) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self))) {
        return vqvirtualkeyboardabstractinputmethod->VirtualQVirtualKeyboardAbstractInputMethod::sender();
    } else
        qFatal("Error: Protected method QVirtualKeyboardAbstractInputMethod::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardAbstractInputMethod_SenderSignalIndex(const QVirtualKeyboardAbstractInputMethod* self) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self))) {
        return vqvirtualkeyboardabstractinputmethod->VirtualQVirtualKeyboardAbstractInputMethod::senderSignalIndex();
    } else
        qFatal("Error: Protected method QVirtualKeyboardAbstractInputMethod::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QVirtualKeyboardAbstractInputMethod_Receivers(const QVirtualKeyboardAbstractInputMethod* self, const char* signal) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self))) {
        return vqvirtualkeyboardabstractinputmethod->VirtualQVirtualKeyboardAbstractInputMethod::receivers(signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardAbstractInputMethod::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QVirtualKeyboardAbstractInputMethod_IsSignalConnected(const QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal) {
    if (auto* vqvirtualkeyboardabstractinputmethod = const_cast<VirtualQVirtualKeyboardAbstractInputMethod*>(dynamic_cast<const VirtualQVirtualKeyboardAbstractInputMethod*>(self))) {
        return vqvirtualkeyboardabstractinputmethod->VirtualQVirtualKeyboardAbstractInputMethod::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QVirtualKeyboardAbstractInputMethod::isSignalConnected called without a directly constructed type");
}

void QVirtualKeyboardAbstractInputMethod_Delete(QVirtualKeyboardAbstractInputMethod* self) {
    delete self;
}
