#pragma once
#ifndef LIBQPROXYSTYLE_HXX
#define LIBQPROXYSTYLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QProxyStyle
class VirtualQProxyStyle final : public QProxyStyle {
  public:
    // Virtual class public types (including callbacks and access types)
    using QProxyStyle_MetaObject_Callback = QMetaObject* (*)(const QProxyStyle*);
    using QProxyStyle_Metacast_Callback = void* (*)(QProxyStyle*, const char*);
    using QProxyStyle_Metacall_Callback = int (*)(QProxyStyle*, int, int, void**);
    using QProxyStyle_DrawPrimitive_Callback = void (*)(const QProxyStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QProxyStyle_DrawControl_Callback = void (*)(const QProxyStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QProxyStyle_DrawComplexControl_Callback = void (*)(const QProxyStyle*, int, QStyleOptionComplex*, QPainter*, QWidget*);
    using QProxyStyle_DrawItemText_Callback = void (*)(const QProxyStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, int);
    using QProxyStyle_DrawItemPixmap_Callback = void (*)(const QProxyStyle*, QPainter*, QRect*, int, QPixmap*);
    using QProxyStyle_SizeFromContents_Callback = QSize* (*)(const QProxyStyle*, int, QStyleOption*, QSize*, QWidget*);
    using QProxyStyle_SubElementRect_Callback = QRect* (*)(const QProxyStyle*, int, QStyleOption*, QWidget*);
    using QProxyStyle_SubControlRect_Callback = QRect* (*)(const QProxyStyle*, int, QStyleOptionComplex*, int, QWidget*);
    using QProxyStyle_ItemTextRect_Callback = QRect* (*)(const QProxyStyle*, QFontMetrics*, QRect*, int, bool, const char*);
    using QProxyStyle_ItemPixmapRect_Callback = QRect* (*)(const QProxyStyle*, QRect*, int, QPixmap*);
    using QProxyStyle_HitTestComplexControl_Callback = int (*)(const QProxyStyle*, int, QStyleOptionComplex*, QPoint*, QWidget*);
    using QProxyStyle_StyleHint_Callback = int (*)(const QProxyStyle*, int, QStyleOption*, QWidget*, QStyleHintReturn*);
    using QProxyStyle_PixelMetric_Callback = int (*)(const QProxyStyle*, int, QStyleOption*, QWidget*);
    using QProxyStyle_LayoutSpacing_Callback = int (*)(const QProxyStyle*, int, int, int, QStyleOption*, QWidget*);
    using QProxyStyle_StandardIcon_Callback = QIcon* (*)(const QProxyStyle*, int, QStyleOption*, QWidget*);
    using QProxyStyle_StandardPixmap_Callback = QPixmap* (*)(const QProxyStyle*, int, QStyleOption*, QWidget*);
    using QProxyStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QProxyStyle*, int, QPixmap*, QStyleOption*);
    using QProxyStyle_StandardPalette_Callback = QPalette* (*)(const QProxyStyle*);
    using QProxyStyle_Polish_Callback = void (*)(QProxyStyle*, QWidget*);
    using QProxyStyle_Polish2_Callback = void (*)(QProxyStyle*, QPalette*);
    using QProxyStyle_Polish3_Callback = void (*)(QProxyStyle*, QApplication*);
    using QProxyStyle_Unpolish_Callback = void (*)(QProxyStyle*, QWidget*);
    using QProxyStyle_Unpolish2_Callback = void (*)(QProxyStyle*, QApplication*);
    using QProxyStyle_Event_Callback = bool (*)(QProxyStyle*, QEvent*);
    using QProxyStyle_EventFilter_Callback = bool (*)(QProxyStyle*, QObject*, QEvent*);
    using QProxyStyle_TimerEvent_Callback = void (*)(QProxyStyle*, QTimerEvent*);
    using QProxyStyle_ChildEvent_Callback = void (*)(QProxyStyle*, QChildEvent*);
    using QProxyStyle_CustomEvent_Callback = void (*)(QProxyStyle*, QEvent*);
    using QProxyStyle_ConnectNotify_Callback = void (*)(QProxyStyle*, QMetaMethod*);
    using QProxyStyle_DisconnectNotify_Callback = void (*)(QProxyStyle*, QMetaMethod*);
    using QProxyStyle::isSignalConnected;
    using QProxyStyle::receivers;
    using QProxyStyle::sender;
    using QProxyStyle::senderSignalIndex;

    // Instance callback storage
    QProxyStyle_MetaObject_Callback qproxystyle_metaobject_callback = nullptr;
    QProxyStyle_Metacast_Callback qproxystyle_metacast_callback = nullptr;
    QProxyStyle_Metacall_Callback qproxystyle_metacall_callback = nullptr;
    QProxyStyle_DrawPrimitive_Callback qproxystyle_drawprimitive_callback = nullptr;
    QProxyStyle_DrawControl_Callback qproxystyle_drawcontrol_callback = nullptr;
    QProxyStyle_DrawComplexControl_Callback qproxystyle_drawcomplexcontrol_callback = nullptr;
    QProxyStyle_DrawItemText_Callback qproxystyle_drawitemtext_callback = nullptr;
    QProxyStyle_DrawItemPixmap_Callback qproxystyle_drawitempixmap_callback = nullptr;
    QProxyStyle_SizeFromContents_Callback qproxystyle_sizefromcontents_callback = nullptr;
    QProxyStyle_SubElementRect_Callback qproxystyle_subelementrect_callback = nullptr;
    QProxyStyle_SubControlRect_Callback qproxystyle_subcontrolrect_callback = nullptr;
    QProxyStyle_ItemTextRect_Callback qproxystyle_itemtextrect_callback = nullptr;
    QProxyStyle_ItemPixmapRect_Callback qproxystyle_itempixmaprect_callback = nullptr;
    QProxyStyle_HitTestComplexControl_Callback qproxystyle_hittestcomplexcontrol_callback = nullptr;
    QProxyStyle_StyleHint_Callback qproxystyle_stylehint_callback = nullptr;
    QProxyStyle_PixelMetric_Callback qproxystyle_pixelmetric_callback = nullptr;
    QProxyStyle_LayoutSpacing_Callback qproxystyle_layoutspacing_callback = nullptr;
    QProxyStyle_StandardIcon_Callback qproxystyle_standardicon_callback = nullptr;
    QProxyStyle_StandardPixmap_Callback qproxystyle_standardpixmap_callback = nullptr;
    QProxyStyle_GeneratedIconPixmap_Callback qproxystyle_generatediconpixmap_callback = nullptr;
    QProxyStyle_StandardPalette_Callback qproxystyle_standardpalette_callback = nullptr;
    QProxyStyle_Polish_Callback qproxystyle_polish_callback = nullptr;
    QProxyStyle_Polish2_Callback qproxystyle_polish2_callback = nullptr;
    QProxyStyle_Polish3_Callback qproxystyle_polish3_callback = nullptr;
    QProxyStyle_Unpolish_Callback qproxystyle_unpolish_callback = nullptr;
    QProxyStyle_Unpolish2_Callback qproxystyle_unpolish2_callback = nullptr;
    QProxyStyle_Event_Callback qproxystyle_event_callback = nullptr;
    QProxyStyle_EventFilter_Callback qproxystyle_eventfilter_callback = nullptr;
    QProxyStyle_TimerEvent_Callback qproxystyle_timerevent_callback = nullptr;
    QProxyStyle_ChildEvent_Callback qproxystyle_childevent_callback = nullptr;
    QProxyStyle_CustomEvent_Callback qproxystyle_customevent_callback = nullptr;
    QProxyStyle_ConnectNotify_Callback qproxystyle_connectnotify_callback = nullptr;
    QProxyStyle_DisconnectNotify_Callback qproxystyle_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QProxyStyle {
        using QProxyStyle::childEvent;
        using QProxyStyle::connectNotify;
        using QProxyStyle::customEvent;
        using QProxyStyle::disconnectNotify;
        using QProxyStyle::event;
        using QProxyStyle::timerEvent;
    };

    VirtualQProxyStyle() : QProxyStyle() {};
    VirtualQProxyStyle(const QString& key) : QProxyStyle(key) {};
    VirtualQProxyStyle(QStyle* style) : QProxyStyle(style) {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qproxystyle_metaobject_callback) {
            QMetaObject* callback_ret = qproxystyle_metaobject_callback(this);
            return callback_ret;
        }
        return QProxyStyle::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qproxystyle_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qproxystyle_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QProxyStyle::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qproxystyle_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qproxystyle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QProxyStyle::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawprimitive_callback) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QPainter* cbval3 = painter;
            QWidget* cbval4 = (QWidget*)widget;
            qproxystyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawcontrol_callback) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QPainter* cbval3 = painter;
            QWidget* cbval4 = (QWidget*)widget;
            qproxystyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QProxyStyle::drawControl(element, option, painter, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override {
        if (qproxystyle_drawcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(control);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)option;
            QPainter* cbval3 = painter;
            QWidget* cbval4 = (QWidget*)widget;
            qproxystyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QProxyStyle::drawComplexControl(control, option, painter, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qproxystyle_drawitemtext_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = flags;
            const QPalette& pal_ret = pal;
            // Cast returned reference into pointer
            QPalette* cbval4 = const_cast<QPalette*>(&pal_ret);
            bool cbval5 = enabled;
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval6 = text_str;
            int cbval7 = static_cast<int>(textRole);
            qproxystyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(text_str);
            return;
        }
        QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qproxystyle_drawitempixmap_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = alignment;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);
            qproxystyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType typeVal, const QStyleOption* option, const QSize& size, const QWidget* widget) const override {
        if (qproxystyle_sizefromcontents_callback) {
            int cbval1 = static_cast<int>(typeVal);
            QStyleOption* cbval2 = (QStyleOption*)option;
            const QSize& size_ret = size;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&size_ret);
            QWidget* cbval4 = (QWidget*)widget;
            QSize* callback_ret = qproxystyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement element, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_subelementrect_callback) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            QRect* callback_ret = qproxystyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::subElementRect(element, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* widget) const override {
        if (qproxystyle_subcontrolrect_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            int cbval3 = static_cast<int>(sc);
            QWidget* cbval4 = (QWidget*)widget;
            QRect* callback_ret = qproxystyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::subControlRect(cc, opt, sc, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qproxystyle_itemtextrect_callback) {
            const QFontMetrics& fm_ret = fm;
            // Cast returned reference into pointer
            QFontMetrics* cbval1 = const_cast<QFontMetrics*>(&fm_ret);
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&r_ret);
            int cbval3 = flags;
            bool cbval4 = enabled;
            const auto text_ret = text;
            // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
            QByteArray text_b = text_ret.toUtf8();
            auto text_str_len = text_b.length();
            const char* text_str = static_cast<const char*>(malloc(text_str_len + 1));
            memcpy((void*)text_str, text_b.data(), text_str_len);
            ((char*)text_str)[text_str_len] = '\0';
            const char* cbval5 = text_str;
            QRect* callback_ret = qproxystyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qproxystyle_itempixmaprect_callback) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            int cbval2 = flags;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval3 = const_cast<QPixmap*>(&pixmap_ret);
            QRect* callback_ret = qproxystyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::itemPixmapRect(r, flags, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl control, const QStyleOptionComplex* option, const QPoint& pos, const QWidget* widget) const override {
        if (qproxystyle_hittestcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(control);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)option;
            const QPoint& pos_ret = pos;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&pos_ret);
            QWidget* cbval4 = (QWidget*)widget;
            int callback_ret = qproxystyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<QStyle::SubControl>(callback_ret);
        }
        return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) const override {
        if (qproxystyle_stylehint_callback) {
            int cbval1 = static_cast<int>(hint);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            QStyleHintReturn* cbval4 = returnData;
            int callback_ret = qproxystyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        }
        return QProxyStyle::styleHint(hint, option, widget, returnData);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_pixelmetric_callback) {
            int cbval1 = static_cast<int>(metric);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            int callback_ret = qproxystyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QProxyStyle::pixelMetric(metric, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_layoutspacing_callback) {
            int cbval1 = static_cast<int>(control1);
            int cbval2 = static_cast<int>(control2);
            int cbval3 = static_cast<int>(orientation);
            QStyleOption* cbval4 = (QStyleOption*)option;
            QWidget* cbval5 = (QWidget*)widget;
            int callback_ret = qproxystyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return static_cast<int>(callback_ret);
        }
        return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
        if (qproxystyle_standardicon_callback) {
            int cbval1 = static_cast<int>(standardIcon);
            QStyleOption* cbval2 = (QStyleOption*)option;
            QWidget* cbval3 = (QWidget*)widget;
            QIcon* callback_ret = qproxystyle_standardicon_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::standardIcon(standardIcon, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
        if (qproxystyle_standardpixmap_callback) {
            int cbval1 = static_cast<int>(standardPixmap);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QPixmap* callback_ret = qproxystyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qproxystyle_generatediconpixmap_callback) {
            int cbval1 = static_cast<int>(iconMode);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            QStyleOption* cbval3 = (QStyleOption*)opt;
            QPixmap* callback_ret = qproxystyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qproxystyle_standardpalette_callback) {
            QPalette* callback_ret = qproxystyle_standardpalette_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QProxyStyle::standardPalette();
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qproxystyle_polish_callback) {
            QWidget* cbval1 = widget;
            qproxystyle_polish_callback(this, cbval1);
            return;
        }
        QProxyStyle::polish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& pal) override {
        if (qproxystyle_polish2_callback) {
            QPalette& pal_ret = pal;
            // Cast returned reference into pointer
            QPalette* cbval1 = &pal_ret;
            qproxystyle_polish2_callback(this, cbval1);
            return;
        }
        QProxyStyle::polish(pal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* app) override {
        if (qproxystyle_polish3_callback) {
            QApplication* cbval1 = app;
            qproxystyle_polish3_callback(this, cbval1);
            return;
        }
        QProxyStyle::polish(app);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qproxystyle_unpolish_callback) {
            QWidget* cbval1 = widget;
            qproxystyle_unpolish_callback(this, cbval1);
            return;
        }
        QProxyStyle::unpolish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* app) override {
        if (qproxystyle_unpolish2_callback) {
            QApplication* cbval1 = app;
            qproxystyle_unpolish2_callback(this, cbval1);
            return;
        }
        QProxyStyle::unpolish(app);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* e) override {
        if (qproxystyle_event_callback) {
            QEvent* cbval1 = e;
            bool callback_ret = qproxystyle_event_callback(this, cbval1);
            return callback_ret;
        }
        return QProxyStyle::event(e);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qproxystyle_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qproxystyle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QProxyStyle::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qproxystyle_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qproxystyle_timerevent_callback(this, cbval1);
            return;
        }
        QProxyStyle::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qproxystyle_childevent_callback) {
            QChildEvent* cbval1 = event;
            qproxystyle_childevent_callback(this, cbval1);
            return;
        }
        QProxyStyle::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qproxystyle_customevent_callback) {
            QEvent* cbval1 = event;
            qproxystyle_customevent_callback(this, cbval1);
            return;
        }
        QProxyStyle::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qproxystyle_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qproxystyle_connectnotify_callback(this, cbval1);
            return;
        }
        QProxyStyle::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qproxystyle_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qproxystyle_disconnectnotify_callback(this, cbval1);
            return;
        }
        QProxyStyle::disconnectNotify(signal);
    }

    // Friend functions
    friend bool QProxyStyle_SuperEvent(QProxyStyle* self, QEvent* e);
    friend void QProxyStyle_SuperTimerEvent(QProxyStyle* self, QTimerEvent* event);
    friend void QProxyStyle_SuperChildEvent(QProxyStyle* self, QChildEvent* event);
    friend void QProxyStyle_SuperCustomEvent(QProxyStyle* self, QEvent* event);
    friend void QProxyStyle_SuperConnectNotify(QProxyStyle* self, const QMetaMethod* signal);
    friend void QProxyStyle_SuperDisconnectNotify(QProxyStyle* self, const QMetaMethod* signal);
};

#endif
