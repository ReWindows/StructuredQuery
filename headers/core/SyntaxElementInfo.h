#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 32 member(s).
namespace StructuredQuery1 {
class SyntaxElementInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIndicator@SyntaxElementInfo@StructuredQuery1@@UEAAJPEAUIIndicatorInfo@2@@Z
    virtual long AddIndicator(WindissectOpaque *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SyntaxElementInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareTo@SyntaxElementInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int CompareTo(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFragmentsAndTrie@SyntaxElementInfo@StructuredQuery1@@UEAAJPEAVTrie@2@PEAUIHashtable@2@K@Z
    virtual long CreateFragmentsAndTrie(WindissectOpaque *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SyntaxElementInfo@StructuredQuery1@@SAJPEAUIConstantString@2@JAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Display@SyntaxElementInfo@StructuredQuery1@@UEAAJPEAX_K11@Z
    virtual long Display(void *, uint64_t, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Equals@SyntaxElementInfo@StructuredQuery1@@UEAAHPEAUIUnknown@@@Z
    virtual int Equals(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashCode@SyntaxElementInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long GetHashCode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndicatorCount@SyntaxElementInfo@StructuredQuery1@@UEAA_KXZ
    virtual uint64_t IndicatorCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Indicators@SyntaxElementInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Indicators(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@SyntaxElementInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long Name(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Populate@SyntaxElementInfo@StructuredQuery1@@UEAAJPEBVSchemaStore@2@PEBVSchemaBinary@SemanticsUM@@PEAVKeyword@5@@Z
    virtual long Populate(WindissectOpaque const *, WindissectOpaque const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Precedence@SyntaxElementInfo@StructuredQuery1@@UEAAJXZ
    virtual long Precedence();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@SyntaxElementInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long PreferredPhrase(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SyntaxElementInfo@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SyntaxElementInfo@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafeName@SyntaxElementInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsafePreferredPhrase@SyntaxElementInfo@StructuredQuery1@@UEAAPEB_WXZ
    virtual wchar_t const * UnsafePreferredPhrase();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SyntaxElementInfo@StructuredQuery1@@AEAA@PEAUIConstantString@1@J@Z
    SyntaxElementInfo(WindissectOpaque *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SyntaxElementInfo@StructuredQuery1@@AEAA@XZ
    ~SyntaxElementInfo();
};
} // namespace StructuredQuery1
