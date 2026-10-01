#pragma once
#ifndef RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_HXX
#define RESTRICTED_EXTRAS_VIRTUALKEYBOARD_LIBQVIRTUALKEYBOARDABSTRACTINPUTMETHOD_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QVirtualKeyboardAbstractInputMethod
class VirtualQVirtualKeyboardAbstractInputMethod : public QVirtualKeyboardAbstractInputMethod {
  public:
    // Virtual class public types (including callbacks and access types)
    using QVirtualKeyboardAbstractInputMethod_MetaObject_Callback = QMetaObject* (*)(const QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_Metacast_Callback = void* (*)(QVirtualKeyboardAbstractInputMethod*, const char*);
    using QVirtualKeyboardAbstractInputMethod_Metacall_Callback = int (*)(QVirtualKeyboardAbstractInputMethod*, int, int, void**);
    using QVirtualKeyboardAbstractInputMethod_InputModes_Callback = libqt_list /* of int */ (*)(QVirtualKeyboardAbstractInputMethod*, const char*);
    using QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, const char*, int);
    using QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, const char*, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback = libqt_list /* of int */ (*)(QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback = int (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback = QVariant* (*)(QVirtualKeyboardAbstractInputMethod*, int, int, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, int, int);
    using QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, int);
    using QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback = libqt_list /* of int */ (*)(const QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback = QVirtualKeyboardTrace* (*)(QVirtualKeyboardAbstractInputMethod*, int, int, libqt_map /* of libqt_string to QVariant* */, libqt_map /* of libqt_string to QVariant* */);
    using QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QVirtualKeyboardTrace*);
    using QVirtualKeyboardAbstractInputMethod_Reselect_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int, const int*);
    using QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, int);
    using QVirtualKeyboardAbstractInputMethod_Reset_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_Update_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*);
    using QVirtualKeyboardAbstractInputMethod_Event_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_EventFilter_Callback = bool (*)(QVirtualKeyboardAbstractInputMethod*, QObject*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QTimerEvent*);
    using QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QChildEvent*);
    using QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QEvent*);
    using QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QMetaMethod*);
    using QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback = void (*)(QVirtualKeyboardAbstractInputMethod*, QMetaMethod*);
    using QVirtualKeyboardAbstractInputMethod::isSignalConnected;
    using QVirtualKeyboardAbstractInputMethod::receivers;
    using QVirtualKeyboardAbstractInputMethod::sender;
    using QVirtualKeyboardAbstractInputMethod::senderSignalIndex;

    // Instance callback storage
    QVirtualKeyboardAbstractInputMethod_MetaObject_Callback qvirtualkeyboardabstractinputmethod_metaobject_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Metacast_Callback qvirtualkeyboardabstractinputmethod_metacast_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Metacall_Callback qvirtualkeyboardabstractinputmethod_metacall_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_InputModes_Callback qvirtualkeyboardabstractinputmethod_inputmodes_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SetInputMode_Callback qvirtualkeyboardabstractinputmethod_setinputmode_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SetTextCase_Callback qvirtualkeyboardabstractinputmethod_settextcase_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_KeyEvent_Callback qvirtualkeyboardabstractinputmethod_keyevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionLists_Callback qvirtualkeyboardabstractinputmethod_selectionlists_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListItemCount_Callback qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListData_Callback qvirtualkeyboardabstractinputmethod_selectionlistdata_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListItemSelected_Callback qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_SelectionListRemoveItem_Callback qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_PatternRecognitionModes_Callback qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TraceBegin_Callback qvirtualkeyboardabstractinputmethod_tracebegin_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TraceEnd_Callback qvirtualkeyboardabstractinputmethod_traceend_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Reselect_Callback qvirtualkeyboardabstractinputmethod_reselect_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ClickPreeditText_Callback qvirtualkeyboardabstractinputmethod_clickpreedittext_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Reset_Callback qvirtualkeyboardabstractinputmethod_reset_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Update_Callback qvirtualkeyboardabstractinputmethod_update_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ClearInputMode_Callback qvirtualkeyboardabstractinputmethod_clearinputmode_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_Event_Callback qvirtualkeyboardabstractinputmethod_event_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_EventFilter_Callback qvirtualkeyboardabstractinputmethod_eventfilter_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_TimerEvent_Callback qvirtualkeyboardabstractinputmethod_timerevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ChildEvent_Callback qvirtualkeyboardabstractinputmethod_childevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_CustomEvent_Callback qvirtualkeyboardabstractinputmethod_customevent_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_ConnectNotify_Callback qvirtualkeyboardabstractinputmethod_connectnotify_callback = nullptr;
    QVirtualKeyboardAbstractInputMethod_DisconnectNotify_Callback qvirtualkeyboardabstractinputmethod_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QVirtualKeyboardAbstractInputMethod {
        using QVirtualKeyboardAbstractInputMethod::childEvent;
        using QVirtualKeyboardAbstractInputMethod::connectNotify;
        using QVirtualKeyboardAbstractInputMethod::customEvent;
        using QVirtualKeyboardAbstractInputMethod::disconnectNotify;
        using QVirtualKeyboardAbstractInputMethod::timerEvent;
    };

    VirtualQVirtualKeyboardAbstractInputMethod() : QVirtualKeyboardAbstractInputMethod() {};
    VirtualQVirtualKeyboardAbstractInputMethod(QObject* parent) : QVirtualKeyboardAbstractInputMethod(parent) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qvirtualkeyboardabstractinputmethod_metaobject_callback) {
            QMetaObject* callback_ret = qvirtualkeyboardabstractinputmethod_metaobject_callback(this);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qvirtualkeyboardabstractinputmethod_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qvirtualkeyboardabstractinputmethod_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qvirtualkeyboardabstractinputmethod_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qvirtualkeyboardabstractinputmethod_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardInputEngine::InputMode> inputModes(const QString& locale) override {
        if (qvirtualkeyboardabstractinputmethod_inputmodes_callback) {
            const auto locale_ret = locale;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray locale_b = locale_ret.toUtf8();
            auto locale_str_len = locale_b.length();
            const char* locale_str = static_cast<const char*>(malloc(locale_str_len + 1));
            memcpy((void*)locale_str, locale_b.data(), locale_str_len);
            ((char*)locale_str)[locale_str_len] = '\0';
            const char* cbval1 = locale_str;
            libqt_list /* of int */ callback_ret = qvirtualkeyboardabstractinputmethod_inputmodes_callback(this, cbval1);
            QList<QVirtualKeyboardInputEngine::InputMode> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardInputEngine::InputMode>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            libqt_free(locale_str);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QVirtualKeyboardAbstractInputMethod::inputModes called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setInputMode(const QString& locale, QVirtualKeyboardInputEngine::InputMode inputMode) override {
        if (qvirtualkeyboardabstractinputmethod_setinputmode_callback) {
            const auto locale_ret = locale;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray locale_b = locale_ret.toUtf8();
            auto locale_str_len = locale_b.length();
            const char* locale_str = static_cast<const char*>(malloc(locale_str_len + 1));
            memcpy((void*)locale_str, locale_b.data(), locale_str_len);
            ((char*)locale_str)[locale_str_len] = '\0';
            const char* cbval1 = locale_str;
            int cbval2 = static_cast<int>(inputMode);
            bool callback_ret = qvirtualkeyboardabstractinputmethod_setinputmode_callback(this, cbval1, cbval2);
            libqt_free(locale_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QVirtualKeyboardAbstractInputMethod::setInputMode called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool setTextCase(QVirtualKeyboardInputEngine::TextCase textCase) override {
        if (qvirtualkeyboardabstractinputmethod_settextcase_callback) {
            int cbval1 = static_cast<int>(textCase);
            bool callback_ret = qvirtualkeyboardabstractinputmethod_settextcase_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QVirtualKeyboardAbstractInputMethod::setTextCase called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual bool keyEvent(Qt::Key key, const QString& text, Qt::KeyboardModifiers modifiers) override {
        if (qvirtualkeyboardabstractinputmethod_keyevent_callback) {
            int cbval1 = static_cast<int>(key);
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval2 = text_str;
            int cbval3 = static_cast<int>(modifiers);
            bool callback_ret = qvirtualkeyboardabstractinputmethod_keyevent_callback(this, cbval1, cbval2, cbval3);
            libqt_free(text_str);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QVirtualKeyboardAbstractInputMethod::keyEvent called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardSelectionListModel::Type> selectionLists() override {
        if (qvirtualkeyboardabstractinputmethod_selectionlists_callback) {
            libqt_list /* of int */ callback_ret = qvirtualkeyboardabstractinputmethod_selectionlists_callback(this);
            QList<QVirtualKeyboardSelectionListModel::Type> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardSelectionListModel::Type>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionLists();
    }

    // Virtual method for C ABI access and custom callback
    virtual int selectionListItemCount(QVirtualKeyboardSelectionListModel::Type typeVal) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback) {
            int cbval1 = static_cast<int>(typeVal);
            int callback_ret = qvirtualkeyboardabstractinputmethod_selectionlistitemcount_callback(this, cbval1);
            return static_cast<int>(callback_ret);
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListItemCount(typeVal);
    }

    // Virtual method for C ABI access and custom callback
    virtual QVariant selectionListData(QVirtualKeyboardSelectionListModel::Type typeVal, int index, QVirtualKeyboardSelectionListModel::Role role) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistdata_callback) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            int cbval3 = static_cast<int>(role);
            QVariant* callback_ret = qvirtualkeyboardabstractinputmethod_selectionlistdata_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListData(typeVal, index, role);
    }

    // Virtual method for C ABI access and custom callback
    virtual void selectionListItemSelected(QVirtualKeyboardSelectionListModel::Type typeVal, int index) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            qvirtualkeyboardabstractinputmethod_selectionlistitemselected_callback(this, cbval1, cbval2);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::selectionListItemSelected(typeVal, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool selectionListRemoveItem(QVirtualKeyboardSelectionListModel::Type typeVal, int index) override {
        if (qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback) {
            int cbval1 = static_cast<int>(typeVal);
            int cbval2 = index;
            bool callback_ret = qvirtualkeyboardabstractinputmethod_selectionlistremoveitem_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::selectionListRemoveItem(typeVal, index);
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> patternRecognitionModes() const override {
        if (qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback) {
            libqt_list /* of int */ callback_ret = qvirtualkeyboardabstractinputmethod_patternrecognitionmodes_callback(this);
            QList<QVirtualKeyboardInputEngine::PatternRecognitionMode> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            int* callback_ret_arr = static_cast<int*>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(static_cast<QVirtualKeyboardInputEngine::PatternRecognitionMode>(callback_ret_arr[i]));
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        return QVirtualKeyboardAbstractInputMethod::patternRecognitionModes();
    }

    // Virtual method for C ABI access and custom callback
    virtual QVirtualKeyboardTrace* traceBegin(int traceId, QVirtualKeyboardInputEngine::PatternRecognitionMode patternRecognitionMode, const QMap<QString, QVariant>& traceCaptureDeviceInfo, const QMap<QString, QVariant>& traceScreenInfo) override {
        if (qvirtualkeyboardabstractinputmethod_tracebegin_callback) {
            int cbval1 = traceId;
            int cbval2 = static_cast<int>(patternRecognitionMode);
            const QMap<QString, QVariant>& traceCaptureDeviceInfo_ret = traceCaptureDeviceInfo;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* traceCaptureDeviceInfo_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * traceCaptureDeviceInfo_ret.size()));
            QVariant** traceCaptureDeviceInfo_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * traceCaptureDeviceInfo_ret.size()));
            int traceCaptureDeviceInfo_ctr = 0;
            for (auto traceCaptureDeviceInfo_itr = traceCaptureDeviceInfo_ret.keyValueBegin(); traceCaptureDeviceInfo_itr != traceCaptureDeviceInfo_ret.keyValueEnd(); ++traceCaptureDeviceInfo_itr) {
                auto traceCaptureDeviceInfo_mapkey_ret = traceCaptureDeviceInfo_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray traceCaptureDeviceInfo_mapkey_b = traceCaptureDeviceInfo_mapkey_ret.toUtf8();
                libqt_string traceCaptureDeviceInfo_mapkey_str;
                traceCaptureDeviceInfo_mapkey_str.len = traceCaptureDeviceInfo_mapkey_b.length();
                traceCaptureDeviceInfo_mapkey_str.data = static_cast<const char*>(malloc(traceCaptureDeviceInfo_mapkey_str.len + 1));
                memcpy((void*)traceCaptureDeviceInfo_mapkey_str.data, traceCaptureDeviceInfo_mapkey_b.data(), traceCaptureDeviceInfo_mapkey_str.len);
                ((char*)traceCaptureDeviceInfo_mapkey_str.data)[traceCaptureDeviceInfo_mapkey_str.len] = '\0';
                traceCaptureDeviceInfo_karr[traceCaptureDeviceInfo_ctr] = traceCaptureDeviceInfo_mapkey_str;
                traceCaptureDeviceInfo_varr[traceCaptureDeviceInfo_ctr] = new QVariant(traceCaptureDeviceInfo_itr->second);
                traceCaptureDeviceInfo_ctr++;
            }
            libqt_map traceCaptureDeviceInfo_out;
            traceCaptureDeviceInfo_out.len = traceCaptureDeviceInfo_ret.size();
            traceCaptureDeviceInfo_out.keys = static_cast<void*>(traceCaptureDeviceInfo_karr);
            traceCaptureDeviceInfo_out.values = static_cast<void*>(traceCaptureDeviceInfo_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval3 = traceCaptureDeviceInfo_out;
            const QMap<QString, QVariant>& traceScreenInfo_ret = traceScreenInfo;
            // Convert QMap<> from C++ memory to manually-managed C memory
            libqt_string* traceScreenInfo_karr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * traceScreenInfo_ret.size()));
            QVariant** traceScreenInfo_varr = static_cast<QVariant**>(malloc(sizeof(QVariant*) * traceScreenInfo_ret.size()));
            int traceScreenInfo_ctr = 0;
            for (auto traceScreenInfo_itr = traceScreenInfo_ret.keyValueBegin(); traceScreenInfo_itr != traceScreenInfo_ret.keyValueEnd(); ++traceScreenInfo_itr) {
                auto traceScreenInfo_mapkey_ret = traceScreenInfo_itr->first;
                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
                QByteArray traceScreenInfo_mapkey_b = traceScreenInfo_mapkey_ret.toUtf8();
                libqt_string traceScreenInfo_mapkey_str;
                traceScreenInfo_mapkey_str.len = traceScreenInfo_mapkey_b.length();
                traceScreenInfo_mapkey_str.data = static_cast<const char*>(malloc(traceScreenInfo_mapkey_str.len + 1));
                memcpy((void*)traceScreenInfo_mapkey_str.data, traceScreenInfo_mapkey_b.data(), traceScreenInfo_mapkey_str.len);
                ((char*)traceScreenInfo_mapkey_str.data)[traceScreenInfo_mapkey_str.len] = '\0';
                traceScreenInfo_karr[traceScreenInfo_ctr] = traceScreenInfo_mapkey_str;
                traceScreenInfo_varr[traceScreenInfo_ctr] = new QVariant(traceScreenInfo_itr->second);
                traceScreenInfo_ctr++;
            }
            libqt_map traceScreenInfo_out;
            traceScreenInfo_out.len = traceScreenInfo_ret.size();
            traceScreenInfo_out.keys = static_cast<void*>(traceScreenInfo_karr);
            traceScreenInfo_out.values = static_cast<void*>(traceScreenInfo_varr);
            libqt_map /* of libqt_string to QVariant* */ cbval4 = traceScreenInfo_out;
            QVirtualKeyboardTrace* callback_ret = qvirtualkeyboardabstractinputmethod_tracebegin_callback(this, cbval1, cbval2, cbval3, cbval4);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::traceBegin(traceId, patternRecognitionMode, traceCaptureDeviceInfo, traceScreenInfo);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool traceEnd(QVirtualKeyboardTrace* trace) override {
        if (qvirtualkeyboardabstractinputmethod_traceend_callback) {
            QVirtualKeyboardTrace* cbval1 = trace;
            bool callback_ret = qvirtualkeyboardabstractinputmethod_traceend_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::traceEnd(trace);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool reselect(int cursorPosition, const QVirtualKeyboardInputEngine::ReselectFlags& reselectFlags) override {
        if (qvirtualkeyboardabstractinputmethod_reselect_callback) {
            int cbval1 = cursorPosition;
            const QVirtualKeyboardInputEngine::ReselectFlags& reselectFlags_ret = reselectFlags;
            const int* cbval2 = reinterpret_cast<const int*>(&reselectFlags_ret);
            bool callback_ret = qvirtualkeyboardabstractinputmethod_reselect_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::reselect(cursorPosition, reselectFlags);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool clickPreeditText(int cursorPosition) override {
        if (qvirtualkeyboardabstractinputmethod_clickpreedittext_callback) {
            int cbval1 = cursorPosition;
            bool callback_ret = qvirtualkeyboardabstractinputmethod_clickpreedittext_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::clickPreeditText(cursorPosition);
    }

    // Virtual method for C ABI access and custom callback
    virtual void reset() override {
        if (qvirtualkeyboardabstractinputmethod_reset_callback) {
            qvirtualkeyboardabstractinputmethod_reset_callback(this);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::reset();
    }

    // Virtual method for C ABI access and custom callback
    virtual void update() override {
        if (qvirtualkeyboardabstractinputmethod_update_callback) {
            qvirtualkeyboardabstractinputmethod_update_callback(this);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::update();
    }

    // Virtual method for C ABI access and custom callback
    virtual void clearInputMode() override {
        if (qvirtualkeyboardabstractinputmethod_clearinputmode_callback) {
            qvirtualkeyboardabstractinputmethod_clearinputmode_callback(this);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::clearInputMode();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qvirtualkeyboardabstractinputmethod_event_callback(this, cbval1);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qvirtualkeyboardabstractinputmethod_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QVirtualKeyboardAbstractInputMethod::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qvirtualkeyboardabstractinputmethod_timerevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_childevent_callback) {
            QChildEvent* cbval1 = event;
            qvirtualkeyboardabstractinputmethod_childevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qvirtualkeyboardabstractinputmethod_customevent_callback) {
            QEvent* cbval1 = event;
            qvirtualkeyboardabstractinputmethod_customevent_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardabstractinputmethod_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardabstractinputmethod_connectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qvirtualkeyboardabstractinputmethod_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qvirtualkeyboardabstractinputmethod_disconnectnotify_callback(this, cbval1);
            return;
        }
        QVirtualKeyboardAbstractInputMethod::disconnectNotify(signal);
    }

    // Friend functions
    friend void QVirtualKeyboardAbstractInputMethod_SuperTimerEvent(QVirtualKeyboardAbstractInputMethod* self, QTimerEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperChildEvent(QVirtualKeyboardAbstractInputMethod* self, QChildEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperCustomEvent(QVirtualKeyboardAbstractInputMethod* self, QEvent* event);
    friend void QVirtualKeyboardAbstractInputMethod_SuperConnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
    friend void QVirtualKeyboardAbstractInputMethod_SuperDisconnectNotify(QVirtualKeyboardAbstractInputMethod* self, const QMetaMethod* signal);
};

#endif
