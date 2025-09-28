#include <KEncodingFileDialog>
#define WORKAROUND_INNER_CLASS_DEFINITION_KEncodingFileDialog__Result
#include <QDialog>
#include <QHideEvent>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPaintDevice>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QWidget>
#include <kencodingfiledialog.h>
#include "libkencodingfiledialog.h"
#include "libkencodingfiledialog.hxx"

QMetaObject* KEncodingFileDialog_MetaObject(const KEncodingFileDialog* self) {
    return (QMetaObject*)self->metaObject();
}

void* KEncodingFileDialog_Metacast(KEncodingFileDialog* self, const char* param1) {
    return self->qt_metacast(param1);
}

int KEncodingFileDialog_Metacall(KEncodingFileDialog* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding() {
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding());
}

QSize* KEncodingFileDialog_SizeHint(const KEncodingFileDialog* self) {
    return new QSize(self->sizeHint());
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNameAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNameAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenFileNamesAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenFileNamesAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetOpenUrlsAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getOpenUrlsAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveFileNameAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveFileNameAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding1(const libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding(encoding_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding2(const libqt_string encoding, const QUrl* startDir) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding(encoding_QString, *startDir));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding3(const libqt_string encoding, const QUrl* startDir, const libqt_string filter) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding(encoding_QString, *startDir, filter_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding4(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding(encoding_QString, *startDir, filter_QString, parent));
}

KEncodingFileDialog__Result* KEncodingFileDialog_GetSaveUrlAndEncoding5(const libqt_string encoding, const QUrl* startDir, const libqt_string filter, QWidget* parent, const libqt_string title) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    QString filter_QString = QString::fromUtf8(filter.data, filter.len);
    QString title_QString = QString::fromUtf8(title.data, title.len);
    return new KEncodingFileDialog::Result(KEncodingFileDialog::getSaveUrlAndEncoding(encoding_QString, *startDir, filter_QString, parent, title_QString));
}

KEncodingFileDialog__Result* KEncodingFileDialog__Result_new(const KEncodingFileDialog__Result* param1) {
    return new KEncodingFileDialog::Result(*param1);
}

libqt_list /* of libqt_string */ KEncodingFileDialog__Result_FileNames(const KEncodingFileDialog__Result* self) {
    QList<QString> fileNames_ret = self->fileNames;
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* fileNames_arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (fileNames_ret.size() + 1)));
    for (qsizetype i = 0; i < fileNames_ret.size(); ++i) {
        QString fileNames_lv_ret = fileNames_ret[i];
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray fileNames_lv_b = fileNames_lv_ret.toUtf8();
        libqt_string fileNames_lv_str;
        fileNames_lv_str.len = fileNames_lv_b.length();
        fileNames_lv_str.data = static_cast<const char*>(malloc(fileNames_lv_str.len + 1));
        memcpy((void*)fileNames_lv_str.data, fileNames_lv_b.data(), fileNames_lv_str.len);
        ((char*)fileNames_lv_str.data)[fileNames_lv_str.len] = '\0';
        fileNames_arr[i] = fileNames_lv_str;
    }
    libqt_list fileNames_out;
    fileNames_out.len = fileNames_ret.size();
    fileNames_out.data = static_cast<void*>(fileNames_arr);
    return fileNames_out;
}

void KEncodingFileDialog__Result_SetFileNames(KEncodingFileDialog__Result* self, libqt_list /* of libqt_string */ fileNames) {
    QList<QString> fileNames_QList;
    fileNames_QList.reserve(fileNames.len);
    libqt_string* fileNames_arr = static_cast<libqt_string*>(fileNames.data);
    for (size_t i = 0; i < fileNames.len; ++i) {
        QString fileNames_arr_i_QString = QString::fromUtf8(fileNames_arr[i].data, fileNames_arr[i].len);
        fileNames_QList.push_back(fileNames_arr_i_QString);
    }
    self->fileNames = fileNames_QList;
}

libqt_list /* of QUrl* */ KEncodingFileDialog__Result_URLs(const KEncodingFileDialog__Result* self) {
    QList<QUrl> URLs_ret = self->URLs;
    // Convert QList<> from C++ memory to manually-managed C memory
    QUrl** URLs_arr = static_cast<QUrl**>(malloc(sizeof(QUrl*) * (URLs_ret.size() + 1)));
    for (qsizetype i = 0; i < URLs_ret.size(); ++i) {
        URLs_arr[i] = new QUrl(URLs_ret[i]);
    }
    libqt_list URLs_out;
    URLs_out.len = URLs_ret.size();
    URLs_out.data = static_cast<void*>(URLs_arr);
    return URLs_out;
}

void KEncodingFileDialog__Result_SetURLs(KEncodingFileDialog__Result* self, libqt_list /* of QUrl* */ URLs) {
    QList<QUrl> URLs_QList;
    URLs_QList.reserve(URLs.len);
    QUrl** URLs_arr = static_cast<QUrl**>(URLs.data);
    for (size_t i = 0; i < URLs.len; ++i) {
        URLs_QList.push_back(*(URLs_arr[i]));
    }
    self->URLs = URLs_QList;
}

libqt_string KEncodingFileDialog__Result_Encoding(const KEncodingFileDialog__Result* self) {
    QString encoding_ret = self->encoding;
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray encoding_b = encoding_ret.toUtf8();
    libqt_string encoding_str;
    encoding_str.len = encoding_b.length();
    encoding_str.data = static_cast<const char*>(malloc(encoding_str.len + 1));
    memcpy((void*)encoding_str.data, encoding_b.data(), encoding_str.len);
    ((char*)encoding_str.data)[encoding_str.len] = '\0';
    return encoding_str;
}

void KEncodingFileDialog__Result_SetEncoding(KEncodingFileDialog__Result* self, libqt_string encoding) {
    QString encoding_QString = QString::fromUtf8(encoding.data, encoding.len);
    self->encoding = encoding_QString;
}

void KEncodingFileDialog__Result_OperatorAssign(KEncodingFileDialog__Result* self, const KEncodingFileDialog__Result* param1) {
    self->operator=(*param1);
}

void KEncodingFileDialog__Result_Delete(KEncodingFileDialog__Result* self) {
    delete self;
}
