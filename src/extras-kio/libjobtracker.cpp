#include <KJobTrackerInterface>
#include <jobtracker.h>
#include "libjobtracker.h"
#include "libjobtracker.hxx"

KJobTrackerInterface* KIO_GetJobTracker() {
    return KIO::getJobTracker();
}

void KIO_SetJobTracker(KJobTrackerInterface* tracker) {
    KIO::setJobTracker(tracker);
}
