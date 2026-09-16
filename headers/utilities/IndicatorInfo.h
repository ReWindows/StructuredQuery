#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 26 member(s).
namespace StructuredQuery1 {
class IndicatorInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@IndicatorInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@IndicatorInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@IndicatorInfo@StructuredQuery1@@SAJPEB_WKW4KEYWORD_PREPARATION_OPTIONS@@PEAUIList@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, unsigned long, int, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@IndicatorInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@IndicatorInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@IndicatorInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Locale@IndicatorInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Locale();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Phrase@IndicatorInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Phrase(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Preferred@IndicatorInfo@StructuredQuery1@@UEAAHXZ
    virtual int Preferred();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@IndicatorInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@IndicatorInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Squish@IndicatorInfo@StructuredQuery1@@UEAAHXZ
    virtual int Squish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Tokens@IndicatorInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Tokens(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafePhrase@IndicatorInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafePhrase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Verbatim@IndicatorInfo@StructuredQuery1@@UEAAHXZ
    virtual int Verbatim();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IndicatorInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@KW4KEYWORD_PREPARATION_OPTIONS@@PEAUIList@1@@Z
    IndicatorInfo(WindissectOpaque *, unsigned long, int, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IndicatorInfo@StructuredQuery1@@AEAA@XZ
    ~IndicatorInfo();
};
} // namespace StructuredQuery1
