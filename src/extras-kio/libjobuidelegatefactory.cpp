#define WORKAROUND_INNER_CLASS_DEFINITION_KIO__JobUiDelegateFactory
#include <KJobUiDelegate>
#include <QWidget>
#include <jobuidelegatefactory.h>
#include "libjobuidelegatefactory.h"
#include "libjobuidelegatefactory.hxx"

KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate(const KIO__JobUiDelegateFactory* self) {
    return self->createDelegate();
}

KJobUiDelegate* KIO__JobUiDelegateFactory_CreateDelegate2(const KIO__JobUiDelegateFactory* self, int flags, QWidget* window) {
    return self->createDelegate(static_cast<KJobUiDelegate::Flags>(flags), window);
}

KJobUiDelegate* KIO_CreateDefaultJobUiDelegate() {
    return KIO::createDefaultJobUiDelegate();
}

KJobUiDelegate* KIO_CreateDefaultJobUiDelegate2(int param1, QWidget* param2) {
    return KIO::createDefaultJobUiDelegate(static_cast<KJobUiDelegate::Flags>(param1), param2);
}

KIO__JobUiDelegateFactory* KIO_DefaultJobUiDelegateFactory() {
    return KIO::defaultJobUiDelegateFactory();
}

void KIO_SetDefaultJobUiDelegateFactory(KIO__JobUiDelegateFactory* param1) {
    KIO::setDefaultJobUiDelegateFactory(param1);
}
