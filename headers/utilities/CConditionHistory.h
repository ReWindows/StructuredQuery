#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 28 member(s).
namespace StructuredQuery1 {
class CConditionHistory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConditionHistory@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CConditionHistory@StructuredQuery1@@UEAAJPEAPEAUIConditionAttribute@@@Z
    virtual long Clone(IConditionAttribute * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CConditionHistory@StructuredQuery1@@SAJW4tagCONDITION_HISTORY_SOURCE@@PEB_W1W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, wchar_t const *, wchar_t const *, int, ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CConditionHistory@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CConditionHistory@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocale@CConditionHistory@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetLocale(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsedString@CConditionHistory@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetParsedString(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolvedCondition@CConditionHistory@StructuredQuery1@@UEAAJPEAW4STRUCTURED_QUERY_RESOLVE_OPTION@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetResolvedCondition(int *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CConditionHistory@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@CConditionHistory@StructuredQuery1@@UEAAJPEAW4tagCONDITION_HISTORY_SOURCE@@@Z
    virtual long GetSource(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeStamp@CConditionHistory@StructuredQuery1@@UEAAJPEAU_FILETIME@@@Z
    virtual long GetTimeStamp(_FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransformedCondition@CConditionHistory@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetTransformedCondition(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDirty@CConditionHistory@StructuredQuery1@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CConditionHistory@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CConditionHistory@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadedFromXml@CConditionHistory@StructuredQuery1@@UEAAJPEAH@Z
    virtual long LoadedFromXml(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConditionHistory@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConditionHistory@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CConditionHistory@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CConditionHistory@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConditionHistory@StructuredQuery1@@AEAA@XZ
    CConditionHistory();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConditionHistory@StructuredQuery1@@AEAA@XZ
    ~CConditionHistory();
};
} // namespace StructuredQuery1
