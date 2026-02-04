#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALTASKMENU_H
#define SRC_DESIGNERC_LIBVIRTUALTASKMENU_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerTaskMenuExtension so that we can call protected methods
class VirtualQDesignerTaskMenuExtension : public QDesignerTaskMenuExtension {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerTaskMenuExtension = true;

    // Virtual class public types (including callbacks)
    using QDesignerTaskMenuExtension_PreferredEditAction_Callback = QAction* (*)();
    using QDesignerTaskMenuExtension_TaskActions_Callback = libqt_list /* of QAction* */ (*)();

  protected:
    // Instance callback storage
    QDesignerTaskMenuExtension_PreferredEditAction_Callback qdesignertaskmenuextension_preferrededitaction_callback = nullptr;
    QDesignerTaskMenuExtension_TaskActions_Callback qdesignertaskmenuextension_taskactions_callback = nullptr;

    // Instance base flags
    mutable bool qdesignertaskmenuextension_preferrededitaction_isbase = false;
    mutable bool qdesignertaskmenuextension_taskactions_isbase = false;

  public:
    VirtualQDesignerTaskMenuExtension() : QDesignerTaskMenuExtension() {};

    ~VirtualQDesignerTaskMenuExtension() {
        qdesignertaskmenuextension_preferrededitaction_callback = nullptr;
        qdesignertaskmenuextension_taskactions_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerTaskMenuExtension_PreferredEditAction_Callback(QDesignerTaskMenuExtension_PreferredEditAction_Callback cb) { qdesignertaskmenuextension_preferrededitaction_callback = cb; }
    inline void setQDesignerTaskMenuExtension_TaskActions_Callback(QDesignerTaskMenuExtension_TaskActions_Callback cb) { qdesignertaskmenuextension_taskactions_callback = cb; }

    // Base flag setters
    inline void setQDesignerTaskMenuExtension_PreferredEditAction_IsBase(bool value) const { qdesignertaskmenuextension_preferrededitaction_isbase = value; }
    inline void setQDesignerTaskMenuExtension_TaskActions_IsBase(bool value) const { qdesignertaskmenuextension_taskactions_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QAction* preferredEditAction() const override {
        if (qdesignertaskmenuextension_preferrededitaction_isbase) {
            qdesignertaskmenuextension_preferrededitaction_isbase = false;
            return QDesignerTaskMenuExtension::preferredEditAction();
        } else if (qdesignertaskmenuextension_preferrededitaction_callback != nullptr) {
            QAction* callback_ret = qdesignertaskmenuextension_preferrededitaction_callback();
            return callback_ret;
        } else {
            return QDesignerTaskMenuExtension::preferredEditAction();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QList<QAction*> taskActions() const override {
        if (qdesignertaskmenuextension_taskactions_callback != nullptr) {
            libqt_list /* of QAction* */ callback_ret = qdesignertaskmenuextension_taskactions_callback();
            QList<QAction*> callback_ret_QList;
            callback_ret_QList.reserve(callback_ret.len);
            QAction** callback_ret_arr = static_cast<QAction**>(callback_ret.data);
            for (size_t i = 0; i < callback_ret.len; ++i) {
                callback_ret_QList.push_back(callback_ret_arr[i]);
            }
            libqt_free(callback_ret.data);
            return callback_ret_QList;
        } else {
            return {};
        }
    }
};

#endif
