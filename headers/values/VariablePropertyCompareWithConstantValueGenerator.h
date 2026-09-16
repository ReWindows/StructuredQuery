#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 10 member(s).
namespace StructuredQuery1 {
class VariablePropertyCompareWithConstantValueGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@SAJW4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(int, tagPROPVARIANT const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultPhrase@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAJPEB_WPEBUtagPROPVARIANT@@HPEAPEA_W@Z
    virtual long DefaultPhrase(wchar_t const *, tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateForLeaf@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAJPEAUIConditionFactory@@PEB_WW4tagCONDITION_OPERATION@@111PEAUIRichChunk@@33HPEAHPEAPEAUICondition@@@Z
    virtual long GenerateForLeaf(IConditionFactory *, wchar_t const *, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, int *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecognizeNamedEntities@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAJPEB_WKPEAUITokenCollection@@PEAUINamedEntityCollector@@@Z
    virtual long RecognizeNamedEntities(wchar_t const *, unsigned long, ITokenCollection *, INamedEntityCollector *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@AEAA@XZ
    VariablePropertyCompareWithConstantValueGenerator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VariablePropertyCompareWithConstantValueGenerator@StructuredQuery1@@AEAA@XZ
    ~VariablePropertyCompareWithConstantValueGenerator();
};
} // namespace StructuredQuery1
