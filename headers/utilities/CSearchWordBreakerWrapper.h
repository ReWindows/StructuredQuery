#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
class CSearchWordBreakerWrapper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakText@CSearchWordBreakerWrapper@@UEAAJPEAUtagTEXT_SOURCE@@PEAUIWordSink@@PEAUIPhraseSink@@@Z
    virtual long BreakText(tagTEXT_SOURCE *, IWordSink *, IPhraseSink *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchWordBreakerWrapper@@QEAA@KPEAUIWordBreaker@@@Z
    CSearchWordBreakerWrapper(unsigned long, IWordBreaker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComposePhrase@CSearchWordBreakerWrapper@@UEAAJPEBGK0KKPEAGPEAK@Z
    virtual long ComposePhrase(unsigned short const *, unsigned long, unsigned short const *, unsigned long, unsigned long, unsigned short *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFeatureFlags@CSearchWordBreakerWrapper@@UEAAJPEAK@Z
    virtual long GetFeatureFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@CSearchWordBreakerWrapper@@UEAAJPEAPEAG@Z
    virtual long GetIdentifier(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicenseToUse@CSearchWordBreakerWrapper@@UEAAJPEAPEBG@Z
    virtual long GetLicenseToUse(unsigned short const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CSearchWordBreakerWrapper@@UEAAJHKPEAH@Z
    virtual long Init(int, unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchWordBreakerWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchWordBreakerWrapper@@UEAA@XZ
    virtual ~CSearchWordBreakerWrapper();
};
