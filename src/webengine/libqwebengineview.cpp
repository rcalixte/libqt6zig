#include <QAction>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QMenu>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPageLayout>
#include <QPageRanges>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QPrinter>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWebEngineContextMenuRequest>
#include <QWebEngineFrame>
#include <QWebEngineHistory>
#include <QWebEngineHttpRequest>
#include <QWebEnginePage>
#include <QWebEngineProfile>
#include <QWebEngineSettings>
#include <QWebEngineView>
#include <QWheelEvent>
#include <QWidget>
#include <qwebengineview.h>
#include "libqwebengineview.h"
#include "libqwebengineview.hxx"

QWebEngineView* QWebEngineView_new(QWidget* parent) {
    return new VirtualQWebEngineView(parent);
}

QWebEngineView* QWebEngineView_new2() {
    return new VirtualQWebEngineView();
}

QWebEngineView* QWebEngineView_new3(QWebEngineProfile* profile) {
    return new VirtualQWebEngineView(profile);
}

QWebEngineView* QWebEngineView_new4(QWebEnginePage* page) {
    return new VirtualQWebEngineView(page);
}

QWebEngineView* QWebEngineView_new5(QWebEngineProfile* profile, QWidget* parent) {
    return new VirtualQWebEngineView(profile, parent);
}

QWebEngineView* QWebEngineView_new6(QWebEnginePage* page, QWidget* parent) {
    return new VirtualQWebEngineView(page, parent);
}

QMetaObject* QWebEngineView_MetaObject(const QWebEngineView* self) {
    return (QMetaObject*)self->metaObject();
}

void* QWebEngineView_Metacast(QWebEngineView* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QWebEngineView_Metacall(QWebEngineView* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QWebEngineView_Tr(const char* s) {
    auto _ret = QWebEngineView::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QWebEngineView* QWebEngineView_ForPage(const QWebEnginePage* page) {
    return QWebEngineView::forPage(page);
}

QWebEnginePage* QWebEngineView_Page(const QWebEngineView* self) {
    return self->page();
}

void QWebEngineView_SetPage(QWebEngineView* self, QWebEnginePage* page) {
    self->setPage(page);
}

void QWebEngineView_Load(QWebEngineView* self, const QUrl* url) {
    self->load(*url);
}

void QWebEngineView_Load2(QWebEngineView* self, const QWebEngineHttpRequest* request) {
    self->load(*request);
}

void QWebEngineView_SetHtml(QWebEngineView* self, const libqt_string html) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString);
}

void QWebEngineView_SetContent(QWebEngineView* self, const libqt_string data) {
    QByteArray data_QByteArray(data.data, data.len);
    self->setContent(data_QByteArray);
}

QWebEngineHistory* QWebEngineView_History(const QWebEngineView* self) {
    return self->history();
}

libqt_string QWebEngineView_Title(const QWebEngineView* self) {
    auto _ret = self->title();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineView_SetUrl(QWebEngineView* self, const QUrl* url) {
    self->setUrl(*url);
}

QUrl* QWebEngineView_Url(const QWebEngineView* self) {
    return new QUrl(self->url());
}

QUrl* QWebEngineView_IconUrl(const QWebEngineView* self) {
    return new QUrl(self->iconUrl());
}

QIcon* QWebEngineView_Icon(const QWebEngineView* self) {
    return new QIcon(self->icon());
}

bool QWebEngineView_HasSelection(const QWebEngineView* self) {
    return self->hasSelection();
}

libqt_string QWebEngineView_SelectedText(const QWebEngineView* self) {
    auto _ret = self->selectedText();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QAction* QWebEngineView_PageAction(const QWebEngineView* self, int action) {
    return self->pageAction(static_cast<QWebEnginePage::WebAction>(action));
}

void QWebEngineView_TriggerPageAction(QWebEngineView* self, int action) {
    self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action));
}

double QWebEngineView_ZoomFactor(const QWebEngineView* self) {
    return static_cast<double>(self->zoomFactor());
}

void QWebEngineView_SetZoomFactor(QWebEngineView* self, double factor) {
    self->setZoomFactor(static_cast<qreal>(factor));
}

void QWebEngineView_FindText(QWebEngineView* self, const libqt_string subString) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    self->findText(subString_QString);
}

QSize* QWebEngineView_SizeHint(const QWebEngineView* self) {
    return new QSize(self->sizeHint());
}

QWebEngineSettings* QWebEngineView_Settings(const QWebEngineView* self) {
    return self->settings();
}

QMenu* QWebEngineView_CreateStandardContextMenu(QWebEngineView* self) {
    return self->createStandardContextMenu();
}

QWebEngineContextMenuRequest* QWebEngineView_LastContextMenuRequest(const QWebEngineView* self) {
    return self->lastContextMenuRequest();
}

void QWebEngineView_PrintToPdf(QWebEngineView* self, const libqt_string filePath) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString);
}

void QWebEngineView_PrintToPdf2(QWebEngineView* self, intptr_t resultCallback) {
    auto resultCallback_func = [resultCallback](const QByteArray& funcparam1_fp) -> void {
        const QByteArray funcparam1_qb = funcparam1_fp;
        libqt_string funcparam1_str;
        funcparam1_str.len = funcparam1_qb.length();
        funcparam1_str.data = static_cast<char*>(malloc(funcparam1_str.len));
        memcpy((void*)funcparam1_str.data, funcparam1_qb.data(), funcparam1_str.len);
        libqt_string funcparam1_fv = funcparam1_str;
        reinterpret_cast<void (*)(libqt_string)>(resultCallback)(funcparam1_fv);
    };
    self->printToPdf(resultCallback_func);
}

void QWebEngineView_Print(QWebEngineView* self, QPrinter* printer) {
    self->print(printer);
}

void QWebEngineView_Stop(QWebEngineView* self) {
    self->stop();
}

void QWebEngineView_Back(QWebEngineView* self) {
    self->back();
}

void QWebEngineView_Forward(QWebEngineView* self) {
    self->forward();
}

void QWebEngineView_Reload(QWebEngineView* self) {
    self->reload();
}

void QWebEngineView_LoadStarted(QWebEngineView* self) {
    self->loadStarted();
}

void QWebEngineView_Connect_LoadStarted(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)()>(&QWebEngineView::loadStarted),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QWebEngineView_LoadProgress(QWebEngineView* self, int progress) {
    self->loadProgress(static_cast<int>(progress));
}

void QWebEngineView_Connect_LoadProgress(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, int) = reinterpret_cast<void (*)(QWebEngineView*, int)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(int)>(&QWebEngineView::loadProgress),
                            [self, slotFunc](int progress) {
                                int sigval1 = progress;
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_LoadFinished(QWebEngineView* self, bool param1) {
    self->loadFinished(param1);
}

void QWebEngineView_Connect_LoadFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, bool) = reinterpret_cast<void (*)(QWebEngineView*, bool)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::loadFinished),
                            [self, slotFunc](bool param1) {
                                bool sigval1 = param1;
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_TitleChanged(QWebEngineView* self, const libqt_string title) {
    QString title_QString = QString::fromUtf8(title.data, title.len);
    self->titleChanged(title_QString);
}

void QWebEngineView_Connect_TitleChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, const char*) = reinterpret_cast<void (*)(QWebEngineView*, const char*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(const QString&)>(&QWebEngineView::titleChanged),
                            [self, slotFunc](const QString& title) {
                                const auto title_ret = title;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray title_b = title_ret.toUtf8();
                                auto title_str_len = title_b.length();
                                const char* title_str = static_cast<const char*>(malloc(title_str_len + 1));
                                memcpy((void*)title_str, title_b.data(), title_str_len);
                                ((char*)title_str)[title_str_len] = '\0';
                                const char* sigval1 = title_str;
                                slotFunc(self, sigval1);
                                libqt_free(title_str);
                            });
}

void QWebEngineView_SelectionChanged(QWebEngineView* self) {
    self->selectionChanged();
}

void QWebEngineView_Connect_SelectionChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)()>(&QWebEngineView::selectionChanged),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QWebEngineView_UrlChanged(QWebEngineView* self, const QUrl* param1) {
    self->urlChanged(*param1);
}

void QWebEngineView_Connect_UrlChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QUrl*) = reinterpret_cast<void (*)(QWebEngineView*, QUrl*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::urlChanged),
                            [self, slotFunc](const QUrl& param1) {
                                const QUrl& param1_ret = param1;
                                // Cast returned reference into pointer
                                QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_IconUrlChanged(QWebEngineView* self, const QUrl* param1) {
    self->iconUrlChanged(*param1);
}

void QWebEngineView_Connect_IconUrlChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QUrl*) = reinterpret_cast<void (*)(QWebEngineView*, QUrl*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(const QUrl&)>(&QWebEngineView::iconUrlChanged),
                            [self, slotFunc](const QUrl& param1) {
                                const QUrl& param1_ret = param1;
                                // Cast returned reference into pointer
                                QUrl* sigval1 = const_cast<QUrl*>(&param1_ret);
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_IconChanged(QWebEngineView* self, const QIcon* param1) {
    self->iconChanged(*param1);
}

void QWebEngineView_Connect_IconChanged(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QIcon*) = reinterpret_cast<void (*)(QWebEngineView*, QIcon*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(const QIcon&)>(&QWebEngineView::iconChanged),
                            [self, slotFunc](const QIcon& param1) {
                                const QIcon& param1_ret = param1;
                                // Cast returned reference into pointer
                                QIcon* sigval1 = const_cast<QIcon*>(&param1_ret);
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_RenderProcessTerminated(QWebEngineView* self, int terminationStatus, int exitCode) {
    self->renderProcessTerminated(static_cast<QWebEnginePage::RenderProcessTerminationStatus>(terminationStatus), static_cast<int>(exitCode));
}

void QWebEngineView_Connect_RenderProcessTerminated(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, int, int) = reinterpret_cast<void (*)(QWebEngineView*, int, int)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(QWebEnginePage::RenderProcessTerminationStatus, int)>(&QWebEngineView::renderProcessTerminated),
                            [self, slotFunc](QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode) {
                                int sigval1 = static_cast<int>(terminationStatus);
                                int sigval2 = exitCode;
                                slotFunc(self, sigval1, sigval2);
                            });
}

void QWebEngineView_PdfPrintingFinished(QWebEngineView* self, const libqt_string filePath, bool success) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->pdfPrintingFinished(filePath_QString, success);
}

void QWebEngineView_Connect_PdfPrintingFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, const char*, bool) = reinterpret_cast<void (*)(QWebEngineView*, const char*, bool)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(const QString&, bool)>(&QWebEngineView::pdfPrintingFinished),
                            [self, slotFunc](const QString& filePath, bool success) {
                                const auto filePath_ret = filePath;
                                // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                QByteArray filePath_b = filePath_ret.toUtf8();
                                auto filePath_str_len = filePath_b.length();
                                const char* filePath_str = static_cast<const char*>(malloc(filePath_str_len + 1));
                                memcpy((void*)filePath_str, filePath_b.data(), filePath_str_len);
                                ((char*)filePath_str)[filePath_str_len] = '\0';
                                const char* sigval1 = filePath_str;
                                bool sigval2 = success;
                                slotFunc(self, sigval1, sigval2);
                                libqt_free(filePath_str);
                            });
}

void QWebEngineView_PrintRequested(QWebEngineView* self) {
    self->printRequested();
}

void QWebEngineView_Connect_PrintRequested(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*) = reinterpret_cast<void (*)(QWebEngineView*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)()>(&QWebEngineView::printRequested),
                            [self, slotFunc]() {
                                slotFunc(self);
                            });
}

void QWebEngineView_PrintRequestedByFrame(QWebEngineView* self, QWebEngineFrame* frame) {
    self->printRequestedByFrame(*frame);
}

void QWebEngineView_Connect_PrintRequestedByFrame(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, QWebEngineFrame*) = reinterpret_cast<void (*)(QWebEngineView*, QWebEngineFrame*)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(QWebEngineFrame)>(&QWebEngineView::printRequestedByFrame),
                            [self, slotFunc](QWebEngineFrame frame) {
                                QWebEngineFrame* sigval1 = new QWebEngineFrame(frame);
                                slotFunc(self, sigval1);
                            });
}

void QWebEngineView_PrintFinished(QWebEngineView* self, bool success) {
    self->printFinished(success);
}

void QWebEngineView_Connect_PrintFinished(QWebEngineView* self, intptr_t slot) {
    void (*slotFunc)(QWebEngineView*, bool) = reinterpret_cast<void (*)(QWebEngineView*, bool)>(slot);
    QWebEngineView::connect(self,
                            static_cast<void (QWebEngineView::*)(bool)>(&QWebEngineView::printFinished),
                            [self, slotFunc](bool success) {
                                bool sigval1 = success;
                                slotFunc(self, sigval1);
                            });
}

QWebEngineView* QWebEngineView_CreateWindow(QWebEngineView* self, int typeVal) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        return vqwebengineview->createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    }
    qFatal("Error: Protected method QWebEngineView::createWindow called without a directly constructed type");
}

void QWebEngineView_ContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->contextMenuEvent(param1);
    }
}

bool QWebEngineView_Event(QWebEngineView* self, QEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        return vqwebengineview->event(param1);
    }
    qFatal("Error: Protected method QWebEngineView::event called without a directly constructed type");
}

void QWebEngineView_ShowEvent(QWebEngineView* self, QShowEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->showEvent(param1);
    }
}

void QWebEngineView_HideEvent(QWebEngineView* self, QHideEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->hideEvent(param1);
    }
}

void QWebEngineView_CloseEvent(QWebEngineView* self, QCloseEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->closeEvent(param1);
    }
}

void QWebEngineView_DragEnterEvent(QWebEngineView* self, QDragEnterEvent* e) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->dragEnterEvent(e);
    }
}

void QWebEngineView_DragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->dragLeaveEvent(e);
    }
}

void QWebEngineView_DragMoveEvent(QWebEngineView* self, QDragMoveEvent* e) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->dragMoveEvent(e);
    }
}

void QWebEngineView_DropEvent(QWebEngineView* self, QDropEvent* e) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->dropEvent(e);
    }
}

libqt_string QWebEngineView_Tr2(const char* s, const char* c) {
    auto _ret = QWebEngineView::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QWebEngineView_Tr3(const char* s, const char* c, int n) {
    auto _ret = QWebEngineView::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QWebEngineView_SetHtml2(QWebEngineView* self, const libqt_string html, const QUrl* baseUrl) {
    QString html_QString = QString::fromUtf8(html.data, html.len);
    self->setHtml(html_QString, *baseUrl);
}

void QWebEngineView_SetContent2(QWebEngineView* self, const libqt_string data, const libqt_string mimeType) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString);
}

void QWebEngineView_SetContent3(QWebEngineView* self, const libqt_string data, const libqt_string mimeType, const QUrl* baseUrl) {
    QByteArray data_QByteArray(data.data, data.len);
    QString mimeType_QString = QString::fromUtf8(mimeType.data, mimeType.len);
    self->setContent(data_QByteArray, mimeType_QString, *baseUrl);
}

void QWebEngineView_TriggerPageAction2(QWebEngineView* self, int action, bool checked) {
    self->triggerPageAction(static_cast<QWebEnginePage::WebAction>(action), checked);
}

void QWebEngineView_FindText2(QWebEngineView* self, const libqt_string subString, int options) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    self->findText(subString_QString, static_cast<QWebEnginePage::FindFlags>(options));
}

void QWebEngineView_FindText3(QWebEngineView* self, const libqt_string subString, int options, intptr_t resultCallback) {
    QString subString_QString = QString::fromUtf8(subString.data, subString.len);
    auto resultCallback_func = [resultCallback](const QWebEngineFindTextResult& funcparam1_fp) -> void {
        const QWebEngineFindTextResult& funcparam1_ret = funcparam1_fp;
        // Cast returned reference into pointer
        QWebEngineFindTextResult* funcparam1_fv = const_cast<QWebEngineFindTextResult*>(&funcparam1_ret);
        reinterpret_cast<void (*)(QWebEngineFindTextResult*)>(resultCallback)(funcparam1_fv);
    };
    self->findText(subString_QString, static_cast<QWebEnginePage::FindFlags>(options), resultCallback_func);
}

void QWebEngineView_PrintToPdf22(QWebEngineView* self, const libqt_string filePath, const QPageLayout* layout) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout);
}

void QWebEngineView_PrintToPdf3(QWebEngineView* self, const libqt_string filePath, const QPageLayout* layout, const QPageRanges* ranges) {
    QString filePath_QString = QString::fromUtf8(filePath.data, filePath.len);
    self->printToPdf(filePath_QString, *layout, *ranges);
}

void QWebEngineView_PrintToPdf23(QWebEngineView* self, intptr_t resultCallback, const QPageLayout* layout) {
    auto resultCallback_func = [resultCallback](const QByteArray& funcparam1_fp) -> void {
        const QByteArray funcparam1_qb = funcparam1_fp;
        libqt_string funcparam1_str;
        funcparam1_str.len = funcparam1_qb.length();
        funcparam1_str.data = static_cast<char*>(malloc(funcparam1_str.len));
        memcpy((void*)funcparam1_str.data, funcparam1_qb.data(), funcparam1_str.len);
        libqt_string funcparam1_fv = funcparam1_str;
        reinterpret_cast<void (*)(libqt_string)>(resultCallback)(funcparam1_fv);
    };
    self->printToPdf(resultCallback_func, *layout);
}

void QWebEngineView_PrintToPdf32(QWebEngineView* self, intptr_t resultCallback, const QPageLayout* layout, const QPageRanges* ranges) {
    auto resultCallback_func = [resultCallback](const QByteArray& funcparam1_fp) -> void {
        const QByteArray funcparam1_qb = funcparam1_fp;
        libqt_string funcparam1_str;
        funcparam1_str.len = funcparam1_qb.length();
        funcparam1_str.data = static_cast<char*>(malloc(funcparam1_str.len));
        memcpy((void*)funcparam1_str.data, funcparam1_qb.data(), funcparam1_str.len);
        libqt_string funcparam1_fv = funcparam1_str;
        reinterpret_cast<void (*)(libqt_string)>(resultCallback)(funcparam1_fv);
    };
    self->printToPdf(resultCallback_func, *layout, *ranges);
}

// Base class handler implementation
QMetaObject* QWebEngineView_SuperMetaObject(const QWebEngineView* self) {
    return (QMetaObject*)self->QWebEngineView::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMetaObject(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_metaobject_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QWebEngineView_SuperMetacast(QWebEngineView* self, const char* param1) {
    return self->QWebEngineView::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMetacast(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_metacast_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Metacast_Callback>(slot);
}

// Base class handler implementation
int QWebEngineView_SuperMetacall(QWebEngineView* self, int param1, int param2, void** param3) {
    return self->QWebEngineView::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMetacall(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_metacall_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Metacall_Callback>(slot);
}

// Base class handler implementation
QSize* QWebEngineView_SuperSizeHint(const QWebEngineView* self) {
    return new QSize(self->QWebEngineView::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSizeHint(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_sizehint_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SizeHint_Callback>(slot);
}

// Base class handler implementation
QWebEngineView* QWebEngineView_SuperCreateWindow(QWebEngineView* self, int typeVal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->QWebEngineView::createWindow(static_cast<QWebEnginePage::WebWindowType>(typeVal));
    } else
        qFatal("Error: Protected virtual method QWebEngineView::createWindow called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCreateWindow(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_createwindow_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CreateWindow_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperContextMenuEvent(QWebEngineView* self, QContextMenuEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnContextMenuEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_contextmenuevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ContextMenuEvent_Callback>(slot);
}

// Base class handler implementation
bool QWebEngineView_SuperEvent(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->QWebEngineView::event(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_event_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Event_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperShowEvent(QWebEngineView* self, QShowEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnShowEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_showevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ShowEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperHideEvent(QWebEngineView* self, QHideEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::hideEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHideEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_hideevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HideEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperCloseEvent(QWebEngineView* self, QCloseEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCloseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_closeevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CloseEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperDragEnterEvent(QWebEngineView* self, QDragEnterEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::dragEnterEvent(e);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragEnterEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_dragenterevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragEnterEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperDragLeaveEvent(QWebEngineView* self, QDragLeaveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::dragLeaveEvent(e);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragLeaveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_dragleaveevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragLeaveEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperDragMoveEvent(QWebEngineView* self, QDragMoveEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::dragMoveEvent(e);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDragMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_dragmoveevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DragMoveEvent_Callback>(slot);
}

// Base class handler implementation
void QWebEngineView_SuperDropEvent(QWebEngineView* self, QDropEvent* e) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::dropEvent(e);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDropEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_dropevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DropEvent_Callback>(slot);
}

// Derived class handler implementation
int QWebEngineView_DevType(const QWebEngineView* self) {
    return self->devType();
}

// Base class handler implementation
int QWebEngineView_SuperDevType(const QWebEngineView* self) {
    return self->QWebEngineView::devType();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDevType(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_devtype_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DevType_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_SetVisible(QWebEngineView* self, bool visible) {
    self->setVisible(visible);
}

// Base class handler implementation
void QWebEngineView_SuperSetVisible(QWebEngineView* self, bool visible) {
    self->QWebEngineView::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSetVisible(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_setvisible_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SetVisible_Callback>(slot);
}

// Derived class handler implementation
QSize* QWebEngineView_MinimumSizeHint(const QWebEngineView* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QWebEngineView_SuperMinimumSizeHint(const QWebEngineView* self) {
    return new QSize(self->QWebEngineView::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMinimumSizeHint(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_minimumsizehint_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
int QWebEngineView_HeightForWidth(const QWebEngineView* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QWebEngineView_SuperHeightForWidth(const QWebEngineView* self, int param1) {
    return self->QWebEngineView::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHeightForWidth(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_heightforwidth_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineView_HasHeightForWidth(const QWebEngineView* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QWebEngineView_SuperHasHeightForWidth(const QWebEngineView* self) {
    return self->QWebEngineView::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnHasHeightForWidth(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_hasheightforwidth_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QWebEngineView_PaintEngine(const QWebEngineView* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QWebEngineView_SuperPaintEngine(const QWebEngineView* self) {
    return self->QWebEngineView::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnPaintEngine(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_paintengine_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_MousePressEvent(QWebEngineView* self, QMouseEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperMousePressEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMousePressEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_mousepressevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_MouseReleaseEvent(QWebEngineView* self, QMouseEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperMouseReleaseEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseReleaseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_mousereleaseevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_MouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperMouseDoubleClickEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseDoubleClickEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_mousedoubleclickevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_MouseMoveEvent(QWebEngineView* self, QMouseEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperMouseMoveEvent(QWebEngineView* self, QMouseEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMouseMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_mousemoveevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_WheelEvent(QWebEngineView* self, QWheelEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperWheelEvent(QWebEngineView* self, QWheelEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnWheelEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_wheelevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_KeyPressEvent(QWebEngineView* self, QKeyEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->keyPressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperKeyPressEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::keyPressEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnKeyPressEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_keypressevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_KeyReleaseEvent(QWebEngineView* self, QKeyEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperKeyReleaseEvent(QWebEngineView* self, QKeyEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnKeyReleaseEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_keyreleaseevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_FocusInEvent(QWebEngineView* self, QFocusEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperFocusInEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusInEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_focusinevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_FocusOutEvent(QWebEngineView* self, QFocusEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperFocusOutEvent(QWebEngineView* self, QFocusEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusOutEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_focusoutevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_EnterEvent(QWebEngineView* self, QEnterEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperEnterEvent(QWebEngineView* self, QEnterEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEnterEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_enterevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_LeaveEvent(QWebEngineView* self, QEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperLeaveEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnLeaveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_leaveevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_PaintEvent(QWebEngineView* self, QPaintEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperPaintEvent(QWebEngineView* self, QPaintEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnPaintEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_paintevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_MoveEvent(QWebEngineView* self, QMoveEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperMoveEvent(QWebEngineView* self, QMoveEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMoveEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_moveevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_ResizeEvent(QWebEngineView* self, QResizeEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->resizeEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperResizeEvent(QWebEngineView* self, QResizeEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::resizeEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnResizeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_resizeevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_TabletEvent(QWebEngineView* self, QTabletEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperTabletEvent(QWebEngineView* self, QTabletEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnTabletEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_tabletevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_ActionEvent(QWebEngineView* self, QActionEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperActionEvent(QWebEngineView* self, QActionEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnActionEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_actionevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineView_NativeEvent(QWebEngineView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        return vqwebengineview->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWebEngineView_SuperNativeEvent(QWebEngineView* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->QWebEngineView::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QWebEngineView::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnNativeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_nativeevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_ChangeEvent(QWebEngineView* self, QEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->changeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::changeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperChangeEvent(QWebEngineView* self, QEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::changeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnChangeEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_changeevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
int QWebEngineView_Metric(const QWebEngineView* self, int param1) {
    auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self));
    if (vqwebengineview) {
        return vqwebengineview->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QWebEngineView_SuperMetric(const QWebEngineView* self, int param1) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->QWebEngineView::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QWebEngineView::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnMetric(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_metric_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Metric_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_InitPainter(const QWebEngineView* self, QPainter* painter) {
    auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self));
    if (vqwebengineview) {
        vqwebengineview->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperInitPainter(const QWebEngineView* self, QPainter* painter) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        vqwebengineview->QWebEngineView::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInitPainter(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_initpainter_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QWebEngineView_Redirected(const QWebEngineView* self, QPoint* offset) {
    auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self));
    if (vqwebengineview) {
        return vqwebengineview->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QWebEngineView_SuperRedirected(const QWebEngineView* self, QPoint* offset) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->QWebEngineView::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnRedirected(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_redirected_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QWebEngineView_SharedPainter(const QWebEngineView* self) {
    auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self));
    if (vqwebengineview) {
        return vqwebengineview->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QWebEngineView_SuperSharedPainter(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->QWebEngineView::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QWebEngineView::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnSharedPainter(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_sharedpainter_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_InputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperInputMethodEvent(QWebEngineView* self, QInputMethodEvent* param1) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInputMethodEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_inputmethodevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QWebEngineView_InputMethodQuery(const QWebEngineView* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QWebEngineView_SuperInputMethodQuery(const QWebEngineView* self, int param1) {
    return new QVariant(self->QWebEngineView::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnInputMethodQuery(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self)))
        vqwebengineview->qwebengineview_inputmethodquery_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineView_FocusNextPrevChild(QWebEngineView* self, bool next) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        return vqwebengineview->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QWebEngineView_SuperFocusNextPrevChild(QWebEngineView* self, bool next) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->QWebEngineView::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnFocusNextPrevChild(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_focusnextprevchild_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
bool QWebEngineView_EventFilter(QWebEngineView* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QWebEngineView_SuperEventFilter(QWebEngineView* self, QObject* watched, QEvent* event) {
    return self->QWebEngineView::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnEventFilter(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_eventfilter_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_TimerEvent(QWebEngineView* self, QTimerEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperTimerEvent(QWebEngineView* self, QTimerEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnTimerEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_timerevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_ChildEvent(QWebEngineView* self, QChildEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperChildEvent(QWebEngineView* self, QChildEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnChildEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_childevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_CustomEvent(QWebEngineView* self, QEvent* event) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperCustomEvent(QWebEngineView* self, QEvent* event) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnCustomEvent(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_customevent_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_ConnectNotify(QWebEngineView* self, const QMetaMethod* signal) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperConnectNotify(QWebEngineView* self, const QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnConnectNotify(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_connectnotify_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QWebEngineView_DisconnectNotify(QWebEngineView* self, const QMetaMethod* signal) {
    auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self);
    if (vqwebengineview) {
        vqwebengineview->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QWebEngineView::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QWebEngineView_SuperDisconnectNotify(QWebEngineView* self, const QMetaMethod* signal) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->QWebEngineView::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QWebEngineView::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QWebEngineView_OnDisconnectNotify(QWebEngineView* self, intptr_t slot) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self))
        vqwebengineview->qwebengineview_disconnectnotify_callback = reinterpret_cast<VirtualQWebEngineView::QWebEngineView_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QWebEngineView_UpdateMicroFocus(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->VirtualQWebEngineView::updateMicroFocus();
    } else
        qFatal("Error: Protected method QWebEngineView::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QWebEngineView_Create(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->VirtualQWebEngineView::create();
    } else
        qFatal("Error: Protected method QWebEngineView::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QWebEngineView_Destroy(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        vqwebengineview->VirtualQWebEngineView::destroy();
    } else
        qFatal("Error: Protected method QWebEngineView::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebEngineView_FocusNextChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->VirtualQWebEngineView::focusNextChild();
    } else
        qFatal("Error: Protected method QWebEngineView::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebEngineView_FocusPreviousChild(QWebEngineView* self) {
    if (auto* vqwebengineview = dynamic_cast<VirtualQWebEngineView*>(self)) {
        return vqwebengineview->VirtualQWebEngineView::focusPreviousChild();
    } else
        qFatal("Error: Protected method QWebEngineView::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QWebEngineView_Sender(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->VirtualQWebEngineView::sender();
    } else
        qFatal("Error: Protected method QWebEngineView::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineView_SenderSignalIndex(const QWebEngineView* self) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->VirtualQWebEngineView::senderSignalIndex();
    } else
        qFatal("Error: Protected method QWebEngineView::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QWebEngineView_Receivers(const QWebEngineView* self, const char* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->VirtualQWebEngineView::receivers(signal);
    } else
        qFatal("Error: Protected method QWebEngineView::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QWebEngineView_IsSignalConnected(const QWebEngineView* self, const QMetaMethod* signal) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->VirtualQWebEngineView::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QWebEngineView::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QWebEngineView_GetDecodedMetricF(const QWebEngineView* self, int metricA, int metricB) {
    if (auto* vqwebengineview = const_cast<VirtualQWebEngineView*>(dynamic_cast<const VirtualQWebEngineView*>(self))) {
        return vqwebengineview->VirtualQWebEngineView::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QWebEngineView::getDecodedMetricF called without a directly constructed type");
}

void QWebEngineView_Delete(QWebEngineView* self) {
    delete self;
}
