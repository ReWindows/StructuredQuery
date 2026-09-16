#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 48 member(s).
namespace StructuredQuery1 {
class QueryParser {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@QueryParser@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@QueryParser@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrunedCondition@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@PEAUISchemaView@@HPEAUIConditionTransformer2@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreatePrunedCondition(ICondition *, ISchemaView *, int, IConditionTransformer2*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateRelevantConditions@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumerateRelevantConditions(ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatches@QueryParser@StructuredQuery1@@UEAAJPEAUIObjectArray@@AEBU_tagpropertykey@@PEB_WPEAPEAUtagHITRANGE@@PEAK@Z
    virtual long FindMatches(IObjectArray *, _tagpropertykey const &, wchar_t const *, tagHITRANGE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchesAQS@QueryParser@StructuredQuery1@@UEAAJPEB_W0PEBU_tagpropertykey@@0PEAPEAUtagHITRANGE@@PEAK@Z
    virtual long FindMatchesAQS(wchar_t const *, wchar_t const *, _tagpropertykey const *, wchar_t const *, tagHITRANGE * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConditionFactory@QueryParser@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetConditionFactory(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOption@QueryParser@StructuredQuery1@@UEAAJW4tagSTRUCTURED_QUERY_SINGLE_OPTION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetOption(int, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsedConditions@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@W4GET_PARSED_CONDITIONS_OPTIONS@@KAEBU_GUID@@PEAPEAXPEAPEA_W4PEAK23@Z
    virtual long GetParsedConditions(ICondition *, int, unsigned long, _GUID const &, void * *, wchar_t * *, wchar_t * *, unsigned long *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaProvider@QueryParser@StructuredQuery1@@UEAAJPEAPEAUISchemaProvider@@@Z
    virtual long GetSchemaProvider(ISchemaProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnresolvedCondition@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetUnresolvedCondition(ICondition *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualProperties@QueryParser@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetVirtualProperties(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadSchema@QueryParser@StructuredQuery1@@QEAAJPEBUtagPROPVARIANT@@@Z
    long LoadSchema(tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@QueryParser@StructuredQuery1@@UEAAJPEB_WPEAUIEnumUnknown@@PEAPEAUIQuerySolution@@@Z
    virtual long Parse(wchar_t const *, IEnumUnknown *, IQuerySolution * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePropertyValue@QueryParser@StructuredQuery1@@UEAAJPEB_W0PEAPEAUIQuerySolution@@@Z
    virtual long ParsePropertyValue(wchar_t const *, wchar_t const *, IQuerySolution * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWithLocale@QueryParser@StructuredQuery1@@UEAAJPEB_WPEAUIEnumUnknown@@KAEBU_GUID@@PEAPEAX@Z
    virtual long ParseWithLocale(wchar_t const *, IEnumUnknown *, unsigned long, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@QueryParser@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@QueryParser@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestatePropertyValueToString@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEA_W1@Z
    virtual long RestatePropertyValueToString(ICondition *, int, wchar_t * *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateToString@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEA_W@Z
    virtual long RestateToString(ICondition *, int, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiOption@QueryParser@StructuredQuery1@@UEAAJW4tagSTRUCTURED_QUERY_MULTIOPTION@@PEB_WPEBUtagPROPVARIANT@@@Z
    virtual long SetMultiOption(int, wchar_t const *, tagPROPVARIANT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption@QueryParser@StructuredQuery1@@UEAAJW4tagSTRUCTURED_QUERY_SINGLE_OPTION@@PEBUtagPROPVARIANT@@@Z
    virtual long SetOption(int, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextFromCondition@QueryParser@StructuredQuery1@@UEAAJPEAUICondition@@W4RESTATEMENT_OPTIONS@@PEAPEA_W@Z
    virtual long TextFromCondition(ICondition *, int, wchar_t * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddQuotesAsNeeded@QueryParser@StructuredQuery1@@AEAAXW4VALUE_NORMALIZATION_RESULT@2@W4RESTATEMENT_LEAF_FLAG@2@PEAW442@@Z
    void AddQuotesAsNeeded(int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureConditionEvaluatorExists@QueryParser@StructuredQuery1@@AEAAJXZ
    long EnsureConditionEvaluatorExists();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDefaultPropertyName@QueryParser@StructuredQuery1@@AEBA_NPEB_WPEAUICondition@@@Z
    bool IsDefaultPropertyName(wchar_t const *, ICondition *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInputString@QueryParser@StructuredQuery1@@AEBAJPEB_W_KAEBVTokenCollectionUM@SemanticsUM@@AEBVNamedEntityCollectionUM@4@PEBVCustomProperty@4@KPEAPEAVStructuredSemanticSolution@4@@Z
    long ProcessInputString(wchar_t const *, uint64_t, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *, unsigned long, WindissectOpaque * *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QueryParser@StructuredQuery1@@AEAA@XZ
    QueryParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyToRun@QueryParser@StructuredQuery1@@AEAAJXZ
    long ReadyToRun();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateAndOr@QueryParser@StructuredQuery1@@AEAAJPEAUICondition@@W4tagCONDITION_TYPE@@W4RESTATEMENT_CONTEXT@2@HW4RESTATEMENT_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long RestateAndOr(ICondition *, int, int, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateConnective@QueryParser@StructuredQuery1@@AEAAJW4tagCONDITION_TYPE@@W4RESTATEMENT_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long RestateConnective(int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateInternal@QueryParser@StructuredQuery1@@AEAAJPEAUICondition@@W4RESTATEMENT_CONTEXT@2@HW4RESTATEMENT_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long RestateInternal(ICondition *, int, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateLeaf@QueryParser@StructuredQuery1@@AEAAJPEAUICondition@@W4RESTATEMENT_CONTEXT@2@HW4RESTATEMENT_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long RestateLeaf(ICondition *, int, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateNot@QueryParser@StructuredQuery1@@AEAAJPEAUICondition@@W4RESTATEMENT_CONTEXT@2@HW4RESTATEMENT_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long RestateNot(ICondition *, int, int, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateToStringInternal@QueryParser@StructuredQuery1@@AEAAJPEAUICondition@@W4RESTATEMENT_CONTEXT@2@HW4RESTATEMENT_OPTIONS@@PEAPEA_W@Z
    long RestateToStringInternal(ICondition *, int, int, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SameProperty@QueryParser@StructuredQuery1@@AEBAJPEAUICondition@@AEAPEA_WAEAPEAUIRichChunk@@AEA_K_NPEA_N@Z
    long SameProperty(ICondition *, wchar_t * &, IRichChunk * &, uint64_t &, bool, bool *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSyntax@QueryParser@StructuredQuery1@@AEAAJW4tagSTRUCTURED_QUERY_SYNTAX@@@Z
    long SetSyntax(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WritePropertyTextAndAfter@QueryParser@StructuredQuery1@@AEAAJPEB_WPEAUIRichChunk@@W4RESTATEMENT_OPTIONS@@PEA_NPEA_W_KPEAPEA_WPEA_K@Z
    long WritePropertyTextAndAfter(wchar_t const *, IRichChunk *, int, bool *, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryParser@StructuredQuery1@@AEAA@XZ
    ~QueryParser();
};
} // namespace StructuredQuery1
