#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 14 member(s).
class CBorrowedWordBreaker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBorrowedWordBreaker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakText@CBorrowedWordBreaker@@UEAAJPEAUtagTEXT_SOURCE@@PEAUIWordSink@@PEAUIPhraseSink@@@Z
    virtual long BreakText(tagTEXT_SOURCE *, IWordSink *, IPhraseSink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComposePhrase@CBorrowedWordBreaker@@UEAAJPEB_WK0KKPEA_WPEAK@Z
    virtual long ComposePhrase(wchar_t const *, unsigned long, wchar_t const *, unsigned long, unsigned long, wchar_t *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CBorrowedWordBreaker@@SAJPEAUIWordBreaker@@AEBU_GUID@@PEAVCLanguageResourcePool@@1PEAPEAX@Z
    static long CreateInstance(IWordBreaker *, _GUID const &, CLanguageResourcePool *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicenseToUse@CBorrowedWordBreaker@@UEAAJPEAPEB_W@Z
    virtual long GetLicenseToUse(wchar_t const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CBorrowedWordBreaker@@UEAAJHKPEAH@Z
    virtual long Init(int, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsNeeded@CBorrowedWordBreaker@@UEAAJHK@Z
    virtual long InitializeAsNeeded(int, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBorrowedWordBreaker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBorrowedWordBreaker@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBorrowedWordBreaker@@AEAA@PEAUIWordBreaker@@AEBU_GUID@@PEAVCLanguageResourcePool@@@Z
    CBorrowedWordBreaker(IWordBreaker *, _GUID const &, CLanguageResourcePool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBorrowedWordBreaker@@AEAA@XZ
    ~CBorrowedWordBreaker();
};
