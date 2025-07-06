#pragma once
#ifndef SRCC_LIBVIRTUALQITEMEDITORFACTORY_H
#define SRCC_LIBVIRTUALQITEMEDITORFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemEditorFactory so that we can call protected methods
class VirtualQItemEditorFactory final : public QItemEditorFactory {

  public:
    // Virtual class boolean flag
    bool isVirtualQItemEditorFactory = true;

    // Virtual class public types (including callbacks)
    using QItemEditorFactory_CreateEditor_Callback = QWidget* (*)(const QItemEditorFactory*, int, QWidget*);
    using QItemEditorFactory_ValuePropertyName_Callback = libqt_string (*)(const QItemEditorFactory*, int);

  protected:
    // Instance callback storage
    QItemEditorFactory_CreateEditor_Callback qitemeditorfactory_createeditor_callback = nullptr;
    QItemEditorFactory_ValuePropertyName_Callback qitemeditorfactory_valuepropertyname_callback = nullptr;

    // Instance base flags
    mutable bool qitemeditorfactory_createeditor_isbase = false;
    mutable bool qitemeditorfactory_valuepropertyname_isbase = false;

  public:
    VirtualQItemEditorFactory() : QItemEditorFactory() {};
    VirtualQItemEditorFactory(const QItemEditorFactory& param1) : QItemEditorFactory(param1) {};

    ~VirtualQItemEditorFactory() {
        qitemeditorfactory_createeditor_callback = nullptr;
        qitemeditorfactory_valuepropertyname_callback = nullptr;
    }

    // Callback setters
    inline void setQItemEditorFactory_CreateEditor_Callback(QItemEditorFactory_CreateEditor_Callback cb) { qitemeditorfactory_createeditor_callback = cb; }
    inline void setQItemEditorFactory_ValuePropertyName_Callback(QItemEditorFactory_ValuePropertyName_Callback cb) { qitemeditorfactory_valuepropertyname_callback = cb; }

    // Base flag setters
    inline void setQItemEditorFactory_CreateEditor_IsBase(bool value) const { qitemeditorfactory_createeditor_isbase = value; }
    inline void setQItemEditorFactory_ValuePropertyName_IsBase(bool value) const { qitemeditorfactory_valuepropertyname_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(int userType, QWidget* parent) const override {
        if (qitemeditorfactory_createeditor_isbase) {
            qitemeditorfactory_createeditor_isbase = false;
            return QItemEditorFactory::createEditor(userType, parent);
        } else if (qitemeditorfactory_createeditor_callback != nullptr) {
            int cbval1 = userType;
            QWidget* cbval2 = parent;

            QWidget* callback_ret = qitemeditorfactory_createeditor_callback(this, cbval1, cbval2);
            return callback_ret;
        } else {
            return QItemEditorFactory::createEditor(userType, parent);
        }
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray valuePropertyName(int userType) const override {
        if (qitemeditorfactory_valuepropertyname_isbase) {
            qitemeditorfactory_valuepropertyname_isbase = false;
            return QItemEditorFactory::valuePropertyName(userType);
        } else if (qitemeditorfactory_valuepropertyname_callback != nullptr) {
            int cbval1 = userType;

            libqt_string callback_ret = qitemeditorfactory_valuepropertyname_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        } else {
            return QItemEditorFactory::valuePropertyName(userType);
        }
    }
};

#endif
