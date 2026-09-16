#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 17 member(s).
class CLanguageResourcePool {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLanguageResourcePool@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLanguageResourcePool@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitializedWordBreaker@CLanguageResourcePool@@UEAAJKW4WORDBREAKERFLAGS@@KAEBU_GUID@@PEAPEAXPEAK@Z
    virtual long GetInitializedWordBreaker(unsigned long, int, unsigned long, _GUID const &, void * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLanguageResourcePool@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLanguageResourcePool@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseIdleResources@CLanguageResourcePool@@UEAAJI@Z
    virtual long ReleaseIdleResources(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseIdleResources2@CLanguageResourcePool@@UEAAJI@Z
    virtual long ReleaseIdleResources2(unsigned int);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLanguageResourcePool@@AEAA@XZ
    CLanguageResourcePool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearTables@CLanguageResourcePool@@AEAAXXZ
    void _ClearTables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteWordBreakerClassNodeWithSiblings@CLanguageResourcePool@@CAXPEAUWORDBREAKER_CLASS_NODE@@@Z
    static void _DeleteWordBreakerClassNodeWithSiblings(WORDBREAKER_CLASS_NODE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSuitableWordBreaker@CLanguageResourcePool@@AEAAJKW4WORDBREAKERFLAGS@@KAEBU_GUID@@PEAPEAXPEAK@Z
    long _GetSuitableWordBreaker(unsigned long, int, unsigned long, _GUID const &, void * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWordBreakerClassNode@CLanguageResourcePool@@AEAAJAEBU_GUID@@PEAPEAUWORDBREAKER_CLASS_NODE@@@Z
    long _GetWordBreakerClassNode(_GUID const &, WORDBREAKER_CLASS_NODE * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeTables@CLanguageResourcePool@@AEAAJXZ
    long _InitializeTables();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLanguageResourcePool@@AEAA@XZ
    ~CLanguageResourcePool();
};
