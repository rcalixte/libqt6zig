#pragma once
#ifndef SRC_DESIGNERC_LIBVIRTUALABSTRACTOPTIONSPAGE_H
#define SRC_DESIGNERC_LIBVIRTUALABSTRACTOPTIONSPAGE_H

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerOptionsPageInterface so that we can call protected methods
class VirtualQDesignerOptionsPageInterface : public QDesignerOptionsPageInterface {

  public:
    // Virtual class boolean flag
    bool isVirtualQDesignerOptionsPageInterface = true;

    // Virtual class public types (including callbacks)
    using QDesignerOptionsPageInterface_Name_Callback = const char* (*)();
    using QDesignerOptionsPageInterface_CreatePage_Callback = QWidget* (*)(QDesignerOptionsPageInterface*, QWidget*);
    using QDesignerOptionsPageInterface_Apply_Callback = void (*)();
    using QDesignerOptionsPageInterface_Finish_Callback = void (*)();

  protected:
    // Instance callback storage
    QDesignerOptionsPageInterface_Name_Callback qdesigneroptionspageinterface_name_callback = nullptr;
    QDesignerOptionsPageInterface_CreatePage_Callback qdesigneroptionspageinterface_createpage_callback = nullptr;
    QDesignerOptionsPageInterface_Apply_Callback qdesigneroptionspageinterface_apply_callback = nullptr;
    QDesignerOptionsPageInterface_Finish_Callback qdesigneroptionspageinterface_finish_callback = nullptr;

    // Instance base flags
    mutable bool qdesigneroptionspageinterface_name_isbase = false;
    mutable bool qdesigneroptionspageinterface_createpage_isbase = false;
    mutable bool qdesigneroptionspageinterface_apply_isbase = false;
    mutable bool qdesigneroptionspageinterface_finish_isbase = false;

  public:
    VirtualQDesignerOptionsPageInterface() : QDesignerOptionsPageInterface() {};

    ~VirtualQDesignerOptionsPageInterface() {
        qdesigneroptionspageinterface_name_callback = nullptr;
        qdesigneroptionspageinterface_createpage_callback = nullptr;
        qdesigneroptionspageinterface_apply_callback = nullptr;
        qdesigneroptionspageinterface_finish_callback = nullptr;
    }

    // Callback setters
    inline void setQDesignerOptionsPageInterface_Name_Callback(QDesignerOptionsPageInterface_Name_Callback cb) { qdesigneroptionspageinterface_name_callback = cb; }
    inline void setQDesignerOptionsPageInterface_CreatePage_Callback(QDesignerOptionsPageInterface_CreatePage_Callback cb) { qdesigneroptionspageinterface_createpage_callback = cb; }
    inline void setQDesignerOptionsPageInterface_Apply_Callback(QDesignerOptionsPageInterface_Apply_Callback cb) { qdesigneroptionspageinterface_apply_callback = cb; }
    inline void setQDesignerOptionsPageInterface_Finish_Callback(QDesignerOptionsPageInterface_Finish_Callback cb) { qdesigneroptionspageinterface_finish_callback = cb; }

    // Base flag setters
    inline void setQDesignerOptionsPageInterface_Name_IsBase(bool value) const { qdesigneroptionspageinterface_name_isbase = value; }
    inline void setQDesignerOptionsPageInterface_CreatePage_IsBase(bool value) const { qdesigneroptionspageinterface_createpage_isbase = value; }
    inline void setQDesignerOptionsPageInterface_Apply_IsBase(bool value) const { qdesigneroptionspageinterface_apply_isbase = value; }
    inline void setQDesignerOptionsPageInterface_Finish_IsBase(bool value) const { qdesigneroptionspageinterface_finish_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (qdesigneroptionspageinterface_name_callback != nullptr) {
            const char* callback_ret = qdesigneroptionspageinterface_name_callback();
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createPage(QWidget* parent) override {
        if (qdesigneroptionspageinterface_createpage_callback != nullptr) {
            QWidget* cbval1 = parent;

            QWidget* callback_ret = qdesigneroptionspageinterface_createpage_callback(this, cbval1);
            return callback_ret;
        } else {
            return {};
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void apply() override {
        if (qdesigneroptionspageinterface_apply_callback != nullptr) {
            qdesigneroptionspageinterface_apply_callback();
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual void finish() override {
        if (qdesigneroptionspageinterface_finish_callback != nullptr) {
            qdesigneroptionspageinterface_finish_callback();
        }
    }
};

#endif
