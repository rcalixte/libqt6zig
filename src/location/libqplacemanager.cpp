#include <QList>
#include <QLocale>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QPlace>
#include <QPlaceCategory>
#include <QPlaceContentReply>
#include <QPlaceContentRequest>
#include <QPlaceDetailsReply>
#include <QPlaceIdReply>
#include <QPlaceManager>
#include <QPlaceMatchReply>
#include <QPlaceMatchRequest>
#include <QPlaceReply>
#include <QPlaceSearchReply>
#include <QPlaceSearchRequest>
#include <QPlaceSearchSuggestionReply>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qplacemanager.h>
#include "libqplacemanager.h"
#include "libqplacemanager.hxx"

QMetaObject* QPlaceManager_MetaObject(const QPlaceManager* self) {
    return (QMetaObject*)self->metaObject();
}

void* QPlaceManager_Metacast(QPlaceManager* self, const char* param1) {
    return self->qt_metacast(param1);
}

int QPlaceManager_Metacall(QPlaceManager* self, int param1, int param2, void** param3) {
    return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
}

libqt_string QPlaceManager_ManagerName(const QPlaceManager* self) {
    QString _ret = self->managerName();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int QPlaceManager_ManagerVersion(const QPlaceManager* self) {
    return self->managerVersion();
}

QPlaceDetailsReply* QPlaceManager_GetPlaceDetails(const QPlaceManager* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->getPlaceDetails(placeId_QString);
}

QPlaceContentReply* QPlaceManager_GetPlaceContent(const QPlaceManager* self, const QPlaceContentRequest* request) {
    return self->getPlaceContent(*request);
}

QPlaceSearchReply* QPlaceManager_Search(const QPlaceManager* self, const QPlaceSearchRequest* query) {
    return self->search(*query);
}

QPlaceSearchSuggestionReply* QPlaceManager_SearchSuggestions(const QPlaceManager* self, const QPlaceSearchRequest* request) {
    return self->searchSuggestions(*request);
}

QPlaceIdReply* QPlaceManager_SavePlace(QPlaceManager* self, const QPlace* place) {
    return self->savePlace(*place);
}

QPlaceIdReply* QPlaceManager_RemovePlace(QPlaceManager* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    return self->removePlace(placeId_QString);
}

QPlaceIdReply* QPlaceManager_SaveCategory(QPlaceManager* self, const QPlaceCategory* category) {
    return self->saveCategory(*category);
}

QPlaceIdReply* QPlaceManager_RemoveCategory(QPlaceManager* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return self->removeCategory(categoryId_QString);
}

QPlaceReply* QPlaceManager_InitializeCategories(QPlaceManager* self) {
    return self->initializeCategories();
}

libqt_string QPlaceManager_ParentCategoryId(const QPlaceManager* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QString _ret = self->parentCategoryId(categoryId_QString);
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

libqt_list /* of libqt_string */ QPlaceManager_ChildCategoryIds(const QPlaceManager* self) {
    QList<QString> _ret = self->childCategoryIds();
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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

QPlaceCategory* QPlaceManager_Category(const QPlaceManager* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    return new QPlaceCategory(self->category(categoryId_QString));
}

libqt_list /* of QPlaceCategory* */ QPlaceManager_ChildCategories(const QPlaceManager* self) {
    QList<QPlaceCategory> _ret = self->childCategories();
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

libqt_list /* of QLocale* */ QPlaceManager_Locales(const QPlaceManager* self) {
    QList<QLocale> _ret = self->locales();
    // Convert QList<> from C++ memory to manually-managed C memory
    QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QLocale(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlaceManager_SetLocale(QPlaceManager* self, const QLocale* locale) {
    self->setLocale(*locale);
}

void QPlaceManager_SetLocales(QPlaceManager* self, const libqt_list /* of QLocale* */ locale) {
    QList<QLocale> locale_QList;
    locale_QList.reserve(locale.len);
    QLocale** locale_arr = static_cast<QLocale**>(locale.data);
    for (size_t i = 0; i < locale.len; ++i) {
        locale_QList.push_back(*(locale_arr[i]));
    }
    self->setLocales(locale_QList);
}

QPlace* QPlaceManager_CompatiblePlace(const QPlaceManager* self, const QPlace* place) {
    return new QPlace(self->compatiblePlace(*place));
}

QPlaceMatchReply* QPlaceManager_MatchingPlaces(const QPlaceManager* self, const QPlaceMatchRequest* request) {
    return self->matchingPlaces(*request);
}

void QPlaceManager_Finished(QPlaceManager* self, QPlaceReply* reply) {
    self->finished(reply);
}

void QPlaceManager_Connect_Finished(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, QPlaceReply*) = reinterpret_cast<void (*)(QPlaceManager*, QPlaceReply*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::finished, [self, slotFunc](QPlaceReply* reply) {
        QPlaceReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QPlaceManager_ErrorOccurred(QPlaceManager* self, QPlaceReply* param1, int errorVal) {
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal));
}

void QPlaceManager_Connect_ErrorOccurred(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, QPlaceReply*, int) = reinterpret_cast<void (*)(QPlaceManager*, QPlaceReply*, int)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::errorOccurred, [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal) {
        QPlaceReply* sigval1 = param1;
        int sigval2 = static_cast<int>(errorVal);
        slotFunc(self, sigval1, sigval2);
    });
}

void QPlaceManager_PlaceAdded(QPlaceManager* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeAdded(placeId_QString);
}

void QPlaceManager_Connect_PlaceAdded(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::placeAdded, [self, slotFunc](const QString& placeId) {
        const QString placeId_ret = placeId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray placeId_b = placeId_ret.toUtf8();
        const char* placeId_str = static_cast<const char*>(malloc(placeId_b.length() + 1));
        memcpy((void*)placeId_str, placeId_b.data(), placeId_b.length());
        ((char*)placeId_str)[placeId_b.length()] = '\0';
        const char* sigval1 = placeId_str;
        slotFunc(self, sigval1);
        libqt_free(placeId_str);
    });
}

void QPlaceManager_PlaceUpdated(QPlaceManager* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeUpdated(placeId_QString);
}

void QPlaceManager_Connect_PlaceUpdated(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::placeUpdated, [self, slotFunc](const QString& placeId) {
        const QString placeId_ret = placeId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray placeId_b = placeId_ret.toUtf8();
        const char* placeId_str = static_cast<const char*>(malloc(placeId_b.length() + 1));
        memcpy((void*)placeId_str, placeId_b.data(), placeId_b.length());
        ((char*)placeId_str)[placeId_b.length()] = '\0';
        const char* sigval1 = placeId_str;
        slotFunc(self, sigval1);
        libqt_free(placeId_str);
    });
}

void QPlaceManager_PlaceRemoved(QPlaceManager* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeRemoved(placeId_QString);
}

void QPlaceManager_Connect_PlaceRemoved(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::placeRemoved, [self, slotFunc](const QString& placeId) {
        const QString placeId_ret = placeId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray placeId_b = placeId_ret.toUtf8();
        const char* placeId_str = static_cast<const char*>(malloc(placeId_b.length() + 1));
        memcpy((void*)placeId_str, placeId_b.data(), placeId_b.length());
        ((char*)placeId_str)[placeId_b.length()] = '\0';
        const char* sigval1 = placeId_str;
        slotFunc(self, sigval1);
        libqt_free(placeId_str);
    });
}

void QPlaceManager_CategoryAdded(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    self->categoryAdded(*category, parentId_QString);
}

void QPlaceManager_Connect_CategoryAdded(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, QPlaceCategory*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, QPlaceCategory*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::categoryAdded, [self, slotFunc](const QPlaceCategory& category, const QString& parentId) {
        const QPlaceCategory& category_ret = category;
        // Cast returned reference into pointer
        QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
        const QString parentId_ret = parentId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentId_b = parentId_ret.toUtf8();
        const char* parentId_str = static_cast<const char*>(malloc(parentId_b.length() + 1));
        memcpy((void*)parentId_str, parentId_b.data(), parentId_b.length());
        ((char*)parentId_str)[parentId_b.length()] = '\0';
        const char* sigval2 = parentId_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(parentId_str);
    });
}

void QPlaceManager_CategoryUpdated(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    self->categoryUpdated(*category, parentId_QString);
}

void QPlaceManager_Connect_CategoryUpdated(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, QPlaceCategory*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, QPlaceCategory*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::categoryUpdated, [self, slotFunc](const QPlaceCategory& category, const QString& parentId) {
        const QPlaceCategory& category_ret = category;
        // Cast returned reference into pointer
        QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
        const QString parentId_ret = parentId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentId_b = parentId_ret.toUtf8();
        const char* parentId_str = static_cast<const char*>(malloc(parentId_b.length() + 1));
        memcpy((void*)parentId_str, parentId_b.data(), parentId_b.length());
        ((char*)parentId_str)[parentId_b.length()] = '\0';
        const char* sigval2 = parentId_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(parentId_str);
    });
}

void QPlaceManager_CategoryRemoved(QPlaceManager* self, const libqt_string categoryId, const libqt_string parentId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    self->categoryRemoved(categoryId_QString, parentId_QString);
}

void QPlaceManager_Connect_CategoryRemoved(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, const char*, const char*) = reinterpret_cast<void (*)(QPlaceManager*, const char*, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::categoryRemoved, [self, slotFunc](const QString& categoryId, const QString& parentId) {
        const QString categoryId_ret = categoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray categoryId_b = categoryId_ret.toUtf8();
        const char* categoryId_str = static_cast<const char*>(malloc(categoryId_b.length() + 1));
        memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_b.length());
        ((char*)categoryId_str)[categoryId_b.length()] = '\0';
        const char* sigval1 = categoryId_str;
        const QString parentId_ret = parentId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentId_b = parentId_ret.toUtf8();
        const char* parentId_str = static_cast<const char*>(malloc(parentId_b.length() + 1));
        memcpy((void*)parentId_str, parentId_b.data(), parentId_b.length());
        ((char*)parentId_str)[parentId_b.length()] = '\0';
        const char* sigval2 = parentId_str;
        slotFunc(self, sigval1, sigval2);
        libqt_free(categoryId_str);
        libqt_free(parentId_str);
    });
}

void QPlaceManager_DataChanged(QPlaceManager* self) {
    self->dataChanged();
}

void QPlaceManager_Connect_DataChanged(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*) = reinterpret_cast<void (*)(QPlaceManager*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::dataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

QPlaceIdReply* QPlaceManager_SaveCategory2(QPlaceManager* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    return self->saveCategory(*category, parentId_QString);
}

libqt_list /* of libqt_string */ QPlaceManager_ChildCategoryIds1(const QPlaceManager* self, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    QList<QString> _ret = self->childCategoryIds(parentId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        QString _lv_ret = _ret[i];
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

libqt_list /* of QPlaceCategory* */ QPlaceManager_ChildCategories1(const QPlaceManager* self, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    QList<QPlaceCategory> _ret = self->childCategories(parentId_QString);
    // Convert QList<> from C++ memory to manually-managed C memory
    QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size() + 1)));
    for (qsizetype i = 0; i < _ret.size(); ++i) {
        _arr[i] = new QPlaceCategory(_ret[i]);
    }
    libqt_list _out;
    _out.len = _ret.size();
    _out.data = static_cast<void*>(_arr);
    return _out;
}

void QPlaceManager_ErrorOccurred3(QPlaceManager* self, QPlaceReply* param1, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
}

void QPlaceManager_Connect_ErrorOccurred3(QPlaceManager* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManager*, QPlaceReply*, int, const char*) = reinterpret_cast<void (*)(QPlaceManager*, QPlaceReply*, int, const char*)>(slot);
    QPlaceManager::connect(self, &QPlaceManager::errorOccurred, [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal, const QString& errorString) {
        QPlaceReply* sigval1 = param1;
        int sigval2 = static_cast<int>(errorVal);
        const QString errorString_ret = errorString;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray errorString_b = errorString_ret.toUtf8();
        const char* errorString_str = static_cast<const char*>(malloc(errorString_b.length() + 1));
        memcpy((void*)errorString_str, errorString_b.data(), errorString_b.length());
        ((char*)errorString_str)[errorString_b.length()] = '\0';
        const char* sigval3 = errorString_str;
        slotFunc(self, sigval1, sigval2, sigval3);
        libqt_free(errorString_str);
    });
}

void QPlaceManager_Delete(QPlaceManager* self) {
    delete self;
}
