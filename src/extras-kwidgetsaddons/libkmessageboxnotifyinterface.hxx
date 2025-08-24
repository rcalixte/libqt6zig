#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEBOXNOTIFYINTERFACE_H
#define SRC_EXTRAS_KWIDGETSADDONSC_LIBVIRTUALKMESSAGEBOXNOTIFYINTERFACE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageBoxNotifyInterface so that we can call protected methods
class VirtualKMessageBoxNotifyInterface final : public KMessageBoxNotifyInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualKMessageBoxNotifyInterface = true;

    // Virtual class public types (including callbacks)
    using KMessageBoxNotifyInterface_SendNotification_Callback = void (*)(KMessageBoxNotifyInterface*, int, libqt_string, QWidget*);

  protected:
    // Instance callback storage
    KMessageBoxNotifyInterface_SendNotification_Callback kmessageboxnotifyinterface_sendnotification_callback = nullptr;

    // Instance base flags
    mutable bool kmessageboxnotifyinterface_sendnotification_isbase = false;

  public:
    VirtualKMessageBoxNotifyInterface() : KMessageBoxNotifyInterface() {};

    ~VirtualKMessageBoxNotifyInterface() {
        kmessageboxnotifyinterface_sendnotification_callback = nullptr;
    }

    // Callback setters
    inline void setKMessageBoxNotifyInterface_SendNotification_Callback(KMessageBoxNotifyInterface_SendNotification_Callback cb) { kmessageboxnotifyinterface_sendnotification_callback = cb; }

    // Base flag setters
    inline void setKMessageBoxNotifyInterface_SendNotification_IsBase(bool value) const { kmessageboxnotifyinterface_sendnotification_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual void sendNotification(QMessageBox::Icon notificationType, const QString& message, QWidget* parent) override {
        if (kmessageboxnotifyinterface_sendnotification_callback != nullptr) {
            int cbval1 = static_cast<int>(notificationType);
            const QString message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            libqt_string message_str;
            message_str.len = message_b.length();
            message_str.data = static_cast<const char*>(malloc(message_str.len + 1));
            memcpy((void*)message_str.data, message_b.data(), message_str.len);
            ((char*)message_str.data)[message_str.len] = '\0';
            libqt_string cbval2 = message_str;
            QWidget* cbval3 = parent;

            kmessageboxnotifyinterface_sendnotification_callback(this, cbval1, cbval2, cbval3);
        }
    }
};

#endif
