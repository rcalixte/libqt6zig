#pragma once
#ifndef DESIGNER_LIBABSTRACTOPTIONSPAGE_HXX
#define DESIGNER_LIBABSTRACTOPTIONSPAGE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QDesignerOptionsPageInterface
class VirtualQDesignerOptionsPageInterface : public QDesignerOptionsPageInterface {
  public:
    // Virtual class public types (including callbacks and access types)
    using QDesignerOptionsPageInterface_Name_Callback = const char* (*)(const QDesignerOptionsPageInterface*);
    using QDesignerOptionsPageInterface_CreatePage_Callback = QWidget* (*)(QDesignerOptionsPageInterface*, QWidget*);
    using QDesignerOptionsPageInterface_Apply_Callback = void (*)(QDesignerOptionsPageInterface*);
    using QDesignerOptionsPageInterface_Finish_Callback = void (*)(QDesignerOptionsPageInterface*);

    // Instance callback storage
    QDesignerOptionsPageInterface_Name_Callback qdesigneroptionspageinterface_name_callback = nullptr;
    QDesignerOptionsPageInterface_CreatePage_Callback qdesigneroptionspageinterface_createpage_callback = nullptr;
    QDesignerOptionsPageInterface_Apply_Callback qdesigneroptionspageinterface_apply_callback = nullptr;
    QDesignerOptionsPageInterface_Finish_Callback qdesigneroptionspageinterface_finish_callback = nullptr;

    VirtualQDesignerOptionsPageInterface() : QDesignerOptionsPageInterface() {};

    // Virtual method for C ABI access and custom callback
    virtual QString name() const override {
        if (qdesigneroptionspageinterface_name_callback) {
            const char* callback_ret = qdesigneroptionspageinterface_name_callback(this);
            QString callback_ret_QString = QString::fromUtf8(callback_ret);
            return callback_ret_QString;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerOptionsPageInterface::name called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createPage(QWidget* parent) override {
        if (qdesigneroptionspageinterface_createpage_callback) {
            QWidget* cbval1 = parent;
            QWidget* callback_ret = qdesigneroptionspageinterface_createpage_callback(this, cbval1);
            return callback_ret;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerOptionsPageInterface::createPage called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void apply() override {
        if (qdesigneroptionspageinterface_apply_callback) {
            qdesigneroptionspageinterface_apply_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerOptionsPageInterface::apply called without being implemented");
    }

    // Virtual method for C ABI access and custom callback
    virtual void finish() override {
        if (qdesigneroptionspageinterface_finish_callback) {
            qdesigneroptionspageinterface_finish_callback(this);
            return;
        }
        // Pure virtual method
        qFatal("Error: Pure virtual method QDesignerOptionsPageInterface::finish called without being implemented");
    }
};

#endif
