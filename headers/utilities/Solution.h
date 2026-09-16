#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 73 member(s).
namespace StructuredQuery1 {
class Solution {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@Solution@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Solution@StructuredQuery1@@SAJPEAVQueryExpressionCustomization@2@PEAVSchemaEngine@SemanticsUM@@_NPEAVStructuredSemanticSolution@5@PEBVTokenCollectionUM@5@PEAUILanguageResourcePool@@PEAPEAV12@@Z
    static long Create(WindissectOpaque *, WindissectOpaque *, bool, WindissectOpaque *, WindissectOpaque const *, ILanguageResourcePool *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@Solution@StructuredQuery1@@SAJPEAPEAV12@@Z
    static long Create(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBooleanLeaf@Solution@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@HW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateBooleanLeaf(_tagpropertykey const &, int, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompoundFromArray@Solution@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAPEAUICondition@@KW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateCompoundFromArray(int, ICondition * *, unsigned long, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompoundFromObjectArray@Solution@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAUIObjectArray@@W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateCompoundFromObjectArray(int, IObjectArray *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Solution@StructuredQuery1@@SAJPEAUILanguageResourcePool@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(ILanguageResourcePool *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Solution@StructuredQuery1@@SAJPEAVQueryExpressionCustomization@2@PEAVSchemaEngine@SemanticsUM@@_NPEAVStructuredSemanticSolution@5@PEBVTokenCollectionUM@5@PEAUILanguageResourcePool@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, WindissectOpaque *, bool, WindissectOpaque *, WindissectOpaque const *, ILanguageResourcePool *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@Solution@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIntegerLeaf@Solution@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@HW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateIntegerLeaf(_tagpropertykey const &, int, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLeaf@Solution@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEB_W3PEAUIRichChunk@@44W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateLeaf(_tagpropertykey const &, int, tagPROPVARIANT const &, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNegation@Solution@StructuredQuery1@@UEAAJPEAUICondition@@W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateNegation(ICondition *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStringLeaf@Solution@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W2W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateStringLeaf(_tagpropertykey const &, int, wchar_t const *, wchar_t const *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrueFalse@Solution@StructuredQuery1@@UEAAJHW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateTrueFalse(int, int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetErrors@Solution@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetErrors(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLexicalData@Solution@StructuredQuery1@@UEAAJPEAPEA_WPEAPEAUITokenCollection@@PEAKPEAPEAUIUnknown@@@Z
    virtual long GetLexicalData(wchar_t * *, ITokenCollection * *, unsigned long *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuery@Solution@StructuredQuery1@@UEAAJPEAPEAUICondition@@PEAPEAUIEntity@@@Z
    virtual long GetQuery(ICondition * *, IEntity * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadConditionFromXml@Solution@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@AEBU_GUID@@PEAPEAX@Z
    virtual long LoadConditionFromXml(IXMLDOMNode *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAndOr@Solution@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAUIEnumUnknown@@HPEAPEAUICondition@@@Z
    virtual long MakeAndOr(int, IEnumUnknown *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCompound@Solution@StructuredQuery1@@QEAAJW4tagCONDITION_TYPE@@PEAUIObjectArray@@_N2AEBU_GUID@@PEAPEAX@Z
    long MakeCompound(int, IObjectArray *, bool, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCompound@Solution@StructuredQuery1@@QEAAJW4tagCONDITION_TYPE@@PEAPEAUICondition@@K_NAEBU_GUID@@PEAPEAX@Z
    long MakeCompound(int, ICondition * *, unsigned long, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeCompound@Solution@StructuredQuery1@@QEAAJW4tagCONDITION_TYPE@@PEAPEAUICondition2@@K_NAEBU_GUID@@PEAPEAX@Z
    long MakeCompound(int, ICondition2* *, unsigned long, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeConditionHistory@Solution@StructuredQuery1@@UEAAJW4tagCONDITION_HISTORY_SOURCE@@PEB_W1W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long MakeConditionHistory(int, wchar_t const *, wchar_t const *, int, ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLeaf@Solution@StructuredQuery1@@UEAAJPEB_WW4tagCONDITION_OPERATION@@0PEBUtagPROPVARIANT@@PEAUIRichChunk@@33HPEAPEAUICondition@@@Z
    virtual long MakeLeaf(wchar_t const *, int, wchar_t const *, tagPROPVARIANT const *, IRichChunk *, IRichChunk *, IRichChunk *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLeavesFromVector@Solution@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEB_W3PEAUIRichChunk@@44W4tagCONDITION_TYPE@@_NAEBU_GUID@@PEAPEAX@Z
    long MakeLeavesFromVector(_tagpropertykey const &, int, tagPROPVARIANT const &, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeNegation@Solution@StructuredQuery1@@QEAAJPEAUICondition@@_NAEBU_GUID@@PEAPEAX@Z
    long MakeNegation(ICondition *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeNot@Solution@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEAU3@@Z
    virtual long MakeNot(ICondition *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePredicate@Solution@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W22W4LANGUAGE_OVERRIDE_CHECK@2@PEAUIRichChunk@@44_N5AEBU_GUID@@PEAPEAX@Z
    long MakePredicate(_tagpropertykey const &, int, wchar_t const *, wchar_t const *, wchar_t const *, int, IRichChunk *, IRichChunk *, IRichChunk *, bool, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePredicate@Solution@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_WAEBUtagPROPVARIANT@@2W4LANGUAGE_OVERRIDE_CHECK@2@PEAUIRichChunk@@55_N6AEBU_GUID@@PEAPEAX@Z
    long MakePredicate(_tagpropertykey const &, int, wchar_t const *, tagPROPVARIANT const &, wchar_t const *, int, IRichChunk *, IRichChunk *, IRichChunk *, bool, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakePredicate@Solution@StructuredQuery1@@QEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W2K2W4LANGUAGE_OVERRIDE_CHECK@2@PEAUIRichChunk@@44_N5AEBU_GUID@@PEAPEAX@Z
    long MakePredicate(_tagpropertykey const &, int, wchar_t const *, wchar_t const *, unsigned long, wchar_t const *, int, IRichChunk *, IRichChunk *, IRichChunk *, bool, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTruthValue@Solution@StructuredQuery1@@QEAAJ_NAEBU_GUID@@PEAPEAX@Z
    long MakeTruthValue(bool, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@Solution@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@Solution@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@Solution@StructuredQuery1@@UEAAJPEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@PEAPEAU3@@Z
    virtual long Resolve(ICondition *, int, _SYSTEMTIME const *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveCondition@Solution@StructuredQuery1@@UEAAJPEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@AEBU_GUID@@PEAPEAX@Z
    virtual long ResolveCondition(ICondition *, int, _SYSTEMTIME const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveRange@Solution@StructuredQuery1@@QEAAJPEAUIInterval@@PEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W5PEAPEAU4@@Z
    long ResolveRange(IInterval *, ICondition2*, int, _tagpropertykey const &, int, wchar_t const *, wchar_t const *, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveConditionToXml@Solution@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@PEAUICondition@@@Z
    virtual long SaveConditionToXml(IXMLDOMNode *, ICondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWordBreakerFlagsOverride@Solution@StructuredQuery1@@UEAAJK@Z
    virtual long SetWordBreakerFlagsOverride(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStandardSemanticTypes@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@AEBU_GUID@@PEAPEAX@Z
    long AddStandardSemanticTypes(ICondition2*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakAndMakePredicate@Solution@StructuredQuery1@@AEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W22PEAUIRichChunk@@33H_N44PEAPEAUICondition2@@@Z
    long BreakAndMakePredicate(_tagpropertykey const &, int, wchar_t const *, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, bool, bool, bool, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmitTimeComparison@Solution@StructuredQuery1@@AEAAJAEBVInterval@SemanticsUM@@W4INTERVAL_POINT@4@_NAEBU_tagpropertykey@@PEB_WPEAUIRichChunk@@5522PEAPEAUICondition2@@@Z
    long EmitTimeComparison(WindissectOpaque const &, int, bool, _tagpropertykey const &, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, bool, bool, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandPredicate@Solution@StructuredQuery1@@AEAAJPEBU_tagpropertykey@@KW4tagCONDITION_OPERATION@@PEB_WAEBUtagPROPVARIANT@@2W4LANGUAGE_OVERRIDE_CHECK@2@PEAUIRichChunk@@5_N6AEBU_GUID@@PEAPEAX@Z
    long ExpandPredicate(_tagpropertykey const *, unsigned long, int, wchar_t const *, tagPROPVARIANT const &, wchar_t const *, int, IRichChunk *, IRichChunk *, bool, bool, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCondition2@Solution@StructuredQuery1@@AEAAJPEAUICondition@@PEAPEAUICondition2@@@Z
    long GetCondition2(ICondition *, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Solution@StructuredQuery1@@AEAAJPEAVQueryExpressionCustomization@2@PEAVSchemaEngine@SemanticsUM@@_NPEAVStructuredSemanticSolution@5@PEBVTokenCollectionUM@5@PEAUILanguageResourcePool@@@Z
    long Initialize(WindissectOpaque *, WindissectOpaque *, bool, WindissectOpaque *, WindissectOpaque const *, ILanguageResourcePool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeConditionTree@Solution@StructuredQuery1@@AEAAJPEBVICompoundCondition@SemanticsUM@@PEB_W_KAEBVTokenCollectionUM@4@AEBU_GUID@@PEAPEAX@Z
    long MakeConditionTree(WindissectOpaque const *, wchar_t const *, uint64_t, WindissectOpaque const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeKoreanCompound@Solution@StructuredQuery1@@AEAAJPEAUICondition@@PEAUIObjectCollection@@_NPEAPEAUICondition2@@@Z
    long MakeKoreanCompound(ICondition *, IObjectCollection *, bool, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAnd@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@_NW4LANGUAGE_OVERRIDE_CHECK@2@AEBU_GUID@@PEAPEAX@Z
    long ResolveAnd(ICondition2*, int, _SYSTEMTIME const *, bool, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveAndOr@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4tagCONDITION_TYPE@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@_NW4LANGUAGE_OVERRIDE_CHECK@2@AEBU_GUID@@PEAPEAX@Z
    long ResolveAndOr(ICondition2*, int, int, _SYSTEMTIME const *, bool, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveBasic@Solution@StructuredQuery1@@AEAAJHPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@U_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_WAEBUtagPROPVARIANT@@4PEAUIRichChunk@@66PEAPEAU3@@Z
    long ResolveBasic(int, ICondition2*, int, _tagpropertykey, int, wchar_t const *, tagPROPVARIANT const &, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDateTimeLeaf@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@AEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEAPEAU3@@Z
    long ResolveDateTimeLeaf(ICondition2*, int, _SYSTEMTIME const *, _tagpropertykey const &, int, tagPROPVARIANT const &, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveGrepPhraseHack@Solution@StructuredQuery1@@AEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@PEB_W2PEAUIRichChunk@@33_NHAEAPEAUICondition2@@@Z
    long ResolveGrepPhraseHack(_tagpropertykey const &, tagPROPVARIANT const &, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, bool, int, ICondition2* &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveHelper@Solution@StructuredQuery1@@AEAAJPEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@AEBU_GUID@@PEAPEAX@Z
    long ResolveHelper(ICondition *, int, _SYSTEMTIME const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveLeafOneStep@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@_NW4LANGUAGE_OVERRIDE_CHECK@2@PEA_NPEAW462@5PEAPEAU3@@Z
    long ResolveLeafOneStep(ICondition2*, int, _SYSTEMTIME const *, bool, int, bool *, int *, bool *, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveNot@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@_NW4LANGUAGE_OVERRIDE_CHECK@2@AEBU_GUID@@PEAPEAX@Z
    long ResolveNot(ICondition2*, int, _SYSTEMTIME const *, bool, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveRangeWithRelOp@Solution@StructuredQuery1@@AEAAJW4tagINTERVAL_LIMIT_KIND@@0W4tagCONDITION_OPERATION@@1AEBU_tagpropertykey@@PEB_WAEAUtagPROPVARIANT@@3PEAUIRichChunk@@_N6PEAPEAUICondition2@@@Z
    long ResolveRangeWithRelOp(int, int, int, int, _tagpropertykey const &, wchar_t const *, tagPROPVARIANT &, wchar_t const *, IRichChunk *, bool, bool, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveRecursively@Solution@StructuredQuery1@@AEAAJPEAUICondition2@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@_NW4LANGUAGE_OVERRIDE_CHECK@2@AEBU_GUID@@PEAPEAX@Z
    long ResolveRecursively(ICondition2*, int, _SYSTEMTIME const *, bool, int, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Solution@StructuredQuery1@@AEAA@XZ
    Solution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateSemanticCondition@Solution@StructuredQuery1@@AEAAJPEBVISemanticCondition@SemanticsUM@@PEBVICompoundCondition@4@PEB_W_KAEBVTokenCollectionUM@4@AEAHPEAUConnectedQuery@2@@Z
    long TranslateSemanticCondition(WindissectOpaque const *, WindissectOpaque const *, wchar_t const *, uint64_t, WindissectOpaque const &, int &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateValueCondition@Solution@StructuredQuery1@@AEAAJPEBVIValueCondition@SemanticsUM@@PEBVIEntityCondition@4@PEB_W_KAEBVTokenCollectionUM@4@AEAHPEAPEAUICondition2@@@Z
    long TranslateValueCondition(WindissectOpaque const *, WindissectOpaque const *, wchar_t const *, uint64_t, WindissectOpaque const &, int &, ICondition2* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Solution@StructuredQuery1@@AEAA@XZ
    ~Solution();
};
} // namespace StructuredQuery1
