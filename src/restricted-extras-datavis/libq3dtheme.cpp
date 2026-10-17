#include <Q3DTheme>
#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QLinearGradient>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QTimerEvent>
#include <q3dtheme.h>
#include "libq3dtheme.h"
#include "libq3dtheme.hxx"

Q3DTheme* Q3DTheme_new() {
    return new VirtualQ3DTheme();
}

Q3DTheme* Q3DTheme_new2(int themeType) {
    return new VirtualQ3DTheme(static_cast<Q3DTheme::Theme>(themeType));
}

Q3DTheme* Q3DTheme_new3(QObject* parent) {
    return new VirtualQ3DTheme(parent);
}

Q3DTheme* Q3DTheme_new4(int themeType, QObject* parent) {
    return new VirtualQ3DTheme(static_cast<Q3DTheme::Theme>(themeType), parent);
}

QMetaObject* Q3DTheme_MetaObject(const Q3DTheme* self) {
    return (QMetaObject*)self->metaObject();
}

void* Q3DTheme_Metacast(Q3DTheme* self, const char* param1) {
    return self->qt_metacast(param1);
}

int Q3DTheme_Metacall(Q3DTheme* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string Q3DTheme_Tr(const char* s) {
    auto _ret = Q3DTheme::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Q3DTheme_SetType(Q3DTheme* self, int themeType) {
    self->setType(static_cast<Q3DTheme::Theme>(themeType));
}

int Q3DTheme_Type(const Q3DTheme* self) {
    return static_cast<int>(self->type());
}

void Q3DTheme_SetBaseColors(Q3DTheme* self, const libqt_list /* of QColor* */ colors) {
    QList<QColor> colors_QList;
    colors_QList.reserve(colors.len);
    QColor** colors_arr = static_cast<QColor**>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(*(colors_arr[i]));
    }
    self->setBaseColors(colors_QList);
}

libqt_list /* of QColor* */ Q3DTheme_BaseColors(const Q3DTheme* self) {
    QList<QColor> _ret = self->baseColors();
    // Convert QList<> from C++ memory to manually-managed C memory
    QColor** _arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QColor(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Q3DTheme_SetBackgroundColor(Q3DTheme* self, const QColor* color) {
    self->setBackgroundColor(*color);
}

QColor* Q3DTheme_BackgroundColor(const Q3DTheme* self) {
    return new QColor(self->backgroundColor());
}

void Q3DTheme_SetWindowColor(Q3DTheme* self, const QColor* color) {
    self->setWindowColor(*color);
}

QColor* Q3DTheme_WindowColor(const Q3DTheme* self) {
    return new QColor(self->windowColor());
}

void Q3DTheme_SetLabelTextColor(Q3DTheme* self, const QColor* color) {
    self->setLabelTextColor(*color);
}

QColor* Q3DTheme_LabelTextColor(const Q3DTheme* self) {
    return new QColor(self->labelTextColor());
}

void Q3DTheme_SetLabelBackgroundColor(Q3DTheme* self, const QColor* color) {
    self->setLabelBackgroundColor(*color);
}

QColor* Q3DTheme_LabelBackgroundColor(const Q3DTheme* self) {
    return new QColor(self->labelBackgroundColor());
}

void Q3DTheme_SetGridLineColor(Q3DTheme* self, const QColor* color) {
    self->setGridLineColor(*color);
}

QColor* Q3DTheme_GridLineColor(const Q3DTheme* self) {
    return new QColor(self->gridLineColor());
}

void Q3DTheme_SetSingleHighlightColor(Q3DTheme* self, const QColor* color) {
    self->setSingleHighlightColor(*color);
}

QColor* Q3DTheme_SingleHighlightColor(const Q3DTheme* self) {
    return new QColor(self->singleHighlightColor());
}

void Q3DTheme_SetMultiHighlightColor(Q3DTheme* self, const QColor* color) {
    self->setMultiHighlightColor(*color);
}

QColor* Q3DTheme_MultiHighlightColor(const Q3DTheme* self) {
    return new QColor(self->multiHighlightColor());
}

void Q3DTheme_SetLightColor(Q3DTheme* self, const QColor* color) {
    self->setLightColor(*color);
}

QColor* Q3DTheme_LightColor(const Q3DTheme* self) {
    return new QColor(self->lightColor());
}

void Q3DTheme_SetBaseGradients(Q3DTheme* self, const libqt_list /* of QLinearGradient* */ gradients) {
    QList<QLinearGradient> gradients_QList;
    gradients_QList.reserve(gradients.len);
    QLinearGradient** gradients_arr = static_cast<QLinearGradient**>(gradients.data);
    for (size_t i = 0; i < gradients.len; ++i) {
        gradients_QList.push_back(*(gradients_arr[i]));
    }
    self->setBaseGradients(gradients_QList);
}

libqt_list /* of QLinearGradient* */ Q3DTheme_BaseGradients(const Q3DTheme* self) {
    QList<QLinearGradient> _ret = self->baseGradients();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLinearGradient** _arr = static_cast<QLinearGradient**>(malloc(sizeof(QLinearGradient*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLinearGradient(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void Q3DTheme_SetSingleHighlightGradient(Q3DTheme* self, const QLinearGradient* gradient) {
    self->setSingleHighlightGradient(*gradient);
}

QLinearGradient* Q3DTheme_SingleHighlightGradient(const Q3DTheme* self) {
    return new QLinearGradient(self->singleHighlightGradient());
}

void Q3DTheme_SetMultiHighlightGradient(Q3DTheme* self, const QLinearGradient* gradient) {
    self->setMultiHighlightGradient(*gradient);
}

QLinearGradient* Q3DTheme_MultiHighlightGradient(const Q3DTheme* self) {
    return new QLinearGradient(self->multiHighlightGradient());
}

void Q3DTheme_SetLightStrength(Q3DTheme* self, float strength) {
    self->setLightStrength(static_cast<float>(strength));
}

float Q3DTheme_LightStrength(const Q3DTheme* self) {
    return self->lightStrength();
}

void Q3DTheme_SetAmbientLightStrength(Q3DTheme* self, float strength) {
    self->setAmbientLightStrength(static_cast<float>(strength));
}

float Q3DTheme_AmbientLightStrength(const Q3DTheme* self) {
    return self->ambientLightStrength();
}

void Q3DTheme_SetHighlightLightStrength(Q3DTheme* self, float strength) {
    self->setHighlightLightStrength(static_cast<float>(strength));
}

float Q3DTheme_HighlightLightStrength(const Q3DTheme* self) {
    return self->highlightLightStrength();
}

void Q3DTheme_SetLabelBorderEnabled(Q3DTheme* self, bool enabled) {
    self->setLabelBorderEnabled(enabled);
}

bool Q3DTheme_IsLabelBorderEnabled(const Q3DTheme* self) {
    return self->isLabelBorderEnabled();
}

void Q3DTheme_SetFont(Q3DTheme* self, const QFont* font) {
    self->setFont(*font);
}

QFont* Q3DTheme_Font(const Q3DTheme* self) {
    return new QFont(self->font());
}

void Q3DTheme_SetBackgroundEnabled(Q3DTheme* self, bool enabled) {
    self->setBackgroundEnabled(enabled);
}

bool Q3DTheme_IsBackgroundEnabled(const Q3DTheme* self) {
    return self->isBackgroundEnabled();
}

void Q3DTheme_SetGridEnabled(Q3DTheme* self, bool enabled) {
    self->setGridEnabled(enabled);
}

bool Q3DTheme_IsGridEnabled(const Q3DTheme* self) {
    return self->isGridEnabled();
}

void Q3DTheme_SetLabelBackgroundEnabled(Q3DTheme* self, bool enabled) {
    self->setLabelBackgroundEnabled(enabled);
}

bool Q3DTheme_IsLabelBackgroundEnabled(const Q3DTheme* self) {
    return self->isLabelBackgroundEnabled();
}

void Q3DTheme_SetColorStyle(Q3DTheme* self, int style) {
    self->setColorStyle(static_cast<Q3DTheme::ColorStyle>(style));
}

int Q3DTheme_ColorStyle(const Q3DTheme* self) {
    return static_cast<int>(self->colorStyle());
}

void Q3DTheme_TypeChanged(Q3DTheme* self, int themeType) {
    self->typeChanged(static_cast<Q3DTheme::Theme>(themeType));
}

void Q3DTheme_Connect_TypeChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, int) = reinterpret_cast<void (*)(Q3DTheme*, int)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(Q3DTheme::Theme)>(&Q3DTheme::typeChanged),
                      [self, slotFunc](Q3DTheme::Theme themeType) {
                          int sigval1 = static_cast<int>(themeType);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_BaseColorsChanged(Q3DTheme* self, const libqt_list /* of QColor* */ colors) {
    QList<QColor> colors_QList;
    colors_QList.reserve(colors.len);
    QColor** colors_arr = static_cast<QColor**>(colors.data);
    for (size_t i = 0; i < colors.len; ++i) {
        colors_QList.push_back(*(colors_arr[i]));
    }
    self->baseColorsChanged(colors_QList);
}

void Q3DTheme_Connect_BaseColorsChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, libqt_list /* of QColor* */) = reinterpret_cast<void (*)(Q3DTheme*, libqt_list /* of QColor* */)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QList<QColor>&)>(&Q3DTheme::baseColorsChanged),
                      [self, slotFunc](const QList<QColor>& colors) {
                          const QList<QColor>& colors_ret = colors;
                          // Convert QList<> from C++ memory to manually-managed C memory
                          QColor** colors_arr = static_cast<QColor**>(malloc(sizeof(QColor*) * (colors_ret.size())));
                          for (qsizetype i = 0; i < colors_ret.size(); ++i) {
                              colors_arr[i] = new QColor(colors_ret[i]);
                          }
                          libqt_list colors_out;
                          colors_out.len = colors_ret.size();
                          colors_out.data = static_cast<void*>(colors_arr);
                          libqt_list /* of QColor* */ sigval1 = colors_out;
                          slotFunc(self, sigval1);
                          free(colors_arr);
                      });
}

void Q3DTheme_BackgroundColorChanged(Q3DTheme* self, const QColor* color) {
    self->backgroundColorChanged(*color);
}

void Q3DTheme_Connect_BackgroundColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::backgroundColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_WindowColorChanged(Q3DTheme* self, const QColor* color) {
    self->windowColorChanged(*color);
}

void Q3DTheme_Connect_WindowColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::windowColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LabelTextColorChanged(Q3DTheme* self, const QColor* color) {
    self->labelTextColorChanged(*color);
}

void Q3DTheme_Connect_LabelTextColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::labelTextColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LabelBackgroundColorChanged(Q3DTheme* self, const QColor* color) {
    self->labelBackgroundColorChanged(*color);
}

void Q3DTheme_Connect_LabelBackgroundColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::labelBackgroundColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_GridLineColorChanged(Q3DTheme* self, const QColor* color) {
    self->gridLineColorChanged(*color);
}

void Q3DTheme_Connect_GridLineColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::gridLineColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_SingleHighlightColorChanged(Q3DTheme* self, const QColor* color) {
    self->singleHighlightColorChanged(*color);
}

void Q3DTheme_Connect_SingleHighlightColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::singleHighlightColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_MultiHighlightColorChanged(Q3DTheme* self, const QColor* color) {
    self->multiHighlightColorChanged(*color);
}

void Q3DTheme_Connect_MultiHighlightColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::multiHighlightColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LightColorChanged(Q3DTheme* self, const QColor* color) {
    self->lightColorChanged(*color);
}

void Q3DTheme_Connect_LightColorChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QColor*) = reinterpret_cast<void (*)(Q3DTheme*, QColor*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QColor&)>(&Q3DTheme::lightColorChanged),
                      [self, slotFunc](const QColor& color) {
                          const QColor& color_ret = color;
                          // Cast returned reference into pointer
                          QColor* sigval1 = const_cast<QColor*>(&color_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_BaseGradientsChanged(Q3DTheme* self, const libqt_list /* of QLinearGradient* */ gradients) {
    QList<QLinearGradient> gradients_QList;
    gradients_QList.reserve(gradients.len);
    QLinearGradient** gradients_arr = static_cast<QLinearGradient**>(gradients.data);
    for (size_t i = 0; i < gradients.len; ++i) {
        gradients_QList.push_back(*(gradients_arr[i]));
    }
    self->baseGradientsChanged(gradients_QList);
}

void Q3DTheme_Connect_BaseGradientsChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, libqt_list /* of QLinearGradient* */) = reinterpret_cast<void (*)(Q3DTheme*, libqt_list /* of QLinearGradient* */)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QList<QLinearGradient>&)>(&Q3DTheme::baseGradientsChanged),
                      [self, slotFunc](const QList<QLinearGradient>& gradients) {
                          const QList<QLinearGradient>& gradients_ret = gradients;
                          // Convert QList<> from C++ memory to manually-managed C memory
                          QLinearGradient** gradients_arr = static_cast<QLinearGradient**>(malloc(sizeof(QLinearGradient*) * (gradients_ret.size())));
                          for (qsizetype i = 0; i < gradients_ret.size(); ++i) {
                              gradients_arr[i] = new QLinearGradient(gradients_ret[i]);
                          }
                          libqt_list gradients_out;
                          gradients_out.len = gradients_ret.size();
                          gradients_out.data = static_cast<void*>(gradients_arr);
                          libqt_list /* of QLinearGradient* */ sigval1 = gradients_out;
                          slotFunc(self, sigval1);
                          free(gradients_arr);
                      });
}

void Q3DTheme_SingleHighlightGradientChanged(Q3DTheme* self, const QLinearGradient* gradient) {
    self->singleHighlightGradientChanged(*gradient);
}

void Q3DTheme_Connect_SingleHighlightGradientChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QLinearGradient*) = reinterpret_cast<void (*)(Q3DTheme*, QLinearGradient*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QLinearGradient&)>(&Q3DTheme::singleHighlightGradientChanged),
                      [self, slotFunc](const QLinearGradient& gradient) {
                          const QLinearGradient& gradient_ret = gradient;
                          // Cast returned reference into pointer
                          QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_MultiHighlightGradientChanged(Q3DTheme* self, const QLinearGradient* gradient) {
    self->multiHighlightGradientChanged(*gradient);
}

void Q3DTheme_Connect_MultiHighlightGradientChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QLinearGradient*) = reinterpret_cast<void (*)(Q3DTheme*, QLinearGradient*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QLinearGradient&)>(&Q3DTheme::multiHighlightGradientChanged),
                      [self, slotFunc](const QLinearGradient& gradient) {
                          const QLinearGradient& gradient_ret = gradient;
                          // Cast returned reference into pointer
                          QLinearGradient* sigval1 = const_cast<QLinearGradient*>(&gradient_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LightStrengthChanged(Q3DTheme* self, float strength) {
    self->lightStrengthChanged(static_cast<float>(strength));
}

void Q3DTheme_Connect_LightStrengthChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, float) = reinterpret_cast<void (*)(Q3DTheme*, float)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(float)>(&Q3DTheme::lightStrengthChanged),
                      [self, slotFunc](float strength) {
                          float sigval1 = strength;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_AmbientLightStrengthChanged(Q3DTheme* self, float strength) {
    self->ambientLightStrengthChanged(static_cast<float>(strength));
}

void Q3DTheme_Connect_AmbientLightStrengthChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, float) = reinterpret_cast<void (*)(Q3DTheme*, float)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(float)>(&Q3DTheme::ambientLightStrengthChanged),
                      [self, slotFunc](float strength) {
                          float sigval1 = strength;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_HighlightLightStrengthChanged(Q3DTheme* self, float strength) {
    self->highlightLightStrengthChanged(static_cast<float>(strength));
}

void Q3DTheme_Connect_HighlightLightStrengthChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, float) = reinterpret_cast<void (*)(Q3DTheme*, float)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(float)>(&Q3DTheme::highlightLightStrengthChanged),
                      [self, slotFunc](float strength) {
                          float sigval1 = strength;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LabelBorderEnabledChanged(Q3DTheme* self, bool enabled) {
    self->labelBorderEnabledChanged(enabled);
}

void Q3DTheme_Connect_LabelBorderEnabledChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, bool) = reinterpret_cast<void (*)(Q3DTheme*, bool)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(bool)>(&Q3DTheme::labelBorderEnabledChanged),
                      [self, slotFunc](bool enabled) {
                          bool sigval1 = enabled;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_FontChanged(Q3DTheme* self, const QFont* font) {
    self->fontChanged(*font);
}

void Q3DTheme_Connect_FontChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, QFont*) = reinterpret_cast<void (*)(Q3DTheme*, QFont*)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(const QFont&)>(&Q3DTheme::fontChanged),
                      [self, slotFunc](const QFont& font) {
                          const QFont& font_ret = font;
                          // Cast returned reference into pointer
                          QFont* sigval1 = const_cast<QFont*>(&font_ret);
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_BackgroundEnabledChanged(Q3DTheme* self, bool enabled) {
    self->backgroundEnabledChanged(enabled);
}

void Q3DTheme_Connect_BackgroundEnabledChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, bool) = reinterpret_cast<void (*)(Q3DTheme*, bool)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(bool)>(&Q3DTheme::backgroundEnabledChanged),
                      [self, slotFunc](bool enabled) {
                          bool sigval1 = enabled;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_GridEnabledChanged(Q3DTheme* self, bool enabled) {
    self->gridEnabledChanged(enabled);
}

void Q3DTheme_Connect_GridEnabledChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, bool) = reinterpret_cast<void (*)(Q3DTheme*, bool)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(bool)>(&Q3DTheme::gridEnabledChanged),
                      [self, slotFunc](bool enabled) {
                          bool sigval1 = enabled;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_LabelBackgroundEnabledChanged(Q3DTheme* self, bool enabled) {
    self->labelBackgroundEnabledChanged(enabled);
}

void Q3DTheme_Connect_LabelBackgroundEnabledChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, bool) = reinterpret_cast<void (*)(Q3DTheme*, bool)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(bool)>(&Q3DTheme::labelBackgroundEnabledChanged),
                      [self, slotFunc](bool enabled) {
                          bool sigval1 = enabled;
                          slotFunc(self, sigval1);
                      });
}

void Q3DTheme_ColorStyleChanged(Q3DTheme* self, int style) {
    self->colorStyleChanged(static_cast<Q3DTheme::ColorStyle>(style));
}

void Q3DTheme_Connect_ColorStyleChanged(Q3DTheme* self, intptr_t slot) {
    void (*slotFunc)(Q3DTheme*, int) = reinterpret_cast<void (*)(Q3DTheme*, int)>(slot);
    Q3DTheme::connect(self,
                      static_cast<void (Q3DTheme::*)(Q3DTheme::ColorStyle)>(&Q3DTheme::colorStyleChanged),
                      [self, slotFunc](Q3DTheme::ColorStyle style) {
                          int sigval1 = static_cast<int>(style);
                          slotFunc(self, sigval1);
                      });
}

libqt_string Q3DTheme_Tr2(const char* s, const char* c) {
    auto _ret = Q3DTheme::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string Q3DTheme_Tr3(const char* s, const char* c, int n) {
    auto _ret = Q3DTheme::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Base class handler implementation
QMetaObject* Q3DTheme_SuperMetaObject(const Q3DTheme* self) {
    return (QMetaObject*)self->Q3DTheme::metaObject();
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnMetaObject(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = const_cast<VirtualQ3DTheme*>(dynamic_cast<const VirtualQ3DTheme*>(self)))
        vq3dtheme->q3dtheme_metaobject_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* Q3DTheme_SuperMetacast(Q3DTheme* self, const char* param1) {
    return self->Q3DTheme::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnMetacast(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_metacast_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_Metacast_Callback>(slot);
}

// Base class handler implementation
int Q3DTheme_SuperMetacall(Q3DTheme* self, int param1, int param2, void** param3) {
    return self->Q3DTheme::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnMetacall(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_metacall_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_Metacall_Callback>(slot);
}

// Derived class handler implementation
bool Q3DTheme_Event(Q3DTheme* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool Q3DTheme_SuperEvent(Q3DTheme* self, QEvent* event) {
    return self->Q3DTheme::event(event);
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnEvent(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_event_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_Event_Callback>(slot);
}

// Derived class handler implementation
bool Q3DTheme_EventFilter(Q3DTheme* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool Q3DTheme_SuperEventFilter(Q3DTheme* self, QObject* watched, QEvent* event) {
    return self->Q3DTheme::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnEventFilter(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_eventfilter_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void Q3DTheme_TimerEvent(Q3DTheme* self, QTimerEvent* event) {
    auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self);
    if (vq3dtheme) {
        vq3dtheme->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DTheme::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DTheme_SuperTimerEvent(Q3DTheme* self, QTimerEvent* event) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self)) {
        vq3dtheme->Q3DTheme::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DTheme::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnTimerEvent(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_timerevent_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DTheme_ChildEvent(Q3DTheme* self, QChildEvent* event) {
    auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self);
    if (vq3dtheme) {
        vq3dtheme->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DTheme::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DTheme_SuperChildEvent(Q3DTheme* self, QChildEvent* event) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self)) {
        vq3dtheme->Q3DTheme::childEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DTheme::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnChildEvent(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_childevent_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DTheme_CustomEvent(Q3DTheme* self, QEvent* event) {
    auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self);
    if (vq3dtheme) {
        vq3dtheme->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method Q3DTheme::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DTheme_SuperCustomEvent(Q3DTheme* self, QEvent* event) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self)) {
        vq3dtheme->Q3DTheme::customEvent(event);
    } else
        qFatal("Error: Protected virtual method Q3DTheme::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnCustomEvent(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_customevent_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void Q3DTheme_ConnectNotify(Q3DTheme* self, const QMetaMethod* signal) {
    auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self);
    if (vq3dtheme) {
        vq3dtheme->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DTheme::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DTheme_SuperConnectNotify(Q3DTheme* self, const QMetaMethod* signal) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self)) {
        vq3dtheme->Q3DTheme::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DTheme::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnConnectNotify(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_connectnotify_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void Q3DTheme_DisconnectNotify(Q3DTheme* self, const QMetaMethod* signal) {
    auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self);
    if (vq3dtheme) {
        vq3dtheme->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method Q3DTheme::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void Q3DTheme_SuperDisconnectNotify(Q3DTheme* self, const QMetaMethod* signal) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self)) {
        vq3dtheme->Q3DTheme::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method Q3DTheme::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void Q3DTheme_OnDisconnectNotify(Q3DTheme* self, intptr_t slot) {
    if (auto* vq3dtheme = dynamic_cast<VirtualQ3DTheme*>(self))
        vq3dtheme->q3dtheme_disconnectnotify_callback = reinterpret_cast<VirtualQ3DTheme::Q3DTheme_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QObject* Q3DTheme_Sender(const Q3DTheme* self) {
    if (auto* vq3dtheme = const_cast<VirtualQ3DTheme*>(dynamic_cast<const VirtualQ3DTheme*>(self))) {
        return vq3dtheme->VirtualQ3DTheme::sender();
    } else
        qFatal("Error: Protected method Q3DTheme::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DTheme_SenderSignalIndex(const Q3DTheme* self) {
    if (auto* vq3dtheme = const_cast<VirtualQ3DTheme*>(dynamic_cast<const VirtualQ3DTheme*>(self))) {
        return vq3dtheme->VirtualQ3DTheme::senderSignalIndex();
    } else
        qFatal("Error: Protected method Q3DTheme::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int Q3DTheme_Receivers(const Q3DTheme* self, const char* signal) {
    if (auto* vq3dtheme = const_cast<VirtualQ3DTheme*>(dynamic_cast<const VirtualQ3DTheme*>(self))) {
        return vq3dtheme->VirtualQ3DTheme::receivers(signal);
    } else
        qFatal("Error: Protected method Q3DTheme::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool Q3DTheme_IsSignalConnected(const Q3DTheme* self, const QMetaMethod* signal) {
    if (auto* vq3dtheme = const_cast<VirtualQ3DTheme*>(dynamic_cast<const VirtualQ3DTheme*>(self))) {
        return vq3dtheme->VirtualQ3DTheme::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method Q3DTheme::isSignalConnected called without a directly constructed type");
}

void Q3DTheme_Delete(Q3DTheme* self) {
    delete self;
}
