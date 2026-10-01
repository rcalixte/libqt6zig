#pragma once
#ifndef DESIGNER_LIBTASKMENU_HXX
#define DESIGNER_LIBTASKMENU_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerTaskMenuExtension
class VirtualQDesignerTaskMenuExtension : public QDesignerTaskMenuExtension {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerTaskMenuExtension_PreferredEditAction_Callback = QAction* (*)(const QDesignerTaskMenuExtension*);
    using QDesignerTaskMenuExtension_TaskActions_Callback = libqt_list /* of QAction* */ (*)(const QDesignerTaskMenuExtension*);

    // Instance callback storage
    QDesignerTaskMenuExtension_PreferredEditAction_Callback qdesignertaskmenuextension_preferrededitaction_callback = nullptr;
    QDesignerTaskMenuExtension_TaskActions_Callback qdesignertaskmenuextension_taskactions_callback = nullptr;

    VirtualQDesignerTaskMenuExtension() : QDesignerTaskMenuExtension() {};

    // Virtual method for C ABI access and custom callback
    virtual QAction* preferredEditAction() const override {
        if (qdesignertaskmenuextension_preferrededitaction_callback) {
            QAction* callback_ret = qdesignertaskmenuextension_preferrededitaction_callback(this);
            return callback_ret;
        }
        return QDesignerTaskMenuExtension::preferredEditAction();
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> taskActions() const override {
        if (qdesignertaskmenuextension_taskactions_callback) {
            libqt_list /* of QAction* */ callback_ret = qdesignertaskmenuextension_taskactions_callback(this);
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerTaskMenuExtension::taskActions called without being implemented");
    }
};

#endif
