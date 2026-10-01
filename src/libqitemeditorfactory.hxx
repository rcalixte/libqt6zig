#pragma once
#ifndef LIBQITEMEDITORFACTORY_HXX
#define LIBQITEMEDITORFACTORY_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QItemEditorFactory
class VirtualQItemEditorFactory final : public QItemEditorFactory {
  public:
    // Virtual class public types (including callbacks and access types)
    using QItemEditorFactory_CreateEditor_Callback = QWidget* (*)(const QItemEditorFactory*, int, QWidget*);
    using QItemEditorFactory_ValuePropertyName_Callback = libqt_string (*)(const QItemEditorFactory*, int);

    // Instance callback storage
    QItemEditorFactory_CreateEditor_Callback qitemeditorfactory_createeditor_callback = nullptr;
    QItemEditorFactory_ValuePropertyName_Callback qitemeditorfactory_valuepropertyname_callback = nullptr;

    VirtualQItemEditorFactory() : QItemEditorFactory() {};
    VirtualQItemEditorFactory(const QItemEditorFactory& param1) : QItemEditorFactory(param1) {};

    // Virtual method for C ABI access and custom callback
    virtual QWidget* createEditor(int userType, QWidget* parent) const override {
        if (qitemeditorfactory_createeditor_callback) {
            int cbval1 = userType;
            QWidget* cbval2 = parent;
            QWidget* callback_ret = qitemeditorfactory_createeditor_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QItemEditorFactory::createEditor(userType, parent);
    }

    // Virtual method for C ABI access and custom callback
    virtual QByteArray valuePropertyName(int userType) const override {
        if (qitemeditorfactory_valuepropertyname_callback) {
            int cbval1 = userType;
            libqt_string callback_ret = qitemeditorfactory_valuepropertyname_callback(this, cbval1);
            QByteArray callback_ret_QByteArray(callback_ret.data, callback_ret.len);
            return callback_ret_QByteArray;
        }
        return QItemEditorFactory::valuePropertyName(userType);
    }
};

#endif
