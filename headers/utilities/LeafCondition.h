#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 22 member(s).
namespace StructuredQuery1 {
class LeafCondition {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@LeafCondition@StructuredQuery1@@UEAAJPEAPEAUICondition@@@Z
    virtual long Clone(ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LeafCondition@StructuredQuery1@@SAJPEAUICondition@@W4tagCONDITION_OPERATION@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(ICondition *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LeafCondition@StructuredQuery1@@SAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_WAEBUtagPROPVARIANT@@2PEAUIRichChunk@@44PEAVAttributeList@2@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_tagpropertykey const &, int, wchar_t const *, tagPROPVARIANT const &, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, WindissectOpaque *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@LeafCondition@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@LeafCondition@StructuredQuery1@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComparisonInfo@LeafCondition@StructuredQuery1@@UEAAJPEAPEA_WPEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetComparisonInfo(wchar_t * *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionType@LeafCondition@StructuredQuery1@@UEAAJPEAW4tagCONDITION_TYPE@@@Z
    virtual long GetConditionType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputTerms@LeafCondition@StructuredQuery1@@UEAAJPEAPEAUIRichChunk@@00@Z
    virtual long GetInputTerms(IRichChunk * *, IRichChunk * *, IRichChunk * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLeafConditionInfo@LeafCondition@StructuredQuery1@@UEAAJPEAU_tagpropertykey@@PEAW4tagCONDITION_OPERATION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetLeafConditionInfo(_tagpropertykey *, int *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocale@LeafCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetLocale(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@LeafCondition@StructuredQuery1@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubConditions@LeafCondition@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetSubConditions(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueNormalization@LeafCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueNormalization(wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueType@LeafCondition@StructuredQuery1@@UEAAJPEAPEA_W@Z
    virtual long GetValueType(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@LeafCondition@StructuredQuery1@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@LeafCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Load(IXMLDOMNode *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@LeafCondition@StructuredQuery1@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@LeafCondition@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@@Z
    virtual long Save(IXMLDOMNode *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LeafCondition@StructuredQuery1@@AEAA@W4tagCONDITION_OPERATION@@@Z
    LeafCondition(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LeafCondition@StructuredQuery1@@AEAA@XZ
    LeafCondition();
};
} // namespace StructuredQuery1
