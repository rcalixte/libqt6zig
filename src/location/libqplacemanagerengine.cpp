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
#include <QByteArray>
#include <cstring>
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
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQPlaceManagerEngine(parameters_QMap);
}

QPlaceManagerEngine* QPlaceManagerEngine_new2(const libqt_map /* of libqt_string to QVariant* */ parameters, QObject* parent) {
    QMap<QString, QVariant> parameters_QMap;
    libqt_string* parameters_karr = static_cast<libqt_string*>(parameters.keys);
    QVariant** parameters_varr = static_cast<QVariant**>(parameters.values);
    for (size_t i = 0; i < parameters.len; ++i) {
        QString parameters_karr_i_QString = QString::fromUtf8(parameters_karr[i].data, parameters_karr[i].len);
        parameters_QMap[parameters_karr_i_QString] = *(parameters_varr[i]);
    }
    return new VirtualQPlaceManagerEngine(parameters_QMap, parent);
}

QMetaObject* QPlaceManagerEngine_MetaObject(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return (QMetaObject*)self->metaObject();
    } else {
        return (QMetaObject*)((VirtualQPlaceManagerEngine*)self)->metaObject();
    }
}

void* QPlaceManagerEngine_Metacast(QPlaceManagerEngine* self, const char* param1) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->qt_metacast(param1);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->qt_metacast(param1);
    }
}

int QPlaceManagerEngine_Metacall(QPlaceManagerEngine* self, int param1, int param2, void** param3) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

libqt_string QPlaceManagerEngine_ManagerName(const QPlaceManagerEngine* self) {
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

int QPlaceManagerEngine_ManagerVersion(const QPlaceManagerEngine* self) {
    return self->managerVersion();
}

QPlaceDetailsReply* QPlaceManagerEngine_GetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->getPlaceDetails(placeId_QString);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->getPlaceDetails(placeId_QString);
    }
}

QPlaceContentReply* QPlaceManagerEngine_GetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->getPlaceContent(*request);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->getPlaceContent(*request);
    }
}

QPlaceSearchReply* QPlaceManagerEngine_Search(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->search(*request);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->search(*request);
    }
}

QPlaceSearchSuggestionReply* QPlaceManagerEngine_SearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->searchSuggestions(*request);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->searchSuggestions(*request);
    }
}

QPlaceIdReply* QPlaceManagerEngine_SavePlace(QPlaceManagerEngine* self, const QPlace* place) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->savePlace(*place);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->savePlace(*place);
    }
}

QPlaceIdReply* QPlaceManagerEngine_RemovePlace(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->removePlace(placeId_QString);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->removePlace(placeId_QString);
    }
}

QPlaceIdReply* QPlaceManagerEngine_SaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->saveCategory(*category, parentId_QString);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->saveCategory(*category, parentId_QString);
    }
}

QPlaceIdReply* QPlaceManagerEngine_RemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->removeCategory(categoryId_QString);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->removeCategory(categoryId_QString);
    }
}

QPlaceReply* QPlaceManagerEngine_InitializeCategories(QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->initializeCategories();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->initializeCategories();
    }
}

libqt_string QPlaceManagerEngine_ParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        QString _ret = self->parentCategoryId(categoryId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = ((VirtualQPlaceManagerEngine*)self)->parentCategoryId(categoryId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

libqt_list /* of libqt_string */ QPlaceManagerEngine_ChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        QList<QString> _ret = self->childCategoryIds(categoryId_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
    } else {
        QList<QString> _ret = ((VirtualQPlaceManagerEngine*)self)->childCategoryIds(categoryId_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
}

QPlaceCategory* QPlaceManagerEngine_Category(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return new QPlaceCategory(self->category(categoryId_QString));
    } else {
        return new QPlaceCategory(((VirtualQPlaceManagerEngine*)self)->category(categoryId_QString));
    }
}

libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_ChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId) {
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
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
    } else {
        QList<QPlaceCategory> _ret = ((VirtualQPlaceManagerEngine*)self)->childCategories(parentId_QString);
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
}

libqt_list /* of QLocale* */ QPlaceManagerEngine_Locales(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
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
    } else {
        QList<QLocale> _ret = ((VirtualQPlaceManagerEngine*)self)->locales();
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
}

void QPlaceManagerEngine_SetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales) {
    QList<QLocale> locales_QList;
    locales_QList.reserve(locales.len);
    QLocale** locales_arr = static_cast<QLocale**>(locales.data);
    for (size_t i = 0; i < locales.len; ++i) {
        locales_QList.push_back(*(locales_arr[i]));
    }
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        self->setLocales(locales_QList);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->setLocales(locales_QList);
    }
}

QUrl* QPlaceManagerEngine_ConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size) {
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return new QUrl(self->constructIconUrl(*icon, *size));
    } else {
        return new QUrl(((VirtualQPlaceManagerEngine*)self)->constructIconUrl(*icon, *size));
    }
}

QPlace* QPlaceManagerEngine_CompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original) {
    auto* vqplacemanagerengine = dynamic_cast<const VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return new QPlace(self->compatiblePlace(*original));
    } else {
        return new QPlace(((VirtualQPlaceManagerEngine*)self)->compatiblePlace(*original));
    }
}

QPlaceMatchReply* QPlaceManagerEngine_MatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return self->matchingPlaces(*request);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->matchingPlaces(*request);
    }
}

void QPlaceManagerEngine_Finished(QPlaceManagerEngine* self, QPlaceReply* reply) {
    self->finished(reply);
}

void QPlaceManagerEngine_Connect_Finished(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::finished, [self, slotFunc](QPlaceReply* reply) {
        QPlaceReply* sigval1 = reply;
        slotFunc(self, sigval1);
    });
}

void QPlaceManagerEngine_ErrorOccurred(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal) {
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal));
}

void QPlaceManagerEngine_Connect_ErrorOccurred(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*, int) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*, int)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::errorOccurred, [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal) {
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
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::placeAdded, [self, slotFunc](const QString& placeId) {
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

void QPlaceManagerEngine_PlaceUpdated(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeUpdated(placeId_QString);
}

void QPlaceManagerEngine_Connect_PlaceUpdated(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::placeUpdated, [self, slotFunc](const QString& placeId) {
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

void QPlaceManagerEngine_PlaceRemoved(QPlaceManagerEngine* self, const libqt_string placeId) {
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    self->placeRemoved(placeId_QString);
}

void QPlaceManagerEngine_Connect_PlaceRemoved(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, const char*)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::placeRemoved, [self, slotFunc](const QString& placeId) {
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

void QPlaceManagerEngine_CategoryAdded(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentCategoryId) {
    QString parentCategoryId_QString = QString::fromUtf8(parentCategoryId.data, parentCategoryId.len);
    self->categoryAdded(*category, parentCategoryId_QString);
}

void QPlaceManagerEngine_Connect_CategoryAdded(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceCategory*, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceCategory*, const char*)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::categoryAdded, [self, slotFunc](const QPlaceCategory& category, const QString& parentCategoryId) {
        const QPlaceCategory& category_ret = category;
        // Cast returned reference into pointer
        QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
        const QString parentCategoryId_ret = parentCategoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
        const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_b.length() + 1));
        memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_b.length());
        ((char*)parentCategoryId_str)[parentCategoryId_b.length()] = '\0';
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
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::categoryUpdated, [self, slotFunc](const QPlaceCategory& category, const QString& parentCategoryId) {
        const QPlaceCategory& category_ret = category;
        // Cast returned reference into pointer
        QPlaceCategory* sigval1 = const_cast<QPlaceCategory*>(&category_ret);
        const QString parentCategoryId_ret = parentCategoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
        const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_b.length() + 1));
        memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_b.length());
        ((char*)parentCategoryId_str)[parentCategoryId_b.length()] = '\0';
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
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::categoryRemoved, [self, slotFunc](const QString& categoryId, const QString& parentCategoryId) {
        const QString categoryId_ret = categoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray categoryId_b = categoryId_ret.toUtf8();
        const char* categoryId_str = static_cast<const char*>(malloc(categoryId_b.length() + 1));
        memcpy((void*)categoryId_str, categoryId_b.data(), categoryId_b.length());
        ((char*)categoryId_str)[categoryId_b.length()] = '\0';
        const char* sigval1 = categoryId_str;
        const QString parentCategoryId_ret = parentCategoryId;
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 chars in manually-managed C memory
        QByteArray parentCategoryId_b = parentCategoryId_ret.toUtf8();
        const char* parentCategoryId_str = static_cast<const char*>(malloc(parentCategoryId_b.length() + 1));
        memcpy((void*)parentCategoryId_str, parentCategoryId_b.data(), parentCategoryId_b.length());
        ((char*)parentCategoryId_str)[parentCategoryId_b.length()] = '\0';
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
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::dataChanged, [self, slotFunc]() {
        slotFunc(self);
    });
}

void QPlaceManagerEngine_ErrorOccurred3(QPlaceManagerEngine* self, QPlaceReply* param1, int errorVal, const libqt_string errorString) {
    QString errorString_QString = QString::fromUtf8(errorString.data, errorString.len);
    self->errorOccurred(param1, static_cast<QPlaceReply::Error>(errorVal), errorString_QString);
}

void QPlaceManagerEngine_Connect_ErrorOccurred3(QPlaceManagerEngine* self, intptr_t slot) {
    void (*slotFunc)(QPlaceManagerEngine*, QPlaceReply*, int, const char*) = reinterpret_cast<void (*)(QPlaceManagerEngine*, QPlaceReply*, int, const char*)>(slot);
    QPlaceManagerEngine::connect(self, &QPlaceManagerEngine::errorOccurred, [self, slotFunc](QPlaceReply* param1, QPlaceReply::Error errorVal, const QString& errorString) {
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

// Base class handler implementation
QMetaObject* QPlaceManagerEngine_QBaseMetaObject(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_MetaObject_IsBase(true);
        return (QMetaObject*)vqplacemanagerengine->metaObject();
    } else {
        return (QMetaObject*)self->QPlaceManagerEngine::metaObject();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetaObject(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_MetaObject_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_MetaObject_Callback>(slot));
    }
}

// Base class handler implementation
void* QPlaceManagerEngine_QBaseMetacast(QPlaceManagerEngine* self, const char* param1) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Metacast_IsBase(true);
        return vqplacemanagerengine->qt_metacast(param1);
    } else {
        return self->QPlaceManagerEngine::qt_metacast(param1);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetacast(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Metacast_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Metacast_Callback>(slot));
    }
}

// Base class handler implementation
int QPlaceManagerEngine_QBaseMetacall(QPlaceManagerEngine* self, int param1, int param2, void** param3) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Metacall_IsBase(true);
        return vqplacemanagerengine->qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    } else {
        return self->QPlaceManagerEngine::qt_metacall(static_cast<QMetaObject::Call>(param1), static_cast<int>(param2), param3);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMetacall(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Metacall_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Metacall_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceDetailsReply* QPlaceManagerEngine_QBaseGetPlaceDetails(QPlaceManagerEngine* self, const libqt_string placeId) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_GetPlaceDetails_IsBase(true);
        return vqplacemanagerengine->getPlaceDetails(placeId_QString);
    } else {
        return self->QPlaceManagerEngine::getPlaceDetails(placeId_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnGetPlaceDetails(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_GetPlaceDetails_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_GetPlaceDetails_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceContentReply* QPlaceManagerEngine_QBaseGetPlaceContent(QPlaceManagerEngine* self, const QPlaceContentRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_GetPlaceContent_IsBase(true);
        return vqplacemanagerengine->getPlaceContent(*request);
    } else {
        return self->QPlaceManagerEngine::getPlaceContent(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnGetPlaceContent(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_GetPlaceContent_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_GetPlaceContent_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceSearchReply* QPlaceManagerEngine_QBaseSearch(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Search_IsBase(true);
        return vqplacemanagerengine->search(*request);
    } else {
        return self->QPlaceManagerEngine::search(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSearch(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Search_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Search_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceSearchSuggestionReply* QPlaceManagerEngine_QBaseSearchSuggestions(QPlaceManagerEngine* self, const QPlaceSearchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SearchSuggestions_IsBase(true);
        return vqplacemanagerengine->searchSuggestions(*request);
    } else {
        return self->QPlaceManagerEngine::searchSuggestions(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSearchSuggestions(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SearchSuggestions_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SearchSuggestions_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_QBaseSavePlace(QPlaceManagerEngine* self, const QPlace* place) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SavePlace_IsBase(true);
        return vqplacemanagerengine->savePlace(*place);
    } else {
        return self->QPlaceManagerEngine::savePlace(*place);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSavePlace(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SavePlace_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SavePlace_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_QBaseRemovePlace(QPlaceManagerEngine* self, const libqt_string placeId) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    QString placeId_QString = QString::fromUtf8(placeId.data, placeId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_RemovePlace_IsBase(true);
        return vqplacemanagerengine->removePlace(placeId_QString);
    } else {
        return self->QPlaceManagerEngine::removePlace(placeId_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnRemovePlace(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_RemovePlace_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_RemovePlace_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_QBaseSaveCategory(QPlaceManagerEngine* self, const QPlaceCategory* category, const libqt_string parentId) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SaveCategory_IsBase(true);
        return vqplacemanagerengine->saveCategory(*category, parentId_QString);
    } else {
        return self->QPlaceManagerEngine::saveCategory(*category, parentId_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSaveCategory(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SaveCategory_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SaveCategory_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceIdReply* QPlaceManagerEngine_QBaseRemoveCategory(QPlaceManagerEngine* self, const libqt_string categoryId) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_RemoveCategory_IsBase(true);
        return vqplacemanagerengine->removeCategory(categoryId_QString);
    } else {
        return self->QPlaceManagerEngine::removeCategory(categoryId_QString);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnRemoveCategory(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_RemoveCategory_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_RemoveCategory_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceReply* QPlaceManagerEngine_QBaseInitializeCategories(QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_InitializeCategories_IsBase(true);
        return vqplacemanagerengine->initializeCategories();
    } else {
        return self->QPlaceManagerEngine::initializeCategories();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnInitializeCategories(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_InitializeCategories_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_InitializeCategories_Callback>(slot));
    }
}

// Base class handler implementation
libqt_string QPlaceManagerEngine_QBaseParentCategoryId(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ParentCategoryId_IsBase(true);
        QString _ret = vqplacemanagerengine->parentCategoryId(categoryId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    } else {
        QString _ret = self->QPlaceManagerEngine::parentCategoryId(categoryId_QString);
        // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
        QByteArray _b = _ret.toUtf8();
        libqt_string _str;
        _str.len = _b.length();
        _str.data = static_cast<const char*>(malloc(_str.len + 1));
        memcpy((void*)_str.data, _b.data(), _str.len);
        ((char*)_str.data)[_str.len] = '\0';
        return _str;
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnParentCategoryId(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ParentCategoryId_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ParentCategoryId_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of libqt_string */ QPlaceManagerEngine_QBaseChildCategoryIds(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildCategoryIds_IsBase(true);
        QList<QString> _ret = vqplacemanagerengine->childCategoryIds(categoryId_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
    } else {
        QList<QString> _ret = self->QPlaceManagerEngine::childCategoryIds(categoryId_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        libqt_string* _arr = static_cast<libqt_string*>(malloc(sizeof(libqt_string) * (_ret.size())));
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
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildCategoryIds(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildCategoryIds_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildCategoryIds_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceCategory* QPlaceManagerEngine_QBaseCategory(const QPlaceManagerEngine* self, const libqt_string categoryId) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    QString categoryId_QString = QString::fromUtf8(categoryId.data, categoryId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Category_IsBase(true);
        return new QPlaceCategory(vqplacemanagerengine->category(categoryId_QString));
    } else {
        return new QPlaceCategory(((VirtualQPlaceManagerEngine*)self)->category(categoryId_QString));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCategory(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Category_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Category_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QPlaceCategory* */ QPlaceManagerEngine_QBaseChildCategories(const QPlaceManagerEngine* self, const libqt_string parentId) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    QString parentId_QString = QString::fromUtf8(parentId.data, parentId.len);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildCategories_IsBase(true);
        QList<QPlaceCategory> _ret = vqplacemanagerengine->childCategories(parentId_QString);
        // Convert QList<> from C++ memory to manually-managed C memory
        QPlaceCategory** _arr = static_cast<QPlaceCategory**>(malloc(sizeof(QPlaceCategory*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QPlaceCategory(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildCategories(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildCategories_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildCategories_Callback>(slot));
    }
}

// Base class handler implementation
libqt_list /* of QLocale* */ QPlaceManagerEngine_QBaseLocales(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Locales_IsBase(true);
        QList<QLocale> _ret = vqplacemanagerengine->locales();
        // Convert QList<> from C++ memory to manually-managed C memory
        QLocale** _arr = static_cast<QLocale**>(malloc(sizeof(QLocale*) * (_ret.size())));
        for (qsizetype i = 0; i < _ret.size(); ++i) {
            _arr[i] = new QLocale(_ret[i]);
        }
        libqt_list _out;
        _out.len = _ret.size();
        _out.data = static_cast<void*>(_arr);
        return _out;
    } else {
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
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnLocales(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Locales_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Locales_Callback>(slot));
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseSetLocales(QPlaceManagerEngine* self, const libqt_list /* of QLocale* */ locales) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    QList<QLocale> locales_QList;
    locales_QList.reserve(locales.len);
    QLocale** locales_arr = static_cast<QLocale**>(locales.data);
    for (size_t i = 0; i < locales.len; ++i) {
        locales_QList.push_back(*(locales_arr[i]));
    }
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SetLocales_IsBase(true);
        vqplacemanagerengine->setLocales(locales_QList);
    } else {
        self->QPlaceManagerEngine::setLocales(locales_QList);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSetLocales(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SetLocales_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SetLocales_Callback>(slot));
    }
}

// Base class handler implementation
QUrl* QPlaceManagerEngine_QBaseConstructIconUrl(const QPlaceManagerEngine* self, const QPlaceIcon* icon, const QSize* size) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ConstructIconUrl_IsBase(true);
        return new QUrl(vqplacemanagerengine->constructIconUrl(*icon, *size));
    } else {
        return new QUrl(((VirtualQPlaceManagerEngine*)self)->constructIconUrl(*icon, *size));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnConstructIconUrl(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ConstructIconUrl_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ConstructIconUrl_Callback>(slot));
    }
}

// Base class handler implementation
QPlace* QPlaceManagerEngine_QBaseCompatiblePlace(const QPlaceManagerEngine* self, const QPlace* original) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_CompatiblePlace_IsBase(true);
        return new QPlace(vqplacemanagerengine->compatiblePlace(*original));
    } else {
        return new QPlace(((VirtualQPlaceManagerEngine*)self)->compatiblePlace(*original));
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCompatiblePlace(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_CompatiblePlace_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_CompatiblePlace_Callback>(slot));
    }
}

// Base class handler implementation
QPlaceMatchReply* QPlaceManagerEngine_QBaseMatchingPlaces(QPlaceManagerEngine* self, const QPlaceMatchRequest* request) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_MatchingPlaces_IsBase(true);
        return vqplacemanagerengine->matchingPlaces(*request);
    } else {
        return self->QPlaceManagerEngine::matchingPlaces(*request);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnMatchingPlaces(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_MatchingPlaces_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_MatchingPlaces_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceManagerEngine_Event(QPlaceManagerEngine* self, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->event(event);
    } else {
        return self->QPlaceManagerEngine::event(event);
    }
}

// Base class handler implementation
bool QPlaceManagerEngine_QBaseEvent(QPlaceManagerEngine* self, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Event_IsBase(true);
        return vqplacemanagerengine->event(event);
    } else {
        return self->QPlaceManagerEngine::event(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnEvent(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Event_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Event_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceManagerEngine_EventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->eventFilter(watched, event);
    } else {
        return self->QPlaceManagerEngine::eventFilter(watched, event);
    }
}

// Base class handler implementation
bool QPlaceManagerEngine_QBaseEventFilter(QPlaceManagerEngine* self, QObject* watched, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_EventFilter_IsBase(true);
        return vqplacemanagerengine->eventFilter(watched, event);
    } else {
        return self->QPlaceManagerEngine::eventFilter(watched, event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnEventFilter(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_EventFilter_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_EventFilter_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceManagerEngine_TimerEvent(QPlaceManagerEngine* self, QTimerEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->timerEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->timerEvent(event);
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseTimerEvent(QPlaceManagerEngine* self, QTimerEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_TimerEvent_IsBase(true);
        vqplacemanagerengine->timerEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->timerEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnTimerEvent(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_TimerEvent_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_TimerEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceManagerEngine_ChildEvent(QPlaceManagerEngine* self, QChildEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->childEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->childEvent(event);
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseChildEvent(QPlaceManagerEngine* self, QChildEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildEvent_IsBase(true);
        vqplacemanagerengine->childEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->childEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnChildEvent(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ChildEvent_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ChildEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceManagerEngine_CustomEvent(QPlaceManagerEngine* self, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->customEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->customEvent(event);
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseCustomEvent(QPlaceManagerEngine* self, QEvent* event) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_CustomEvent_IsBase(true);
        vqplacemanagerengine->customEvent(event);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->customEvent(event);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnCustomEvent(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_CustomEvent_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_CustomEvent_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceManagerEngine_ConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->connectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseConnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ConnectNotify_IsBase(true);
        vqplacemanagerengine->connectNotify(*signal);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->connectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnConnectNotify(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_ConnectNotify_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_ConnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
void QPlaceManagerEngine_DisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Base class handler implementation
void QPlaceManagerEngine_QBaseDisconnectNotify(QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_DisconnectNotify_IsBase(true);
        vqplacemanagerengine->disconnectNotify(*signal);
    } else {
        ((VirtualQPlaceManagerEngine*)self)->disconnectNotify(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnDisconnectNotify(QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = dynamic_cast<VirtualQPlaceManagerEngine*>(self);
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_DisconnectNotify_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_DisconnectNotify_Callback>(slot));
    }
}

// Derived class handler implementation
QPlaceManager* QPlaceManagerEngine_Manager(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->manager();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->manager();
    }
}

// Base class handler implementation
QPlaceManager* QPlaceManagerEngine_QBaseManager(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Manager_IsBase(true);
        return vqplacemanagerengine->manager();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->manager();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnManager(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Manager_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Manager_Callback>(slot));
    }
}

// Derived class handler implementation
QObject* QPlaceManagerEngine_Sender(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->sender();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->sender();
    }
}

// Base class handler implementation
QObject* QPlaceManagerEngine_QBaseSender(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Sender_IsBase(true);
        return vqplacemanagerengine->sender();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->sender();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSender(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Sender_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Sender_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceManagerEngine_SenderSignalIndex(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->senderSignalIndex();
    }
}

// Base class handler implementation
int QPlaceManagerEngine_QBaseSenderSignalIndex(const QPlaceManagerEngine* self) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SenderSignalIndex_IsBase(true);
        return vqplacemanagerengine->senderSignalIndex();
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->senderSignalIndex();
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnSenderSignalIndex(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_SenderSignalIndex_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_SenderSignalIndex_Callback>(slot));
    }
}

// Derived class handler implementation
int QPlaceManagerEngine_Receivers(const QPlaceManagerEngine* self, const char* signal) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->receivers(signal);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->receivers(signal);
    }
}

// Base class handler implementation
int QPlaceManagerEngine_QBaseReceivers(const QPlaceManagerEngine* self, const char* signal) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Receivers_IsBase(true);
        return vqplacemanagerengine->receivers(signal);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->receivers(signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnReceivers(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_Receivers_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_Receivers_Callback>(slot));
    }
}

// Derived class handler implementation
bool QPlaceManagerEngine_IsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        return vqplacemanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Base class handler implementation
bool QPlaceManagerEngine_QBaseIsSignalConnected(const QPlaceManagerEngine* self, const QMetaMethod* signal) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_IsSignalConnected_IsBase(true);
        return vqplacemanagerengine->isSignalConnected(*signal);
    } else {
        return ((VirtualQPlaceManagerEngine*)self)->isSignalConnected(*signal);
    }
}

// Auxiliary method to allow providing re-implementation
void QPlaceManagerEngine_OnIsSignalConnected(const QPlaceManagerEngine* self, intptr_t slot) {
    auto* vqplacemanagerengine = const_cast<VirtualQPlaceManagerEngine*>(dynamic_cast<const VirtualQPlaceManagerEngine*>(self));
    if (vqplacemanagerengine && vqplacemanagerengine->isVirtualQPlaceManagerEngine) {
        vqplacemanagerengine->setQPlaceManagerEngine_IsSignalConnected_Callback(reinterpret_cast<VirtualQPlaceManagerEngine::QPlaceManagerEngine_IsSignalConnected_Callback>(slot));
    }
}

void QPlaceManagerEngine_Delete(QPlaceManagerEngine* self) {
    delete self;
}
