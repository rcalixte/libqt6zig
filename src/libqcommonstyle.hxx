#pragma once
#ifndef LIBQCOMMONSTYLE_HXX
#define LIBQCOMMONSTYLE_HXX

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

// This class is a subclass of QCommonStyle
class VirtualQCommonStyle final : public QCommonStyle {
  public:
    // Virtual class public types (including callbacks and access types)
    using QCommonStyle_MetaObject_Callback = QMetaObject* (*)(const QCommonStyle*);
    using QCommonStyle_Metacast_Callback = void* (*)(QCommonStyle*, const char*);
    using QCommonStyle_Metacall_Callback = int (*)(QCommonStyle*, int, int, void**);
    using QCommonStyle_DrawPrimitive_Callback = void (*)(const QCommonStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QCommonStyle_DrawControl_Callback = void (*)(const QCommonStyle*, int, QStyleOption*, QPainter*, QWidget*);
    using QCommonStyle_SubElementRect_Callback = QRect* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_DrawComplexControl_Callback = void (*)(const QCommonStyle*, int, QStyleOptionComplex*, QPainter*, QWidget*);
    using QCommonStyle_HitTestComplexControl_Callback = int (*)(const QCommonStyle*, int, QStyleOptionComplex*, QPoint*, QWidget*);
    using QCommonStyle_SubControlRect_Callback = QRect* (*)(const QCommonStyle*, int, QStyleOptionComplex*, int, QWidget*);
    using QCommonStyle_SizeFromContents_Callback = QSize* (*)(const QCommonStyle*, int, QStyleOption*, QSize*, QWidget*);
    using QCommonStyle_PixelMetric_Callback = int (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_StyleHint_Callback = int (*)(const QCommonStyle*, int, QStyleOption*, QWidget*, QStyleHintReturn*);
    using QCommonStyle_StandardIcon_Callback = QIcon* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_StandardPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, QStyleOption*, QWidget*);
    using QCommonStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, QPixmap*, QStyleOption*);
    using QCommonStyle_LayoutSpacing_Callback = int (*)(const QCommonStyle*, int, int, int, QStyleOption*, QWidget*);
    using QCommonStyle_Polish_Callback = void (*)(QCommonStyle*, QPalette*);
    using QCommonStyle_Polish2_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_Polish3_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_Unpolish_Callback = void (*)(QCommonStyle*, QWidget*);
    using QCommonStyle_Unpolish2_Callback = void (*)(QCommonStyle*, QApplication*);
    using QCommonStyle_ItemTextRect_Callback = QRect* (*)(const QCommonStyle*, QFontMetrics*, QRect*, int, bool, const char*);
    using QCommonStyle_ItemPixmapRect_Callback = QRect* (*)(const QCommonStyle*, QRect*, int, QPixmap*);
    using QCommonStyle_DrawItemText_Callback = void (*)(const QCommonStyle*, QPainter*, QRect*, int, QPalette*, bool, const char*, int);
    using QCommonStyle_DrawItemPixmap_Callback = void (*)(const QCommonStyle*, QPainter*, QRect*, int, QPixmap*);
    using QCommonStyle_StandardPalette_Callback = QPalette* (*)(const QCommonStyle*);
    using QCommonStyle_Event_Callback = bool (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_EventFilter_Callback = bool (*)(QCommonStyle*, QObject*, QEvent*);
    using QCommonStyle_TimerEvent_Callback = void (*)(QCommonStyle*, QTimerEvent*);
    using QCommonStyle_ChildEvent_Callback = void (*)(QCommonStyle*, QChildEvent*);
    using QCommonStyle_CustomEvent_Callback = void (*)(QCommonStyle*, QEvent*);
    using QCommonStyle_ConnectNotify_Callback = void (*)(QCommonStyle*, QMetaMethod*);
    using QCommonStyle_DisconnectNotify_Callback = void (*)(QCommonStyle*, QMetaMethod*);
    using QCommonStyle::isSignalConnected;
    using QCommonStyle::receivers;
    using QCommonStyle::sender;
    using QCommonStyle::senderSignalIndex;

    // Instance callback storage
    QCommonStyle_MetaObject_Callback qcommonstyle_metaobject_callback = nullptr;
    QCommonStyle_Metacast_Callback qcommonstyle_metacast_callback = nullptr;
    QCommonStyle_Metacall_Callback qcommonstyle_metacall_callback = nullptr;
    QCommonStyle_DrawPrimitive_Callback qcommonstyle_drawprimitive_callback = nullptr;
    QCommonStyle_DrawControl_Callback qcommonstyle_drawcontrol_callback = nullptr;
    QCommonStyle_SubElementRect_Callback qcommonstyle_subelementrect_callback = nullptr;
    QCommonStyle_DrawComplexControl_Callback qcommonstyle_drawcomplexcontrol_callback = nullptr;
    QCommonStyle_HitTestComplexControl_Callback qcommonstyle_hittestcomplexcontrol_callback = nullptr;
    QCommonStyle_SubControlRect_Callback qcommonstyle_subcontrolrect_callback = nullptr;
    QCommonStyle_SizeFromContents_Callback qcommonstyle_sizefromcontents_callback = nullptr;
    QCommonStyle_PixelMetric_Callback qcommonstyle_pixelmetric_callback = nullptr;
    QCommonStyle_StyleHint_Callback qcommonstyle_stylehint_callback = nullptr;
    QCommonStyle_StandardIcon_Callback qcommonstyle_standardicon_callback = nullptr;
    QCommonStyle_StandardPixmap_Callback qcommonstyle_standardpixmap_callback = nullptr;
    QCommonStyle_GeneratedIconPixmap_Callback qcommonstyle_generatediconpixmap_callback = nullptr;
    QCommonStyle_LayoutSpacing_Callback qcommonstyle_layoutspacing_callback = nullptr;
    QCommonStyle_Polish_Callback qcommonstyle_polish_callback = nullptr;
    QCommonStyle_Polish2_Callback qcommonstyle_polish2_callback = nullptr;
    QCommonStyle_Polish3_Callback qcommonstyle_polish3_callback = nullptr;
    QCommonStyle_Unpolish_Callback qcommonstyle_unpolish_callback = nullptr;
    QCommonStyle_Unpolish2_Callback qcommonstyle_unpolish2_callback = nullptr;
    QCommonStyle_ItemTextRect_Callback qcommonstyle_itemtextrect_callback = nullptr;
    QCommonStyle_ItemPixmapRect_Callback qcommonstyle_itempixmaprect_callback = nullptr;
    QCommonStyle_DrawItemText_Callback qcommonstyle_drawitemtext_callback = nullptr;
    QCommonStyle_DrawItemPixmap_Callback qcommonstyle_drawitempixmap_callback = nullptr;
    QCommonStyle_StandardPalette_Callback qcommonstyle_standardpalette_callback = nullptr;
    QCommonStyle_Event_Callback qcommonstyle_event_callback = nullptr;
    QCommonStyle_EventFilter_Callback qcommonstyle_eventfilter_callback = nullptr;
    QCommonStyle_TimerEvent_Callback qcommonstyle_timerevent_callback = nullptr;
    QCommonStyle_ChildEvent_Callback qcommonstyle_childevent_callback = nullptr;
    QCommonStyle_CustomEvent_Callback qcommonstyle_customevent_callback = nullptr;
    QCommonStyle_ConnectNotify_Callback qcommonstyle_connectnotify_callback = nullptr;
    QCommonStyle_DisconnectNotify_Callback qcommonstyle_disconnectnotify_callback = nullptr;

    // Access struct
    struct Base : QCommonStyle {
        using QCommonStyle::childEvent;
        using QCommonStyle::connectNotify;
        using QCommonStyle::customEvent;
        using QCommonStyle::disconnectNotify;
        using QCommonStyle::timerEvent;
    };

    VirtualQCommonStyle() : QCommonStyle() {};

    // Virtual method for C ABI access and custom callback
    virtual const QMetaObject* metaObject() const override {
        if (qcommonstyle_metaobject_callback) {
            QMetaObject* callback_ret = qcommonstyle_metaobject_callback(this);
            return callback_ret;
        }
        return QCommonStyle::metaObject();
    }

    // Virtual method for C ABI access and custom callback
    virtual void* qt_metacast(const char* param1) override {
        if (qcommonstyle_metacast_callback) {
            const char* cbval1 = (const char*)param1;
            void* callback_ret = qcommonstyle_metacast_callback(this, cbval1);
            return callback_ret;
        }
        return QCommonStyle::qt_metacast(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual int qt_metacall(QMetaObject::Call param1, int param2, void** param3) override {
        if (qcommonstyle_metacall_callback) {
            int cbval1 = static_cast<int>(param1);
            int cbval2 = param2;
            void** cbval3 = param3;
            int callback_ret = qcommonstyle_metacall_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCommonStyle::qt_metacall(param1, param2, param3);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawPrimitive(QStyle::PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawprimitive_callback) {
            int cbval1 = static_cast<int>(pe);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;
            qcommonstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QCommonStyle::drawPrimitive(pe, opt, p, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawControl(QStyle::ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcontrol_callback) {
            int cbval1 = static_cast<int>(element);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;
            qcommonstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QCommonStyle::drawControl(element, opt, p, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subElementRect(QStyle::SubElement r, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_subelementrect_callback) {
            int cbval1 = static_cast<int>(r);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QRect* callback_ret = qcommonstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::subElementRect(r, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) const override {
        if (qcommonstyle_drawcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            QPainter* cbval3 = p;
            QWidget* cbval4 = (QWidget*)w;
            qcommonstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QCommonStyle::drawComplexControl(cc, opt, p, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual QStyle::SubControl hitTestComplexControl(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* w) const override {
        if (qcommonstyle_hittestcomplexcontrol_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            const QPoint& pt_ret = pt;
            // Cast returned reference into pointer
            QPoint* cbval3 = const_cast<QPoint*>(&pt_ret);
            QWidget* cbval4 = (QWidget*)w;
            int callback_ret = qcommonstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<QStyle::SubControl>(callback_ret);
        }
        return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect subControlRect(QStyle::ComplexControl cc, const QStyleOptionComplex* opt, QStyle::SubControl sc, const QWidget* w) const override {
        if (qcommonstyle_subcontrolrect_callback) {
            int cbval1 = static_cast<int>(cc);
            QStyleOptionComplex* cbval2 = (QStyleOptionComplex*)opt;
            int cbval3 = static_cast<int>(sc);
            QWidget* cbval4 = (QWidget*)w;
            QRect* callback_ret = qcommonstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::subControlRect(cc, opt, sc, w);
    }

    // Virtual method for C ABI access and custom callback
    virtual QSize sizeFromContents(QStyle::ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* widget) const override {
        if (qcommonstyle_sizefromcontents_callback) {
            int cbval1 = static_cast<int>(ct);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            const QSize& contentsSize_ret = contentsSize;
            // Cast returned reference into pointer
            QSize* cbval3 = const_cast<QSize*>(&contentsSize_ret);
            QWidget* cbval4 = (QWidget*)widget;
            QSize* callback_ret = qcommonstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int pixelMetric(QStyle::PixelMetric m, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_pixelmetric_callback) {
            int cbval1 = static_cast<int>(m);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            int callback_ret = qcommonstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
            return static_cast<int>(callback_ret);
        }
        return QCommonStyle::pixelMetric(m, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual int styleHint(QStyle::StyleHint sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) const override {
        if (qcommonstyle_stylehint_callback) {
            int cbval1 = static_cast<int>(sh);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)w;
            QStyleHintReturn* cbval4 = shret;
            int callback_ret = qcommonstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
            return static_cast<int>(callback_ret);
        }
        return QCommonStyle::styleHint(sh, opt, w, shret);
    }

    // Virtual method for C ABI access and custom callback
    virtual QIcon standardIcon(QStyle::StandardPixmap standardIcon, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardicon_callback) {
            int cbval1 = static_cast<int>(standardIcon);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QIcon* callback_ret = qcommonstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::standardIcon(standardIcon, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap standardPixmap(QStyle::StandardPixmap sp, const QStyleOption* opt, const QWidget* widget) const override {
        if (qcommonstyle_standardpixmap_callback) {
            int cbval1 = static_cast<int>(sp);
            QStyleOption* cbval2 = (QStyleOption*)opt;
            QWidget* cbval3 = (QWidget*)widget;
            QPixmap* callback_ret = qcommonstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::standardPixmap(sp, opt, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
        if (qcommonstyle_generatediconpixmap_callback) {
            int cbval1 = static_cast<int>(iconMode);
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval2 = const_cast<QPixmap*>(&pixmap_ret);
            QStyleOption* cbval3 = (QStyleOption*)opt;
            QPixmap* callback_ret = qcommonstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
    }

    // Virtual method for C ABI access and custom callback
    virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
        if (qcommonstyle_layoutspacing_callback) {
            int cbval1 = static_cast<int>(control1);
            int cbval2 = static_cast<int>(control2);
            int cbval3 = static_cast<int>(orientation);
            QStyleOption* cbval4 = (QStyleOption*)option;
            QWidget* cbval5 = (QWidget*)widget;
            int callback_ret = qcommonstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            return static_cast<int>(callback_ret);
        }
        return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QPalette& param1) override {
        if (qcommonstyle_polish_callback) {
            QPalette& param1_ret = param1;
            // Cast returned reference into pointer
            QPalette* cbval1 = &param1_ret;
            qcommonstyle_polish_callback(this, cbval1);
            return;
        }
        QCommonStyle::polish(param1);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QApplication* app) override {
        if (qcommonstyle_polish2_callback) {
            QApplication* cbval1 = app;
            qcommonstyle_polish2_callback(this, cbval1);
            return;
        }
        QCommonStyle::polish(app);
    }

    // Virtual method for C ABI access and custom callback
    virtual void polish(QWidget* widget) override {
        if (qcommonstyle_polish3_callback) {
            QWidget* cbval1 = widget;
            qcommonstyle_polish3_callback(this, cbval1);
            return;
        }
        QCommonStyle::polish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QWidget* widget) override {
        if (qcommonstyle_unpolish_callback) {
            QWidget* cbval1 = widget;
            qcommonstyle_unpolish_callback(this, cbval1);
            return;
        }
        QCommonStyle::unpolish(widget);
    }

    // Virtual method for C ABI access and custom callback
    virtual void unpolish(QApplication* application) override {
        if (qcommonstyle_unpolish2_callback) {
            QApplication* cbval1 = application;
            qcommonstyle_unpolish2_callback(this, cbval1);
            return;
        }
        QCommonStyle::unpolish(application);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
        if (qcommonstyle_itemtextrect_callback) {
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
            QRect* callback_ret = qcommonstyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            libqt_free(text_str);
            return callback_ret_Value;
        }
        return QCommonStyle::itemTextRect(fm, r, flags, enabled, text);
    }

    // Virtual method for C ABI access and custom callback
    virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
        if (qcommonstyle_itempixmaprect_callback) {
            const QRect& r_ret = r;
            // Cast returned reference into pointer
            QRect* cbval1 = const_cast<QRect*>(&r_ret);
            int cbval2 = flags;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval3 = const_cast<QPixmap*>(&pixmap_ret);
            QRect* callback_ret = qcommonstyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::itemPixmapRect(r, flags, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
        if (qcommonstyle_drawitemtext_callback) {
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
            qcommonstyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
            libqt_free(text_str);
            return;
        }
        QCommonStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
    }

    // Virtual method for C ABI access and custom callback
    virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
        if (qcommonstyle_drawitempixmap_callback) {
            QPainter* cbval1 = painter;
            const QRect& rect_ret = rect;
            // Cast returned reference into pointer
            QRect* cbval2 = const_cast<QRect*>(&rect_ret);
            int cbval3 = alignment;
            const QPixmap& pixmap_ret = pixmap;
            // Cast returned reference into pointer
            QPixmap* cbval4 = const_cast<QPixmap*>(&pixmap_ret);
            qcommonstyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
            return;
        }
        QCommonStyle::drawItemPixmap(painter, rect, alignment, pixmap);
    }

    // Virtual method for C ABI access and custom callback
    virtual QPalette standardPalette() const override {
        if (qcommonstyle_standardpalette_callback) {
            QPalette* callback_ret = qcommonstyle_standardpalette_callback(this);
            auto callback_ret_Value = std::move(*callback_ret);
            delete callback_ret;
            return callback_ret_Value;
        }
        return QCommonStyle::standardPalette();
    }

    // Virtual method for C ABI access and custom callback
    virtual bool event(QEvent* event) override {
        if (qcommonstyle_event_callback) {
            QEvent* cbval1 = event;
            bool callback_ret = qcommonstyle_event_callback(this, cbval1);
            return callback_ret;
        }
        return QCommonStyle::event(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual bool eventFilter(QObject* watched, QEvent* event) override {
        if (qcommonstyle_eventfilter_callback) {
            QObject* cbval1 = watched;
            QEvent* cbval2 = event;
            bool callback_ret = qcommonstyle_eventfilter_callback(this, cbval1, cbval2);
            return callback_ret;
        }
        return QCommonStyle::eventFilter(watched, event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void timerEvent(QTimerEvent* event) override {
        if (qcommonstyle_timerevent_callback) {
            QTimerEvent* cbval1 = event;
            qcommonstyle_timerevent_callback(this, cbval1);
            return;
        }
        QCommonStyle::timerEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void childEvent(QChildEvent* event) override {
        if (qcommonstyle_childevent_callback) {
            QChildEvent* cbval1 = event;
            qcommonstyle_childevent_callback(this, cbval1);
            return;
        }
        QCommonStyle::childEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void customEvent(QEvent* event) override {
        if (qcommonstyle_customevent_callback) {
            QEvent* cbval1 = event;
            qcommonstyle_customevent_callback(this, cbval1);
            return;
        }
        QCommonStyle::customEvent(event);
    }

    // Virtual method for C ABI access and custom callback
    virtual void connectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_connectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcommonstyle_connectnotify_callback(this, cbval1);
            return;
        }
        QCommonStyle::connectNotify(signal);
    }

    // Virtual method for C ABI access and custom callback
    virtual void disconnectNotify(const QMetaMethod& signal) override {
        if (qcommonstyle_disconnectnotify_callback) {
            const QMetaMethod& signal_ret = signal;
            // Cast returned reference into pointer
            QMetaMethod* cbval1 = const_cast<QMetaMethod*>(&signal_ret);
            qcommonstyle_disconnectnotify_callback(this, cbval1);
            return;
        }
        QCommonStyle::disconnectNotify(signal);
    }

    // Friend functions
    friend void QCommonStyle_SuperTimerEvent(QCommonStyle* self, QTimerEvent* event);
    friend void QCommonStyle_SuperChildEvent(QCommonStyle* self, QChildEvent* event);
    friend void QCommonStyle_SuperCustomEvent(QCommonStyle* self, QEvent* event);
    friend void QCommonStyle_SuperConnectNotify(QCommonStyle* self, const QMetaMethod* signal);
    friend void QCommonStyle_SuperDisconnectNotify(QCommonStyle* self, const QMetaMethod* signal);
};

#endif
