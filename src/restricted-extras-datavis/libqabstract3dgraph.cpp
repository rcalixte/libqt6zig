#include <Q3DScene>
#include <Q3DTheme>
#include <QAbstract3DAxis>
#include <QAbstract3DGraph>
#include <QAbstract3DInputHandler>
#include <QAbstract3DSeries>
#include <QCustom3DItem>
#include <QEvent>
#include <QExposeEvent>
#include <QImage>
#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QObject>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QSurface>
#include <QTouchEvent>
#include <QVector3D>
#include <QWheelEvent>
#include <QWindow>
#include <qabstract3dgraph.h>
#include "libqabstract3dgraph.h"
#include "libqabstract3dgraph.hxx"

QMetaObject* QAbstract3DGraph_MetaObject(const QAbstract3DGraph* self) {
    return (QMetaObject*)self->metaObject();
}

void* QAbstract3DGraph_Metacast(QAbstract3DGraph* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QAbstract3DGraph_Metacall(QAbstract3DGraph* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QAbstract3DGraph_Tr(const char* s) {
    auto _ret = QAbstract3DGraph::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QAbstract3DGraph_AddInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler) {
    self->addInputHandler(inputHandler);
}

void QAbstract3DGraph_ReleaseInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler) {
    self->releaseInputHandler(inputHandler);
}

void QAbstract3DGraph_SetActiveInputHandler(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler) {
    self->setActiveInputHandler(inputHandler);
}

QAbstract3DInputHandler* QAbstract3DGraph_ActiveInputHandler(const QAbstract3DGraph* self) {
    return self->activeInputHandler();
}

libqt_list /* of QAbstract3DInputHandler* */ QAbstract3DGraph_InputHandlers(const QAbstract3DGraph* self) {
    QList<QAbstract3DInputHandler*> _ret = self->inputHandlers();
    // Convert QList<> from C++ memory to manually-managed C memory
    QAbstract3DInputHandler** _arr = static_cast<QAbstract3DInputHandler**>(malloc(sizeof(QAbstract3DInputHandler*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstract3DGraph_AddTheme(QAbstract3DGraph* self, Q3DTheme* theme) {
    self->addTheme(theme);
}

void QAbstract3DGraph_ReleaseTheme(QAbstract3DGraph* self, Q3DTheme* theme) {
    self->releaseTheme(theme);
}

void QAbstract3DGraph_SetActiveTheme(QAbstract3DGraph* self, Q3DTheme* theme) {
    self->setActiveTheme(theme);
}

Q3DTheme* QAbstract3DGraph_ActiveTheme(const QAbstract3DGraph* self) {
    return self->activeTheme();
}

libqt_list /* of Q3DTheme* */ QAbstract3DGraph_Themes(const QAbstract3DGraph* self) {
    QList<Q3DTheme*> _ret = self->themes();
    // Convert QList<> from C++ memory to manually-managed C memory
    Q3DTheme** _arr = static_cast<Q3DTheme**>(malloc(sizeof(Q3DTheme*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QAbstract3DGraph_SetSelectionMode(QAbstract3DGraph* self, int mode) {
    self->setSelectionMode(static_cast<QAbstract3DGraph::SelectionFlags>(mode));
}

int QAbstract3DGraph_SelectionMode(const QAbstract3DGraph* self) {
    return static_cast<int>(self->selectionMode());
}

void QAbstract3DGraph_SetShadowQuality(QAbstract3DGraph* self, int quality) {
    self->setShadowQuality(static_cast<QAbstract3DGraph::ShadowQuality>(quality));
}

int QAbstract3DGraph_ShadowQuality(const QAbstract3DGraph* self) {
    return static_cast<int>(self->shadowQuality());
}

bool QAbstract3DGraph_ShadowsSupported(const QAbstract3DGraph* self) {
    return self->shadowsSupported();
}

Q3DScene* QAbstract3DGraph_Scene(const QAbstract3DGraph* self) {
    return self->scene();
}

void QAbstract3DGraph_ClearSelection(QAbstract3DGraph* self) {
    self->clearSelection();
}

bool QAbstract3DGraph_HasSeries(const QAbstract3DGraph* self, QAbstract3DSeries* series) {
    return self->hasSeries(series);
}

int QAbstract3DGraph_AddCustomItem(QAbstract3DGraph* self, QCustom3DItem* item) {
    return self->addCustomItem(item);
}

void QAbstract3DGraph_RemoveCustomItems(QAbstract3DGraph* self) {
    self->removeCustomItems();
}

void QAbstract3DGraph_RemoveCustomItem(QAbstract3DGraph* self, QCustom3DItem* item) {
    self->removeCustomItem(item);
}

void QAbstract3DGraph_RemoveCustomItemAt(QAbstract3DGraph* self, const QVector3D* position) {
    self->removeCustomItemAt(*position);
}

void QAbstract3DGraph_ReleaseCustomItem(QAbstract3DGraph* self, QCustom3DItem* item) {
    self->releaseCustomItem(item);
}

libqt_list /* of QCustom3DItem* */ QAbstract3DGraph_CustomItems(const QAbstract3DGraph* self) {
    QList<QCustom3DItem*> _ret = self->customItems();
    // Convert QList<> from C++ memory to manually-managed C memory
    QCustom3DItem** _arr = static_cast<QCustom3DItem**>(malloc(sizeof(QCustom3DItem*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = _ret[i];
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

int QAbstract3DGraph_SelectedLabelIndex(const QAbstract3DGraph* self) {
    return self->selectedLabelIndex();
}

QAbstract3DAxis* QAbstract3DGraph_SelectedAxis(const QAbstract3DGraph* self) {
    return self->selectedAxis();
}

int QAbstract3DGraph_SelectedCustomItemIndex(const QAbstract3DGraph* self) {
    return self->selectedCustomItemIndex();
}

QCustom3DItem* QAbstract3DGraph_SelectedCustomItem(const QAbstract3DGraph* self) {
    return self->selectedCustomItem();
}

QImage* QAbstract3DGraph_RenderToImage(QAbstract3DGraph* self) {
    return new QImage(self->renderToImage());
}

void QAbstract3DGraph_SetMeasureFps(QAbstract3DGraph* self, bool enable) {
    self->setMeasureFps(enable);
}

bool QAbstract3DGraph_MeasureFps(const QAbstract3DGraph* self) {
    return self->measureFps();
}

double QAbstract3DGraph_CurrentFps(const QAbstract3DGraph* self) {
    return static_cast<double>(self->currentFps());
}

void QAbstract3DGraph_SetOrthoProjection(QAbstract3DGraph* self, bool enable) {
    self->setOrthoProjection(enable);
}

bool QAbstract3DGraph_IsOrthoProjection(const QAbstract3DGraph* self) {
    return self->isOrthoProjection();
}

int QAbstract3DGraph_SelectedElement(const QAbstract3DGraph* self) {
    return static_cast<int>(self->selectedElement());
}

void QAbstract3DGraph_SetAspectRatio(QAbstract3DGraph* self, double ratio) {
    self->setAspectRatio(static_cast<qreal>(ratio));
}

double QAbstract3DGraph_AspectRatio(const QAbstract3DGraph* self) {
    return static_cast<double>(self->aspectRatio());
}

void QAbstract3DGraph_SetOptimizationHints(QAbstract3DGraph* self, int hints) {
    self->setOptimizationHints(static_cast<QAbstract3DGraph::OptimizationHints>(hints));
}

int QAbstract3DGraph_OptimizationHints(const QAbstract3DGraph* self) {
    return static_cast<int>(self->optimizationHints());
}

void QAbstract3DGraph_SetPolar(QAbstract3DGraph* self, bool enable) {
    self->setPolar(enable);
}

bool QAbstract3DGraph_IsPolar(const QAbstract3DGraph* self) {
    return self->isPolar();
}

void QAbstract3DGraph_SetRadialLabelOffset(QAbstract3DGraph* self, float offset) {
    self->setRadialLabelOffset(static_cast<float>(offset));
}

float QAbstract3DGraph_RadialLabelOffset(const QAbstract3DGraph* self) {
    return self->radialLabelOffset();
}

void QAbstract3DGraph_SetHorizontalAspectRatio(QAbstract3DGraph* self, double ratio) {
    self->setHorizontalAspectRatio(static_cast<qreal>(ratio));
}

double QAbstract3DGraph_HorizontalAspectRatio(const QAbstract3DGraph* self) {
    return static_cast<double>(self->horizontalAspectRatio());
}

void QAbstract3DGraph_SetReflection(QAbstract3DGraph* self, bool enable) {
    self->setReflection(enable);
}

bool QAbstract3DGraph_IsReflection(const QAbstract3DGraph* self) {
    return self->isReflection();
}

void QAbstract3DGraph_SetReflectivity(QAbstract3DGraph* self, double reflectivity) {
    self->setReflectivity(static_cast<qreal>(reflectivity));
}

double QAbstract3DGraph_Reflectivity(const QAbstract3DGraph* self) {
    return static_cast<double>(self->reflectivity());
}

void QAbstract3DGraph_SetLocale(QAbstract3DGraph* self, const QLocale* locale) {
    self->setLocale(*locale);
}

QLocale* QAbstract3DGraph_Locale(const QAbstract3DGraph* self) {
    return new QLocale(self->locale());
}

QVector3D* QAbstract3DGraph_QueriedGraphPosition(const QAbstract3DGraph* self) {
    return new QVector3D(self->queriedGraphPosition());
}

void QAbstract3DGraph_SetMargin(QAbstract3DGraph* self, double margin) {
    self->setMargin(static_cast<qreal>(margin));
}

double QAbstract3DGraph_Margin(const QAbstract3DGraph* self) {
    return static_cast<double>(self->margin());
}

bool QAbstract3DGraph_HasContext(const QAbstract3DGraph* self) {
    return self->hasContext();
}

void QAbstract3DGraph_ActiveInputHandlerChanged(QAbstract3DGraph* self, QAbstract3DInputHandler* inputHandler) {
    self->activeInputHandlerChanged(inputHandler);
}

void QAbstract3DGraph_Connect_ActiveInputHandlerChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, QAbstract3DInputHandler*) = reinterpret_cast<void (*)(QAbstract3DGraph*, QAbstract3DInputHandler*)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(QAbstract3DInputHandler*)>(&QAbstract3DGraph::activeInputHandlerChanged),
                              [self, slotFunc](QAbstract3DInputHandler* inputHandler) {
                                  QAbstract3DInputHandler* sigval1 = inputHandler;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_ActiveThemeChanged(QAbstract3DGraph* self, Q3DTheme* theme) {
    self->activeThemeChanged(theme);
}

void QAbstract3DGraph_Connect_ActiveThemeChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, Q3DTheme*) = reinterpret_cast<void (*)(QAbstract3DGraph*, Q3DTheme*)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(Q3DTheme*)>(&QAbstract3DGraph::activeThemeChanged),
                              [self, slotFunc](Q3DTheme* theme) {
                                  Q3DTheme* sigval1 = theme;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_SelectionModeChanged(QAbstract3DGraph* self, int mode) {
    self->selectionModeChanged(static_cast<QAbstract3DGraph::SelectionFlags>(mode));
}

void QAbstract3DGraph_Connect_SelectionModeChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, int) = reinterpret_cast<void (*)(QAbstract3DGraph*, int)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(QAbstract3DGraph::SelectionFlags)>(&QAbstract3DGraph::selectionModeChanged),
                              [self, slotFunc](QAbstract3DGraph::SelectionFlags mode) {
                                  int sigval1 = static_cast<int>(mode);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_ShadowQualityChanged(QAbstract3DGraph* self, int quality) {
    self->shadowQualityChanged(static_cast<QAbstract3DGraph::ShadowQuality>(quality));
}

void QAbstract3DGraph_Connect_ShadowQualityChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, int) = reinterpret_cast<void (*)(QAbstract3DGraph*, int)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(QAbstract3DGraph::ShadowQuality)>(&QAbstract3DGraph::shadowQualityChanged),
                              [self, slotFunc](QAbstract3DGraph::ShadowQuality quality) {
                                  int sigval1 = static_cast<int>(quality);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_SelectedElementChanged(QAbstract3DGraph* self, int typeVal) {
    self->selectedElementChanged(static_cast<QAbstract3DGraph::ElementType>(typeVal));
}

void QAbstract3DGraph_Connect_SelectedElementChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, int) = reinterpret_cast<void (*)(QAbstract3DGraph*, int)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(QAbstract3DGraph::ElementType)>(&QAbstract3DGraph::selectedElementChanged),
                              [self, slotFunc](QAbstract3DGraph::ElementType typeVal) {
                                  int sigval1 = static_cast<int>(typeVal);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_MeasureFpsChanged(QAbstract3DGraph* self, bool enabled) {
    self->measureFpsChanged(enabled);
}

void QAbstract3DGraph_Connect_MeasureFpsChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, bool) = reinterpret_cast<void (*)(QAbstract3DGraph*, bool)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(bool)>(&QAbstract3DGraph::measureFpsChanged),
                              [self, slotFunc](bool enabled) {
                                  bool sigval1 = enabled;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_CurrentFpsChanged(QAbstract3DGraph* self, double fps) {
    self->currentFpsChanged(static_cast<qreal>(fps));
}

void QAbstract3DGraph_Connect_CurrentFpsChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, double) = reinterpret_cast<void (*)(QAbstract3DGraph*, double)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(qreal)>(&QAbstract3DGraph::currentFpsChanged),
                              [self, slotFunc](qreal fps) {
                                  double sigval1 = static_cast<double>(fps);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_OrthoProjectionChanged(QAbstract3DGraph* self, bool enabled) {
    self->orthoProjectionChanged(enabled);
}

void QAbstract3DGraph_Connect_OrthoProjectionChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, bool) = reinterpret_cast<void (*)(QAbstract3DGraph*, bool)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(bool)>(&QAbstract3DGraph::orthoProjectionChanged),
                              [self, slotFunc](bool enabled) {
                                  bool sigval1 = enabled;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_AspectRatioChanged(QAbstract3DGraph* self, double ratio) {
    self->aspectRatioChanged(static_cast<qreal>(ratio));
}

void QAbstract3DGraph_Connect_AspectRatioChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, double) = reinterpret_cast<void (*)(QAbstract3DGraph*, double)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(qreal)>(&QAbstract3DGraph::aspectRatioChanged),
                              [self, slotFunc](qreal ratio) {
                                  double sigval1 = static_cast<double>(ratio);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_OptimizationHintsChanged(QAbstract3DGraph* self, int hints) {
    self->optimizationHintsChanged(static_cast<QAbstract3DGraph::OptimizationHints>(hints));
}

void QAbstract3DGraph_Connect_OptimizationHintsChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, int) = reinterpret_cast<void (*)(QAbstract3DGraph*, int)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(QAbstract3DGraph::OptimizationHints)>(&QAbstract3DGraph::optimizationHintsChanged),
                              [self, slotFunc](QAbstract3DGraph::OptimizationHints hints) {
                                  int sigval1 = static_cast<int>(hints);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_PolarChanged(QAbstract3DGraph* self, bool enabled) {
    self->polarChanged(enabled);
}

void QAbstract3DGraph_Connect_PolarChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, bool) = reinterpret_cast<void (*)(QAbstract3DGraph*, bool)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(bool)>(&QAbstract3DGraph::polarChanged),
                              [self, slotFunc](bool enabled) {
                                  bool sigval1 = enabled;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_RadialLabelOffsetChanged(QAbstract3DGraph* self, float offset) {
    self->radialLabelOffsetChanged(static_cast<float>(offset));
}

void QAbstract3DGraph_Connect_RadialLabelOffsetChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, float) = reinterpret_cast<void (*)(QAbstract3DGraph*, float)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(float)>(&QAbstract3DGraph::radialLabelOffsetChanged),
                              [self, slotFunc](float offset) {
                                  float sigval1 = offset;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_HorizontalAspectRatioChanged(QAbstract3DGraph* self, double ratio) {
    self->horizontalAspectRatioChanged(static_cast<qreal>(ratio));
}

void QAbstract3DGraph_Connect_HorizontalAspectRatioChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, double) = reinterpret_cast<void (*)(QAbstract3DGraph*, double)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(qreal)>(&QAbstract3DGraph::horizontalAspectRatioChanged),
                              [self, slotFunc](qreal ratio) {
                                  double sigval1 = static_cast<double>(ratio);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_ReflectionChanged(QAbstract3DGraph* self, bool enabled) {
    self->reflectionChanged(enabled);
}

void QAbstract3DGraph_Connect_ReflectionChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, bool) = reinterpret_cast<void (*)(QAbstract3DGraph*, bool)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(bool)>(&QAbstract3DGraph::reflectionChanged),
                              [self, slotFunc](bool enabled) {
                                  bool sigval1 = enabled;
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_ReflectivityChanged(QAbstract3DGraph* self, double reflectivity) {
    self->reflectivityChanged(static_cast<qreal>(reflectivity));
}

void QAbstract3DGraph_Connect_ReflectivityChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, double) = reinterpret_cast<void (*)(QAbstract3DGraph*, double)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(qreal)>(&QAbstract3DGraph::reflectivityChanged),
                              [self, slotFunc](qreal reflectivity) {
                                  double sigval1 = static_cast<double>(reflectivity);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_LocaleChanged(QAbstract3DGraph* self, const QLocale* locale) {
    self->localeChanged(*locale);
}

void QAbstract3DGraph_Connect_LocaleChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, QLocale*) = reinterpret_cast<void (*)(QAbstract3DGraph*, QLocale*)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(const QLocale&)>(&QAbstract3DGraph::localeChanged),
                              [self, slotFunc](const QLocale& locale) {
                                  const QLocale& locale_ret = locale;
                                  // Cast returned reference into pointer
                                  QLocale* sigval1 = const_cast<QLocale*>(&locale_ret);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_QueriedGraphPositionChanged(QAbstract3DGraph* self, const QVector3D* data) {
    self->queriedGraphPositionChanged(*data);
}

void QAbstract3DGraph_Connect_QueriedGraphPositionChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, QVector3D*) = reinterpret_cast<void (*)(QAbstract3DGraph*, QVector3D*)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(const QVector3D&)>(&QAbstract3DGraph::queriedGraphPositionChanged),
                              [self, slotFunc](const QVector3D& data) {
                                  const QVector3D& data_ret = data;
                                  // Cast returned reference into pointer
                                  QVector3D* sigval1 = const_cast<QVector3D*>(&data_ret);
                                  slotFunc(self, sigval1);
                              });
}

void QAbstract3DGraph_MarginChanged(QAbstract3DGraph* self, double margin) {
    self->marginChanged(static_cast<qreal>(margin));
}

void QAbstract3DGraph_Connect_MarginChanged(QAbstract3DGraph* self, intptr_t slot) {
    void (*slotFunc)(QAbstract3DGraph*, double) = reinterpret_cast<void (*)(QAbstract3DGraph*, double)>(slot);
    QAbstract3DGraph::connect(self,
                              static_cast<void (QAbstract3DGraph::*)(qreal)>(&QAbstract3DGraph::marginChanged),
                              [self, slotFunc](qreal margin) {
                                  double sigval1 = static_cast<double>(margin);
                                  slotFunc(self, sigval1);
                              });
}

libqt_string QAbstract3DGraph_Tr2(const char* s, const char* c) {
    auto _ret = QAbstract3DGraph::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QAbstract3DGraph_Tr3(const char* s, const char* c, int n) {
    auto _ret = QAbstract3DGraph::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QImage* QAbstract3DGraph_RenderToImage1(QAbstract3DGraph* self, int msaaSamples) {
    return new QImage(self->renderToImage(static_cast<int>(msaaSamples)));
}

QImage* QAbstract3DGraph_RenderToImage2(QAbstract3DGraph* self, int msaaSamples, const QSize* imageSize) {
    return new QImage(self->renderToImage(static_cast<int>(msaaSamples), *imageSize));
}

void QAbstract3DGraph_Delete(QAbstract3DGraph* self) {
    delete self;
}
