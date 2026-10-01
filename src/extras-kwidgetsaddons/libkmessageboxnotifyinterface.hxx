#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXNOTIFYINTERFACE_HXX
#define EXTRAS_KWIDGETSADDONS_LIBKMESSAGEBOXNOTIFYINTERFACE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of KMessageBoxNotifyInterface
class VirtualKMessageBoxNotifyInterface : public KMessageBoxNotifyInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using KMessageBoxNotifyInterface_SendNotification_Callback = void (*)(KMessageBoxNotifyInterface*, int, const char*, QWidget*);

    // Instance callback storage
    KMessageBoxNotifyInterface_SendNotification_Callback kmessageboxnotifyinterface_sendnotification_callback = nullptr;

    VirtualKMessageBoxNotifyInterface() : KMessageBoxNotifyInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual void sendNotification(QMessageBox::Icon notificationType, const QString& message, QWidget* parent) override {
        if (kmessageboxnotifyinterface_sendnotification_callback) {
            int cbval1 = static_cast<int>(notificationType);
            const auto message_ret = message;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray message_b = message_ret.toUtf8();
            auto message_str_len = message_b.length();
            const char* message_str = static_cast<const char*>(malloc(message_str_len + 1));
            memcpy((void*)message_str, message_b.data(), message_str_len);
            ((char*)message_str)[message_str_len] = '\0';
            const char* cbval2 = message_str;
            QWidget* cbval3 = parent;
            kmessageboxnotifyinterface_sendnotification_callback(this, cbval1, cbval2, cbval3);
            libqt_free(message_str);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method KMessageBoxNotifyInterface::sendNotification called without being implemented");
    }
};

#endif
