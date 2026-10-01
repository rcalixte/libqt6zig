#include <QAbstractFileIconProvider>
#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QActionEvent>
#include <QByteArray>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QDialog>
#include <QDir>
#include <QDragEnterEvent>
#include <QDragLeaveEvent>
#include <QDragMoveEvent>
#include <QDropEvent>
#include <QEnterEvent>
#include <QEvent>
#include <QFileDialog>
#include <QFocusEvent>
#include <QHideEvent>
#include <QInputMethodEvent>
#include <QKeyEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintDevice>
#include <QPaintEngine>
#include <QPaintEvent>
#include <QPainter>
#include <QPoint>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QTabletEvent>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <QWheelEvent>
#include <QWidget>
#include <qfiledialog.h>
#include "libqfiledialog.h"
#include "libqfiledialog.hxx"

QFileDialog* QFileDialog_new(QWidget* parent) {
    return new VirtualQFileDialog(parent);
}

QFileDialog* QFileDialog_new2(QWidget* parent, int f) {
    return new VirtualQFileDialog(parent, static_cast<Qt::WindowFlags>(f));
}

QFileDialog* QFileDialog_new3() {
    return new VirtualQFileDialog();
}

QFileDialog* QFileDialog_new4(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new VirtualQFileDialog(parent, caption_QString);
}

QFileDialog* QFileDialog_new5(QWidget* parent, const libqt_string caption, const libqt_string directory) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    return new VirtualQFileDialog(parent, caption_QString, directory_QString);
}

QFileDialog* QFileDialog_new6(QWidget* parent, const libqt_string caption, const libqt_string directory, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new VirtualQFileDialog(parent, caption_QString, directory_QString, filter_QString);
}

QMetaObject* QFileDialog_MetaObject(const QFileDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* QFileDialog_Metacast(QFileDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QFileDialog_Metacall(QFileDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QFileDialog_Tr(const char* s) {
    auto _ret = QFileDialog::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetDirectory(QFileDialog* self, const libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    self->setDirectory(directory_QString);
}

void QFileDialog_SetDirectory2(QFileDialog* self, const QDir* directory) {
    self->setDirectory(*directory);
}

QDir* QFileDialog_Directory(const QFileDialog* self) {
    return new QDir(self->directory());
}

void QFileDialog_SetDirectoryUrl(QFileDialog* self, const QUrl* directory) {
    self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self) {
    return new QUrl(self->directoryUrl());
}

void QFileDialog_SelectFile(QFileDialog* self, const libqt_string filename) {
    QString filename_QString = QString::fromUtf8(filename.data, filename.len);
    self->selectFile(filename_QString);
}

libqt_list /* of libqt_string */ QFileDialog_SelectedFiles(const QFileDialog* self) {
    QList<QString> _ret = self->selectedFiles();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectUrl(QFileDialog* self, const QUrl* url) {
    self->selectUrl(*url);
}

libqt_list /* of QUrl* */ QFileDialog_SelectedUrls(const QFileDialog* self) {
    QList<QUrl> _ret = self->selectedUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetNameFilter(QFileDialog* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->setNameFilter(filter_QString);
}

void QFileDialog_SetNameFilters(QFileDialog* self, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setNameFilters(filters_QList);
}

libqt_list /* of libqt_string */ QFileDialog_NameFilters(const QFileDialog* self) {
    QList<QString> _ret = self->nameFilters();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectNameFilter(QFileDialog* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->selectNameFilter(filter_QString);
}

libqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self) {
    auto _ret = self->selectedMimeTypeFilter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self) {
    auto _ret = self->selectedNameFilter();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetMimeTypeFilters(QFileDialog* self, const libqt_list /* of libqt_string */ filters) {
    QList<QString> filters_QList;
    filters_QList.reserve(filters.len);
    libqt_string* filters_arr = static_cast<libqt_string*>(filters.data);
    for (size_t i = 0; i < filters.len; ++i) {
        QString filters_arr_i_QString = QString::fromUtf8(filters_arr[i].data, filters_arr[i].len);
        filters_QList.push_back(filters_arr_i_QString);
    }
    self->setMimeTypeFilters(filters_QList);
}

libqt_list /* of libqt_string */ QFileDialog_MimeTypeFilters(const QFileDialog* self) {
    QList<QString> _ret = self->mimeTypeFilters();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->selectMimeTypeFilter(filter_QString);
}

int QFileDialog_Filter(const QFileDialog* self) {
    return static_cast<int>(self->filter());
}

void QFileDialog_SetFilter(QFileDialog* self, int filters) {
    self->setFilter(static_cast<QDir::Filters>(filters));
}

void QFileDialog_SetViewMode(QFileDialog* self, int mode) {
    self->setViewMode(static_cast<QFileDialog::ViewMode>(mode));
}

int QFileDialog_ViewMode(const QFileDialog* self) {
    return static_cast<int>(self->viewMode());
}

void QFileDialog_SetFileMode(QFileDialog* self, int mode) {
    self->setFileMode(static_cast<QFileDialog::FileMode>(mode));
}

int QFileDialog_FileMode(const QFileDialog* self) {
    return static_cast<int>(self->fileMode());
}

void QFileDialog_SetAcceptMode(QFileDialog* self, int mode) {
    self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
}

int QFileDialog_AcceptMode(const QFileDialog* self) {
    return static_cast<int>(self->acceptMode());
}

void QFileDialog_SetSidebarUrls(QFileDialog* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->setSidebarUrls(urls_QList);
}

libqt_list /* of QUrl* */ QFileDialog_SidebarUrls(const QFileDialog* self) {
    QList<QUrl> _ret = self->sidebarUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_string QFileDialog_SaveState(const QFileDialog* self) {
    QByteArray _qb = self->saveState();
    libqt_string _str;
    _str.len = _qb.length();
    _str.data = static_cast<char*>(malloc(_str.len));
    memcpy((void*)_str.data, _qb.data(), _str.len);
    return _str;
}

bool QFileDialog_RestoreState(QFileDialog* self, const libqt_string state) {
    QByteArray state_QByteArray(state.data, state.len);
    return self->restoreState(state_QByteArray);
}

void QFileDialog_SetDefaultSuffix(QFileDialog* self, const libqt_string suffix) {
    QString suffix_QString = QString::fromUtf8(suffix.data, suffix.len);
    self->setDefaultSuffix(suffix_QString);
}

libqt_string QFileDialog_DefaultSuffix(const QFileDialog* self) {
    auto _ret = self->defaultSuffix();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetHistory(QFileDialog* self, const libqt_list /* of libqt_string */ paths) {
    QList<QString> paths_QList;
    paths_QList.reserve(paths.len);
    libqt_string* paths_arr = static_cast<libqt_string*>(paths.data);
    for (size_t i = 0; i < paths.len; ++i) {
        QString paths_arr_i_QString = QString::fromUtf8(paths_arr[i].data, paths_arr[i].len);
        paths_QList.push_back(paths_arr_i_QString);
    }
    self->setHistory(paths_QList);
}

libqt_list /* of libqt_string */ QFileDialog_History(const QFileDialog* self) {
    QList<QString> _ret = self->history();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
    self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self) {
    return self->itemDelegate();
}

void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider) {
    self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self) {
    return self->iconProvider();
}

void QFileDialog_SetLabelText(QFileDialog* self, int label, const libqt_string text) {
    QString text_QString = QString::fromUtf8(text.data, text.len);
    self->setLabelText(static_cast<QFileDialog::DialogLabel>(label), text_QString);
}

libqt_string QFileDialog_LabelText(const QFileDialog* self, int label) {
    auto _ret = self->labelText(static_cast<QFileDialog::DialogLabel>(label));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetSupportedSchemes(QFileDialog* self, const libqt_list /* of libqt_string */ schemes) {
    QList<QString> schemes_QList;
    schemes_QList.reserve(schemes.len);
    libqt_string* schemes_arr = static_cast<libqt_string*>(schemes.data);
    for (size_t i = 0; i < schemes.len; ++i) {
        QString schemes_arr_i_QString = QString::fromUtf8(schemes_arr[i].data, schemes_arr[i].len);
        schemes_QList.push_back(schemes_arr_i_QString);
    }
    self->setSupportedSchemes(schemes_QList);
}

libqt_list /* of libqt_string */ QFileDialog_SupportedSchemes(const QFileDialog* self) {
    QList<QString> _ret = self->supportedSchemes();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
    self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self) {
    return self->proxyModel();
}

void QFileDialog_SetOption(QFileDialog* self, int option) {
    self->setOption(static_cast<QFileDialog::Option>(option));
}

bool QFileDialog_TestOption(const QFileDialog* self, int option) {
    return self->testOption(static_cast<QFileDialog::Option>(option));
}

void QFileDialog_SetOptions(QFileDialog* self, int options) {
    self->setOptions(static_cast<QFileDialog::Options>(options));
}

int QFileDialog_Options(const QFileDialog* self) {
    return static_cast<int>(self->options());
}

void QFileDialog_SetVisible(QFileDialog* self, bool visible) {
    self->setVisible(visible);
}

void QFileDialog_FileSelected(QFileDialog* self, const libqt_string file) {
    QString file_QString = QString::fromUtf8(file.data, file.len);
    self->fileSelected(file_QString);
}

void QFileDialog_Connect_FileSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::fileSelected),
                         [self, slotFunc](const QString& file) {
                             const auto file_ret = file;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray file_b = file_ret.toUtf8();
                             auto file_str_len = file_b.length();
                             const char* file_str = static_cast<const char*>(malloc(file_str_len + 1));
                             memcpy((void*)file_str, file_b.data(), file_str_len);
                             ((char*)file_str)[file_str_len] = '\0';
                             const char* sigval1 = file_str;
                             slotFunc(self, sigval1);
                             libqt_free(file_str);
                         });
}

void QFileDialog_FilesSelected(QFileDialog* self, const libqt_list /* of libqt_string */ files) {
    QList<QString> files_QList;
    files_QList.reserve(files.len);
    libqt_string* files_arr = static_cast<libqt_string*>(files.data);
    for (size_t i = 0; i < files.len; ++i) {
        QString files_arr_i_QString = QString::fromUtf8(files_arr[i].data, files_arr[i].len);
        files_QList.push_back(files_arr_i_QString);
    }
    self->filesSelected(files_QList);
}

void QFileDialog_Connect_FilesSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char**) = reinterpret_cast<void (*)(QFileDialog*, const char**)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QList<QString>&)>(&QFileDialog::filesSelected),
                         [self, slotFunc](const QList<QString>& files) {
                             const QList<QString>& files_ret = files;
                             // Convert QString from UTF-16 in C++ RAII memory to null-terminated UTF-8 chars in manually-managed C memory
                             const char** files_arr = static_cast<const char**>(malloc(sizeof(const char*) * (files_ret.size() + 1)));
                             for (qsizetype i = 0; i < files_ret.size(); ++i) {
                                 QByteArray files_b = files_ret[i].toUtf8();
                                 auto files_str_len = files_b.length();
                                 char* files_str = static_cast<char*>(malloc(files_str_len + 1));
                                 memcpy(files_str, files_b.data(), files_str_len);
                                 files_str[files_str_len] = '\0';
                                 files_arr[i] = files_str;
                             }
                             // Append sentinel null terminator to the list
                             files_arr[files_ret.size()] = nullptr;
                             const char** sigval1 = files_arr;
                             slotFunc(self, sigval1);
                             libqt_free(files_arr);
                         });
}

void QFileDialog_CurrentChanged(QFileDialog* self, const libqt_string path) {
    QString path_QString = QString::fromUtf8(path.data, path.len);
    self->currentChanged(path_QString);
}

void QFileDialog_Connect_CurrentChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::currentChanged),
                         [self, slotFunc](const QString& path) {
                             const auto path_ret = path;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray path_b = path_ret.toUtf8();
                             auto path_str_len = path_b.length();
                             const char* path_str = static_cast<const char*>(malloc(path_str_len + 1));
                             memcpy((void*)path_str, path_b.data(), path_str_len);
                             ((char*)path_str)[path_str_len] = '\0';
                             const char* sigval1 = path_str;
                             slotFunc(self, sigval1);
                             libqt_free(path_str);
                         });
}

void QFileDialog_DirectoryEntered(QFileDialog* self, const libqt_string directory) {
    QString directory_QString = QString::fromUtf8(directory.data, directory.len);
    self->directoryEntered(directory_QString);
}

void QFileDialog_Connect_DirectoryEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::directoryEntered),
                         [self, slotFunc](const QString& directory) {
                             const auto directory_ret = directory;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray directory_b = directory_ret.toUtf8();
                             auto directory_str_len = directory_b.length();
                             const char* directory_str = static_cast<const char*>(malloc(directory_str_len + 1));
                             memcpy((void*)directory_str, directory_b.data(), directory_str_len);
                             ((char*)directory_str)[directory_str_len] = '\0';
                             const char* sigval1 = directory_str;
                             slotFunc(self, sigval1);
                             libqt_free(directory_str);
                         });
}

void QFileDialog_UrlSelected(QFileDialog* self, const QUrl* url) {
    self->urlSelected(*url);
}

void QFileDialog_Connect_UrlSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::urlSelected),
                         [self, slotFunc](const QUrl& url) {
                             const QUrl& url_ret = url;
                             // Cast returned reference into pointer
                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                             slotFunc(self, sigval1);
                         });
}

void QFileDialog_UrlsSelected(QFileDialog* self, const libqt_list /* of QUrl* */ urls) {
    QList<QUrl> urls_QList;
    urls_QList.reserve(urls.len);
    QUrl** urls_arr = static_cast<QUrl**>(urls.data);
    for (size_t i = 0; i < urls.len; ++i) {
        urls_QList.push_back(*(urls_arr[i]));
    }
    self->urlsSelected(urls_QList);
}

void QFileDialog_Connect_UrlsSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_list /* of QUrl* */) = reinterpret_cast<void (*)(QFileDialog*, libqt_list /* of QUrl* */)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QList<QUrl>&)>(&QFileDialog::urlsSelected),
                         [self, slotFunc](const QList<QUrl>& urls) {
                             const QList<QUrl>& urls_ret = urls;
                             // Convert QList<> from C++ memory to manually-managed C memory
                             QUrl** urls_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (urls_ret.size())));
                             for (qsizetype i = 0; i < urls_ret.size(); ++i) {
                                 urls_arr[i] = new QUrl(urls_ret[i]);
                             }
                             libqt_list urls_out;
                             urls_out.len = urls_ret.size();
                             urls_out.data = static_cast<void*>(urls_arr);
                             libqt_list /* of QUrl* */ sigval1 = urls_out;
                             slotFunc(self, sigval1);
                             free(urls_arr);
                         });
}

void QFileDialog_CurrentUrlChanged(QFileDialog* self, const QUrl* url) {
    self->currentUrlChanged(*url);
}

void QFileDialog_Connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::currentUrlChanged),
                         [self, slotFunc](const QUrl& url) {
                             const QUrl& url_ret = url;
                             // Cast returned reference into pointer
                             QUrl* sigval1 = const_cast<QUrl*>(&url_ret);
                             slotFunc(self, sigval1);
                         });
}

void QFileDialog_DirectoryUrlEntered(QFileDialog* self, const QUrl* directory) {
    self->directoryUrlEntered(*directory);
}

void QFileDialog_Connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, QUrl*) = reinterpret_cast<void (*)(QFileDialog*, QUrl*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QUrl&)>(&QFileDialog::directoryUrlEntered),
                         [self, slotFunc](const QUrl& directory) {
                             const QUrl& directory_ret = directory;
                             // Cast returned reference into pointer
                             QUrl* sigval1 = const_cast<QUrl*>(&directory_ret);
                             slotFunc(self, sigval1);
                         });
}

void QFileDialog_FilterSelected(QFileDialog* self, const libqt_string filter) {
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    self->filterSelected(filter_QString);
}

void QFileDialog_Connect_FilterSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self,
                         static_cast<void (QFileDialog::*)(const QString&)>(&QFileDialog::filterSelected),
                         [self, slotFunc](const QString& filter) {
                             const auto filter_ret = filter;
                             // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                             QByteArray filter_b = filter_ret.toUtf8();
                             auto filter_str_len = filter_b.length();
                             const char* filter_str = static_cast<const char*>(malloc(filter_str_len + 1));
                             memcpy((void*)filter_str, filter_b.data(), filter_str_len);
                             ((char*)filter_str)[filter_str_len] = '\0';
                             const char* sigval1 = filter_str;
                             slotFunc(self, sigval1);
                             libqt_free(filter_str);
                         });
}

libqt_string QFileDialog_GetOpenFileName() {
    auto _ret = QFileDialog::getOpenFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetOpenFileUrl() {
    return new QUrl(QFileDialog::getOpenFileUrl());
}

libqt_string QFileDialog_GetSaveFileName() {
    auto _ret = QFileDialog::getSaveFileName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetSaveFileUrl() {
    return new QUrl(QFileDialog::getSaveFileUrl());
}

libqt_string QFileDialog_GetExistingDirectory() {
    auto _ret = QFileDialog::getExistingDirectory();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl() {
    return new QUrl(QFileDialog::getExistingDirectoryUrl());
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames() {
    QList<QString> _ret = QFileDialog::getOpenFileNames();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls() {
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls();
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_GetOpenFileContent(const libqt_string nameFilter, intptr_t fileContentsReady) {
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    auto fileContentsReady_func = [fileContentsReady](const QString& funcparam1_fp, const QByteArray& funcparam2_fp) -> void {
        const auto funcparam1_ret = funcparam1_fp;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray funcparam1_b = funcparam1_ret.toUtf8();
        auto funcparam1_str_len = funcparam1_b.length();
        const char* funcparam1_str = static_cast<const char*>(malloc(funcparam1_str_len + 1));
        memcpy((void*)funcparam1_str, funcparam1_b.data(), funcparam1_str_len);
        ((char*)funcparam1_str)[funcparam1_str_len] = '\0';
        const char* funcparam1_fv = funcparam1_str;
        const QByteArray funcparam2_qb = funcparam2_fp;
        libqt_string funcparam2_str;
        funcparam2_str.len = funcparam2_qb.length();
        funcparam2_str.data = static_cast<char*>(malloc(funcparam2_str.len));
        memcpy((void*)funcparam2_str.data, funcparam2_qb.data(), funcparam2_str.len);
        libqt_string funcparam2_fv = funcparam2_str;
        reinterpret_cast<void (*)(const char*, libqt_string)>(fileContentsReady)(funcparam1_fv, funcparam2_fv);
    };
    QFileDialog::getOpenFileContent(nameFilter_QString, fileContentsReady_func);
}

void QFileDialog_SaveFileContent(const libqt_string fileContent, const libqt_string fileNameHint) {
    QByteArray fileContent_QByteArray(fileContent.data, fileContent.len);
    QString fileNameHint_QString = QString::fromUtf8(fileNameHint.data, fileNameHint.len);
    QFileDialog::saveFileContent(fileContent_QByteArray, fileNameHint_QString);
}

void QFileDialog_Done(QFileDialog* self, int result) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->done(static_cast<int>(result));
    }
}

void QFileDialog_Accept(QFileDialog* self) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->accept();
    }
}

void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->changeEvent(e);
    }
}

libqt_string QFileDialog_Tr2(const char* s, const char* c) {
    auto _ret = QFileDialog::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_Tr3(const char* s, const char* c, int n) {
    auto _ret = QFileDialog::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QFileDialog_SetOption2(QFileDialog* self, int option, bool on) {
    self->setOption(static_cast<QFileDialog::Option>(option), on);
}

libqt_string QFileDialog_GetOpenFileName1(QWidget* parent) {
    auto _ret = QFileDialog::getOpenFileName(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    auto _ret = QFileDialog::getOpenFileName(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    auto _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetOpenFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    auto _ret = QFileDialog::getOpenFileName(parent, caption_QString, dir_QString, filter_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getOpenFileUrl(parent));
}

QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new QUrl(QFileDialog::getOpenFileUrl(parent, caption_QString, *dir, filter_QString));
}

libqt_string QFileDialog_GetSaveFileName1(QWidget* parent) {
    auto _ret = QFileDialog::getSaveFileName(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    auto _ret = QFileDialog::getSaveFileName(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    auto _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetSaveFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    auto _ret = QFileDialog::getSaveFileName(parent, caption_QString, dir_QString, filter_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getSaveFileUrl(parent));
}

QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new QUrl(QFileDialog::getSaveFileUrl(parent, caption_QString, *dir, filter_QString));
}

libqt_string QFileDialog_GetExistingDirectory1(QWidget* parent) {
    auto _ret = QFileDialog::getExistingDirectory(parent);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    auto _ret = QFileDialog::getExistingDirectory(parent, caption_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    auto _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, const libqt_string caption, const libqt_string dir, int options) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    auto _ret = QFileDialog::getExistingDirectory(parent, caption_QString, dir_QString, static_cast<QFileDialog::Options>(options));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent) {
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}

QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString));
}

QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir));
}

QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, int options) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options)));
}

QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, int options, const libqt_list /* of libqt_string */ supportedSchemes) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QString> supportedSchemes_QList;
    supportedSchemes_QList.reserve(supportedSchemes.len);
    libqt_string* supportedSchemes_arr = static_cast<libqt_string*>(supportedSchemes.data);
    for (size_t i = 0; i < supportedSchemes.len; ++i) {
        QString supportedSchemes_arr_i_QString = QString::fromUtf8(supportedSchemes_arr[i].data, supportedSchemes_arr[i].len);
        supportedSchemes_QList.push_back(supportedSchemes_arr_i_QString);
    }
    return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, caption_QString, *dir, static_cast<QFileDialog::Options>(options), supportedSchemes_QList));
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames1(QWidget* parent) {
    QList<QString> _ret = QFileDialog::getOpenFileNames(parent);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QString> _ret = QFileDialog::getOpenFileNames(parent, caption_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QList<QString> _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of libqt_string */ QFileDialog_GetOpenFileNames4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString dir_QString = QString::fromUtf8(dir.data, dir.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QList<QString> _ret = QFileDialog::getOpenFileNames(parent, caption_QString, dir_QString, filter_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        auto _lv_ret = _ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _lv_b = _lv_ret.toUtf8();
        libqt_string _lv_str;
        _lv_str.len = _lv_b.length();
        _lv_str.data = static_cast<const char*>(malloc(_lv_str.len + 1));
        memcpy((void*)_lv_str.data, _lv_b.data(), _lv_str.len);
        ((char*)_lv_str.data)[_lv_str.len] = '\0';
        _arr[i] = _lv_str;
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls1(QWidget* parent) {
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls2(QWidget* parent, const libqt_string caption) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QUrl* */ QFileDialog_GetOpenFileUrls4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
    QString caption_QString = QString::fromUtf8(caption.data, caption.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QList<QUrl> _ret = QFileDialog::getOpenFileUrls(parent, caption_QString, *dir, filter_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** _arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QUrl(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QFileDialog_GetOpenFileContent3(const libqt_string nameFilter, intptr_t fileContentsReady, QWidget* parent) {
    QString nameFilter_QString = QString::fromUtf8(nameFilter.data, nameFilter.len);
    auto fileContentsReady_func = [fileContentsReady](const QString& funcparam1_fp, const QByteArray& funcparam2_fp) -> void {
        const auto funcparam1_ret = funcparam1_fp;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray funcparam1_b = funcparam1_ret.toUtf8();
        auto funcparam1_str_len = funcparam1_b.length();
        const char* funcparam1_str = static_cast<const char*>(malloc(funcparam1_str_len + 1));
        memcpy((void*)funcparam1_str, funcparam1_b.data(), funcparam1_str_len);
        ((char*)funcparam1_str)[funcparam1_str_len] = '\0';
        const char* funcparam1_fv = funcparam1_str;
        const QByteArray funcparam2_qb = funcparam2_fp;
        libqt_string funcparam2_str;
        funcparam2_str.len = funcparam2_qb.length();
        funcparam2_str.data = static_cast<char*>(malloc(funcparam2_str.len));
        memcpy((void*)funcparam2_str.data, funcparam2_qb.data(), funcparam2_str.len);
        libqt_string funcparam2_fv = funcparam2_str;
        reinterpret_cast<void (*)(const char*, libqt_string)>(fileContentsReady)(funcparam1_fv, funcparam2_fv);
    };
    QFileDialog::getOpenFileContent(nameFilter_QString, fileContentsReady_func, parent);
}

void QFileDialog_SaveFileContent3(const libqt_string fileContent, const libqt_string fileNameHint, QWidget* parent) {
    QByteArray fileContent_QByteArray(fileContent.data, fileContent.len);
    QString fileNameHint_QString = QString::fromUtf8(fileNameHint.data, fileNameHint.len);
    QFileDialog::saveFileContent(fileContent_QByteArray, fileNameHint_QString, parent);
}

// Base class handler implementation
QMetaObject* QFileDialog_SuperMetaObject(const QFileDialog* self) {
    return (QMetaObject*)self->QFileDialog::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMetaObject(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_metaobject_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QFileDialog_SuperMetacast(QFileDialog* self, const char* param1) {
    return self->QFileDialog::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMetacast(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_metacast_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Metacast_Callback>(slot);
}

// Base class handler implementation
int QFileDialog_SuperMetacall(QFileDialog* self, int param1, int param2, void** param3) {
    return self->QFileDialog::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMetacall(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_metacall_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Metacall_Callback>(slot);
}

// Base class handler implementation
void QFileDialog_SuperSetVisible(QFileDialog* self, bool visible) {
    self->QFileDialog::setVisible(visible);
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSetVisible(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_setvisible_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_SetVisible_Callback>(slot);
}

// Base class handler implementation
void QFileDialog_SuperDone(QFileDialog* self, int result) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::done(static_cast<int>(result));
    } else
        qFatal("Error: Protected virtual method QFileDialog::done called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDone(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_done_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Done_Callback>(slot);
}

// Base class handler implementation
void QFileDialog_SuperAccept(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::accept();
    } else
        qFatal("Error: Protected virtual method QFileDialog::accept called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnAccept(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_accept_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Accept_Callback>(slot);
}

// Base class handler implementation
void QFileDialog_SuperChangeEvent(QFileDialog* self, QEvent* e) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::changeEvent(e);
    } else
        qFatal("Error: Protected virtual method QFileDialog::changeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnChangeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_changeevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ChangeEvent_Callback>(slot);
}

// Derived class handler implementation
QSize* QFileDialog_SizeHint(const QFileDialog* self) {
    return new QSize(self->sizeHint());
}

// Base class handler implementation
QSize* QFileDialog_SuperSizeHint(const QFileDialog* self) {
    return new QSize(self->QFileDialog::sizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSizeHint(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_sizehint_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_SizeHint_Callback>(slot);
}

// Derived class handler implementation
QSize* QFileDialog_MinimumSizeHint(const QFileDialog* self) {
    return new QSize(self->minimumSizeHint());
}

// Base class handler implementation
QSize* QFileDialog_SuperMinimumSizeHint(const QFileDialog* self) {
    return new QSize(self->QFileDialog::minimumSizeHint());
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMinimumSizeHint(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_minimumsizehint_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MinimumSizeHint_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_Open(QFileDialog* self) {
    self->open();
}

// Base class handler implementation
void QFileDialog_SuperOpen(QFileDialog* self) {
    self->QFileDialog::open();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnOpen(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_open_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Open_Callback>(slot);
}

// Derived class handler implementation
int QFileDialog_Exec(QFileDialog* self) {
    return self->exec();
}

// Base class handler implementation
int QFileDialog_SuperExec(QFileDialog* self) {
    return self->QFileDialog::exec();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnExec(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_exec_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Exec_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_Reject(QFileDialog* self) {
    self->reject();
}

// Base class handler implementation
void QFileDialog_SuperReject(QFileDialog* self) {
    self->QFileDialog::reject();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnReject(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_reject_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Reject_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_KeyPressEvent(QFileDialog* self, QKeyEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->keyPressEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::keyPressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperKeyPressEvent(QFileDialog* self, QKeyEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::keyPressEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::keyPressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnKeyPressEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_keypressevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_KeyPressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_CloseEvent(QFileDialog* self, QCloseEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->closeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::closeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperCloseEvent(QFileDialog* self, QCloseEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::closeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::closeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnCloseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_closeevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_CloseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ShowEvent(QFileDialog* self, QShowEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->showEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::showEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperShowEvent(QFileDialog* self, QShowEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::showEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::showEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnShowEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_showevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ShowEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ResizeEvent(QFileDialog* self, QResizeEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->resizeEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::resizeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperResizeEvent(QFileDialog* self, QResizeEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::resizeEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::resizeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnResizeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_resizeevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ResizeEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->contextMenuEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::contextMenuEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperContextMenuEvent(QFileDialog* self, QContextMenuEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::contextMenuEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::contextMenuEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnContextMenuEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_contextmenuevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ContextMenuEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFileDialog_EventFilter(QFileDialog* self, QObject* param1, QEvent* param2) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        return vqfiledialog->eventFilter(param1, param2);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::eventFilter called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFileDialog_SuperEventFilter(QFileDialog* self, QObject* param1, QEvent* param2) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->QFileDialog::eventFilter(param1, param2);
    } else
        qFatal("Error: Protected virtual method QFileDialog::eventFilter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEventFilter(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_eventfilter_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_EventFilter_Callback>(slot);
}

// Derived class handler implementation
int QFileDialog_DevType(const QFileDialog* self) {
    return self->devType();
}

// Base class handler implementation
int QFileDialog_SuperDevType(const QFileDialog* self) {
    return self->QFileDialog::devType();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDevType(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_devtype_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DevType_Callback>(slot);
}

// Derived class handler implementation
int QFileDialog_HeightForWidth(const QFileDialog* self, int param1) {
    return self->heightForWidth(static_cast<int>(param1));
}

// Base class handler implementation
int QFileDialog_SuperHeightForWidth(const QFileDialog* self, int param1) {
    return self->QFileDialog::heightForWidth(static_cast<int>(param1));
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHeightForWidth(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_heightforwidth_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_HeightForWidth_Callback>(slot);
}

// Derived class handler implementation
bool QFileDialog_HasHeightForWidth(const QFileDialog* self) {
    return self->hasHeightForWidth();
}

// Base class handler implementation
bool QFileDialog_SuperHasHeightForWidth(const QFileDialog* self) {
    return self->QFileDialog::hasHeightForWidth();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHasHeightForWidth(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_hasheightforwidth_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_HasHeightForWidth_Callback>(slot);
}

// Derived class handler implementation
QPaintEngine* QFileDialog_PaintEngine(const QFileDialog* self) {
    return self->paintEngine();
}

// Base class handler implementation
QPaintEngine* QFileDialog_SuperPaintEngine(const QFileDialog* self) {
    return self->QFileDialog::paintEngine();
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnPaintEngine(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_paintengine_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_PaintEngine_Callback>(slot);
}

// Derived class handler implementation
bool QFileDialog_Event(QFileDialog* self, QEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        return vqfiledialog->event(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::event called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFileDialog_SuperEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->QFileDialog::event(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::event called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_event_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Event_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_MousePressEvent(QFileDialog* self, QMouseEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->mousePressEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::mousePressEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperMousePressEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::mousePressEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::mousePressEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMousePressEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_mousepressevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MousePressEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_MouseReleaseEvent(QFileDialog* self, QMouseEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->mouseReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::mouseReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperMouseReleaseEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::mouseReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::mouseReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseReleaseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_mousereleaseevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_MouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->mouseDoubleClickEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::mouseDoubleClickEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperMouseDoubleClickEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::mouseDoubleClickEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::mouseDoubleClickEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseDoubleClickEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_mousedoubleclickevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseDoubleClickEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_MouseMoveEvent(QFileDialog* self, QMouseEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->mouseMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::mouseMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperMouseMoveEvent(QFileDialog* self, QMouseEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::mouseMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::mouseMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMouseMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_mousemoveevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MouseMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_WheelEvent(QFileDialog* self, QWheelEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->wheelEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::wheelEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperWheelEvent(QFileDialog* self, QWheelEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::wheelEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::wheelEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnWheelEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_wheelevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_WheelEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_KeyReleaseEvent(QFileDialog* self, QKeyEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->keyReleaseEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::keyReleaseEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperKeyReleaseEvent(QFileDialog* self, QKeyEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::keyReleaseEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::keyReleaseEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnKeyReleaseEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_keyreleaseevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_KeyReleaseEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_FocusInEvent(QFileDialog* self, QFocusEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->focusInEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::focusInEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperFocusInEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::focusInEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::focusInEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusInEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_focusinevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusInEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_FocusOutEvent(QFileDialog* self, QFocusEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->focusOutEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::focusOutEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperFocusOutEvent(QFileDialog* self, QFocusEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::focusOutEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::focusOutEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusOutEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_focusoutevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusOutEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_EnterEvent(QFileDialog* self, QEnterEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->enterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::enterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperEnterEvent(QFileDialog* self, QEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::enterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::enterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnEnterEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_enterevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_EnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_LeaveEvent(QFileDialog* self, QEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->leaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::leaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperLeaveEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::leaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::leaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnLeaveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_leaveevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_LeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_PaintEvent(QFileDialog* self, QPaintEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->paintEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::paintEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperPaintEvent(QFileDialog* self, QPaintEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::paintEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::paintEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnPaintEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_paintevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_PaintEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_MoveEvent(QFileDialog* self, QMoveEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->moveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::moveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperMoveEvent(QFileDialog* self, QMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::moveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::moveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_moveevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_MoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_TabletEvent(QFileDialog* self, QTabletEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->tabletEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::tabletEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperTabletEvent(QFileDialog* self, QTabletEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::tabletEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::tabletEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnTabletEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_tabletevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_TabletEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ActionEvent(QFileDialog* self, QActionEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->actionEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::actionEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperActionEvent(QFileDialog* self, QActionEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::actionEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::actionEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnActionEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_actionevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ActionEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_DragEnterEvent(QFileDialog* self, QDragEnterEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->dragEnterEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::dragEnterEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperDragEnterEvent(QFileDialog* self, QDragEnterEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::dragEnterEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::dragEnterEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragEnterEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_dragenterevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DragEnterEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_DragMoveEvent(QFileDialog* self, QDragMoveEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->dragMoveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::dragMoveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperDragMoveEvent(QFileDialog* self, QDragMoveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::dragMoveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::dragMoveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragMoveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_dragmoveevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DragMoveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_DragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->dragLeaveEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::dragLeaveEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperDragLeaveEvent(QFileDialog* self, QDragLeaveEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::dragLeaveEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::dragLeaveEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDragLeaveEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_dragleaveevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DragLeaveEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_DropEvent(QFileDialog* self, QDropEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->dropEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::dropEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperDropEvent(QFileDialog* self, QDropEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::dropEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::dropEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDropEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_dropevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DropEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_HideEvent(QFileDialog* self, QHideEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->hideEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::hideEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperHideEvent(QFileDialog* self, QHideEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::hideEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::hideEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnHideEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_hideevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_HideEvent_Callback>(slot);
}

// Derived class handler implementation
bool QFileDialog_NativeEvent(QFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        return vqfiledialog->nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else {
        qFatal("Error: Protected virtual method QFileDialog::nativeEvent called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFileDialog_SuperNativeEvent(QFileDialog* self, const libqt_string eventType, void* message, intptr_t* result) {
    QByteArray eventType_QByteArray(eventType.data, eventType.len);
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->QFileDialog::nativeEvent(eventType_QByteArray, message, (qintptr*)(result));
    } else
        qFatal("Error: Protected virtual method QFileDialog::nativeEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnNativeEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_nativeevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_NativeEvent_Callback>(slot);
}

// Derived class handler implementation
int QFileDialog_Metric(const QFileDialog* self, int param1) {
    auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self));
    if (vqfiledialog) {
        return vqfiledialog->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else {
        qFatal("Error: Protected virtual method QFileDialog::metric called without a directly constructed type");
    }
}

// Base class handler implementation
int QFileDialog_SuperMetric(const QFileDialog* self, int param1) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->QFileDialog::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
    } else
        qFatal("Error: Protected virtual method QFileDialog::metric called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnMetric(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_metric_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Metric_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_InitPainter(const QFileDialog* self, QPainter* painter) {
    auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self));
    if (vqfiledialog) {
        vqfiledialog->initPainter(painter);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::initPainter called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperInitPainter(const QFileDialog* self, QPainter* painter) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        vqfiledialog->QFileDialog::initPainter(painter);
    } else
        qFatal("Error: Protected virtual method QFileDialog::initPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInitPainter(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_initpainter_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_InitPainter_Callback>(slot);
}

// Derived class handler implementation
QPaintDevice* QFileDialog_Redirected(const QFileDialog* self, QPoint* offset) {
    auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self));
    if (vqfiledialog) {
        return vqfiledialog->redirected(offset);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::redirected called without a directly constructed type");
    }
}

// Base class handler implementation
QPaintDevice* QFileDialog_SuperRedirected(const QFileDialog* self, QPoint* offset) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->QFileDialog::redirected(offset);
    } else
        qFatal("Error: Protected virtual method QFileDialog::redirected called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnRedirected(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_redirected_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_Redirected_Callback>(slot);
}

// Derived class handler implementation
QPainter* QFileDialog_SharedPainter(const QFileDialog* self) {
    auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self));
    if (vqfiledialog) {
        return vqfiledialog->sharedPainter();
    } else {
        qFatal("Error: Protected virtual method QFileDialog::sharedPainter called without a directly constructed type");
    }
}

// Base class handler implementation
QPainter* QFileDialog_SuperSharedPainter(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->QFileDialog::sharedPainter();
    } else
        qFatal("Error: Protected virtual method QFileDialog::sharedPainter called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSharedPainter(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_sharedpainter_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_SharedPainter_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_InputMethodEvent(QFileDialog* self, QInputMethodEvent* param1) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->inputMethodEvent(param1);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::inputMethodEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperInputMethodEvent(QFileDialog* self, QInputMethodEvent* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::inputMethodEvent(param1);
    } else
        qFatal("Error: Protected virtual method QFileDialog::inputMethodEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInputMethodEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_inputmethodevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_InputMethodEvent_Callback>(slot);
}

// Derived class handler implementation
QVariant* QFileDialog_InputMethodQuery(const QFileDialog* self, int param1) {
    return new QVariant(self->inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Base class handler implementation
QVariant* QFileDialog_SuperInputMethodQuery(const QFileDialog* self, int param1) {
    return new QVariant(self->QFileDialog::inputMethodQuery(static_cast<Qt::InputMethodQuery>(param1)));
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnInputMethodQuery(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self)))
        vqfiledialog->qfiledialog_inputmethodquery_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_InputMethodQuery_Callback>(slot);
}

// Derived class handler implementation
bool QFileDialog_FocusNextPrevChild(QFileDialog* self, bool next) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        return vqfiledialog->focusNextPrevChild(next);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::focusNextPrevChild called without a directly constructed type");
    }
}

// Base class handler implementation
bool QFileDialog_SuperFocusNextPrevChild(QFileDialog* self, bool next) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->QFileDialog::focusNextPrevChild(next);
    } else
        qFatal("Error: Protected virtual method QFileDialog::focusNextPrevChild called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnFocusNextPrevChild(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_focusnextprevchild_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_FocusNextPrevChild_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_TimerEvent(QFileDialog* self, QTimerEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperTimerEvent(QFileDialog* self, QTimerEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnTimerEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_timerevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ChildEvent(QFileDialog* self, QChildEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperChildEvent(QFileDialog* self, QChildEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnChildEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_childevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_CustomEvent(QFileDialog* self, QEvent* event) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperCustomEvent(QFileDialog* self, QEvent* event) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QFileDialog::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnCustomEvent(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_customevent_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_ConnectNotify(QFileDialog* self, const QMetaMethod* signal) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperConnectNotify(QFileDialog* self, const QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileDialog::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnConnectNotify(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_connectnotify_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QFileDialog_DisconnectNotify(QFileDialog* self, const QMetaMethod* signal) {
    auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
    if (vqfiledialog) {
        vqfiledialog->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QFileDialog::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QFileDialog_SuperDisconnectNotify(QFileDialog* self, const QMetaMethod* signal) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->QFileDialog::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QFileDialog::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnDisconnectNotify(QFileDialog* self, intptr_t slot) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self))
        vqfiledialog->qfiledialog_disconnectnotify_callback = reinterpret_cast<VirtualQFileDialog::QFileDialog_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
void QFileDialog_AdjustPosition(QFileDialog* self, QWidget* param1) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->VirtualQFileDialog::adjustPosition(param1);
    } else
        qFatal("Error: Protected method QFileDialog::adjustPosition called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileDialog_UpdateMicroFocus(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->VirtualQFileDialog::updateMicroFocus();
    } else
        qFatal("Error: Protected method QFileDialog::updateMicroFocus called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileDialog_Create(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->VirtualQFileDialog::create();
    } else
        qFatal("Error: Protected method QFileDialog::create called without a directly constructed type");
}

// Derived class protected handler implementation
void QFileDialog_Destroy(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        vqfiledialog->VirtualQFileDialog::destroy();
    } else
        qFatal("Error: Protected method QFileDialog::destroy called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileDialog_FocusNextChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->VirtualQFileDialog::focusNextChild();
    } else
        qFatal("Error: Protected method QFileDialog::focusNextChild called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileDialog_FocusPreviousChild(QFileDialog* self) {
    if (auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self)) {
        return vqfiledialog->VirtualQFileDialog::focusPreviousChild();
    } else
        qFatal("Error: Protected method QFileDialog::focusPreviousChild called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QFileDialog_Sender(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->VirtualQFileDialog::sender();
    } else
        qFatal("Error: Protected method QFileDialog::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileDialog_SenderSignalIndex(const QFileDialog* self) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->VirtualQFileDialog::senderSignalIndex();
    } else
        qFatal("Error: Protected method QFileDialog::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QFileDialog_Receivers(const QFileDialog* self, const char* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->VirtualQFileDialog::receivers(signal);
    } else
        qFatal("Error: Protected method QFileDialog::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QFileDialog_IsSignalConnected(const QFileDialog* self, const QMetaMethod* signal) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->VirtualQFileDialog::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QFileDialog::isSignalConnected called without a directly constructed type");
}

// Derived class protected handler implementation
double QFileDialog_GetDecodedMetricF(const QFileDialog* self, int metricA, int metricB) {
    if (auto* vqfiledialog = const_cast<VirtualQFileDialog*>(dynamic_cast<const VirtualQFileDialog*>(self))) {
        return vqfiledialog->VirtualQFileDialog::getDecodedMetricF(static_cast<QPaintDevice::PaintDeviceMetric>(metricA), static_cast<QPaintDevice::PaintDeviceMetric>(metricB));
    } else
        qFatal("Error: Protected method QFileDialog::getDecodedMetricF called without a directly constructed type");
}

void QFileDialog_Delete(QFileDialog* self) {
    delete self;
}
