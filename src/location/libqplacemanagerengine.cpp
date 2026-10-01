#include <QChildEvent>
#include <QEvent>
#include <QList>
#include <QLocale>
#include <QMap>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceCategory>
#include <QPlaceContentReply>
#include <QPlaceContentRequest>
#include <QPlaceDetailsReply>
#include <QPlaceIcon>
#include <QPlaceIdReply>
#include <QPlaceManager>
#include <QPlaceManagerEngine>
#include <QPlaceMatchReply>
#include <QPlaceMatchRequest>
#include <QPlaceReply>
#include <QPlaceSearchReply>
#include <QPlaceSearchRequest>
#include <QPlaceSearchSuggestionReply>
#include <QSize>
#include <QString>
#include <QTimerEvent>
#include <QUrl>
#include <QVariant>
#include <qplacemanagerengine.h>
#include "libqplacemanagerengine.h"
#include "libqplacemanagerengine.hxx"

QPlaceManagerEngine* QPlaceManagerEngine_new(const libqt_map /* of libqt_string to QVariant* */ parameters) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQPlaceManagerEngine(parameters_QMap);
}

QPlaceManagerEngine* QPlaceManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap.insert(parameters_karr_i_QString, *(parameters_varr[i]));
    }
    return new VirtualQPlaceManagerEngine(parameters_QMap, parent);
}

QMetaObject* QPlaceManagerEngine_MetaObject(const QPlaceManagerEngine* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceManagerEngine_Metacast(QPlaceManagerEngine* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceManagerEngine_Metacall(QPlaceManagerEngine* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceManagerEngine_Tr(const char* s) {
    auto _ret = QPlaceManagerEngine::tr(s);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceManagerEngine_ManagerName(const QPlaceManagerEngine* self) {
    auto _ret = self->managerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceManagerEngine_ManagerVersion(const QPlaceManagerEngine* self) {
    return self->managerVersion();
}

QPlaceDetailsReply* QPlaceManagerEngine_GetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->getPlaceDetails(placeId_QString);
}

QPlaceContentReply* QPlaceManagerEngine_GetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request) {
    return self->getPlaceContent(*request);
}

QPlaceSearchReply* QPlaceManagerEngine_Search(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    return self->search(*request);
}

QPlaceSearchSuggestionReply* QPlaceManagerEngine_SearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    return self->searchSuggestions(*request);
}

QPlaceIdReply* QPlaceManagerEngine_SavePlace(QPlaceManagerEngine* self, const QPlace* place) {
    return self->savePlace(*place);
}

QPlaceIdReply* QPlaceManagerEngine_RemovePlace(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->removePlace(placeId_QString);
}

QPlaceIdReply* QPlaceManagerEngine_SaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    return self->saveCategory(*category, parentId_QString);
}

QPlaceIdReply* QPlaceManagerEngine_RemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return self->removeCategory(categoryId_QString);
}

QPlaceReply* QPlaceManagerEngine_InitializeCategories(QPlaceManagerEngine* self) {
    return self->initializeCategories();
}

libqt_string QPlaceManagerEngine_ParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto _ret = self->parentCategoryId(categoryId_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QPlaceManagerEngine_ChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QList<QString> _ret = self->childCategoryIds(categoryId_QString);
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

QPlaceCategory* QPlaceManagerEngine_Category(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return new QPlaceCategory(self->category(categoryId_QString));
}

libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_ChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    QList<QPlaceCategory> _ret = self->childCategories(parentId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QLocale* */ QPlaceManagerEngine_Locales(const QPlaceManagerEngine* self) {
    QList<QLocale> _ret = self->locales();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlaceManagerEngine_SetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales) {
    QList<QLocale> locales_QList;
    locales_QList.reserve(locales.len);
    QLocale** locales_arr = static_cast<QLocale**>(locales.data);
    for (size_t i = 0; i < locales.len; ++i) {
        locales_QList.push_back(*(locales_arr[i]));
    }
    self->setLocales(locales_QList);
}

QUrl* QPlaceManagerEngine_ConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size) {
    return new QUrl(self->constructIconUrl(*icon, *size));
}

QPlace* QPlaceManagerEngine_CompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original) {
    return new QPlace(self->compatiblePlace(*original));
}

QPlaceMatchReply* QPlaceManagerEngine_MatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request) {
    return self->matchingPlaces(*request);
}

void QPlaceManagerEngine_Finished(QPlaceManagerEngine* self, QPlaceReply* reply) {
    self->finished(reply);
}

void QPlaceManagerEngine_Connect_Finished(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(QPlaceReply*)>(&QPlaceManagerEngine::finished),
                                 [self, slotFunc](QPlaceReply* reply) {
                                     QPlaceReply* sigval1 = reply;
                                     slotFunc(self, sigval1);
                                 });
}

void QPlaceManagerEngine_ErrorOccurred(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal) {
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal));
}

void QPlaceManagerEngine_Connect_ErrorOccurred(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*, int) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*, int)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(QPlaceReply*, QPlaceReply::Error, const QString&)>(&QPlaceManagerEngine::errorOccurred),
                                 [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal) {
                                     QPlaceReply* sigval1 = param1;
                                     int sigval2 = static_cast<int>(errorVal);
                                     slotFunc(self, sigval1, sigval2);
                                 });
}

void QPlaceManagerEngine_PlaceAdded(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeAdded(placeId_QString);
}

void QPlaceManagerEngine_Connect_PlaceAdded(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QString&)>(&QPlaceManagerEngine::placeAdded),
                                 [self, slotFunc](const QString& placeId) {
                                     const auto placeId_ret = placeId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray placeId_b = placeId_ret.toUtf8();
                                     auto placeId_str_len = placeId_b.length();
                                     const char* placeId_str = static_cast<const char*>(malloc(placeId_str_len + 1));
                                     memcpy((void*)placeId_str, placeId_b.data(), placeId_str_len);
                                     ((char*)placeId_str)[placeId_str_len] = '\0';
                                     const char* sigval1 = placeId_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(placeId_str);
                                 });
}

void QPlaceManagerEngine_PlaceUpdated(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeUpdated(placeId_QString);
}

void QPlaceManagerEngine_Connect_PlaceUpdated(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QString&)>(&QPlaceManagerEngine::placeUpdated),
                                 [self, slotFunc](const QString& placeId) {
                                     const auto placeId_ret = placeId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray placeId_b = placeId_ret.toUtf8();
                                     auto placeId_str_len = placeId_b.length();
                                     const char* placeId_str = static_cast<const char*>(malloc(placeId_str_len + 1));
                                     memcpy((void*)placeId_str, placeId_b.data(), placeId_str_len);
                                     ((char*)placeId_str)[placeId_str_len] = '\0';
                                     const char* sigval1 = placeId_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(placeId_str);
                                 });
}

void QPlaceManagerEngine_PlaceRemoved(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeRemoved(placeId_QString);
}

void QPlaceManagerEngine_Connect_PlaceRemoved(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QString&)>(&QPlaceManagerEngine::placeRemoved),
                                 [self, slotFunc](const QString& placeId) {
                                     const auto placeId_ret = placeId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray placeId_b = placeId_ret.toUtf8();
                                     auto placeId_str_len = placeId_b.length();
                                     const char* placeId_str = static_cast<const char*>(malloc(placeId_str_len + 1));
                                     memcpy((void*)placeId_str, placeId_b.data(), placeId_str_len);
                                     ((char*)placeId_str)[placeId_str_len] = '\0';
                                     const char* sigval1 = placeId_str;
                                     slotFunc(self, sigval1);
                                     libqt_free(placeId_str);
                                 });
}

void QPlaceManagerEngine_CategoryAdded(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentCategoryId) {
    QString parentCategoryId_QString = QString::fromUtf8(parentCategoryId.data, parentCategoryId.len);
    self->categoryAdded(*category, parentCategoryId_QString);
}

void QPlaceManagerEngine_Connect_CategoryAdded(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceCategory*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceCategory*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QPlaceCategory&, const QString&)>(&QPlaceManagerEngine::categoryAdded),
                                 [self, slotFunc](const QPlaceCategory& category, const QString& parentCategoryId) {
                                     const QPlaceCategory& category_ret = category;
                                     // Cast returned reference into pointer
                                     QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
                                     const auto parentCategoryId_ret = parentCategoryId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
                                     auto parentCategoryId_str_len = parentCategoryId_b.length();
                                     const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_str_len + 1));
                                     memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_str_len);
                                     ((char*)parentCategoryId_str)[parentCategoryId_str_len] = '\0';
                                     const char* sigval2 = parentCategoryId_str;
                                     slotFunc(self, sigval1, sigval2);
                                     libqt_free(parentCategoryId_str);
                                 });
}

void QPlaceManagerEngine_CategoryUpdated(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentCategoryId) {
    QString parentCategoryId_QString = QString::fromUtf8(parentCategoryId.data, parentCategoryId.len);
    self->categoryUpdated(*category, parentCategoryId_QString);
}

void QPlaceManagerEngine_Connect_CategoryUpdated(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceCategory*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceCategory*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QPlaceCategory&, const QString&)>(&QPlaceManagerEngine::categoryUpdated),
                                 [self, slotFunc](const QPlaceCategory& category, const QString& parentCategoryId) {
                                     const QPlaceCategory& category_ret = category;
                                     // Cast returned reference into pointer
                                     QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
                                     const auto parentCategoryId_ret = parentCategoryId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
                                     auto parentCategoryId_str_len = parentCategoryId_b.length();
                                     const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_str_len + 1));
                                     memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_str_len);
                                     ((char*)parentCategoryId_str)[parentCategoryId_str_len] = '\0';
                                     const char* sigval2 = parentCategoryId_str;
                                     slotFunc(self, sigval1, sigval2);
                                     libqt_free(parentCategoryId_str);
                                 });
}

void QPlaceManagerEngine_CategoryRemoved(QPlaceManagerEngine* self, const libqt_string categoryId, const libqt_string parentCategoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QString parentCategoryId_QString = QString::fromUtf8(parentCategoryId.data, parentCategoryId.len);
    self->categoryRemoved(categoryId_QString, parentCategoryId_QString);
}

void QPlaceManagerEngine_Connect_CategoryRemoved(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(const QString&, const QString&)>(&QPlaceManagerEngine::categoryRemoved),
                                 [self, slotFunc](const QString& categoryId, const QString& parentCategoryId) {
                                     const auto categoryId_ret = categoryId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray categoryId_b = categoryId_ret.toUtf8();
                                     auto categoryId_str_len = categoryId_b.length();
                                     const char* categoryId_str = static_cast<const char*>(malloc(categoryId_str_len + 1));
                                     memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_str_len);
                                     ((char*)categoryId_str)[categoryId_str_len] = '\0';
                                     const char* sigval1 = categoryId_str;
                                     const auto parentCategoryId_ret = parentCategoryId;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
                                     auto parentCategoryId_str_len = parentCategoryId_b.length();
                                     const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_str_len + 1));
                                     memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_str_len);
                                     ((char*)parentCategoryId_str)[parentCategoryId_str_len] = '\0';
                                     const char* sigval2 = parentCategoryId_str;
                                     slotFunc(self, sigval1, sigval2);
                                     libqt_free(categoryId_str);
                                     libqt_free(parentCategoryId_str);
                                 });
}

void QPlaceManagerEngine_DataChanged(QPlaceManagerEngine* self) {
    self->dataChanged();
}

void QPlaceManagerEngine_Connect_DataChanged(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*) = reinterpret_cast<void (*)(QPlaceManagerEngine*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)()>(&QPlaceManagerEngine::dataChanged),
                                 [self, slotFunc]() {
                                     slotFunc(self);
                                 });
}

libqt_string QPlaceManagerEngine_Tr2(const char* s, const char* c) {
    auto _ret = QPlaceManagerEngine::tr(s, c);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_string QPlaceManagerEngine_Tr3(const char* s, const char* c, int n) {
    auto _ret = QPlaceManagerEngine::tr(s, c, static_cast<int>(n));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void QPlaceManagerEngine_ErrorOccurred3(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
}

void QPlaceManagerEngine_Connect_ErrorOccurred3(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*, int, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*, int, const char*)>(slot);
    QPlaceManagerEngine::connect(self,
                                 static_cast<void (QPlaceManagerEngine::*)(QPlaceReply*, QPlaceReply::Error, const QString&)>(&QPlaceManagerEngine::errorOccurred),
                                 [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal, const QString& errorString) {
                                     QPlaceReply* sigval1 = param1;
                                     int sigval2 = static_cast<int>(errorVal);
                                     const auto errorString_ret = errorString;
                                     // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
                                     QByteArray errorString_b = errorString_ret.toUtf8();
                                     auto errorString_str_len = errorString_b.length();
                                     const char* errorString_str = static_cast<const char*>(malloc(errorString_str_len + 1));
                                     memcpy((void*)errorString_str, errorString_b.data(), errorString_str_len);
                                     ((char*)errorString_str)[errorString_str_len] = '\0';
                                     const char* sigval3 = errorString_str;
                                     slotFunc(self, sigval1, sigval2, sigval3);
                                     libqt_free(errorString_str);
                                 });
}

// Base class handler implementation
QMetaObject* QPlaceManagerEngine_SuperMetaObject(const QPlaceManagerEngine* self) {
    return (QMetaObject*)self->QPlaceManagerEngine::metaObject();
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetaObject(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_metaobject_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_MetaObject_Callback>(slot);
}

// Base class handler implementation
void* QPlaceManagerEngine_SuperMetacast(QPlaceManagerEngine* self, const char* param1) {
    return self->QPlaceManagerEngine::qt_metacast(param1);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetacast(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_metacast_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Metacast_Callback>(slot);
}

// Base class handler implementation
int QPlaceManagerEngine_SuperMetacall(QPlaceManagerEngine* self, int param1, int param2, void** param3) {
    return self->QPlaceManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetacall(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_metacall_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Metacall_Callback>(slot);
}

// Base class handler implementation
QPlaceDetailsReply* QPlaceManagerEngine_SuperGetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->QPlaceManagerEngine::getPlaceDetails(placeId_QString);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnGetPlaceDetails(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_getplacedetails_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_GetPlaceDetails_Callback>(slot);
}

// Base class handler implementation
QPlaceContentReply* QPlaceManagerEngine_SuperGetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request) {
    return self->QPlaceManagerEngine::getPlaceContent(*request);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnGetPlaceContent(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_getplacecontent_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_GetPlaceContent_Callback>(slot);
}

// Base class handler implementation
QPlaceSearchReply* QPlaceManagerEngine_SuperSearch(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    return self->QPlaceManagerEngine::search(*request);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSearch(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_search_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Search_Callback>(slot);
}

// Base class handler implementation
QPlaceSearchSuggestionReply* QPlaceManagerEngine_SuperSearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    return self->QPlaceManagerEngine::searchSuggestions(*request);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSearchSuggestions(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_searchsuggestions_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SearchSuggestions_Callback>(slot);
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_SuperSavePlace(QPlaceManagerEngine* self, const QPlace* place) {
    return self->QPlaceManagerEngine::savePlace(*place);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSavePlace(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_saveplace_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SavePlace_Callback>(slot);
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_SuperRemovePlace(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->QPlaceManagerEngine::removePlace(placeId_QString);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnRemovePlace(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_removeplace_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_RemovePlace_Callback>(slot);
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_SuperSaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    return self->QPlaceManagerEngine::saveCategory(*category, parentId_QString);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSaveCategory(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_savecategory_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SaveCategory_Callback>(slot);
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_SuperRemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return self->QPlaceManagerEngine::removeCategory(categoryId_QString);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnRemoveCategory(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_removecategory_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_RemoveCategory_Callback>(slot);
}

// Base class handler implementation
QPlaceReply* QPlaceManagerEngine_SuperInitializeCategories(QPlaceManagerEngine* self) {
    return self->QPlaceManagerEngine::initializeCategories();
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnInitializeCategories(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_initializecategories_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_InitializeCategories_Callback>(slot);
}

// Base class handler implementation
libqt_string QPlaceManagerEngine_SuperParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto _ret = self->QPlaceManagerEngine::parentCategoryId(categoryId_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnParentCategoryId(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_parentcategoryid_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ParentCategoryId_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of libqt_string */ QPlaceManagerEngine_SuperChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QList<QString> _ret = self->QPlaceManagerEngine::childCategoryIds(categoryId_QString);
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

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildCategoryIds(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_childcategoryids_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildCategoryIds_Callback>(slot);
}

// Base class handler implementation
QPlaceCategory* QPlaceManagerEngine_SuperCategory(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return new QPlaceCategory(self->QPlaceManagerEngine::category(categoryId_QString));
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCategory(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_category_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Category_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_SuperChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    QList<QPlaceCategory> _ret = self->QPlaceManagerEngine::childCategories(parentId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildCategories(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_childcategories_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildCategories_Callback>(slot);
}

// Base class handler implementation
libqt_list /* of QLocale* */ QPlaceManagerEngine_SuperLocales(const QPlaceManagerEngine* self) {
    QList<QLocale> _ret = self->QPlaceManagerEngine::locales();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnLocales(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_locales_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Locales_Callback>(slot);
}

// Base class handler implementation
void QPlaceManagerEngine_SuperSetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales) {
    QList<QLocale> locales_QList;
    locales_QList.reserve(locales.len);
    QLocale** locales_arr = static_cast<QLocale**>(locales.data);
    for (size_t i = 0; i < locales.len; ++i) {
        locales_QList.push_back(*(locales_arr[i]));
    }
    self->QPlaceManagerEngine::setLocales(locales_QList);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSetLocales(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_setlocales_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SetLocales_Callback>(slot);
}

// Base class handler implementation
QUrl* QPlaceManagerEngine_SuperConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size) {
    return new QUrl(self->QPlaceManagerEngine::constructIconUrl(*icon, *size));
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnConstructIconUrl(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_constructiconurl_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ConstructIconUrl_Callback>(slot);
}

// Base class handler implementation
QPlace* QPlaceManagerEngine_SuperCompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original) {
    return new QPlace(self->QPlaceManagerEngine::compatiblePlace(*original));
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCompatiblePlace(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self)))
        vqplacemanagerengine->qplacemanagerengine_compatibleplace_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_CompatiblePlace_Callback>(slot);
}

// Base class handler implementation
QPlaceMatchReply* QPlaceManagerEngine_SuperMatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request) {
    return self->QPlaceManagerEngine::matchingPlaces(*request);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMatchingPlaces(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_matchingplaces_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_MatchingPlaces_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceManagerEngine_Event(QPlaceManagerEngine* self, QEvent* event) {
    return self->event(event);
}

// Base class handler implementation
bool QPlaceManagerEngine_SuperEvent(QPlaceManagerEngine* self, QEvent* event) {
    return self->QPlaceManagerEngine::event(event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnEvent(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_event_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Event_Callback>(slot);
}

// Derived class handler implementation
bool QPlaceManagerEngine_EventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event) {
    return self->eventFilter(watched, event);
}

// Base class handler implementation
bool QPlaceManagerEngine_SuperEventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event) {
    return self->QPlaceManagerEngine::eventFilter(watched, event);
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnEventFilter(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_eventfilter_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_EventFilter_Callback>(slot);
}

// Derived class handler implementation
void QPlaceManagerEngine_TimerEvent(QPlaceManagerEngine* self, QTimerEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine) {
        vqplacemanagerengine->timerEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceManagerEngine::timerEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceManagerEngine_SuperTimerEvent(QPlaceManagerEngine* self, QTimerEvent* event) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self)) {
        vqplacemanagerengine->QPlaceManagerEngine::timerEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceManagerEngine::timerEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnTimerEvent(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_timerevent_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_TimerEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceManagerEngine_ChildEvent(QPlaceManagerEngine* self, QChildEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine) {
        vqplacemanagerengine->childEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceManagerEngine::childEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceManagerEngine_SuperChildEvent(QPlaceManagerEngine* self, QChildEvent* event) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self)) {
        vqplacemanagerengine->QPlaceManagerEngine::childEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceManagerEngine::childEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildEvent(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_childevent_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceManagerEngine_CustomEvent(QPlaceManagerEngine* self, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine) {
        vqplacemanagerengine->customEvent(event);
    } else {
        qFatal("Error: Protected virtual method QPlaceManagerEngine::customEvent called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceManagerEngine_SuperCustomEvent(QPlaceManagerEngine* self, QEvent* event) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self)) {
        vqplacemanagerengine->QPlaceManagerEngine::customEvent(event);
    } else
        qFatal("Error: Protected virtual method QPlaceManagerEngine::customEvent called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCustomEvent(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_customevent_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_CustomEvent_Callback>(slot);
}

// Derived class handler implementation
void QPlaceManagerEngine_ConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine) {
        vqplacemanagerengine->connectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceManagerEngine::connectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceManagerEngine_SuperConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self)) {
        vqplacemanagerengine->QPlaceManagerEngine::connectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceManagerEngine::connectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnConnectNotify(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_connectnotify_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ConnectNotify_Callback>(slot);
}

// Derived class handler implementation
void QPlaceManagerEngine_DisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine) {
        vqplacemanagerengine->disconnectNotify(*signal);
    } else {
        qFatal("Error: Protected virtual method QPlaceManagerEngine::disconnectNotify called without a directly constructed type");
    }
}

// Base class handler implementation
void QPlaceManagerEngine_SuperDisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self)) {
        vqplacemanagerengine->QPlaceManagerEngine::disconnectNotify(*signal);
    } else
        qFatal("Error: Protected virtual method QPlaceManagerEngine::disconnectNotify called without a directly constructed type");
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnDisconnectNotify(QPlaceManagerEngine* self, intptr_t slot) {
    if (auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self))
        vqplacemanagerengine->qplacemanagerengine_disconnectnotify_callback = reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_DisconnectNotify_Callback>(slot);
}

// Derived class protected handler implementation
QPlaceManager* QPlaceManagerEngine_Manager(const QPlaceManagerEngine* self) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self))) {
        return vqplacemanagerengine->VirtualQPlaceManagerEngine::manager();
    } else
        qFatal("Error: Protected method QPlaceManagerEngine::manager called without a directly constructed type");
}

// Derived class protected handler implementation
QObject* QPlaceManagerEngine_Sender(const QPlaceManagerEngine* self) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self))) {
        return vqplacemanagerengine->VirtualQPlaceManagerEngine::sender();
    } else
        qFatal("Error: Protected method QPlaceManagerEngine::sender called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceManagerEngine_SenderSignalIndex(const QPlaceManagerEngine* self) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self))) {
        return vqplacemanagerengine->VirtualQPlaceManagerEngine::senderSignalIndex();
    } else
        qFatal("Error: Protected method QPlaceManagerEngine::senderSignalIndex called without a directly constructed type");
}

// Derived class protected handler implementation
int QPlaceManagerEngine_Receivers(const QPlaceManagerEngine* self, const char* signal) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self))) {
        return vqplacemanagerengine->VirtualQPlaceManagerEngine::receivers(signal);
    } else
        qFatal("Error: Protected method QPlaceManagerEngine::receivers called without a directly constructed type");
}

// Derived class protected handler implementation
bool QPlaceManagerEngine_IsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal) {
    if (auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self))) {
        return vqplacemanagerengine->VirtualQPlaceManagerEngine::isSignalConnected(*signal);
    } else
        qFatal("Error: Protected method QPlaceManagerEngine::isSignalConnected called without a directly constructed type");
}

void QPlaceManagerEngine_Delete(QPlaceManagerEngine* self) {
    delete self;
}
