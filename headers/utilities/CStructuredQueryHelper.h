#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 97 member(s).
namespace StructuredQuery1 {
class CStructuredQueryHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStructuredQueryHelper@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStructuredQueryHelper@StructuredQuery1@@QEAA@XZ
    CStructuredQueryHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBooleanLeaf@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@HW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateBooleanLeaf(_tagpropertykey const &, int, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompoundFromArray@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAPEAUICondition@@KW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateCompoundFromArray(int, ICondition * *, unsigned long, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompoundFromObjectArray@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAUIObjectArray@@W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateCompoundFromObjectArray(int, IObjectArray *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CStructuredQueryHelper@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIntegerLeaf@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@HW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateIntegerLeaf(_tagpropertykey const &, int, int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLeaf@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@AEBUtagPROPVARIANT@@PEB_W3PEAUIRichChunk@@44W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateLeaf(_tagpropertykey const &, int, tagPROPVARIANT const &, wchar_t const *, wchar_t const *, IRichChunk *, IRichChunk *, IRichChunk *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNegation@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateNegation(ICondition *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePrunedCondition@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@PEAUISchemaView@@HPEAUIConditionTransformer2@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreatePrunedCondition(ICondition *, ISchemaView *, int, IConditionTransformer2*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateQueryParser@CStructuredQueryHelper@StructuredQuery1@@UEAAJGAEBU_GUID@@PEAPEAX@Z
    virtual long CreateQueryParser(unsigned short, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStringLeaf@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4tagCONDITION_OPERATION@@PEB_W2W4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateStringLeaf(_tagpropertykey const &, int, wchar_t const *, wchar_t const *, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrueFalse@CStructuredQueryHelper@StructuredQuery1@@UEAAJHW4CONDITION_CREATION_OPTIONS@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateTrueFalse(int, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateRelevantConditions@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long EnumerateRelevantConditions(ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatches@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUIObjectArray@@AEBU_tagpropertykey@@PEB_WPEAPEAUtagHITRANGE@@PEAK@Z
    virtual long FindMatches(IObjectArray *, _tagpropertykey const &, wchar_t const *, tagHITRANGE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindMatchesAQS@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_W0PEBU_tagpropertykey@@0PEAPEAUtagHITRANGE@@PEAK@Z
    virtual long FindMatchesAQS(wchar_t const *, wchar_t const *, _tagpropertykey const *, wchar_t const *, tagHITRANGE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromConditionToBuffer@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@KPEA_WKPEAPEA_WPEAK@Z
    virtual long GenerateFromConditionToBuffer(ICondition *, unsigned long, wchar_t *, unsigned long, wchar_t * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromConditionToString@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@KPEAPEA_W@Z
    virtual long GenerateFromConditionToString(ICondition *, unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromStringToBuffer@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WKHPEA_WK@Z
    virtual long GenerateFromStringToBuffer(wchar_t const *, unsigned long, int, wchar_t *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromStringToString@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WKHPEAPEA_W@Z
    virtual long GenerateFromStringToString(wchar_t const *, unsigned long, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromValueToString@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEBUtagPROPVARIANT@@W4PROPDESC_FORMAT_FLAGS@@PEAPEA_W@Z
    virtual long GenerateFromValueToString(tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSqlFromCondition@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4SQL_GENERATION_OPTIONS@@PEAPEA_W@Z
    virtual long GenerateSqlFromCondition(ICondition *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateTypeAheadQuery@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WIPEAPEB_W0I10PEAUIObjectArray@@PEAPEA_W@Z
    virtual long GenerateTypeAheadQuery(wchar_t const *, unsigned int, wchar_t const * *, wchar_t const *, unsigned int, wchar_t const * *, wchar_t const *, IObjectArray *, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultKeyword@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@W4RESTATEMENT_OPTIONS@@PEAPEA_W@Z
    virtual long GetDefaultKeyword(_tagpropertykey const &, int, wchar_t * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguageResourcePool@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetLanguageResourcePool(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOption@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagSTRUCTURED_QUERY_SINGLE_OPTION@@PEAUtagPROPVARIANT@@@Z
    virtual long GetOption(int, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParsedConditions@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4GET_PARSED_CONDITIONS_OPTIONS@@KAEBU_GUID@@PEAPEAXPEAPEA_W4PEAK23@Z
    virtual long GetParsedConditions(ICondition *, int, unsigned long, _GUID const &, void * *, wchar_t * *, wchar_t * *, unsigned long *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSchemaProvider@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAPEAUISchemaProvider@@@Z
    virtual long GetSchemaProvider(ISchemaProvider * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchApiQueryHelper@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WAEBU_GUID@@PEAPEAX@Z
    virtual long GetSearchApiQueryHelper(wchar_t const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingleInstance@CStructuredQueryHelper@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long GetSingleInstance(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnresolvedCondition@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetUnresolvedCondition(ICondition *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualProperties@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetVirtualProperties(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEx@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUIVirtualPropertyArray@@@Z
    virtual long InitializeEx(IVirtualPropertyArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadConditionFromXml@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@AEBU_GUID@@PEAPEAX@Z
    virtual long LoadConditionFromXml(IXMLDOMNode *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSqlFailure@CStructuredQueryHelper@StructuredQuery1@@UEAAJJ@Z
    virtual long LogSqlFailure(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSqlQuery@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_W0@Z
    virtual long LogSqlQuery(wchar_t const *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSqlSuccess@CStructuredQueryHelper@StructuredQuery1@@UEAAJK@Z
    virtual long LogSqlSuccess(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAndOr@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagCONDITION_TYPE@@PEAUIEnumUnknown@@HPEAPEAUICondition@@@Z
    virtual long MakeAndOr(int, IEnumUnknown *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeConditionHistory@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagCONDITION_HISTORY_SOURCE@@PEB_W1W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEAUICondition@@AEBU_GUID@@PEAPEAX@Z
    virtual long MakeConditionHistory(int, wchar_t const *, wchar_t const *, int, ICondition *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeLeaf@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WW4tagCONDITION_OPERATION@@0PEBUtagPROPVARIANT@@PEAUIRichChunk@@33HPEAPEAUICondition@@@Z
    virtual long MakeLeaf(wchar_t const *, int, wchar_t const *, tagPROPVARIANT const *, IRichChunk *, IRichChunk *, IRichChunk *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeNot@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEAU3@@Z
    virtual long MakeNot(ICondition *, int, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WPEAUIEnumUnknown@@PEAPEAUIQuerySolution@@@Z
    virtual long Parse(wchar_t const *, IEnumUnknown *, IQuerySolution * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePropertyValue@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_W0PEAPEAUIQuerySolution@@@Z
    virtual long ParsePropertyValue(wchar_t const *, wchar_t const *, IQuerySolution * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseStructuredQuery@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WKAEBU_GUID@@PEAPEAX@Z
    virtual long ParseStructuredQuery(wchar_t const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWithLocale@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WPEAUIEnumUnknown@@KAEBU_GUID@@PEAPEAX@Z
    virtual long ParseWithLocale(wchar_t const *, IEnumUnknown *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseWithQueryParser@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUIQueryParser@@PEB_WKAEBU_GUID@@PEAPEAX@Z
    virtual long ParseWithQueryParser(IQueryParser *, wchar_t const *, unsigned long, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStructuredQueryHelper@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@PEAPEAU3@@Z
    virtual long Resolve(ICondition *, int, _SYSTEMTIME const *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveCondition@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4STRUCTURED_QUERY_RESOLVE_OPTION@@PEBU_SYSTEMTIME@@AEBU_GUID@@PEAPEAX@Z
    virtual long ResolveCondition(ICondition *, int, _SYSTEMTIME const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestatePropertyValueToString@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEA_W1@Z
    virtual long RestatePropertyValueToString(ICondition *, int, wchar_t * *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestateToString@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@HPEAPEA_W@Z
    virtual long RestateToString(ICondition *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveConditionToXml@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUIXMLDOMNode@@PEAUICondition@@@Z
    virtual long SaveConditionToXml(IXMLDOMNode *, ICondition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalProviderList@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAPEB_WI@Z
    virtual long SetExternalProviderList(wchar_t const * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMostRelevantProperties@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_W@Z
    virtual long SetMostRelevantProperties(wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiOption@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagSTRUCTURED_QUERY_MULTIOPTION@@PEB_WPEBUtagPROPVARIANT@@@Z
    virtual long SetMultiOption(int, wchar_t const *, tagPROPVARIANT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4tagSQL_GENERATOR_OPTION@@PEBUtagPROPVARIANT@@@Z
    virtual long SetOption(int, tagPROPVARIANT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryGenerationFlags@CStructuredQueryHelper@StructuredQuery1@@UEAAJW4__MIDL___MIDL_itf_searchprivateapi_0000_0005_0001@@@Z
    virtual long SetQueryGenerationFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteClient@CStructuredQueryHelper@StructuredQuery1@@UEAAJH@Z
    virtual long SetRemoteClient(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForProperty@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WPEAUIConditionTransformer@@@Z
    virtual long SetTransformationForProperty(wchar_t const *, IConditionTransformer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForPropertyEx@CStructuredQueryHelper@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@PEAUIConditionTransformer2@@@Z
    virtual long SetTransformationForPropertyEx(_tagpropertykey const &, IConditionTransformer2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForType@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEB_WPEAUIConditionTransformer@@@Z
    virtual long SetTransformationForType(wchar_t const *, IConditionTransformer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinRTDataModel@CStructuredQueryHelper@StructuredQuery1@@UEAAJH@Z
    virtual long SetWinRTDataModel(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWordBreakerFlagsOverride@CStructuredQueryHelper@StructuredQuery1@@UEAAJK@Z
    virtual long SetWordBreakerFlagsOverride(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextFromCondition@CStructuredQueryHelper@StructuredQuery1@@UEAAJPEAUICondition@@W4RESTATEMENT_OPTIONS@@PEAPEA_W@Z
    virtual long TextFromCondition(ICondition *, int, wchar_t * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStructuredQueryHelper@StructuredQuery1@@QEAA@XZ
    ~CStructuredQueryHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateQueryParser@CStructuredQueryHelper@StructuredQuery1@@AEAAJGAEBU_GUID@@PEAPEAX@Z
    long _CreateQueryParser(unsigned short, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSqlGenerator@CStructuredQueryHelper@StructuredQuery1@@AEAAJAEBU_GUID@@PEAPEAX@Z
    long _CreateSqlGenerator(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureConditionFactory@CStructuredQueryHelper@StructuredQuery1@@AEAAJW4CONDITION_FACTORY_CAPABILITY@2@@Z
    long _EnsureConditionFactory(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitializedParser@CStructuredQueryHelper@StructuredQuery1@@AEAAJXZ
    long _EnsureInitializedParser();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInitializedSqlGenerator@CStructuredQueryHelper@StructuredQuery1@@AEAAJXZ
    long _EnsureInitializedSqlGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLanguageResourcePool@CStructuredQueryHelper@StructuredQuery1@@AEAAJXZ
    long _EnsureLanguageResourcePool();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseStructuredQuery@CStructuredQueryHelper@StructuredQuery1@@AEAAJPEAUIQueryParser2@@PEB_WKAEBU_GUID@@PEAPEAX@Z
    long _ParseStructuredQuery(IQueryParser2*, wchar_t const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateSearchOptions@CStructuredQueryHelper@StructuredQuery1@@CAJPEAUIQueryParserManager@@PEAUIQueryParser@@@Z
    static long _UpdateSearchOptions(IQueryParserManager *, IQueryParser *);
};
} // namespace StructuredQuery1
