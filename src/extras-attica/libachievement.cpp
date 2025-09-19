#define WORKAROUND_INNER_CLASS_DEFINITION_Attica__Achievement
#include <QList>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QVariant>
#include <achievement.h>
#include "libachievement.h"
#include "libachievement.hxx"

Attica__Achievement* Attica__Achievement_new() {
    return new Attica::Achievement();
}

Attica__Achievement* Attica__Achievement_new2(const Attica__Achievement* other) {
    return new Attica::Achievement(*other);
}

int Attica__Achievement_StringToAchievementType(const libqt_string achievementTypeString) {
    QString achievementTypeString_QString = QString::fromUtf8(achievementTypeString.data, achievementTypeString.len);
    return static_cast<int>(Attica::Achievement::stringToAchievementType(achievementTypeString_QString));
}

libqt_string Attica__Achievement_AchievementTypeToString(const int typeVal) {
    QString _ret = Attica::Achievement::achievementTypeToString(static_cast<const Attica::Achievement::Type>(typeVal));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

int Attica__Achievement_StringToAchievementVisibility(const libqt_string achievementVisibilityString) {
    QString achievementVisibilityString_QString = QString::fromUtf8(achievementVisibilityString.data, achievementVisibilityString.len);
    return static_cast<int>(Attica::Achievement::stringToAchievementVisibility(achievementVisibilityString_QString));
}

libqt_string Attica__Achievement_AchievementVisibilityToString(const int visibility) {
    QString _ret = Attica::Achievement::achievementVisibilityToString(static_cast<const Attica::Achievement::Visibility>(visibility));
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_OperatorAssign(Attica__Achievement* self, const Attica__Achievement* other) {
    self->operator=(*other);
}

void Attica__Achievement_SetId(Attica__Achievement* self, const libqt_string id) {
    QString id_QString = QString::fromUtf8(id.data, id.len);
    self->setId(id_QString);
}

libqt_string Attica__Achievement_Id(const Attica__Achievement* self) {
    QString _ret = self->id();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_SetContentId(Attica__Achievement* self, const libqt_string contentId) {
    QString contentId_QString = QString::fromUtf8(contentId.data, contentId.len);
    self->setContentId(contentId_QString);
}

libqt_string Attica__Achievement_ContentId(const Attica__Achievement* self) {
    QString _ret = self->contentId();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_SetName(Attica__Achievement* self, const libqt_string name) {
    QString name_QString = QString::fromUtf8(name.data, name.len);
    self->setName(name_QString);
}

libqt_string Attica__Achievement_Name(const Attica__Achievement* self) {
    QString _ret = self->name();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_SetDescription(Attica__Achievement* self, const libqt_string description) {
    QString description_QString = QString::fromUtf8(description.data, description.len);
    self->setDescription(description_QString);
}

libqt_string Attica__Achievement_Description(const Attica__Achievement* self) {
    QString _ret = self->description();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_SetExplanation(Attica__Achievement* self, const libqt_string explanation) {
    QString explanation_QString = QString::fromUtf8(explanation.data, explanation.len);
    self->setExplanation(explanation_QString);
}

libqt_string Attica__Achievement_Explanation(const Attica__Achievement* self) {
    QString _ret = self->explanation();
    // Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
    QByteArray _b = _ret.toUtf8();
    libqt_string _str;
    _str.len = _b.length();
    _str.data = static_cast<const char*>(malloc(_str.len + 1));
    memcpy((void*)_str.data, _b.data(), _str.len);
    ((char*)_str.data)[_str.len] = '\0';
    return _str;
}

void Attica__Achievement_SetPoints(Attica__Achievement* self, const int points) {
    self->setPoints(static_cast<const int>(points));
}

int Attica__Achievement_Points(const Attica__Achievement* self) {
    return self->points();
}

void Attica__Achievement_SetImage(Attica__Achievement* self, const QUrl* image) {
    self->setImage(*image);
}

QUrl* Attica__Achievement_Image(const Attica__Achievement* self) {
    return new QUrl(self->image());
}

void Attica__Achievement_SetDependencies(Attica__Achievement* self, const libqt_list /* of libqt_string */ dependencies) {
    QList<QString> dependencies_QList;
    dependencies_QList.reserve(dependencies.len);
    libqt_string* dependencies_arr = static_cast<libqt_string*>(dependencies.data);
    for (size_t i = 0; i < dependencies.len; ++i) {
        QString dependencies_arr_i_QString = QString::fromUtf8(dependencies_arr[i].data, dependencies_arr[i].len);
        dependencies_QList.push_back(dependencies_arr_i_QString);
    }
    self->setDependencies(dependencies_QList);
}

void Attica__Achievement_AddDependency(Attica__Achievement* self, const libqt_string dependency) {
    QString dependency_QString = QString::fromUtf8(dependency.data, dependency.len);
    self->addDependency(dependency_QString);
}

void Attica__Achievement_RemoveDependency(Attica__Achievement* self, const libqt_string dependency) {
    QString dependency_QString = QString::fromUtf8(dependency.data, dependency.len);
    self->removeDependency(dependency_QString);
}

libqt_list /* of libqt_string */ Attica__Achievement_Dependencies(const Attica__Achievement* self) {
    QList<QString> _ret = self->dependencies();
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

void Attica__Achievement_SetVisibility(Attica__Achievement* self, int visibility) {
    self->setVisibility(static_cast<Attica::Achievement::Visibility>(visibility));
}

int Attica__Achievement_Visibility(const Attica__Achievement* self) {
    return static_cast<int>(self->visibility());
}

void Attica__Achievement_SetType(Attica__Achievement* self, int typeVal) {
    self->setType(static_cast<Attica::Achievement::Type>(typeVal));
}

int Attica__Achievement_Type(const Attica__Achievement* self) {
    return static_cast<int>(self->type());
}

void Attica__Achievement_SetOptions(Attica__Achievement* self, const libqt_list /* of libqt_string */ options) {
    QList<QString> options_QList;
    options_QList.reserve(options.len);
    libqt_string* options_arr = static_cast<libqt_string*>(options.data);
    for (size_t i = 0; i < options.len; ++i) {
        QString options_arr_i_QString = QString::fromUtf8(options_arr[i].data, options_arr[i].len);
        options_QList.push_back(options_arr_i_QString);
    }
    self->setOptions(options_QList);
}

void Attica__Achievement_AddOption(Attica__Achievement* self, const libqt_string option) {
    QString option_QString = QString::fromUtf8(option.data, option.len);
    self->addOption(option_QString);
}

void Attica__Achievement_RemoveOption(Attica__Achievement* self, const libqt_string option) {
    QString option_QString = QString::fromUtf8(option.data, option.len);
    self->removeOption(option_QString);
}

libqt_list /* of libqt_string */ Attica__Achievement_Options(const Attica__Achievement* self) {
    QList<QString> _ret = self->options();
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

void Attica__Achievement_SetSteps(Attica__Achievement* self, const int steps) {
    self->setSteps(static_cast<const int>(steps));
}

int Attica__Achievement_Steps(const Attica__Achievement* self) {
    return self->steps();
}

void Attica__Achievement_SetProgress(Attica__Achievement* self, const QVariant* progress) {
    self->setProgress(*progress);
}

QVariant* Attica__Achievement_Progress(const Attica__Achievement* self) {
    return new QVariant(self->progress());
}

bool Attica__Achievement_IsValid(const Attica__Achievement* self) {
    return self->isValid();
}

void Attica__Achievement_Delete(Attica__Achievement* self) {
    delete self;
}
